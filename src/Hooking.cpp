#include "../pch.h"
#include "../include/Hooking.hpp"
namespace DX11_Base 
{
	Hooking::Hooking()
	{
		MH_Initialize();
	}

	Hooking::~Hooking()
	{
		MH_RemoveHook(MH_ALL_HOOKS);
	}

	void Hooking::Hook()
	{
		MH_EnableHook(MH_ALL_HOOKS);
#if CONSOLE_OUTPUT
		g_Console->printdbg("[+][Hooking::Hook]\n", Console::Colors::green);
#endif
	}

	void Hooking::Unhook()
	{
		g_D3D11Window->UnhookD3D();
#if CONSOLE_OUTPUT
		g_Console->DestroyConsole();
#endif
		g_Running = false;
	}
}
