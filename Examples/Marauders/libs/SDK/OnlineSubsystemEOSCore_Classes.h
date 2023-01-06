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
	 * Class OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UCreateEOSSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR2R[0xA0];                                  // 0x0050(0x00A0) MISSED OFFSET (PADDING)

	public:
		class UCreateEOSSessionCallbackProxy* Create_EOS_Session(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSetting> SessionSettings, const class FString& SessionName, int32_t PublicConnections, bool bIsLanMatch);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.EOSCoreSettings
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UEOSCoreSettings : public UDeveloperSettings
	{
	public:
		class FString                                              DefaultConfigurationName;                                // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TickBudgetInMilliseconds;                                // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PKU[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IOSClientId;                                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidClientId;                                         // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSConfig>                                  EOSConfigurations;                                       // 0x0070(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	class UFindEOSSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5S0[0x98];                                  // 0x0040(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnCompleted(bool bSuccessful);
		class UFindEOSSessionsCallbackProxy* FindEOSSessions(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSearchSetting> SearchSettings, int32_t maxResults, bool bIsLanQuery);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.NetConnectionEOSCore
	 * Size -> 0x0008 (FullSize[0x1B98] - InheritedSize[0x1B90])
	 */
	class UNetConnectionEOSCore : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_X47Q[0x8];                                   // 0x1B90(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.NetDriverEOSCore
	 * Size -> 0x0008 (FullSize[0x07C0] - InheritedSize[0x07B8])
	 */
	class UNetDriverEOSCore : public UIpNetDriver
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x07B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingP2PSockets;                                      // 0x07B9(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBMQ[0x6];                                   // 0x07BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.EOSSubsystemLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEOSSubsystemLibrary : public UObject
	{
	public:
		void StopListeningForSessionInvites(class APlayerController* PlayerController);
		void ListenForSessionInvites(class APlayerController* PlayerController, const class FScriptDelegate& Callback);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UUpdateEOSSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnCallback;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNGM[0x88];                                  // 0x0040(0x0088) MISSED OFFSET (PADDING)

	public:
		class UUpdateEOSSessionCallbackProxy* Update_EOS_Session(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSearchSetting> Settings, const class FString& SessionName, int32_t PublicConnections);
		void OnCompleted(const class FName& SessionName, bool bWasSuccessful);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
