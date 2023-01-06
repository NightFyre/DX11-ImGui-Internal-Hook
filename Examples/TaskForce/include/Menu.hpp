#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"
namespace DX11_Base {
	class Menu
	{
	public:
		ImColor dbg_RAINBOW{};				//	RAINBOW THEME COLORS
		bool dbg_RAINBOW_THEME = TRUE;		//	RAINBOW THEME BOOLEAN
		float sOpacity = 0.80;				//	Opacity for SunShade Window
		bool dbg_ALERTS = TRUE;

		bool SnapLines = false;
		bool Botesp = false;
		bool ShowTeam = false;
		bool heldtItem = false;

		bool drawFov = false;
		int fovSize = 100;
		bool fovFilled = false;
		int crosshairSize = 4;
		int crosshiarStyle = 0;
		bool drawCrosshair = false;
		float smoothing = 10.f;
		float rcsAmount = 10.f;
		int rcsAmountY = 0;
		int rcsAmountX = 0;

		int espStyle = 0;
		bool cornerbox = false;
		bool names = false;
		bool playerDistance = false;
		bool lootnames = false;
		bool lootDistance = false;
		bool boxEsp = false;
		bool projectileesp = false;
		bool showguns = false;


		//	FORWARD DECLARE FUNCTIONS
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

		void Esp();
		void worldEsp();

	public:	//	INITIALIZE CLASS
		Menu()  noexcept = default;
		~Menu() noexcept = default;
		Menu(Menu const&) = delete;
		Menu(Menu&&) = delete;
		Menu& operator=(Menu const&) = delete;
		Menu& operator=(Menu&&) = delete;

	private:
		bool m_StyleInit{};
	};
	inline std::unique_ptr<Menu> g_Menu;
}