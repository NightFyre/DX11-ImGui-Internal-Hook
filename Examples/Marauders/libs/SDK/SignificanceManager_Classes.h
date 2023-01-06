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
	 * Class SignificanceManager.SignificanceManager
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class USignificanceManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_DL26[0xE0];                                  // 0x0028(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      SignificanceManagerClassName;                            // 0x0108(0x0018) Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
