#pragma once
#include "helper.h"
#include "Console.hpp"

namespace DX11_Base {

	class GameData
	{
	public:
		struct Offsets
		{
			//	UObjects
			//	48 8D 14 40 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB 03  49 8B C5 81 48 08 00 00 00 40
			int oGObjects = 0x3057438;	//	OLD 0x3055438;	//	OLD 0x30556F8;	//	OLD 0x30536B8;	//	OLD 0x30526B8;	//	OLD 0x3054538;	//	OLD 0x030574B8;	//	OLD 0x3155DD0;		//	OLD	0x3154D10;

			//	FNamePool
			//	48 85 D2 0F 84 ? ? ? ? 80 3A 00 0F 84 ? ? ? ? 48 89
			int oFNames = 0x303FEC0;	//	OLD 0x303DEC0;	//	OLD 0x303E180;	//	OLD 0x303C140;	//	OLD 0x303B140;	//	OLD 0x303CFC0;	//	OLD 0x0303FF40;	//	OLD 0x3155DD0;		//	OLD	0x3154D10;

			int oUWorld = 0x3158590;	//	OLD 0x3156590;	//	OLD 0x3156850;	//	OLD 0x3154800;	//	OLD 0x3153800;	//	OLD 0x3155680;	//	OLD 0x3158640;	//	OLD 0x3155DD0;		//	OLD	0x3154D10;

			int oPostRender = 0x16EB220;	//	OLD 0x16E9610;
		};	Offsets offsets;

		//	Dx & ImGui
		int g_GamePid{};
		HANDLE g_GameHandle{};
		HWND g_GameWindow{};
		int g_GameWidth;
		int g_GameHeight;
		ImVec2 g_WindowSize{};
		LPCSTR g_GameTitle;
		LPCSTR g_ClassName;
		LPCSTR g_GamePath;

		//	MENU RELATED
		bool m_ShowMenu{};
		bool m_ShowHud{};
		bool m_ShowDemo{};

		bool aimbot = false;
		bool noRecoil = false;
		bool rapid_fire = false;
		bool unlimited_ammo = false;
		bool no_recoil = false;
		bool godmode = false;
		int movementmode = 1;
		bool esp = false;
		bool worldesp = false;
		bool customFov = false;
		float customFov_Amount = 90.f;

		void Init();

		explicit GameData();
		~GameData() noexcept = default;
		GameData(GameData const&) = delete;
		GameData(GameData&&) = delete;
		GameData& operator=(GameData const&) = delete;
		GameData& operator=(GameData&&) = delete;
	};
	inline std::unique_ptr<GameData> g_GameData;
}

