#include "../pch.h"
#include "../include/Console.hpp"
namespace DX11_Base 
{
	//	
	Console::Console() { }
	Console::Console(const char* title) { InitializeConsole(title); }
	Console::Console(const char* title, bool bShow) { InitializeConsole(title, bShow); }

	//	
	HANDLE Console::GetHandle() { return this->pHandle; }
	HWND Console::GetWindowHandle() { return this->pHwnd; }

	//	creates a console instance with input name <consoleName>
	void Console::InitializeConsole(const char* ConsoleName, bool bShowWindow)
	{
		AllocConsole();
		this->pHandle = GetStdHandle(STD_OUTPUT_HANDLE);
		this->pHwnd = GetConsoleWindow();
		freopen_s(&this->stream_in, "CONIN$", "r", stdin);
		freopen_s(&this->stream_out, "CONOUT$", "w", stdout);
		freopen_s(&this->stream_error, "CONOUT$", "w", stderr);

		char titleBuff[256];
		sprintf_s(titleBuff, "[DX11Base] %s", ConsoleName);
		SetConsoleTitleA(titleBuff);

		int cmdShow = bShowWindow ? SW_SHOW : SW_HIDE;
		ShowWindow(this->pHwnd, cmdShow);
	}

	//	raw print to console with desired color and formatting
	void Console::printdbg(const char* Text, Colors color, ...)
	{
		SetConsoleTextAttribute(this->pHwnd, color);
		va_list arg;
		va_start(arg, color);
		vfprintf(this->stream_out, Text, arg);
		va_end(arg);
		SetConsoleTextAttribute(this->pHwnd, Colors::DEFAULT);
	}

	//	console take input from user 
	void Console::scandbg(const char* Text, ...)
	{
		va_list arg;
		va_start(arg, Text);
		vfscanf(this->stream_in, Text, arg);
		va_end(arg);
	}

	//	
	void Console::DestroyConsole()
	{
		fclose(this->stream_in);
		fclose(this->stream_out);
		fclose(this->stream_error);
		DestroyWindow(this->pHwnd);
		FreeConsole();
	}

	//	
	void Console::SetConsoleVisibility(bool bShow)
	{
		this->bShowConsole = bShow;
		this->bShowConsole ? ShowWindow(this->pHwnd, SW_SHOW) : ShowWindow(this->pHwnd, SW_HIDE);
	}

}