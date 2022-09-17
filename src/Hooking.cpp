#include "../pch.h"
#include "../include/Hooking.hpp"
namespace DX11_Base {
	Hooking::Hooking()
	{
		MH_Initialize();
#if DEBUG
		g_Console->printdbg("Hooking::Initialized\n", g_Console->color.pink);
#endif
		return;
	}

	Hooking::~Hooking()
	{
		MH_RemoveHook(MH_ALL_HOOKS);
	}

	void Hooking::Hook()
	{
		g_GameVariables->Init();
		g_D3D11Window->Hook();
		MH_EnableHook(MH_ALL_HOOKS);
#if DEBUG
		g_Console->printdbg("Hooking::Hook Initialized\n", g_Console->color.pink);
#endif
		return;
	}

	void Hooking::Unhook()
	{
		g_D3D11Window->Unhook();
		MH_RemoveHook(MH_ALL_HOOKS);
		g_Console->DestroyConsole();
		return;
	}
}
