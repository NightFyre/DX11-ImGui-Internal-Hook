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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UObjectPlugin.MyPluginStruct
	 * Size -> 0x0010
	 */
	struct FMyPluginStruct
	{
	public:
		class FString                                              TestString;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
