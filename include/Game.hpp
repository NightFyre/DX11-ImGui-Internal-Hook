#pragma once
#include "helper.h"
#include "Console.hpp"

namespace DX11_Base 
{
	class GameData
	{
	public:
		int							mPID{};
		HANDLE						pHandle{};
		HWND						pHwnd{};
		int							mWndwX;
		int							mWndwY;
		LPCSTR						mTitle;
		LPCSTR						mWndwClassName;
		LPCSTR						mPath;


	public:
		void						Init();

	public:
		static bool					GamePadGetKeyState(WORD combinationButtons);
	
	public:
		explicit GameData();
		~GameData() noexcept = default;
		GameData(GameData const&) = delete;
		GameData(GameData&&) = delete;
		GameData& operator=(GameData const&) = delete;
		GameData& operator=(GameData&&) = delete;
	};

	inline std::unique_ptr<GameData> g_GameData;
}
