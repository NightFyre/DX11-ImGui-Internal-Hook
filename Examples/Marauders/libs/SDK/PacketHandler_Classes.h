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
	 * Class PacketHandler.HandlerComponentFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHandlerComponentFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PacketHandler.PacketHandlerProfileConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPacketHandlerProfileConfig : public UObject
	{
	public:
		TArray<class FString>                                      Components;                                              // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
