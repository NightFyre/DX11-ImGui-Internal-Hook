#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function BP_HUD.BP_HUD_C.OnFailure_7FB740D746036AAF99AF80B3BF2FE39D
	 */
	struct ABP_HUD_C_OnFailure_7FB740D746036AAF99AF80B3BF2FE39D_Params
	{
	public:
		TArray<int64_t>                                            SteamIDs;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnSuccess_7FB740D746036AAF99AF80B3BF2FE39D
	 */
	struct ABP_HUD_C_OnSuccess_7FB740D746036AAF99AF80B3BF2FE39D_Params
	{
	public:
		TArray<int64_t>                                            SteamIDs;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ReceiveBeginPlay
	 */
	struct ABP_HUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.OnVoiceStart
	 */
	struct ABP_HUD_C_OnVoiceStart_Params
	{	};

	/**
	 * Function BP_HUD.BP_HUD_C.ReceiveDrawHUD
	 */
	struct ABP_HUD_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
	 */
	struct ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
