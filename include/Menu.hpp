#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"
namespace DX11_Base {
	class Menu
	{
	public:
		bool b_ShowMenu{ false };
		bool b_ShowHud{ false };
		bool b_ShowDemoWindow{ false };
		bool b_ShowStyleEditor{ false };

	public:
		void Draw();
		void MainMenu();
		void HUD(bool* p_open);
		void Loops();

	public:
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

	class GUI
	{
	public:
		//	WIDGETS
		static void TextCentered(const char* pText);
		static void TextCenteredf(const char* pText, ...);

	public:
		//	CANVAS
		static void DrawText_(ImVec2 pos, ImColor color, const char* pText, float fontSize);
		static void DrawTextf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...);
		static void DrawTextCentered(ImVec2 pos, ImColor color, const char* pText, float fontsize);
		static void DrawTextCenteredf(ImVec2 pos, ImColor color, const char* pText, float fontsize, ...);
	};

}
