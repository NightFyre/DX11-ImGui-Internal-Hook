#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Class OnlineSubsystem.NamedInterfaces
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UNamedInterfaces : public UObject
	{
	public:
		TArray<struct FNamedInterface>                             NamedInterfaces;                                         // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNamedInterfaceDef>                          NamedInterfaceDefs;                                      // 0x0038(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QZLD[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystem.TurnBasedMatchInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedMatchInterface : public UInterface
	{
	public:
		void OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive);
		void OnMatchEnded(const class FString& Match);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
