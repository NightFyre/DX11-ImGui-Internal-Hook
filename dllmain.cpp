#pragma once
#include "pch.h"
#include "initialize.hpp"

extern DWORD WINAPI MainThread_Initialize(LPVOID dwModule);
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  dwCallReason, LPVOID lpReserved)
{

    if (dwCallReason == DLL_PROCESS_ATTACH)
    {
        g_hModule = hModule;
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, MainThread_Initialize, g_hModule, 0, 0);
    }
    return TRUE;
}