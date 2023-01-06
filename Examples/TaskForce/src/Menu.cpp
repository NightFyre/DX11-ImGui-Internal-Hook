#include "../include/Menu.hpp"
using namespace DX11_Base;


using namespace CG;

namespace DX11_Base {


    namespace Styles {
        void InitStyle()
        {
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec4* colors = ImGui::GetStyle().Colors;

            //	STYLE PROPERTIES
            style.WindowTitleAlign = ImVec2(0.5f, 0.5f);
            style.WindowMinSize = ImVec2(600, 400);

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
            }
            else {
                /// YOUR DEFAULT STYLE PROPERTIES HERE
            }
        }
    }


    static int menutab = 0;
    static int VisualSubTab = 0;
    static int WeaponSubTab = 0;
    static int SelfSubTab = 0;
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
                    ImGui::Text("Weapons");

                    ImGui::Separator();

                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 110);
                    if (ImGui::Button("Main", ImVec2(85, 20)))
                        WeaponSubTab = 0;
                    ImGui::SameLine();
                    if (ImGui::Button("Weapon", ImVec2(85, 20)))
                        WeaponSubTab = 1;


                    ImGui::Separator();

                    if (WeaponSubTab == 0)
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Crosshair", &g_Menu->drawCrosshair);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##CrosshairColor", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Fov", &g_Menu->drawFov);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("##FovColor", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        if (g_Menu->drawFov)
                        {
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Fov-Filled", &g_Menu->fovFilled);
                        }
                    }

                    if (WeaponSubTab == 1)
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Aim-Bot", &g_GameData->aimbot);
                        ImGui::SameLine();
                        ImGui::SetNextItemWidth(90);
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 25);
                        ImGui::SliderFloat("Smoothing", &g_Menu->smoothing, 0.1f, 30.f);
                        if (g_GameData->aimbot)
                        {
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Silent-Aim", &g_GameData->aimbot);


                        }

                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("No-Recoil", &g_GameData->noRecoil);
                        if (g_GameData->noRecoil)
                        {
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::SetNextItemWidth(90);
                            ImGui::SliderFloat("RCS-Amount", &g_Menu->rcsAmount, 0.f, 10.f);
                            ImGui::SliderInt("X-Amount", &g_Menu->rcsAmountY, 0, 10);
                            ImGui::SliderInt("Y-Amount", &g_Menu->rcsAmountX, 0, 10);
                            ImGui::Spacing();
                        }
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Rapid-Fire", &g_GameData->rapid_fire);

                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Unlimited-Ammo", &g_GameData->unlimited_ammo);
                    }
                }



                if (menutab == 1)
                {
                    center_text("Visuals");


                    ImGui::Separator();

                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 80);
                    if (ImGui::Button("Player", ImVec2(85, 20)))
                        VisualSubTab = 0;
                    ImGui::SameLine();
                    if (ImGui::Button("World", ImVec2(85, 20)))
                        VisualSubTab = 1;
                    ImGui::SameLine();
                    if (ImGui::Button("Chams", ImVec2(85, 20)))
                        VisualSubTab = 2;
                    ImGui::Separator();

                    if (VisualSubTab == 0) //Player
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("Box-Esp", &g_Menu->boxEsp);
                        ImGui::SameLine();
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 30);
                        ImGui::ColorEdit3("##ESPCOLOR", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        ImGui::SetNextItemWidth(100);
                        ImGui::SameLine();
                        ImGui::Combo("##STYLE", &g_Menu->espStyle, "2Dbox\0 3Dbox\00 Cornerfilled\000");
                        if (g_Menu->boxEsp)
                        {
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Show-Names", &g_Menu->names);
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 9);
                            ImGui::Checkbox("Show-Distance", &g_Menu->playerDistance);
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Held-Item", &g_Menu->heldtItem);
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 15);
                            ImGui::Checkbox("Snap-Lines", &g_Menu->SnapLines);
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Show-Team", &g_Menu->ShowTeam);
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 15);
                            ImGui::Checkbox("Show-Bots", &g_Menu->Botesp);


                        }
                    }

                    if (VisualSubTab == 1) //World
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("World-Esp", &g_GameData->worldesp);
                        ImGui::SameLine();
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 15);
                        ImGui::ColorEdit3("##WORLDESP", dbg_RAINBOW, ImGuiColorEditFlags_NoInputs);
                        if (g_GameData->worldesp)
                        {
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Spacing();
                            ImGui::Checkbox("Distance", &g_Menu->lootDistance);
                            ImGui::SameLine();
                            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 21);
                            ImGui::Checkbox("Weapon-Names", &g_Menu->showguns);

                        }
                    }

                    if (VisualSubTab == 2) //Misc
                    {
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 150);
                        ImGui::Text("!!COMING SOON!!");
                    }

                }

                if (menutab == 2)
                {
                    center_text("Self");
                    ImGui::Separator();

                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 110);
                    if (ImGui::Button("Movement", ImVec2(85, 20)))
                        SelfSubTab = 0;
                    ImGui::SameLine();
                    if (ImGui::Button("Misc", ImVec2(85, 20)))
                        SelfSubTab = 1;


                    ImGui::Separator();

                    if (SelfSubTab == 0) //mOVEMENT
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::SetNextItemWidth(40);
                        if (ImGui::Button("UFO ON"))
                        {
                            //  [LOOPS] is supposed to prevent this
                            auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
                            auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
                            auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
                            auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
                            auto Player_Controller = LocalPlayer->PlayerController;                                                     if (Player_Controller == nullptr) return;
                            auto Pawn = Player_Controller->AcknowledgedPawn;                                                            if (Pawn == nullptr)  return;
                            auto Root = Pawn->RootComponent;                                                                            if (Root == nullptr)  return;
                            ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(Pawn);                                   if (character == nullptr) return;
                            character->CharacterMovement->MovementMode = CG::EMovementMode::MOVE_Flying;
                        }
                        ImGui::SameLine();
                        if (ImGui::Button("UFO OFF"))
                        {
                            //  [LOOPS] is supposed to prevent this
                            auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
                            auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
                            auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
                            auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
                            auto Player_Controller = LocalPlayer->PlayerController;                                                     if (Player_Controller == nullptr) return;
                            auto Pawn = Player_Controller->AcknowledgedPawn;                                                            if (Pawn == nullptr)  return;
                            auto Root = Pawn->RootComponent;                                                                            if (Root == nullptr)  return;
                            ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(Pawn);                                   if (character == nullptr) return;
                            auto Collision = Pawn->GetActorEnableCollision();
                            character->CharacterMovement->MovementMode = CG::EMovementMode::MOVE_Walking;
                        }
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Checkbox("No Collision", &g_GameData->godmode);
                    }

                    if (SelfSubTab == 1) //MISC
                    {
                        ImGui::Spacing();
                        ImGui::Spacing();
                        if (ImGui::Button("Change Name"))
                        {
                            //  [LOOPS] is supposed to prevent this
                            auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
                            auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
                            auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
                            auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
                            auto Player_Controller = LocalPlayer->PlayerController;                                                     if (Player_Controller == nullptr) return;
                            auto Pawn = Player_Controller->AcknowledgedPawn;                                                            if (Pawn == nullptr)  return;
                            ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(Pawn);                                   if (character == nullptr) return;
                            Player_Controller->SetName(L"IM JUST BETTER");      //  cringe dude

                        }
                        ImGui::SliderFloat(("##FOVAMOUNT"), &g_GameData->customFov_Amount, 70.f, 130.f);
                        ImGui::SameLine();
                        ImGui::SetNextItemWidth(40);
                        if (ImGui::Button("Set Fov"))
                        {
                            //  [LOOPS] is supposed to prevent this
                            auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
                            auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
                            auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
                            auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
                            auto* Player_Controller = LocalPlayer->PlayerController;                                                    if (Player_Controller == nullptr) return;
                            Player_Controller->FOV(g_GameData->customFov_Amount);
                        }
                    }

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

        //  DRAW OVERLAY COMPONENTS
        {
            auto draw = ImGui::GetBackgroundDrawList();

            if (drawFov)
            {
                draw->AddCircle(ImVec2(1920 / 2, 1080 / 2), fovSize, ImColor(255, 255, 255), 100, 0);
                if (fovFilled)
                    draw->AddCircleFilled(ImVec2(1920 / 2, 1080 / 2), fovSize, ImColor(0, 0, 0, 90), 100);
            }

            if (drawCrosshair)
                draw->AddCircleFilled(ImVec2(1920 / 2, 1080 / 2), 2, ImColor(255, 0, 0), 0);

            if (boxEsp)
                Esp();

            if (g_GameData->worldesp)
                worldEsp();
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
        if (!ImGui::Begin("Task Force", &g_GameData->m_ShowMenu, 96))
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
        //  Just gotta do it once buddy, simple , but instead use global vars to be referenced anywhere .. lol      [LOOPS]
        auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);  if ((*WORLD) == nullptr) return;
        auto GAME_STATE = (*WORLD)->GameState;                                                  if ((GAME_STATE) == nullptr) return;
        auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                       if (PERSISTENTLEVEL == nullptr)  return;
        auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                       if (LocalPlayer == nullptr) return;
        auto Player_Controller = LocalPlayer->PlayerController;                                 if (Player_Controller == nullptr) return;
        auto Pawn = Player_Controller->AcknowledgedPawn;                                        if (Pawn == nullptr)  return;
        auto Root = Pawn->RootComponent;                                                        if (Root == nullptr)  return;
        CG::ATaskForceCharacter* character = static_cast<CG::ATaskForceCharacter*>(Pawn);       if (character == nullptr) return;

        //ammonshit & rapid fire shit
        if (g_GameData->unlimited_ammo)
        {
            character->CurrentWeapon->CurrentAmmo = 1337;
            character->CurrentWeapon->CurrentAmmoInClip = 1337;
        }

        if (g_GameData->rapid_fire)
            character->CurrentWeapon->WeaponConfig.RoundsPerMinute = 20000;

        if (g_GameData->no_recoil)
        {
            character->CurrentWeapon->WeaponConfig.RecoilYawMin = -0.1f;
            character->CurrentWeapon->WeaponConfig.RecoilYawMax = -0.1f;
            character->CurrentWeapon->WeaponConfig.RecoilPitchMax = -0.1f;
            character->CurrentWeapon->WeaponConfig.RecoilPitchMin = -0.1f;
            character->CurrentWeapon->WeaponConfig.RecoilAdditiveFactor = -0.1f;
            character->CurrentWeapon->WeaponConfig.RecoilMax = 1;
            character->CurrentWeapon->WeaponConfig.DamageScale = 100.0;
        }

        if (g_GameData->godmode)
        {
            auto Collision = Pawn->GetActorEnableCollision();
            if (Collision)
                Pawn->SetActorEnableCollision(FALSE);
        }

    }

    void Menu::Esp()
    {
        auto draw = ImGui::GetBackgroundDrawList();
        auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
        auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
        auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
        auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
        auto Player_Controller = LocalPlayer->PlayerController;                                                     if (Player_Controller == nullptr) return;
        auto Pawn = Player_Controller->AcknowledgedPawn;                                                            if (Pawn == nullptr)  return;
        auto Root = Pawn->RootComponent;                                                                            if (Root == nullptr)  return;
        ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(Pawn);                                   if (character == nullptr) return;
        APlayerState* Aplayerstate = static_cast<APlayerState*>(Pawn->PlayerState);                                 if (Aplayerstate == nullptr) return;
        ATaskForcePlayerState* taskforcePlayerState = static_cast<ATaskForcePlayerState*>(Aplayerstate);            if (taskforcePlayerState == nullptr) return;
        auto Player_Array = GAME_STATE->PlayerArray;
        for (int i = 1; i < Player_Array.Count(); i++)
        {
            auto pawn = Player_Array[i]->PawnPrivate; if ((pawn) == nullptr) continue;
            auto actor_root_component = pawn->RootComponent; if ((actor_root_component) == nullptr) continue;
            ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(pawn);
            APlayerState* entAplayerstate = static_cast<APlayerState*>(pawn->PlayerState);
            ATaskForcePlayerState* enttaskforcePlayerState = static_cast<ATaskForcePlayerState*>(entAplayerstate);
            
            CG::FVector2D screen;
            if (Player_Controller->ProjectWorldLocationToScreen(actor_root_component->RelativeLocation, &screen, true))
            {
                if (SnapLines)
                    draw->AddLine(ImVec2(960, 0), ImVec2(screen.X, screen.Y - 30), ImColor(255, 0, 0), 1);

                if (!names) continue;
                ImVec2 sz = ImGui::CalcTextSize(Aplayerstate->GetPlayerName().c_str(), NULL, true);
                draw->AddText(ImVec2(screen.X - sz.x / 2 - 1, screen.Y - 15), ImColor(255, 0, 0), Aplayerstate->GetPlayerName().c_str());
            }
        }
    }

    void Menu::worldEsp()
    {
        auto draw = ImGui::GetBackgroundDrawList();
        auto WORLD = reinterpret_cast<CG::UWorld**>(dwGameBase + g_GameData->offsets.oUWorld);                      if ((*WORLD) == nullptr) return;
        auto GAME_STATE = (*WORLD)->GameState;                                                                      if ((GAME_STATE) == nullptr) return;
        auto PERSISTENTLEVEL = (*WORLD)->PersistentLevel;                                                           if (PERSISTENTLEVEL == nullptr)  return;
        auto LocalPlayer = (*WORLD)->OwningGameInstance->LocalPlayers[0];                                           if (LocalPlayer == nullptr) return;
        auto* Player_Controller = LocalPlayer->PlayerController;                                                    if (Player_Controller == nullptr) return;
        auto Pawn = Player_Controller->AcknowledgedPawn;                                                            if (Pawn == nullptr)  return;
        auto* Root = Pawn->RootComponent;                                                                           if (Root == nullptr)  return;
        ATaskForceCharacter* character = static_cast<ATaskForceCharacter*>(Pawn);                                   if (character == nullptr) return;
        APlayerState* Aplayerstate = static_cast<APlayerState*>(Pawn->PlayerState);                                 if (Aplayerstate == nullptr) return;
        ATaskForcePlayerState* taskforcePlayerState = static_cast<ATaskForcePlayerState*>(Aplayerstate);            if (taskforcePlayerState == nullptr) return;
        auto Actor_Array = PERSISTENTLEVEL->Actors;
        for (int i = 0; i < Actor_Array.Count(); i++)
        {
            auto Current_Actor = Actor_Array[i];
            {
                if (Current_Actor == nullptr) continue;
                if (Current_Actor->RootComponent == nullptr) continue;

                //  So kizzy, what happens if you have BOTH toggled?
                //  Some objects will get skipped :)
                //  I will refactor this sloppy code in my next update
                //  This is not at all how i showed you to loop.

                if (g_GameData->worldesp)
                {
                    auto weapon_552 = Current_Actor->IsA(ABP_Weapon_552_C::StaticClass());      //552
                    auto weapon_AK47 = Current_Actor->IsA(ABP_Weapon_AK47_C::StaticClass());    //AK47
                    auto weapon_M4A1 = Current_Actor->IsA(ABP_Weapon_M4A1_C::StaticClass());    //m4a1
                    auto weapon_AUG = Current_Actor->IsA(ABP_Weapon_AUG_C::StaticClass());      //aug
                    auto weapon_MP5 = Current_Actor->IsA(ABP_Weapon_MP5_C::StaticClass());      //mp5
                    auto weapon_UMP = Current_Actor->IsA(ABP_Weapon_UMP45_C::StaticClass());    //Ump
                    auto weapon_M14 = Current_Actor->IsA(ABP_Weapon_M14_C::StaticClass());      //m14
                    if (!(weapon_552 || weapon_M14 || weapon_UMP || weapon_MP5 || weapon_AUG || weapon_M4A1 || weapon_AK47))
                    {
                        continue;    // Do something
                    }

                    CG::FVector2D screen;
                    if (Player_Controller->ProjectWorldLocationToScreen(Current_Actor->RootComponent->RelativeLocation, &screen, false))
                    {
                        if (!showguns) continue;
                        ImVec2 sz = ImGui::CalcTextSize(Current_Actor->GetName().c_str(), NULL, true);
                        draw->AddText(ImVec2(screen.X - sz.x / 2 - 1, screen.Y - 15), ImColor(255, 0, 0), Current_Actor->GetName().c_str());
                    }
                }

                if (projectileesp)
                {

                    auto weapon_M18 = Current_Actor->IsA(ABP_Weapon_M18_C::StaticClass()); //m18 grenade
                    auto weapon_M67 = Current_Actor->IsA(ABP_Weapon_M67_C::StaticClass());//UMP
                    if (!(weapon_M67 || weapon_M18))
                    {
                        continue;    // Do something
                    }

                    CG::FVector2D screen;
                    if (Player_Controller->ProjectWorldLocationToScreen(Current_Actor->RootComponent->RelativeLocation, &screen, false))
                    {
                        if (!projectileesp)continue;
                        ImVec2 sz = ImGui::CalcTextSize(Current_Actor->GetName().c_str(), NULL, true);
                        draw->AddText(ImVec2(screen.X - sz.x / 2 - 1, screen.Y - 15), ImColor(255, 0, 0), Current_Actor->GetName().c_str());
                    }
                }
            }
        }
    }
}