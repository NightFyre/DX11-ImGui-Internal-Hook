#include <pch.h>
#include <Engine.h>
#include <Menu.h>

namespace DX11Base
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

            static int BytesPerLine{ 4 };
            static int BytesSpacing{ 2 };
            static unsigned int MemScanReadSize{ 0x1000 };
            static unsigned int MemScanStarAddress{ 0x0 };
            ImGui::InputInt("##MEMSCAN_START", (int*)&MemScanStarAddress, 0, 0, ImGuiInputTextFlags_CharsHexadecimal);
            ImGui::SameLine();
            ImGui::InputInt("##MEMSCAN_SIZE", (int*)&MemScanReadSize, 0, 0, ImGuiInputTextFlags_CharsHexadecimal);
            ImGui::BeginChild("MemoryScanner", ImVec2(ImGui::GetContentRegionAvail().x, 100.f), ImGuiChildFlags_Border);
            {
                int pad{ 0 };
                for (int i = 0; i < MemScanReadSize; i += BytesPerLine)
                {
                    static unsigned long long base = reinterpret_cast<unsigned long long>(GetModuleHandle(0));
                    if (!base)
                    {
                        ImGui::Text("Failed to get module base address.");
                        break;
                    }

                    ImGui::Text("%p: ", base + i);
                    ImGui::SameLine();
                    for (int j = 0; j < BytesPerLine; j++)
                    {
                        unsigned long long addr = (base + i + j);
                        if (addr > 0)
                            ImGui::Text("0x%02X ", *(unsigned __int8*)addr);
                        else
                            ImGui::Text("?? ");

                        ImGui::SameLine();
                    }
                    ImGui::NewLine();
                }
            }
            ImGui::EndChild();
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
	}

    //----------------------------------------------------------------------------------------------------
    //										MENU
    //-----------------------------------------------------------------------------------
	void Menu::Draw()
	{
        if (g_Engine->bShowMenu)
            MainMenu();

        if (g_Engine->bShowHud && !g_Engine->bShowMenu)
        {
            Styles::SetNavigationMenuViewState(false);
            Menu::HUD();
        }

        if (g_Engine->bShowDemoWindow && g_Engine->bShowMenu)
            ImGui::ShowDemoWindow();

        if (g_Engine->bShowStyleEditor && g_Engine->bShowMenu)
            ImGui::ShowStyleEditor();
	}

	void Menu::MainMenu()
	{
        if (!g_Engine->bShowDemoWindow && !g_Engine->bShowStyleEditor)
            Styles::BaseStyle();

        if (!ImGui::Begin("(DX11) ImGui Internal Base", &g_Engine->bShowMenu, 96))
        {
            ImGui::End();
            return;
        }
        
        Tabs::TABMain();

        ImGui::End();
	}

	void Menu::HUD()
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

        ImDrawList* ImDraw = ImGui::GetWindowDrawList();
        auto center = ImVec2({ draw_size.x * .5f, draw_size.y * .5f });
        auto top_center = ImVec2({ draw_size.x * .5f, draw_size.y * 0.0f });
        ImDraw->AddText(top_center, ImColor(1.0f, 1.0f, 1.0f, 1.0f), "https://github.com/NightFyre/DX11-ImGui-Internal-Hook");

        ImGui::End();
	}

	void Menu::Loops()
	{

	}

    //----------------------------------------------------------------------------------------------------
    //										GUI
    //-----------------------------------------------------------------------------------

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