#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	 */
	struct AMagicLeapARPinInfoActor_C_UpdatePinState_Params
	{	};

	/**
	 * Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	 */
	struct AMagicLeapARPinInfoActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	 */
	struct AMagicLeapARPinInfoActor_C_OnUpdateARPinState_Params
	{	};

	/**
	 * Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	 */
	struct AMagicLeapARPinInfoActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	 */
	struct AMagicLeapARPinInfoActor_C_ExecuteUbergraph_MagicLeapARPinInfoActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKNE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
