#include "Hooking.hpp"
namespace DX11_Base {
	Hooking::Hooking()
	{
		MH_Initialize();
		g_Console->printdbg("Hooking::Initialized\n", g_Console->color.pink);
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
		g_Console->printdbg("Hooking::Hook Initialized\n", g_Console->color.pink);
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
