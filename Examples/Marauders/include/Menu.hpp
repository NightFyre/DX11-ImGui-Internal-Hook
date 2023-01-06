#pragma once
#include "helper.h"
#include "Game.hpp"
#include "D3D11Window.hpp"
namespace DX11_Base {
	class Menu
	{
	public:
		ImColor dbg_RAINBOW{};					//	RAINBOW THEME COLORS
		bool	dbg_RAINBOW_THEME{ 1 };			//	RAINBOW THEME BOOLEAN
		float	sOpacity{ 0.80 };				//	Opacity for SunShade Window
		bool	dbg_ALERTS{ 1 };				//	HUD Alerts


		int		fovSize{ 120 };					//	
		int		crosshairSize{ 4 };				//	
		float	smoothing{ 10.f };				//	
		float	recoilAmount{ 10.f };			//	
		bool	drawFov{ 0 };					//
		bool	fovFilled{ 0 };					//
		bool	drawCrosshair{ 0 };				//
		int		crossHairStyle{ 0 };			//
		
		//	ESP Stuff
		int		espStyle{ 0 };
		bool	snapLines{ 0 };
		bool	disance{ 0 };
		bool	names{ 0 };
		bool	lootEsp{ 0 };
		bool	boatEsp{ 0 };
		bool	locationEsp{ 0 };
		bool	lootDistance{ 0 };
		bool	boatDistance{ 0 };
		bool	locationDistance{ 0 };
		bool	heldtItem{ 0 };
		bool	showCrew{ 0 };
		bool	NPCesp{ 0 };

		//	FORWARD DECLARE FUNCTIONS
		void	Draw();
		void	MainMenu();
		void	HUD(bool* p_open);
		void	Loops();

		//	Game Drawing Stuff
		void Esp();
		void debugEsp();

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

	class Draw
	{
	public:	// Functions
		void				draw_stroke_text(int x, int y, ImVec4 color, const char* str);
		void				draw_new_text(int x, int y, ImVec4 color, const char* str);
		void				draw_rect(int x, int y, int w, int h, ImVec4 color, int thickness);
		void				draw_filled_rect(int x, int y, int w, int h, ImVec4 color);
		void				draw_circle_filled(int x, int y, int radius, ImVec4 color);
		void				draw_circle(int x, int y, int radius, ImVec4 color, int segments);
		void				draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 color, float thickne);
		void				draw_triangle_filled(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 color);
		void				draw_line(int x1, int y1, int x2, int y2, ImVec4 color, int thickness);
		void				draw_corner_box(int x, int y, int w, int h, int border_px, ImVec4 color);
		void				text_to_screen(ImVec2 pos, ImColor color, const char* text_begin, const char* text_end, float wrap_width, const ImVec4* cpu_fine_clip_rect);
		void				rect_filled(int x0, int y0, int x1, int y1, ImColor color, float rounding, int rounding_corners_flags);
		void				line(ImVec2 a, ImVec2 b, ImColor color, float thickness);
		void				easy_text(ImVec2 pos, ImColor color, const char* text, int width_text);
		void				easy_text_large(ImVec2 pos, ImColor color, const char* text);
		void				draw_box(ImColor color, int x, int y, int w, int h);
		void				circle(ImVec2 point, ImColor color, float radius, int num_segments, float thickness);
		void				progress(int x, int y, int w, int h, int phealth);
		void				progress_background(int x, int y, int w, int h);
		void				box(ImVec2 v_pos, ImVec2 v_size, float f_thickness, ImVec4 v_color);
		void				staticDrawing();

	public:	//	INITIALIZE CLASS
		Draw()  noexcept = default;
		~Draw() noexcept = default;
		Draw(Draw const&) = delete;
		Draw(Draw&&) = delete;
		Draw& operator=(Draw const&) = delete;
		Draw& operator=(Draw&&) = delete;
	};
	inline std::unique_ptr<Draw>	g_Draw;
}
