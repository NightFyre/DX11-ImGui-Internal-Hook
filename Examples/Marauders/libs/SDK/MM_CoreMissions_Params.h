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
	 * Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticBodyLook
	 */
	struct AMM_CoreMissions_C_SetCosmeticBodyLook_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticHeadLook
	 */
	struct AMM_CoreMissions_C_SetCosmeticHeadLook_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.UserConstructionScript
	 */
	struct AMM_CoreMissions_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_0E09B95D446008F88D074C8869BD53D8
	 */
	struct AMM_CoreMissions_C_OnLoaded_0E09B95D446008F88D074C8869BD53D8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_6459CD9F4948AA47B9A504929D4F8D75
	 */
	struct AMM_CoreMissions_C_OnLoaded_6459CD9F4948AA47B9A504929D4F8D75_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_54AAAB43426F0F85976D809EE994DE5F
	 */
	struct AMM_CoreMissions_C_OnLoaded_54AAAB43426F0F85976D809EE994DE5F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_A828E42D403CE37D41797BBD77EBD14A
	 */
	struct AMM_CoreMissions_C_OnLoaded_A828E42D403CE37D41797BBD77EBD14A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43
	 */
	struct AMM_CoreMissions_C_OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_AB2FE7DC45667CBE08A55D9085855075
	 */
	struct AMM_CoreMissions_C_OnLoaded_AB2FE7DC45667CBE08A55D9085855075_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.ContractsMenuHasBeenOpened
	 */
	struct AMM_CoreMissions_C_ContractsMenuHasBeenOpened_Params
	{	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.Update_CoreMissionsScene
	 */
	struct AMM_CoreMissions_C_Update_CoreMissionsScene_Params
	{
	public:
		struct FChapterMissionUI                                   Scene;                                                   // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMenuPlayerLook                                     PlayersActualLook;                                       // 0x0138(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.ReceiveTick
	 */
	struct AMM_CoreMissions_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.ReceiveBeginPlay
	 */
	struct AMM_CoreMissions_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.ShowHide_ContractsShipInHangar
	 */
	struct AMM_CoreMissions_C_ShowHide_ContractsShipInHangar_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_CoreMissions.MM_CoreMissions_C.ExecuteUbergraph_MM_CoreMissions
	 */
	struct AMM_CoreMissions_C_ExecuteUbergraph_MM_CoreMissions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V4T1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
