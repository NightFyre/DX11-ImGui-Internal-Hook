#include "../include/Menu.hpp"
#pragma warning(disable : 4996)

namespace DX11_Base {

	namespace Styles {
        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
            style.WindowMinSize = ImVec2(450, 300);
            //  Base ImGui Styling , Aplying a custyom style is left up to you.
            ImGui::StyleColorsClassic();

            /// EXAMPLE COLOR 
            //colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);

            //	COLORS
            if (g_Menu->dbg_RAINBOW_THEME) {
                //  RGB MODE STLYE PROPERTIES
                colors[ImGuiCol_Separator] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_TitleBg] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgActive] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0, 0, 0, 1.0f);
                colors[ImGuiCol_Button] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_ButtonActive] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_ButtonHovered] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_ScrollbarGrab] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(g_Menu->dbg_RAINBOW);
                colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(g_Menu->dbg_RAINBOW);
                

            }
            else {
                /// YOUR DEFAULT STYLE PROPERTIES HERE
                

            }
        }
	}

    static int menutab = 0;
	namespace Tabs {
        void TABMain()
        {


            ImGui::BeginChild("##LeftSide", ImVec2(130, 300), true);
            {
                
                ImGui::TextColored(ImColor(g_Menu->dbg_RAINBOW), "   Base Menu");
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();
                ImGui::Spacing();

               
                    if (ImGui::Button("Main", ImVec2(115, 25)))
                        menutab = 0;
                    
                    if (ImGui::Button("Visuals", ImVec2(115, 25)))
                        menutab = 1;
                    
                    if (ImGui::Button("Self", ImVec2(115, 25)))
                        menutab = 2;
                    
                    if (ImGui::Button("Settiings", ImVec2(115, 25)))
                        menutab = 3;
                
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();

                    ImGui::TextColored(ImColor(g_Menu->dbg_RAINBOW), "Version   1.0.1");
                    ImGui::TextColored(ImColor(g_Menu->dbg_RAINBOW), "Made By   ~");
    
                ImGui::EndChild();
            }
            
            {
                ImGui::SameLine(0);
                ImGui::SeparatorEx(ImGuiSeparatorFlags_Vertical);
                ImGui::SameLine();


            }

            ImGui::BeginChild("##RightSide", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);
            {

                auto center = [](float avail_width, float element_width, float padding = 0)
                {
                    ImGui::SameLine((avail_width / 2) - (element_width / 2) + padding);
                };

                auto center_text = [&](const char* format, float spacing = 15, ImColor color = ImColor(255, 255, 255)) {
                    center(ImGui::GetContentRegionAvail().x, ImGui::CalcTextSize(format).x);
                    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + spacing);
                    ImGui::TextColored(color.Value, format);
                };

                //Header 1

                //center_text(data.status.c_str(), 18, (data.undetected ? ImColor(0, 255, 0) : ImColor(255,0,0)));  **IS FOR LOADER**

                    float dbg_RAINBOW[] = { 1.f, 0.f, 0.f };

                    if (menutab == 0)
                    {
                        center_text("Main");
                        ImGui::Separator();
                        ImGui::Spacing();

                        ImGui::Checkbox("Crosshair", &g_Menu->drawCrosshair);
                        ImGui::SameLine();
                        ImGui::SetNextItemWidth(90);
                        ImGui::Combo("##CrosshairStyle", &g_Menu->crossHairStyle, "Square\0X\00Circle\000");
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##CrosshairColor", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        ImGui::Spacing();
                        ImGui::Checkbox("Fov", &g_Menu->drawFov);
                        ImGui::SameLine();
                        ImGui::Checkbox("Filled", &g_Menu->fovFilled);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##FovColor", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);


                        center_text("Weapon");
                        ImGui::Separator();
                        ImGui::Spacing();
                        ImGui::Checkbox("Aim-Bot", &g_GameData->aimbot);
                        if (g_GameData->aimbot)
                        {
                            ImGui::Spacing();
                            ImGui::Checkbox("Silent-Aim", &g_GameData->aimbot);
                            ImGui::SetNextItemWidth(90);
                            ImGui::SliderFloat("Smoothing", &g_Menu->smoothing, 0.1f, 30.f);
                            ImGui::Spacing();
                        }
                       
                        
                        ImGui::Checkbox("No-Recoil", &g_GameData->noRecoil);
                        if (g_GameData->noRecoil)
                        {
                            ImGui::Spacing();
                            ImGui::SetNextItemWidth(90);
                            ImGui::SliderFloat("RCS-Amount", &g_Menu->recoilAmount, 1.f, 10.f);
                            ImGui::Spacing();
                        }
                        
                        ImGui::Checkbox("Fast-Melee", &g_GameData->fastMelee);
                        ImGui::Spacing();
                        ImGui::Checkbox("Fast-Reload", &g_GameData->fastReload);
                        
                    }
                    
                    

                    if (menutab == 1)
                    {
                        center_text("Visuals");

                       
                        ImGui::Separator();
                        ImGui::Spacing();


                       
                        ImGui::Checkbox("Box-Esp", &g_GameData->esp);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##ESPCOLOR", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        ImGui::SetNextItemWidth(100);
                        ImGui::SameLine();
                        ImGui::Combo("##STYLE", &g_Menu->espStyle, "2Dbox\0 3Dbox\00 Cornerfilled\000");
                        if (g_GameData->esp)
                        {
                            ImGui::Checkbox("Show-Names", &g_Menu->names);
                            ImGui::SameLine();
                            ImGui::Checkbox("Show-Distance", &g_Menu->lootDistance);
                            ImGui::Spacing();
                            ImGui::Checkbox("Held-Item", &g_Menu->heldtItem);
                            ImGui::SameLine();
                            ImGui::Checkbox("Snap-Lines", &g_Menu->snapLines);
                            ImGui::Spacing();
                            ImGui::Checkbox("Show-Crew", &g_Menu->showCrew);
                            ImGui::SameLine();
                            ImGui::Checkbox("SHow-Mobs", &g_Menu->NPCesp);

   
                        }
                        ImGui::Spacing();
                        ImGui::Separator();
                        ImGui::Spacing();
                        
                        
                        ImGui::Checkbox("World-Esp", &g_GameData->worldEsp);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##WORLDESP", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        if (g_GameData->worldEsp)
                        {
                            ImGui::Checkbox("Loot-Containers", &g_Menu->lootEsp);
                            ImGui::SameLine();
                            ImGui::Checkbox("Loot-Distance", &g_Menu->lootDistance);
                            ImGui::Spacing();
                            ImGui::Checkbox("Show-Boats", &g_Menu->boatEsp);
                            ImGui::SameLine();
                            ImGui::Checkbox("Boat-Distance", &g_Menu->boatDistance);
                            ImGui::Spacing();
                            ImGui::Checkbox("Location-Esp", &g_Menu->locationEsp);
                            ImGui::SameLine();
                            ImGui::Checkbox("Location-Distance", &g_Menu->locationDistance);
                        }

                       


                    }

                    if (menutab == 2)
                    {
                        center_text("Self");
                        ImGui::Separator();
                        ImGui::Spacing();
                    }

                    if (menutab == 3)
                    {
                        center_text("Settings");
                        ImGui::Separator();
                        ImGui::Spacing();

                        

                        if (ImGui::Button("UNHOOK DLL", ImVec2(ImGui::GetWindowContentRegionWidth() - 3, 20))) {
#if DEBUG
                            g_Console->printdbg("\n\n[+] UNHOOK INITIALIZED [+]\n\n", g_Console->color.red);
#endif
                            g_KillSwitch = TRUE;
                        }

                    }

                    ImGui::EndChild();
            }
        }
	}

	void Menu::Draw()
	{
		if (g_GameData->m_ShowMenu)
			MainMenu();

		if (g_GameData->m_ShowHud)
			HUD(&g_GameData->m_ShowHud);

		if (g_GameData->m_ShowDemo)
			ImGui::ShowDemoWindow();

        //  OVERLAY DRAW
        {
            if (g_Menu->drawFov)
            {
                auto draw = ImGui::GetBackgroundDrawList();

                draw->AddCircle(ImVec2(1920 / 2, 1080 / 2), g_Menu->fovSize, ImColor(255, 255, 255), 100, 0);

                if (g_Menu->fovFilled)
                {

                    draw->AddCircleFilled(ImVec2(1920 / 2, 1080 / 2), g_Menu->fovSize, ImColor(0, 0, 0, 90), 100);
                }

            }

            if (g_Menu->drawCrosshair)
            {
                auto draw = ImGui::GetBackgroundDrawList();

                switch (g_Menu->crossHairStyle)
                {
                case 0: //Square
                    draw->AddRect(ImVec2(1920 / 2 + 4, 1080 / 2 + 4), ImVec2(1920 / 2 - 4, 1080 / 2 - 4), ImColor(255, 0, 0, 255));
                    draw->AddRectFilled(ImVec2(1920 / 2 + 4, 1080 / 2 + 4), ImVec2(1920 / 2 - 4, 1080 / 2 - 4), ImColor(255, 255, 255, 255));

                    break;
                case 1: //X crosshair
                    draw->AddLine(ImVec2(1920 / 2, 1080 / 2), ImVec2(1920 / 2 + 4, 1080 / 2 + 4), ImColor(255, 255, 255, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2, 1080 / 2), ImVec2(1920 / 2 + 4, 1080 / 2 - 4), ImColor(255, 255, 255, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2, 1080 / 2), ImVec2(1920 / 2 - 4, 1080 / 2 - 4), ImColor(255, 255, 255, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2, 1080 / 2), ImVec2(1920 / 2 - 4, 1080 / 2 + 4), ImColor(255, 255, 255, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2 + 4, 1080 / 2 + 4), ImVec2(1920 / 2 + 4 + 4, 1080 / 2 + 4 + 4), ImColor(255, 0, 0, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2 + 4, 1080 / 2 - 4), ImVec2(1920 / 2 + 4 + 4, 1080 / 2 - 4 - 4), ImColor(255, 0, 0, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2 - 4, 1080 / 2 - 4), ImVec2(1920 / 2 - 4 - 4, 1080 / 2 - 4 - 4), ImColor(255, 0, 0, 255), 0.7f);
                    draw->AddLine(ImVec2(1920 / 2 - 4, 1080 / 2 + 4), ImVec2(1920 / 2 - 4 - 4, 1080 / 2 + 4 + 4), ImColor(255, 0, 0, 255), 0.7f);
                    break;
                case 2://Dot crosshair
                    draw->AddCircleFilled(ImVec2(1920 / 2, 1080 / 2), 6, ImColor(255, 255, 255), 100);
                    break;
                }

            }

            if (g_GameData->esp)
                g_Menu->Esp();

            if (g_GameData->worldEsp)
                g_Menu->debugEsp();
        }
	}

	void Menu::MainMenu()
	{
        if (!g_GameData->m_ShowDemo)
            Styles::InitStyle();

        if (g_Menu->dbg_RAINBOW_THEME) {
            ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(g_Menu->dbg_RAINBOW));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(g_Menu->dbg_RAINBOW));
        }
        if (!ImGui::Begin("##~~", &g_GameData->m_ShowMenu, 96))
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

    void Menu::Esp()
    {
        if (!CG::UWorld::GWorld || !*CG::UWorld::GWorld)
            return;
        auto GAME_STATE = (*CG::UWorld::GWorld)->GameState; if ((GAME_STATE) == nullptr) return;

        //LocalPlayer
        if (g_GameData->localplayer == nullptr)
            g_GameData->localplayer = (*CG::UWorld::GWorld)->OwningGameInstance->LocalPlayers[0];

        if (g_GameData->l_controller == nullptr)
            g_GameData->l_controller = g_GameData->localplayer->PlayerController;

        //Player controller
        auto Pawn = g_GameData->l_controller->AcknowledgedPawn;
        //Get the Entity 
        auto* Root = Pawn->RootComponent;
        //Player arrary
        auto Player_Array = GAME_STATE->PlayerArray;

        auto PERSISTENTLEVEL = (*CG::UWorld::GWorld)->PersistentLevel;

        if (PERSISTENTLEVEL == nullptr)
            return;

        //LocalPlayer Shit Nigga
        CG::ARaidCharacter* character = static_cast<CG::ARaidCharacter*>(Pawn);
        CG::APlayerState* Aplayerstate = static_cast<CG::APlayerState*>(Pawn->PlayerState);
        CG::ARaidPlayerState* RaidPlayerState = static_cast<CG::ARaidPlayerState*>(Aplayerstate);


        if (character == nullptr)
            return;
        if (Aplayerstate == nullptr)
            return;
        if (RaidPlayerState == nullptr)
            return;

        //Check if its local player and not draw 
        if (g_GameData->localplayer == nullptr)
            return;
        //Check if localplayer is alive
        if (!character->IsAlive())
            return;
        //Check for acknowleged pawn
        if (Pawn == nullptr)
            return;
        //CHECK FOR ROOT COMPONENT
        if (Root == nullptr)
            return;

        for (int i = 1; i < Player_Array.Count(); i++)
        {
            const auto Curr_Player = Player_Array[i]->PawnPrivate;

            CG::ARaidCharacter* Currcharacter = static_cast<CG::ARaidCharacter*>(Curr_Player);
            if (Curr_Player == nullptr)
                continue;

            if (!Currcharacter->IsAlive())
                continue;


            CG::FVector2D BOX;
            CG::FVector ActorPosition{};
            CG::FVector ActorBox{};


            // This gets the current players position and dimensions
            Curr_Player->GetActorBounds(TRUE, &ActorPosition, &ActorBox, TRUE);
            float ActorHeight = ActorBox.Z;
            float ActorWidth = ActorBox.X;

            //BOX DIMENSIONS
            auto head_bone = Currcharacter->Mesh->GetBoneWorldPos(ARaidCharacter::NECK1__Skeleton);
            auto leftfoot_bone = Currcharacter->Mesh->GetBoneWorldPos(ARaidCharacter::LeftFoot_LF_TOE__Skeleton);

            int boxHeight = abs(head_bone.Y - leftfoot_bone.Y);

            if (g_GameData->esp)
            {
                if (g_GameData->localplayer->PlayerController->ProjectWorldLocationToScreen(ActorPosition, &BOX, false))
                {
                    ImVec2 TargetCenterPoint = { BOX.X, BOX.Y };
                    float ActorHeight = ActorBox.Z;
                    float ActorWidth = ActorBox.X;
                    ImVec2 BoxTopLeft1{ (TargetCenterPoint.x - (ActorWidth / 2)), (TargetCenterPoint.y - (ActorHeight / 2)) };

                    g_Draw->draw_corner_box(TargetCenterPoint.x - ActorWidth / 2, TargetCenterPoint.y - ActorHeight / 2, ActorWidth, ActorHeight, 2, ImColor(255, 0, 0, 255));
                }
            }
        }
    }

    void Menu::debugEsp()
    {
        if (!CG::UWorld::GWorld || !*CG::UWorld::GWorld)
            return;
        auto GAME_STATE = (*CG::UWorld::GWorld)->GameState; if ((GAME_STATE) == nullptr) return;

        //LocalPlayer
        if (g_GameData->localplayer == nullptr)
            g_GameData->localplayer = (*CG::UWorld::GWorld)->OwningGameInstance->LocalPlayers[0];

        if (g_GameData->l_controller == nullptr)
            g_GameData->l_controller = g_GameData->localplayer->PlayerController;

        //Player controller
        auto Pawn = g_GameData->l_controller->AcknowledgedPawn;
        //Get the Entity 
        auto* Root = Pawn->RootComponent;
        //Player arrary
        auto Player_Array = GAME_STATE->PlayerArray;

        auto PERSISTENTLEVEL = (*CG::UWorld::GWorld)->PersistentLevel;

        if (PERSISTENTLEVEL == nullptr)
            return;

        //LocalPlayer Shit Nigga
        CG::ARaidCharacter* character = static_cast<CG::ARaidCharacter*>(Pawn);
        CG::APlayerState* Aplayerstate = static_cast<CG::APlayerState*>(Pawn->PlayerState);
        CG::ARaidPlayerState* RaidPlayerState = static_cast<CG::ARaidPlayerState*>(Aplayerstate);


        if (character == nullptr)
            return;
        if (Aplayerstate == nullptr)
            return;
        if (RaidPlayerState == nullptr)
            return;

        //Check if its local player and not draw
        if (g_GameData->localplayer == nullptr)
            return;
        //Check if localplayer is alive
        if (!character->IsAlive())
            return;
        //Check for acknowleged pawn
        if (Pawn == nullptr)
            return;
        //CHECK FOR ROOT COMPONENT
        if (Root == nullptr)
            return;

        auto draw = ImGui::GetBackgroundDrawList();
        const auto Actor_Array = PERSISTENTLEVEL->Actors;

        for (int i = 1; i < Actor_Array.Count(); i++)
        {

            const auto curr_actorItem = Actor_Array[i];

            if (curr_actorItem == nullptr) continue;
            if (curr_actorItem->RootComponent == nullptr) continue;

            const auto curr_item_pos = curr_actorItem->RootComponent->RelativeLocation;
            CG::FVector2D curr_item_pos_w2s;

            //May need to change from false to True because we dont know if playe viewport matters yet
            if (g_GameData->localplayer->PlayerController->ProjectWorldLocationToScreen(curr_actorItem->RootComponent->RelativeLocation, &curr_item_pos_w2s, false))
            {
                ImVec2 sz = ImGui::CalcTextSize(curr_actorItem->GetFullName().c_str(), NULL, true);
                draw->AddText(ImVec2(curr_item_pos_w2s.X - sz.x / 2 - 1, curr_item_pos_w2s.Y - 15), ImColor(255, 0, 0), curr_actorItem->GetFullName().c_str());
            }
        }
    }

    /// DRAWING SPECIFIC FUNCTIONS
    //  --------------------------------------------------------------------------
    //  --------------------------------------------------------------------------
    //  --------------------------------------------------------------------------

    void Draw::draw_stroke_text(const int x, const int y, const ImVec4 color, const char* str)
    {
        ImFont a;
        const auto utf_8_1 = std::string(str);
        const std::string utf_8_2 = g_Console->string_to_utf8(utf_8_1);
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x - 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color)), utf_8_2.c_str());
    }

    void Draw::draw_new_text(const int x, const int y, const ImVec4 color, const char* str)
    {
        ImFont a;
        const auto utf_8_1 = std::string(str);
        const std::string utf_8_2 = g_Console->string_to_utf8(utf_8_1);
        ImGui::GetBackgroundDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), utf_8_2.c_str());
    }

    void Draw::draw_rect(const int x, const int y, const int w, const int h, const ImVec4 color, const int thickness)
    {
        ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(color), 0, 0, thickness);
    }

    void Draw::draw_filled_rect(const int x, const int y, const int w, const int h, const ImVec4 color)
    {
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(color), 20.0, ~0);
    }

    void Draw::draw_circle_filled(const int x, const int y, const int radius, const ImVec4 color)
    {
        ImGui::GetBackgroundDrawList()->AddCircleFilled(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(color));
    }

    void Draw::draw_circle(const int x, const int y, const int radius, const ImVec4 color, const int segments)
    {
        ImGui::GetBackgroundDrawList()->AddCircle(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(color), segments);
    }

    void Draw::draw_triangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const ImVec4 color, const float thickne)
    {
        ImGui::GetBackgroundDrawList()->AddTriangle(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(color), thickne);
    }

    void Draw::draw_triangle_filled(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const ImVec4 color)
    {
        ImGui::GetBackgroundDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(color));
    }

    void Draw::draw_line(const int x1, const int y1, const int x2, const int y2, const ImVec4 color, const int thickness)
    {
        ImGui::GetBackgroundDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(color), thickness);
    }

    void Draw::draw_corner_box(const int x, const int y, const int w, const int h, const int border_px, const ImVec4 color)
    {
        draw_filled_rect(x + border_px, y, w / 3, border_px, color); //top 
        draw_filled_rect(x + w - w / 3 + border_px, y, w / 3, border_px, color); //top 
        draw_filled_rect(x, y, border_px, h / 3, color); //left 
        draw_filled_rect(x, y + h - h / 3 + border_px * 2, border_px, h / 3, color); //left 
        draw_filled_rect(x + border_px, y + h + border_px, w / 3, border_px, color); //bottom 
        draw_filled_rect(x + w - w / 3 + border_px, y + h + border_px, w / 3, border_px, color); //bottom 
        draw_filled_rect(x + w + border_px, y, border_px, h / 3, color);//right 
        draw_filled_rect(x + w + border_px, y + h - h / 3 + border_px * 2, border_px, h / 3, color);//right 
    }

    void Draw::text_to_screen(const ImVec2 pos, const ImColor color, const char* text_begin, const char* text_end, const float wrap_width, const ImVec4* cpu_fine_clip_rect)
    {
        ImGui::GetBackgroundDrawList()->AddText(ImGui::GetFont(), ImGui::GetFontSize(), pos, color, text_begin, text_end, wrap_width, cpu_fine_clip_rect);
    }

    void Draw::rect_filled(const int x0, const int y0, const int x1, const int y1, const ImColor color, const float rounding, const int rounding_corners_flags)
    {
        ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x0, y0), ImVec2(x1, y1), color, rounding, rounding_corners_flags);
    }

    void Draw::line(const ImVec2 a, const ImVec2 b, const ImColor color, const float thickness)
    {
        ImGui::GetBackgroundDrawList()->AddLine(a, b, color, thickness);
    }

    void Draw::easy_text(const ImVec2 pos, const ImColor color, const char* text, const int width_text)
    {
        text_to_screen(pos, color, text, text + strlen(text), width_text, 0);
    }

    void Draw::easy_text_large(const ImVec2 pos, const ImColor color, const char* text)
    {
        ImGui::GetBackgroundDrawList()->AddText(ImGui::GetFont(), ImGui::GetFontSize() + 20, pos, color, text, text + strlen(text),
            800, nullptr);
    }

    void Draw::draw_box(const ImColor color, const int x, const int y, const int w, const int h)
    {
        constexpr float thicc = 2.0f;

        // ------
        // |    |
        line(ImVec2(x, y), ImVec2(x + w, y), color, thicc);

        // |
        // |
        // |
        line(ImVec2(x, y), ImVec2(x, y + h), color, thicc);

        //      |
        //      |
        //      |
        line(ImVec2(x + w, y), ImVec2(x + w, y + h), color, thicc);

        // |    |
        // ------
        line(ImVec2(x, y + h), ImVec2(x + w, y + h), color, thicc);
    }

    void Draw::circle(const ImVec2 point, const ImColor color, const float radius, const int num_segments, const float thickness)
    {
        ImGui::GetBackgroundDrawList()->AddCircle(point, radius, color, num_segments, thickness);
    }

    void Draw::progress(const int x, const int y, const int w, const int h, int phealth)
    {
        if (phealth > 100) phealth = 100;
        const int health_value = max(0, min(phealth, 100));
        const float health_perc = health_value / 100.f;


        const ImVec4 color1(0.0f, 1.0f, 0.0f, 1.0f);
        const ImVec4 color2(1.0f, 1.0f, 0.0f, 1.0f);
        const ImVec4 color3(1.0f, 0.0f, 0.0f, 1.0f);
        const float factor_color1 = max(health_perc - 0.5f, 0.0f);
        const float factor_color2 = 0.5f - fabs(0.5f - health_perc);
        const float factor_color3 = max(0.5f - health_perc, 0.0f);

        ImVec4 bar_color;

        bar_color.x = (color1.x * factor_color1 + color2.x * factor_color2 + color3.x * factor_color3) * 2.0f;
        bar_color.y = (color1.y * factor_color1 + color2.y * factor_color2 + color3.y * factor_color3) * 2.0f;
        bar_color.z = (color1.z * factor_color1 + color2.z * factor_color2 + color3.z * factor_color3) * 2.0f;
        bar_color.w = 1.0f;

        rect_filled(x, y, x + w, y + static_cast<int>((static_cast<float>(h) / 100.0f) * static_cast<float>(phealth)), bar_color, 20.0f, ~0);
    }

    void Draw::progress_background(const int x, const int y, const int w, const int h)
    {
        const auto bar_color = ImVec4(0.13f, 0.13f, 0.13f, 0.63f);

        rect_filled(x, y, x + w, y + static_cast<int>((static_cast<float>(h) / 100.0f) * 100), bar_color, 20.0f, ~0);
    }

    void Draw::box(ImVec2 v_pos, ImVec2 v_size, float f_thickness, ImVec4 v_color)
    {
        ImGui::GetBackgroundDrawList()->AddRect(v_pos, ImVec2(v_pos.x + v_size.x, v_pos.y + v_size.y), ImGui::ColorConvertFloat4ToU32(v_color), 0, 0, f_thickness);
    }
}