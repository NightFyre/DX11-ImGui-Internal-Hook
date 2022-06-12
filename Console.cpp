#include "Console.hpp"
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

	bool Console::writeFile(const char* Path, const char* Text, unsigned int Length, DWORD* out)
	{
		DWORD temp = 0;
		if (out == NULL)
			out = &temp;
		*out = 0;
		auto handle = CreateFileA(Path, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (handle)
		{
			bool result = WriteFile(handle, Text, Length, out, NULL) && *out > 0;
			CloseHandle(handle);
			return result;
		}
		return false;
	}

	bool Console::readFile(const char* Path, char* Text, unsigned int Length, DWORD* out)
	{
		DWORD temp = 0;
		if (out == NULL)
			out = &temp;
		*out = 0;
		auto handle = CreateFileA(Path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (handle)
		{
			bool result = ReadFile(handle, Text, Length, out, NULL) && *out > 0;
			CloseHandle(handle);
			return result;
		}
		return false;
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