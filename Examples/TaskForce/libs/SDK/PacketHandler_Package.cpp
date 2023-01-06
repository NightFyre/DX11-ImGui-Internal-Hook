/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandlerComponentFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandlerComponentFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetAnalyticsAggregatorConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetAnalyticsAggregatorConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.NetAnalyticsAggregatorConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPacketHandlerProfileConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketHandlerProfileConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

}


