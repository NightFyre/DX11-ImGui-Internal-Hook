#pragma once
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
using namespace DX11_Base;

void ClientBGThread()
{
    while (g_Running) {
        g_Menu->Loops();
        std::this_thread::sleep_for(0ms);
        std::this_thread::yield();
    }
}

DWORD WINAPI MainThread_Initialize()
{
    g_Console = std::make_unique<Console>();

#if DEBUG
    g_Console->InitializeConsole("DX11 ImGui Base - Debug Console");
    g_Console->printdbg("DX11_Base ImGui Hook - Initializing . . .\n\n", g_Console->color.DEFAULT);
#endif

    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();
    g_GameVariables = std::make_unique<GameVariables>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Hooking->Hook();

#if DEBUG
    g_Console->printdbg("Main::Initialized\n", g_Console->color.green);
#endif

    std::thread WCMUpdate(ClientBGThread);	//	Initialize Loops Thread

    ///  RENDER LOOP
    g_Running = TRUE;
    while (g_Running)
    {
        if (GetAsyncKeyState(VK_INSERT) & 1)
        {
            g_GameVariables->m_ShowMenu = !g_GameVariables->m_ShowMenu;         //  Main Menu Window
            g_GameVariables->m_ShowHud = !g_GameVariables->m_ShowMenu;          //  Render Window
        }
    }

    ///  EXIT
    WCMUpdate.join();						//	Exit Loops Thread
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}