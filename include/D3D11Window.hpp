#pragma once
#include "helper.h"
#include "Console.hpp"
#include "Game.hpp"
#include "Hooking.hpp"
#include "Menu.hpp"

namespace DX11_Base 
{

	class D3D11Window
	{
		enum DXGI : int
		{
			IDXGI_PRESENT = 8,
			IDXGI_DRAW_INDEXED = 12,
			IDXGI_RESIZE_BUFFERS = 13,
		};

		typedef HRESULT(WINAPI* IDXGISwapChainPresent)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		IDXGISwapChainPresent oIDXGISwapChainPresent = NULL;

		typedef HRESULT(WINAPI* ResizeBuffers)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
		ResizeBuffers oIDXGIResizeBuffers = NULL;

	public:
		//	Forward Dx11 Hook Declarations
		static HRESULT APIENTRY HookPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		static HRESULT WINAPI hkResizeBuffers(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
		static LRESULT APIENTRY WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
		
	public:
		bool			m_Init{};
		bool			b_ImGui_Initialized{};
		WNDPROC			m_OldWndProc{};		
		ImGuiContext*	pImGui;
		ImGuiViewport*	pViewport;

		//	CUSTOM FUNCTIONS	
		bool			InitializeImGui(IDXGISwapChain* swapChain);
		bool			GetD3DContext();
		bool			HookD3D();
		void			UnhookD3D();

		bool			InitWindow();
		bool			DeleteWindow();

		bool			CreateHook(uint16_t Index, void** Original, void* Function);
		void			DisableHook(uint16_t Index);
		void			DisableAll();

		//	RENDER STATE
		void Overlay(IDXGISwapChain* pSwapChain);

	public:
		explicit D3D11Window();
		~D3D11Window() noexcept;

	private:
		WNDCLASSEX WindowClass;
		HWND WindowHwnd;
		ID3D11Device* m_Device{};
		ID3D11DeviceContext* m_DeviceContext{};
		ID3D11RenderTargetView* m_RenderTargetView{};
		IDXGISwapChain* m_pSwapChain{};
	};
	inline std::unique_ptr<D3D11Window> g_D3D11Window;
}
