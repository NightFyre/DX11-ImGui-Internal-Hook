#include "../pch.h"
#include "../include/Menu.hpp"
namespace DX11_Base 
{
	namespace Styles 
    {
        void BaseStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);

            //  Base ImGui Styling , Aplying a custyom style is left up to you.
            ImGui::StyleColorsDark();

            /// EXAMPLE COLOR 
            //colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);
        }

        //  Hides the Dear ImGui Navigation Interface ( Windowing Mode ) 
        // @TODO: Disable ImGui Navigation
        void SetNavigationMenuViewState(bool bShow)
        {
            ImVec4* colors = ImGui::GetStyle().Colors;
            switch (bShow)
            {
                case true:
                {
                    //  Show Navigation Panel | Default ImGui Dark Style
                    //  Perhaps just call BaseStyle() ?
                    colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
                    colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
                    colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
                    colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
                    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
                    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
                    break;
                }
                case false:
                {
                    //  Hide Navigation Panel
                    colors[ImGuiCol_Text] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    colors[ImGuiCol_Border] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    colors[ImGuiCol_NavHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
                    break;
                }
            }
        }
	}

	namespace Tabs 
    {
        void TABMain()
        {
            ImGui::Text("BASE MENU (PREVIEW)");
            ImGui::Text("BUILD VERSION: v1.0.1");
            ImGui::Text("BUILD DATE: 2/8/2024");

            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Spacing();

            if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetContentRegionAvail().x, 20))) {
#if CONSOLE_OUTPUT
                g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED\n\n", Console::Colors::red);
#endif
                g_KillSwitch = TRUE;
            }
        }

#if _DEBUG
        void TABDebug()
        {
            //  Debug Options
        }
#endif
	}

	void Menu::Draw()
	{
        if (b_ShowMenu)
            MainMenu();

        if (b_ShowHud && !b_ShowMenu)
        {
            Styles::SetNavigationMenuViewState(false);
            HUD(&b_ShowHud);
        }

        if (b_ShowDemoWindow && b_ShowMenu)
            ImGui::ShowDemoWindow();

        if (b_ShowStyleEditor && b_ShowMenu)
            ImGui::ShowStyleEditor();
	}

	void Menu::MainMenu()
	{
        if (!b_ShowDemoWindow && !b_ShowStyleEditor)
            Styles::BaseStyle();

        if (!ImGui::Begin("(DX11) ImGui Internal Base", &b_ShowMenu, 96))
        {
            ImGui::End();
            return;
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
        ImVec2 draw_size = g_D3D11Window->pViewport->WorkSize;
        ImVec2 draw_pos = g_D3D11Window->pViewport->WorkSize;
        ImGui::SetNextWindowPos(draw_pos);
        ImGui::SetNextWindowSize(draw_size);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
        ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.00f, 0.00f, 0.00f, 0.00f));
        if (!ImGui::Begin("##HUDWINDOW", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoInputs))
        {
            ImGui::PopStyleColor();
            ImGui::PopStyleVar();
            ImGui::End();
            return;
        }
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();

        //  Drawinmg Context
        ImDrawList* ImDraw = ImGui::GetWindowDrawList();
        auto center = ImVec2({ draw_size.x * .5f, draw_size.y * .5f });
        auto top_center = ImVec2({ draw_size.x * .5f, draw_size.y * 0.0f });

        //  Watermark
        ImDraw->AddText(top_center, ImColor(1.0f, 1.0f, 1.0f, 1.0f), "https://github.com/NightFyre/DX11-ImGui-Internal-Hook");

        ImGui::End();
	}

	void Menu::Loops()
	{

	}

    void GUI::TextCentered(const char* pText)
    {
        ImVec2 textSize = ImGui::CalcTextSize(pText);
        ImVec2 windowSize = ImGui::GetWindowSize();
        ImVec2 textPos = ImVec2((windowSize.x - textSize.x) * 0.5f, (windowSize.y - textSize.y) * 0.5f);
        ImGui::SetCursorPos(textPos);
        ImGui::Text("%s", pText);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::TextCenteredf(const char* pText, ...)
    {
        va_list args;
        va_start(args, pText);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        TextCentered(buffer);
    }

    void GUI::DrawText_(ImVec2 pos, ImColor color, const char* pText, float fontSize)
    {
        ImGui::GetWindowDrawList()->AddText(ImGui::GetFont(), fontSize, pos, color, pText, pText + strlen(pText), 800, 0);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::DrawTextf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...)
    {
        va_list args;
        va_start(args, fontSize);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        DrawText_(pos, color, buffer, fontSize);
    }

    void GUI::DrawTextCentered(ImVec2 pos, ImColor color, const char* pText, float fontSize)
    {
        float textSize = ImGui::CalcTextSize(pText).x;
        ImVec2 textPosition = ImVec2(pos.x - (textSize * 0.5f), pos.y);
        DrawText_(textPosition, color, pText, fontSize);
    }

    //  @ATTN: max buffer is 256chars
    void GUI::DrawTextCenteredf(ImVec2 pos, ImColor color, const char* pText, float fontSize, ...)
    {
        va_list args;
        va_start(args, fontSize);
        char buffer[256];
        vsnprintf(buffer, sizeof(buffer), pText, args);
        va_end(args);

        DrawTextCentered(pos, color, pText, fontSize);
    }
}