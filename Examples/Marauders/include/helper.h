#pragma once
#define DEBUG 1

#include <windows.h>
#include <Psapi.h>
#include <TlHelp32.h>
#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

#include <iostream>
#include <conio.h>
#include <string>
#include <thread>
#include <vector>
#include <chrono>

//	External Libraries
#include "../libs/ImGui/imgui.h"
#include "../libs/ImGui/imgui_internal.h"
#include "../libs/ImGui/imgui_Impl_dx11.h"
#include "../libs/ImGui/imgui_Impl_Win32.h"
#include "../libs/MinHook/MinHook.h"
#include "../libs/fonts.h"
#include "../libs/SDK.h"

//	INTERNET
#include <Wininet.h>
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "wininet.lib")

namespace DX11_Base {
	using namespace			CG;
	using namespace			std::chrono_literals;
	inline HMODULE			g_hModule{ 0 };
	inline LPCWSTR			g_ModuleName{ 0 };
	inline std::atomic_bool g_Running{ 0 };
	inline std::atomic_bool g_KillSwitch{ 0 };
	static uintptr_t		dwGameBase = (uintptr_t)GetModuleHandleA(NULL);

	struct Vector2 {
		float x, y;
	};

	struct Vector3 {
		float x, y, z;
	};

	struct Vector4 {
		float x, y, z, w;
	};

	struct DoubleVector2 {
		double x, y;
	};

	struct DoubleVector3 {
		double x, y, z;
	};

	struct DoubleVector4 {
		double x, y, z, w;
	};
}

/// All of this is just such unecessary bullshit
//	The whole source it object orientated and classified FOR EVERYTHING
//	DO NOT DO THIS


namespace kVars
{
	//	-.-
	//inline CG::ULocalPlayer* localplayer = nullptr;
	//inline CG::APlayerController* l_controller = nullptr;

}
namespace weapon
{
	//	These are core toggles. They belong in GameData
	//inline bool aimbot = false;
	//inline bool noRecoil = false;
	//inline bool silentAim = false;
	//inline bool fastMelee = false;
	//inline bool fastReload = false;

	//	This is drawing stuff, belongs in Menu. Again, classes are there for a reason
	//inline int fovSize = 120;
	//inline int crosshairSize = 4;
	//inline float smoothing = 10.f;
	//inline float recoilAmount = 10.f;
	

}

namespace visuals
{
	//	again These belong in GameData
	//inline bool worldEsp = false;
	//inline bool lootEsp = false;
	//inline bool boatEsp = false;
	//inline bool locationEsp = false;
	//inline bool lootDistance = false;
	//inline bool boatDistance = false;
	//inline bool locationDistance = false;
	//inline bool heldtItem = false;
	//inline bool showCrew = false;
	//inline bool NPCesp = false;
	//inline bool esp = false;
	//inline int espStyle = 0;
	//inline bool snapLines = false;
	//inline bool disance = false;
	//inline bool names = false;
	
	// Belongs in Menu
	//inline bool drawFov = false;
	//inline bool fovFilled = false;

	//inline bool drawCrosshair = false;
	//inline int crossHairStyle = 0;
	
}

//	???
namespace Self
{

}

namespace Misc
{

}