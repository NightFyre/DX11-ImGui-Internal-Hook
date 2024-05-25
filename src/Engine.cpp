#include <pch.h>
#include <Engine.h>
#include <Menu.h>

IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace DX11Base 
{
	FILE*				Console::pOutStream{ nullptr };
	bool				Console::bInit{ false };
	static				uint64_t* MethodsTable{ nullptr };

	//----------------------------------------------------------------------------------------------------
	//										ENGINE
	//-----------------------------------------------------------------------------------
#pragma region //	ENGINE

	Engine::Engine()
	{
		g_Console = std::make_unique<Console>();
		g_D3D11Window = std::make_unique<D3D11Window>();
		g_Hooking = std::make_unique<Hooking>();
	}

	Engine::~Engine()
	{
		g_Hooking.release();
		g_D3D11Window.release();
		g_Console.release();
	}

	void Engine::Init()
	{
		mGamePID = GetCurrentProcessId();
		pGameHandle = GetCurrentProcess();
		pGameWindow = GetForegroundWindow();
		pGameModule = GetModuleHandle(0);
		pGameBaseAddr = reinterpret_cast<__int64>(pGameModule);

		RECT tempRECT;
		GetWindowRect(pGameWindow, &tempRECT);
		mGameWidth = tempRECT.right - tempRECT.left;
		mGameHeight = tempRECT.bottom - tempRECT.top;

		char tempTitle[MAX_PATH];
		GetWindowTextA(pGameWindow, tempTitle, sizeof(tempTitle));
		pGameTitle = tempTitle;

		char tempClassName[MAX_PATH];
		GetClassNameA(pGameWindow, tempClassName, sizeof(tempClassName));
		pClassName = tempClassName;

		char tempPath[MAX_PATH];
		GetModuleFileNameExA(pGameHandle, 0, tempPath, sizeof(tempPath));
		pGamePath = tempPath;
	}

	bool Engine::GetKeyState(WORD vKey, SHORT delta)
	{
		static int lastTick = 0;

		bool result = ((GetAsyncKeyState(vKey) & 0x8000) && (GetTickCount64() - lastTick) > delta);

		if (result)
			lastTick = GetTickCount64();

		return result;
	}

	bool Engine::GamePadGetKeyState(WORD vButton)
	{
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));
		DWORD result = XInputGetState(0, &state);
		if (result == ERROR_SUCCESS)
		{
			if ((state.Gamepad.wButtons & vButton) == vButton)
				return true;
		}
		return false;
	}

#pragma endregion


	//----------------------------------------------------------------------------------------------------
	//										CONSOLE
	//-----------------------------------------------------------------------------------
#pragma region //	CONSOLE

	Console::Console() { }
	
	Console::Console(const char* title) { InitializeConsole(title); }
	
	Console::Console(const char* title, bool bShow) { InitializeConsole(title, bShow); }
	
	Console::~Console() { DestroyConsole(); }

	HANDLE Console::GetHandle() { return this->pHandle; }
	
	HWND Console::GetWindowHandle() { return this->pHwnd; }

	void Console::Clear() { system("cls"); }

	//	creates a console instance with input name <consoleName>
	void Console::InitializeConsole(const char* ConsoleName, bool bShowWindow)
	{
		if (Console::bInit)
		{
			LogError("[!] [Console::InitializeConsole] failed to initialize console .\n");
			return;
		}

		AllocConsole();
		pHandle = GetStdHandle(STD_OUTPUT_HANDLE);
		pHwnd	= GetConsoleWindow();
		freopen_s(&pOutStream, "CONOUT$", "w", stdout);

		char titleBuff[256];
		sprintf_s(titleBuff, "[DX11Base] %s", ConsoleName);
		SetConsoleTitleA(titleBuff);

		Console::bInit = true;
		Console::bShow = bShowWindow;

		ShowWindow(this->pHwnd, Console::bShow ? SW_SHOW : SW_HIDE);
	}

	//	raw print to console with desired color and formatting
	void Console::cLog(const char* fmt, EColors color, ...)
	{
		SetConsoleTextAttribute(pHandle, color);
		va_list arg;
		va_start(arg, color);
		vfprintf(pOutStream, fmt, arg);
		va_end(arg);
		SetConsoleTextAttribute(pHandle, EColor_DEFAULT);
	}

	void Console::LogError(const char* fmt, ...)
	{
		SetConsoleTextAttribute(pHandle, EColor_red);
		va_list arg;
		va_start(arg, fmt);
		vfprintf(pOutStream, fmt, arg);
		va_end(arg);
		SetConsoleTextAttribute(pHandle, EColor_DEFAULT);
	}

	//	
	void Console::DestroyConsole()
	{
		fclose(pOutStream);
		DestroyWindow(pHwnd);
		FreeConsole();
		bInit = false;
	}

	//	
	void Console::SetConsoleVisibility(bool bShow)
	{
		this->bShow = bShow;
		ShowWindow(pHwnd, bShow ? SW_SHOW : SW_HIDE);
	}

	//	
	void Console::Log(const char* fmt, ...)
	{
		if (!pOutStream)
			return;

		va_list arg;
		va_start(arg, fmt);
		vfprintf(pOutStream, fmt, arg);
		va_end(arg);
	}

#pragma endregion


	//----------------------------------------------------------------------------------------------------
	//										D3DWINDOW
	//-----------------------------------------------------------------------------------
#pragma region	//	D3DWINDOW

	D3D11Window::D3D11Window() {}

	D3D11Window::~D3D11Window() { bInit = false; }

	//-----------------------------------------------------------------------------------
	//  
	LRESULT D3D11Window::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
	{
		if (g_Engine->bShowMenu)
		{
			ImGui_ImplWin32_WndProcHandler((HWND)g_D3D11Window->m_OldWndProc, msg, wParam, lParam);
			return true;
		}
		return CallWindowProc((WNDPROC)g_D3D11Window->m_OldWndProc, hWnd, msg, wParam, lParam);
	}

	//-----------------------------------------------------------------------------------
	//  
	HRESULT APIENTRY D3D11Window::SwapChain_Present_hook(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
	{
		g_D3D11Window->Overlay(pSwapChain);

		return g_D3D11Window->IDXGISwapChain_Present_stub(pSwapChain, SyncInterval, Flags);
	}

	//-----------------------------------------------------------------------------------
	//  
	HRESULT APIENTRY D3D11Window::SwapChain_ResizeBuffers_hook(IDXGISwapChain* p, UINT bufferCount, UINT Width, UINT Height, DXGI_FORMAT fmt, UINT scFlags)
	{
		//  Get new data & release render target
		g_D3D11Window->m_pSwapChain = p;
		g_D3D11Window->m_RenderTargetView->Release();
		g_D3D11Window->m_RenderTargetView = nullptr;

		//  get fn result
		HRESULT result = g_D3D11Window->IDXGISwapChain_ResizeBuffers_stub(p, bufferCount, Width, Height, fmt, scFlags);

		// Get new render target
		ID3D11Texture2D* backBuffer;
		p->GetBuffer(0, __uuidof(ID3D11Texture2D*), (LPVOID*)&backBuffer);
		if (backBuffer)
		{
			g_D3D11Window->m_Device->CreateRenderTargetView(backBuffer, 0, &g_D3D11Window->m_RenderTargetView);
			backBuffer->Release();
		}

		//  Reset ImGui 
		if (g_D3D11Window->bInitImGui)
		{
			ImGuiIO& io = ImGui::GetIO();
			io.DisplaySize = ImVec2(static_cast<float>(Width), static_cast<float>(Height));
		}

		return result;
	}

	bool D3D11Window::HookD3D()
	{
		if (GetD3DContext())
		{
			Hooking::CreateHook((void*)MethodsTable[IDXGI_PRESENT], &SwapChain_Present_hook, (void**)&IDXGISwapChain_Present_stub);
			Hooking::CreateHook((void*)MethodsTable[IDXGI_RESIZE_BUFFERS], &SwapChain_ResizeBuffers_hook, (void**)&IDXGISwapChain_ResizeBuffers_stub);
			bInit = true;
			return true;
		}
		return false;
	}

	void D3D11Window::UnhookD3D()
	{
		SetWindowLongPtr(g_Engine->pGameWindow, GWLP_WNDPROC, (LONG_PTR)m_OldWndProc);
		Hooking::DisableHook((void*)MethodsTable[IDXGI_PRESENT]);
		Hooking::DisableHook((void*)MethodsTable[IDXGI_RESIZE_BUFFERS]);
		free(MethodsTable);
	}

	bool D3D11Window::GetD3DContext()
	{
		if (!InitWindow())
			return false;

		HMODULE D3D11Module = GetModuleHandleA("d3d11.dll");

		D3D_FEATURE_LEVEL FeatureLevel;
		const D3D_FEATURE_LEVEL FeatureLevels[] = { D3D_FEATURE_LEVEL_10_1, D3D_FEATURE_LEVEL_11_0 };

		DXGI_RATIONAL RefreshRate;
		RefreshRate.Numerator = 60;
		RefreshRate.Denominator = 1;

		DXGI_MODE_DESC BufferDesc;
		BufferDesc.Width = 100;
		BufferDesc.Height = 100;
		BufferDesc.RefreshRate = RefreshRate;
		BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
		BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

		DXGI_SAMPLE_DESC SampleDesc;
		SampleDesc.Count = 1;
		SampleDesc.Quality = 0;

		DXGI_SWAP_CHAIN_DESC SwapChainDesc;
		SwapChainDesc.BufferDesc = BufferDesc;
		SwapChainDesc.SampleDesc = SampleDesc;
		SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		SwapChainDesc.BufferCount = 1;
		SwapChainDesc.OutputWindow = WindowHwnd;
		SwapChainDesc.Windowed = 1;
		SwapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
		SwapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

		IDXGISwapChain* SwapChain;
		ID3D11Device* Device;
		ID3D11DeviceContext* Context;
		if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, FeatureLevels, 1, D3D11_SDK_VERSION, &SwapChainDesc, &SwapChain, &Device, &FeatureLevel, &Context) < 0)
		{
			DeleteWindow();
			return false;
		}

		MethodsTable = (uint64_t*)::calloc(205, sizeof(uint64_t));
		memcpy(MethodsTable, *(uint64_t**)SwapChain, 18 * sizeof(uint64_t));
		memcpy(MethodsTable + 18, *(uint64_t**)Device, 43 * sizeof(uint64_t));
		memcpy(MethodsTable + 18 + 43, *(uint64_t**)Context, 144 * sizeof(uint64_t));
		Sleep(1000);

		//	INIT NOTICE
		Beep(300, 300);

		SwapChain->Release();
		SwapChain = 0;
		Device->Release();
		Device = 0;
		Context->Release();
		Context = 0;
		DeleteWindow();
		return true;
	}

	bool D3D11Window::InitWindow()
	{
		WindowClass.cbSize = sizeof(WNDCLASSEX);
		WindowClass.style = CS_HREDRAW | CS_VREDRAW;
		WindowClass.lpfnWndProc = DefWindowProc;
		WindowClass.cbClsExtra = 0;
		WindowClass.cbWndExtra = 0;
		WindowClass.hInstance = GetModuleHandle(NULL);
		WindowClass.hIcon = NULL;
		WindowClass.hCursor = NULL;
		WindowClass.hbrBackground = NULL;
		WindowClass.lpszMenuName = NULL;
		WindowClass.lpszClassName = L"MJ";
		WindowClass.hIconSm = NULL;
		RegisterClassEx(&WindowClass);
		WindowHwnd = CreateWindow(WindowClass.lpszClassName, L"DX11 Window", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL, NULL, WindowClass.hInstance, NULL);
		if (WindowHwnd == NULL) {
			return FALSE;
		}
		return TRUE;
	}

	bool D3D11Window::DeleteWindow()
	{
		DestroyWindow(WindowHwnd);
		UnregisterClass(WindowClass.lpszClassName, WindowClass.hInstance);
		if (WindowHwnd != 0) {
			return FALSE;
		}
		return TRUE;
	}

	bool D3D11Window::InitImGui(IDXGISwapChain* swapChain)
	{
		if (SUCCEEDED(swapChain->GetDevice(__uuidof(ID3D11Device), (void**)&m_Device))) {
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO(); (void)io;
			ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard;
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
			io.IniFilename = 0;
			ImGui::StyleColorsDark();
			m_Device->GetImmediateContext(&m_DeviceContext);

			DXGI_SWAP_CHAIN_DESC Desc;
			swapChain->GetDesc(&Desc);
			g_Engine->pGameWindow = Desc.OutputWindow;

			ID3D11Texture2D* BackBuffer;
			swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&BackBuffer);
			m_Device->CreateRenderTargetView(BackBuffer, NULL, &m_RenderTargetView);
			BackBuffer->Release();

			ImGui_ImplWin32_Init(g_Engine->pGameWindow);
			ImGui_ImplDX11_Init(m_Device, m_DeviceContext);
			ImGui_ImplDX11_CreateDeviceObjects();
			ImGui::GetIO().ImeWindowHandle = g_Engine->pGameWindow;
			m_OldWndProc = (WNDPROC)SetWindowLongPtr(g_Engine->pGameWindow, GWLP_WNDPROC, (__int3264)(LONG_PTR)WndProc);
			bInitImGui = true;
			m_pSwapChain = swapChain;
			pImGui = GImGui;
			pViewport = pImGui->Viewports[0];
			return true;
		}
		bInitImGui = false;
		return false;
	}

	void D3D11Window::Overlay(IDXGISwapChain* pSwapChain)
	{
		if (!bInitImGui)
			InitImGui(pSwapChain);

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();
		ImGui::GetIO().MouseDrawCursor = g_Engine->bShowMenu;

		//	Render Menu Loop
		Menu::Draw();

		ImGui::EndFrame();
		ImGui::Render();
		m_DeviceContext->OMSetRenderTargets(1, &m_RenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	}

#pragma endregion


	//----------------------------------------------------------------------------------------------------
	//										HOOKING
	//-----------------------------------------------------------------------------------
#pragma region //	HOOKING

	Hooking::Hooking()
	{
		MH_Initialize();
	}

	Hooking::~Hooking()
	{
		DisableAllHooks();
		RemoveAllHooks();
		MH_Uninitialize();
	}

	void Hooking::Initialize()
	{
		EnableAllHooks();
	}

	void Hooking::Shutdown()
	{
		RemoveAllHooks();
	}

	bool Hooking::CreateHook(LPVOID lpTarget, LPVOID pDetour, LPVOID* pOrig)
	{
		if (MH_CreateHook(lpTarget, pDetour, pOrig) != MH_OK || MH_EnableHook(lpTarget) != MH_OK)
			return false;
		return true;
	}

	void Hooking::EnableHook(LPVOID lpTarget) { MH_EnableHook(lpTarget); }

	void Hooking::DisableHook(LPVOID lpTarget) { MH_DisableHook(lpTarget); }

	void Hooking::RemoveHook(LPVOID lpTarget) { MH_RemoveHook(lpTarget); }

	void Hooking::EnableAllHooks() { MH_EnableHook(MH_ALL_HOOKS); }

	void Hooking::DisableAllHooks() { MH_DisableHook(MH_ALL_HOOKS); }

	void Hooking::RemoveAllHooks() { MH_RemoveHook(MH_ALL_HOOKS); }

#pragma endregion

}