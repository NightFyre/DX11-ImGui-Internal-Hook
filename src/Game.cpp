#include "../pch.h"
#include "../include/Game.hpp"
namespace DX11_Base {
	GameData::GameData() {}

	void GameData::Init()
	{
		this->mPID = GetCurrentProcessId();
		this->pHandle = GetCurrentProcess();
		this->pHwnd = GetForegroundWindow();		//	@NOTE: this might not capture the main game window

		RECT tempRECT;
		GetWindowRect(this->pHwnd, &tempRECT);
		this->mWndwX = tempRECT.right - tempRECT.left;
		this->mWndwY = tempRECT.bottom - tempRECT.top;

		char tempTitle[MAX_PATH];
		GetWindowTextA(this->pHwnd, tempTitle, sizeof(tempTitle));
		this->mTitle = tempTitle;

		char tempClassName[MAX_PATH];
		GetClassNameA(this->pHwnd, tempClassName, sizeof(tempClassName));
		this->mWndwClassName = tempClassName;

		char tempPath[MAX_PATH];
		GetModuleFileNameExA(this->pHandle, NULL, tempPath, sizeof(tempPath));
		this->mPath = tempPath;

#if CONSOLE_OUTPUT
		g_Console->printdbg("[+][GameData::Init]\n", Console::Colors::green);
#endif
	}

	bool GameData::GamePadGetKeyState(WORD combinationButtons)
	{
		XINPUT_STATE state;
		ZeroMemory(&state, sizeof(XINPUT_STATE));
		DWORD result = XInputGetState(0, &state);
		if (result == ERROR_SUCCESS)
		{
			if ((state.Gamepad.wButtons & combinationButtons) == combinationButtons)
				return true;
		}
		return false;
	}
}