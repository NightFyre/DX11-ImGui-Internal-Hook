#include "Menu.hpp"
namespace DX11_Base {

	namespace Styles {
        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
            style.FrameRounding = 1.0f;
            style.GrabRounding = style.FrameRounding; // Make GrabRounding always the same value as FrameRounding
            style.WindowRounding = 4.0f;
            style.FrameBorderSize = 0.75f;
            style.WindowPadding = ImVec2(8.00f, 8.00f);
            style.FramePadding = ImVec2(5.00f, 2.00f);
            style.CellPadding = ImVec2(6.00f, 6.00f);
            style.ItemSpacing = ImVec2(6.00f, 6.00f);
            style.ItemInnerSpacing = ImVec2(6.00f, 6.00f);
            style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
            style.IndentSpacing = 25;
            style.ScrollbarSize = 15;
            style.GrabMinSize = 10;
            style.WindowBorderSize = 1;
            style.ChildBorderSize = 1;
            style.PopupBorderSize = 1;
            style.TabBorderSize = 1;
            style.ChildRounding = 4;
            style.PopupRounding = 4;
            style.ScrollbarRounding = 9;
            style.LogSliderDeadzone = 4;
            style.TabRounding = 0;

            //  Base ImGui Styling , Aplying a custyom style is left up to you.
            ImGui::StyleColorsClassic();

            /// EXAMPLE STYLE 
            //colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);

            //	COLORS
            if (g_Menu->dbg_RAINBOW_THEME) {
                //  RGB MODE STLYE PROPERTIES
                colors[ImGuiCol_Separator] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_TitleBg] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0, 0, 0, 1.0f);
            }
            else {
                /// YOUR DEFAULT STYLE PROPERTIES HERE
            }
        }
	}

	namespace Tabs {
        void TABMain()
        {
            ImGui::Text("BASE MENU (PREVIEW)");
            ImGui::Text("BUILD VERSION: v1.0");
            ImGui::Text("BUILD DATE: 6/12/2022");

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();
            if (ImGui::Button("RESIZE WINDOW", ImVec2(ImGui::GetWindowContentRegionWidth() - 3, 20))) g_D3D11Window->ResizeWindow();
            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetWindowContentRegionWidth() - 3, 20))) {
                g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED [+]\n\n", g_Console->color.red);
                g_KillSwitch = TRUE;
            }
        }
	}

	void Menu::Draw()
	{
		if (g_GameVariables->m_ShowMenu)
			MainMenu();

		if (g_GameVariables->m_ShowHud)
			HUD(&g_GameVariables->m_ShowHud);

		if (g_GameVariables->m_ShowDemo)
			ImGui::ShowDemoWindow();
	}

	void Menu::MainMenu()
	{
        if (!g_GameVariables->m_ShowDemo)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin("(DX11) ImGui Internal Base", &g_GameVariables->m_ShowMenu, 96))
        {
            ImGui::End();
            return;
        }
        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
            ImGui::PopStyleColor();
        }
        
        //  Display Menu Content
        Tabs::TABMain();

        //  I like to use tabs to display my content in an organized manner, Here is an example on how you could do the same
        //  As a courtesy I have left the TABS namespace with an Example Tab
        //if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        //{
        //    if (ImGui::BeginTabItem("MAIN"))
        //    {
        //        Tabs::TABMain();
        //        ImGui::EndTabItem();
        //    }
        //    ImGui::EndTabBar();
        //}
        ImGui::End();
	}

	void Menu::HUD(bool* p_open)
	{

	}

	void Menu::Loops()
	{

	}
}