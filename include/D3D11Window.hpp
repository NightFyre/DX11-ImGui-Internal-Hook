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
		typedef HRESULT(APIENTRY* IDXGISwapChainPresent)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		IDXGISwapChainPresent oIDXGISwapChainPresent = NULL;

		typedef void(APIENTRY* ID3D11DrawIndexed)(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
		ID3D11DrawIndexed oID3D11DrawIndexed = NULL;


	public:
		//	Forward Dx11 Hook Declarations
		static HRESULT APIENTRY HookPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
		static void APIENTRY MJDrawIndexed(ID3D11DeviceContext* pContext, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
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
		D3D11Window(D3D11Window const&) = delete;
		D3D11Window(D3D11Window&&) = delete;
		D3D11Window& operator=(D3D11Window const&) = delete;
		D3D11Window& operator=(D3D11Window&&) = delete;

	private:
		WNDCLASSEX WindowClass;
		HWND WindowHwnd;

		ID3D11Device* m_Device{};
		ID3D11DeviceContext* m_DeviceContext{};
		ID3D11RenderTargetView* m_RenderTargetView{};
	};
	inline std::unique_ptr<D3D11Window> g_D3D11Window;
}
