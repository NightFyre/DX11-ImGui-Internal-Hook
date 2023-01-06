/**
 * Name: RaidGame
 * Version: 1
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
	 * 		Name   -> PredefinedFunction UUdpMessagingSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdpMessagingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

}


