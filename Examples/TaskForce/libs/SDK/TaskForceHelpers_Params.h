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
	 * Function TaskForceHelpers.TaskForceHelpers_C.GetButtonMaxHoldTime
	 */
	struct UTaskForceHelpers_C_GetButtonMaxHoldTime_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxHoldTime;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O6UY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.IsButtonLocked
	 */
	struct UTaskForceHelpers_C_IsButtonLocked_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Locked;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JD2J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.IsButtonOneTime
	 */
	struct UTaskForceHelpers_C_IsButtonOneTime_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OneTime;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5C23[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.ReleaseButton
	 */
	struct UTaskForceHelpers_C_ReleaseButton_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Released;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GZ6A[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.PressButton
	 */
	struct UTaskForceHelpers_C_PressButton_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Pressed;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KRKZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.DestroyActor
	 */
	struct UTaskForceHelpers_C_DestroyActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.GetDefaultPawnClass
	 */
	struct UTaskForceHelpers_C_GetDefaultPawnClass_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              DefaultClass;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Skeleton;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G709[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      Blueprints;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.GetSkin
	 */
	struct UTaskForceHelpers_C_GetSkin_Params
	{
	public:
		TMap<class FString, struct FTaskForceSkin>                 Skins;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		class FString                                              Key;                                                     // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Seed;                                                    // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EV0F[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Empty;                                                   // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VB3B[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaskForceSkin                                      Skin;                                                    // 0x0078(0x02F0)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.FindSkin
	 */
	struct UTaskForceHelpers_C_FindSkin_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPLV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Seed;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9NK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FTaskForceSkin>                 Skins0;                                                  // 0x0020(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 Skins1;                                                  // 0x0070(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 Skins2;                                                  // 0x00C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		class UObject*                                             __WorldContext;                                          // 0x0110(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTaskForceSkin                                      Skin;                                                    // 0x0118(0x02F0)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SpawnDefaultPawn
	 */
	struct UTaskForceHelpers_C_SpawnDefaultPawn_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, struct FTaskForceSkin>                 Skins0;                                                  // 0x0010(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 Skins1;                                                  // 0x0060(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 Skins2;                                                  // 0x00B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		class UObject*                                             __WorldContext;                                          // 0x0100(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupGameSkins
	 */
	struct UTaskForceHelpers_C_SetupGameSkins_Params
	{
	public:
		unsigned char                                              UnknownData_3X22[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TeamID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_POI9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FTaskForceSkin>                 Skins;                                                   // 0x0018(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		ETaskForceRegions                                          Region;                                                  // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ColdWeather;                                             // 0x0069(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6UE[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupGame
	 */
	struct UTaskForceHelpers_C_SetupGame_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupBreaches
	 */
	struct UTaskForceHelpers_C_SetupBreaches_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupButtons
	 */
	struct UTaskForceHelpers_C_SetupButtons_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.ClearAll
	 */
	struct UTaskForceHelpers_C_ClearAll_Params
	{
	public:
		class AActor*                                              World_Context;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupWeapons
	 */
	struct UTaskForceHelpers_C_SetupWeapons_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupDoors
	 */
	struct UTaskForceHelpers_C_SetupDoors_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupLadders
	 */
	struct UTaskForceHelpers_C_SetupLadders_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupExtraction
	 */
	struct UTaskForceHelpers_C_SetupExtraction_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupSpawns
	 */
	struct UTaskForceHelpers_C_SetupSpawns_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceHelpers.TaskForceHelpers_C.SetupDemolition
	 */
	struct UTaskForceHelpers_C_SetupDemolition_Params
	{
	public:
		class AGameModeBase*                                       GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
