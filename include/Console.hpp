#pragma once
#include "helper.h"

namespace DX11_Base 
{

	class Console
	{
	public:
		enum Colors
		{
			dark_blue = 1,
			dark_green,
			dark_teal,
			dark_red,
			dark_pink,
			dark_yellow,
			dark_white,
			dark_gray,
			blue,
			green,
			teal,
			red,
			pink,
			yellow,
			white,
			DEFAULT = white,
		};

	public:
		FILE*						stream_in{};
		FILE*						stream_out{};
		FILE*						stream_error{};
		char						input[32]{};		//	@NOTE: 32 max char
		char						input2[32]{};		//	@NOTE: 32 max char
		bool						bShowConsole{ true };

	public:
		void						InitializeConsole(const char* ConsoleName, bool bShowWindow = true);
		void						printdbg(const char* Text, Colors color = Colors::DEFAULT, ...);
		void						scandbg(const char* Text, ...);
		void						DestroyConsole();
		void						SetConsoleVisibility(bool bShow);
		HANDLE						GetHandle();
		HWND						GetWindowHandle();

	public:
		explicit Console();
		Console(const char* title);
		Console(const char* title, bool bShow);
		~Console() noexcept = default;
		Console(Console const&) = delete;
		Console(Console&&) = delete;
		Console& operator=(Console const&) = delete;
		Console& operator=(Console&&) = delete;

	private:
		HANDLE						pHandle{};
		HWND						pHwnd{};
	};
	inline std::unique_ptr<Console> g_Console;
}