#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetDisplayTipTextIndex(int32_t TipTextIndex);
		void SetDisplayMovieIndex(int32_t MovieIndex);
		void SetDisplayBackgroundIndex(int32_t BackgroundIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class AsyncLoadingScreen.LoadingScreenSettings
	 * Size -> 0x0AF8 (FullSize[0x0B30] - InheritedSize[0x0038])
	 */
	class ULoadingScreenSettings : public UDeveloperSettings
	{
	public:
		struct FALoadingScreenSettings                             StartupLoadingScreen;                                    // 0x0038(0x0348) Edit, Config, NativeAccessSpecifierPublic
		struct FALoadingScreenSettings                             DefaultLoadingScreen;                                    // 0x0380(0x0348) Edit, Config, NativeAccessSpecifierPublic
		struct FClassicLayoutSettings                              Classic;                                                 // 0x06C8(0x00A8) Edit, Config, NativeAccessSpecifierPublic
		struct FCenterLayoutSettings                               Center;                                                  // 0x0770(0x00A0) Edit, Config, NativeAccessSpecifierPublic
		struct FLetterboxLayoutSettings                            Letterbox;                                               // 0x0810(0x0138) Edit, Config, NativeAccessSpecifierPublic
		struct FSidebarLayoutSettings                              Sidebar;                                                 // 0x0948(0x00B0) Edit, Config, NativeAccessSpecifierPublic
		struct FDualSidebarLayoutSettings                          DualSidebar;                                             // 0x09F8(0x0138) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
