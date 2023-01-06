#pragma once
#include "include/helper.h"
#include "include/Console.hpp"
#include "include/Game.hpp"
#include "include/D3D11Window.hpp"
#include "include/Hooking.hpp"
using namespace DX11_Base;
void InitSDK()
{
    
    //Getting Objects and Names
    CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(dwGameBase + g_GameData->offsets.oGObjects);
    CG::FName::GNames = reinterpret_cast<CG::FNamePool*>(dwGameBase + g_GameData->offsets.oFNames);

}

void NightFyre_ClientBGThread()
{
    while (g_Running) {
        g_Menu->Loops();
        std::this_thread::sleep_for(100ms);
        std::this_thread::yield();
    }
}

DWORD WINAPI MainThread_Initialize()
{
    
    g_Console = std::make_unique<Console>();

#if DEBUG
    g_Console->InitializeConsole("Task Force - Debug Console");
    g_Console->printdbg("DX11_Base ImGui Hook - Initializing . . .\n\n", g_Console->color.DEFAULT);
#endif

    ///  ESTABLISH GAME DATA   
    g_GameData = std::make_unique<GameData>();

    ///  CREATE WINDOW AND ESTABLISH HOOKS  
    g_D3D11Window = std::make_unique<D3D11Window>();
    g_Hooking = std::make_unique<Hooking>();
    g_Menu = std::make_unique<Menu>();
    g_Hooking->Hook();
    InitSDK();

#if DEBUG
    g_Console->printdbg("Main::Initialized\n", g_Console->color.green);
#endif

    ///  RENDER LOOP
    g_Running = TRUE;
    std::thread WCMUpdate(NightFyre_ClientBGThread);
    while (g_Running)
        if (GetAsyncKeyState(VK_INSERT) & 1) g_GameData->m_ShowMenu = !g_GameData->m_ShowMenu;

    ///  EXIT
    WCMUpdate.join();
    FreeLibraryAndExitThread(g_hModule, EXIT_SUCCESS);
    return EXIT_SUCCESS;
}