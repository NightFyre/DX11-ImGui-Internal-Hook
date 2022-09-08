#pragma once
#include "helper.h"

namespace DX11_Base {
	struct Colors {
		int dark_blue = 1;
		int dark_green = 2;
		int dark_teal = 3;
		int dark_red = 4;
		int dark_pink = 5;
		int dark_yellow = 6;
		int dark_white = 7;
		int dark_gray = 8;
		int blue = 9;
		int green = 10;
		int teal = 11;
		int red = 12;
		int pink = 13;
		int yellow = 14;
		int white = 15;
		int DEFAULT = 15;
	};

	class Console
	{
	public:
		FILE* stream_in{};
		FILE* stream_out{};
		FILE* stream_error{};
		Colors color;
		HANDLE g_Handle{};
		HWND g_hWnd{};
		bool verbose{};

		//	INPUT BUFFERS
		char input[32]{};
		char input2[32]{};

		explicit Console();
		~Console() noexcept = default;
		Console(Console const&) = delete;
		Console(Console&&) = delete;
		Console& operator=(Console const&) = delete;
		Console& operator=(Console&&) = delete;

		void InitializeConsole(const char* ConsoleName);
		void printdbg(const char* Text, int Color = {}, ...);
		void scandbg(const char* Text, ...);
		void LogEvent(std::string TEXT, bool FLAG);
		void DestroyConsole();

		//	FUNCTIONS
		bool writeFile(const char* Path, const char* Text, unsigned int Length, DWORD * out = {});
		bool readFile(const char* Path, char* Text, unsigned int Length, DWORD * out = {});
	};
	inline std::unique_ptr<Console> g_Console;
}