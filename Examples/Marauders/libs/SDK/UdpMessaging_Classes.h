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
	 * Class UdpMessaging.UdpMessagingSettings
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UUdpMessagingSettings : public UObject
	{
	public:
		bool                                                       EnabledByDefault;                                        // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTransport;                                         // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoRepair;                                             // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopServiceWhenAppDeactivates;                          // 0x002B(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E61E[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UnicastEndpoint;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MulticastEndpoint;                                       // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdpMessageFormat                                          MessageFormat;                                           // 0x0050(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MulticastTimeToLive;                                     // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YI3A[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      StaticEndpoints;                                         // 0x0058(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       EnableTunnel;                                            // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NX3[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TunnelUnicastEndpoint;                                   // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TunnelMulticastEndpoint;                                 // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RemoteTunnelEndpoints;                                   // 0x0090(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
