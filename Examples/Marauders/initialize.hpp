#pragma once
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"

using namespace DX11_Base;
DWORD WINAPI MainThread_Initialize()
{
    g_Console = std::make_unique<Console>();
    CG::InitSdk();
#if DEBUG
    g_Console->InitializeConsole("DEBUG CONSOLE");
    g_Console->printdbg("ImGui Hook - Initializing . . .\n\nGObjects: 0x%llX\nGNames: 0x%llX\nUWorld: 0x%llX\nLocalPlayer: 0x%llX\n\n",
        g_Console->color.DEFAULT,   //  Assign Color
        CG::UObject::GObjects,      //  
        CG::FName::GNames,          //
        CG::UWorld::GWorld          //
    );
#endif

    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Draw = std::make_unique<Draw>();
    g_Hooking->Hook();

    //  Get Local Player
    g_GameData->localplayer = (*CG::UWorld::GWorld)->OwningGameInstance->LocalPlayers[0];

#if DEBUG
    g_Console->printdbg("Menu Initialized\n", g_Console->color.green);
#endif

    ///  RENDER LOOP
    g_Running = TRUE;
    while (g_Running)
        if (GetAsyncKeyState(VK_INSERT) & 1) g_GameData->m_ShowMenu = !g_GameData->m_ShowMenu;

    ///  EXIT
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}