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
	 * Class Discord.DiscordHelpers
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UDiscordHelpers : public UObject
	{
	public:
		bool                                                       IsConnected;                                             // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C407[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnConnected;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDisconnected;                                          // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnErrored;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJoin;                                                  // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpectate;                                              // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJoinRequest;                                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDiscordRichPresence                                RichPresence;                                            // 0x0090(0x00B8) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void UpdatePresence();
		void Shutdown();
		void RunCallbacks();
		void Respond(const class FString& userId, int32_t Reply);
		void Initialize(const class FString& applicationId, bool autoRegister, const class FString& optionalSteamId);
		void ClearPresence();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
