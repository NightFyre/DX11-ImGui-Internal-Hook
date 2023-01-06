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
	 * Function MM_PlayerChar.MM_PlayerChar_C.CheckIfItemHasOffset
	 */
	struct AMM_PlayerChar_C_CheckIfItemHasOffset_Params
	{
	public:
		class USkeletalMeshComponent*                              WhichSkelMesh;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.CheckIfShouldOffset
	 */
	struct AMM_PlayerChar_C_CheckIfShouldOffset_Params
	{
	public:
		bool                                                       Secondary;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OU0P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F6L1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OffsetToUse;                                             // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		bool                                                       HasAnOffset;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9TFF[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.ClearAllSecondaryModules
	 */
	struct AMM_PlayerChar_C_ClearAllSecondaryModules_Params
	{	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.ClearAllPrimaryModules
	 */
	struct AMM_PlayerChar_C_ClearAllPrimaryModules_Params
	{	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.GetSetPlayerItem
	 */
	struct AMM_PlayerChar_C_GetSetPlayerItem_Params
	{
	public:
		class USkinnedMeshComponent*                               WhichSkellMesh;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EquipmentName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Debug;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M1P2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMesh*                                       NewMesh;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Successful;                                              // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19U0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.UserConstructionScript
	 */
	struct AMM_PlayerChar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C
	 */
	struct AMM_PlayerChar_C_OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D
	 */
	struct AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1
	 */
	struct AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5
	 */
	struct AMM_PlayerChar_C_OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2
	 */
	struct AMM_PlayerChar_C_OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438621061219
	 */
	struct AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F3438621061219_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F077B743F
	 */
	struct AMM_PlayerChar_C_OnLoaded_C6727CBB4E576E606EF2BF9F077B743F_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.ReceiveBeginPlay
	 */
	struct AMM_PlayerChar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.ShowHideOtherPlayer
	 */
	struct AMM_PlayerChar_C_ShowHideOtherPlayer_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.Refresh_PlayerLookActor
	 */
	struct AMM_PlayerChar_C_Refresh_PlayerLookActor_Params
	{
	public:
		struct FMenuPlayerLook                                     PlayerLook;                                              // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.Cosmetic_ExampleFakeBodyPart
	 */
	struct AMM_PlayerChar_C_Cosmetic_ExampleFakeBodyPart_Params
	{
	public:
		class FName                                                ItemDTrowName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticSlot                                              Current_ApperBodyPart;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_PlayerChar.MM_PlayerChar_C.ExecuteUbergraph_MM_PlayerChar
	 */
	struct AMM_PlayerChar_C_ExecuteUbergraph_MM_PlayerChar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E6SK[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
