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
#include "libs/ImGui/imgui.h"
#include "libs/ImGui/imgui_internal.h"
#include "libs/ImGui/imgui_Impl_dx11.h"
#include "libs/ImGui/imgui_Impl_Win32.h"
#include "libs/MinHook/MinHook.h"

//	INTERNET
#include <Wininet.h>
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "wininet.lib")

namespace DX11_Base {
	using namespace std::chrono_literals;
	inline HMODULE g_hModule{};
	inline LPCWSTR g_ModuleName{};
	inline std::atomic_bool g_Running{};
	inline std::atomic_bool g_KillSwitch = FALSE;
	static uintptr_t dwGameBase{};

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