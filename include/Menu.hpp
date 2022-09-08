#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"
namespace DX11_Base {
	class Menu
	{
	public:
		ImColor dbg_RAINBOW{};				//	RAINBOW THEME COLORS
		bool dbg_RAINBOW_THEME = FALSE;		//	RAINBOW THEME BOOLEAN
		float sOpacity = 0.80;				//	Opacity for SunShade Window
		bool dbg_ALERTS = TRUE;

		//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

	private:
		bool m_StyleInit{};
	};
	inline std::unique_ptr<Menu> g_Menu;
}
