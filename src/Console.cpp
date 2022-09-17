#include "../pch.h"
#include "../include/Console.hpp"
namespace DX11_Base {
	Console::Console()
	{
		return;
	}

	void Console::InitializeConsole(const char* ConsoleName)
	{
		AllocConsole();
		g_Handle = GetStdHandle(STD_OUTPUT_HANDLE);
		g_hWnd = GetConsoleWindow();
		freopen_s(&stream_in, "CONIN$", "r", stdin);
		freopen_s(&stream_out, "CONOUT$", "w", stdout);
		freopen_s(&stream_error, "CONOUT$", "w", stderr);
		SetConsoleTitleA(ConsoleName);
		ShowWindow(g_hWnd, SW_SHOW);
		return;
	}

	void Console::printdbg(const char* Text, int Color, ...)
	{
		SetConsoleTextAttribute(g_Handle, Color);
		va_list arg;
		va_start(arg, Color);
		vfprintf(stream_out, Text, arg);
		va_end(arg);
		SetConsoleTextAttribute(g_Handle, color.DEFAULT);
		return;
	}

	void Console::scandbg(const char* Text, ...)
	{
		va_list arg;
		va_start(arg, Text);
		vfscanf(stream_in, Text, arg);
		va_end(arg);
		return;
	}

	void Console::LogEvent(std::string TEXT, bool FLAG)
	{
		std::string output;
		std::string append;
		int color;
		switch (FLAG) {
		case(TRUE):
			output = " [ON]\n";
			color = g_Console->color.green;
			append = TEXT + output;
			printdbg(append.c_str(), color);
			break;
		case(FALSE):
			output = " [OFF]\n";
			color = g_Console->color.red;
			append = TEXT + output;
			printdbg(append.c_str(), color);
			break;
		}
	}

	void Console::DestroyConsole()
	{
		fclose(stream_in);
		fclose(stream_out);
		fclose(stream_error);
		DestroyWindow(g_hWnd);
		FreeConsole();
		return;
	}
}