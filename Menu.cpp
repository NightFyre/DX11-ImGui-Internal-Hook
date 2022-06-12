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
            colors[ImGuiCol_Text] = ImVec4(0.75f, 0.75f, 0.29f, 1.00f);
            colors[ImGuiCol_TextDisabled] = ImVec4(0.86f, 0.93f, 0.89f, 0.28f);
            colors[ImGuiCol_WindowBg] = ImVec4(0.059f, 0.059f, 0.059f, 0.80f);
            colors[ImGuiCol_ChildBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.58f);
            colors[ImGuiCol_PopupBg] = ImVec4(ImColor(20, 20, 20, 240));
            colors[ImGuiCol_Border] = ImVec4(1.00f, 1.00f, 1.00f, 0.25f);
            colors[ImGuiCol_BorderShadow] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
            colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.23f, 0.27f, 1.0f);
            colors[ImGuiCol_FrameBgHovered] = ImVec4(0.27f, 0.00f, 0.63f, 0.78f);
            colors[ImGuiCol_FrameBgActive] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_MenuBarBg] = ImVec4(0.20f, 0.22f, 0.27f, 0.47f);
            colors[ImGuiCol_ScrollbarBg] = ImVec4(0.20f, 0.22f, 0.27f, 1.00f);
            colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.23f, 0.00f, 0.53f, 1.00f);
            colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.27f, 0.00f, 0.63f, 0.78f);
            colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_CheckMark] = ImVec4(0.22f, 0.62f, 0.74f, 1.00f);
            colors[ImGuiCol_SliderGrab] = ImVec4(0.27f, 0.30f, 0.37f, 1.00f);
            colors[ImGuiCol_SliderGrabActive] = ImVec4(0.39f, 0.00f, 0.90f, 1.00f);
            colors[ImGuiCol_Button] = ImVec4(0.35f, 0.16f, 0.48f, 0.40f);
            colors[ImGuiCol_ButtonHovered] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_ButtonActive] = ImVec4(0.39f, 0.00f, 0.90f, 1.00f);
            colors[ImGuiCol_Header] = ImVec4(0.27f, 0.00f, 0.63f, 0.76f);
            colors[ImGuiCol_HeaderHovered] = ImVec4(0.27f, 0.00f, 0.63f, 0.86f);
            colors[ImGuiCol_HeaderActive] = ImVec4(0.39f, 0.00f, 0.90f, 1.00f);
            colors[ImGuiCol_ResizeGrip] = ImVec4(0.47f, 0.77f, 0.83f, 0.04f);
            colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.27f, 0.00f, 0.63f, 0.78f);
            colors[ImGuiCol_ResizeGripActive] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_Tab] = ImVec4(0.20f, 0.22f, 0.27f, 0.40f);
            colors[ImGuiCol_TabHovered] = ImVec4(0.39f, 0.00f, 0.90f, 1.00f);
            colors[ImGuiCol_TabActive] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_TabUnfocused] = ImVec4(0.20f, 0.22f, 0.27f, 0.40f);
            colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.20f, 0.22f, 0.27f, 0.70f);
            colors[ImGuiCol_PlotLines] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
            colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_PlotHistogram] = ImVec4(0.86f, 0.93f, 0.89f, 0.63f);
            colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.27f, 0.00f, 0.63f, 1.00f);
            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
            colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
            colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
            colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
            colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
            colors[ImGuiCol_TextSelectedBg] = ImVec4(0.27f, 0.00f, 0.63f, 0.43f);
            colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
            colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
            colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
            colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);

            //	COLORS
            if (g_Menu->dbg_RAINBOW_THEME) {
                colors[ImGuiCol_Separator] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_TitleBg] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0, 0, 0, 1.0f);
            }
            else {
                colors[ImGuiCol_TitleBg] = ImVec4(0.23f, 0.00f, 0.53f, 1.00f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0.39f, 0.00f, 0.90f, 1.00f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.20f, 0.22f, 0.27f, 0.75f);
                colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
            }
        }
	}

	namespace Tabs {
        void TABMain()
        {
            ImGui::Text("BASE MENU (PREVIEW)");
            ImGui::Text("BUILD VERSION: v1.0");
            ImGui::Text("BUILD DATE: 5/27/2022");

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
        if (ImGui::BeginTabBar("##tabs", ImGuiTabBarFlags_None))
        {
            if (ImGui::BeginTabItem("MAIN"))
            {
                Tabs::TABMain();
                ImGui::EndTabItem();
            }
            ImGui::EndTabBar();
        }
        ImGui::End();
	}

	void Menu::HUD(bool* p_open)
	{

	}

	void Menu::Loops()
	{

	}
}