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
	 * Class HTML5Networking.WebSocketConnection
	 * Size -> 0x0010 (FullSize[0x19B0] - InheritedSize[0x19A0])
	 */
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_E7BW[0x10];                                  // 0x19A0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HTML5Networking.WebSocketNetDriver
	 * Size -> 0x0010 (FullSize[0x0758] - InheritedSize[0x0748])
	 */
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int32_t                                                    WebSocketPort;                                           // 0x0748(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKQL[0xC];                                   // 0x074C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
