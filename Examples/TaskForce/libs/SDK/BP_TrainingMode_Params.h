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
	 * Function BP_TrainingMode.BP_TrainingMode_C.GetMode
	 */
	struct ABP_TrainingMode_C_GetMode_Params
	{
	public:
		ETaskForceModes                                            Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.ClearCharacters
	 */
	struct ABP_TrainingMode_C_ClearCharacters_Params
	{	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.RemoveCharacter
	 */
	struct ABP_TrainingMode_C_RemoveCharacter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetRoundSounds
	 */
	struct ABP_TrainingMode_C_SetRoundSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   RoundStartMusic1;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundStartMusic2;                                        // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinVoice1;                                          // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinMusic1;                                          // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinVoice2;                                          // 0x0040(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinMusic2;                                          // 0x0050(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetRoundMessages
	 */
	struct ABP_TrainingMode_C_SetRoundMessages_Params
	{
	public:
		TMap<int32_t, class FString>                               RoundStart;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               RoundWin;                                                // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               RoundDraw;                                               // 0x00A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.ClearSpawns
	 */
	struct ABP_TrainingMode_C_ClearSpawns_Params
	{	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.RemoveSpawn
	 */
	struct ABP_TrainingMode_C_RemoveSpawn_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddBreach
	 */
	struct ABP_TrainingMode_C_AddBreach_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         Mesh;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         ExplodedMesh;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Extents;                                                 // 0x004C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddSkin
	 */
	struct ABP_TrainingMode_C_AddSkin_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6VJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTaskForceSkin                                      Skin;                                                    // 0x0018(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetDefaultSkins
	 */
	struct ABP_TrainingMode_C_SetDefaultSkins_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETaskForceRegions                                          Region;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ColdWeather;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddSpawn
	 */
	struct ABP_TrainingMode_C_AddSpawn_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddCharacter
	 */
	struct ABP_TrainingMode_C_AddCharacter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SF18[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              Head;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Body;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FName, class USkeletalMeshComponent*>           Helmets;                                                 // 0x0020(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
		TMap<class FName, class USkeletalMeshComponent*>           Shirts;                                                  // 0x0070(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
		TMap<class FName, class USkeletalMeshComponent*>           Pants;                                                   // 0x00C0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
		TMap<class FName, class USkeletalMeshComponent*>           Boots;                                                   // 0x0110(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
		TMap<class FName, class USkeletalMeshComponent*>           Gloves;                                                  // 0x0160(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
		TMap<class FName, class USkeletalMeshComponent*>           Gear;                                                    // 0x01B0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.ReceiveBeginPlay
	 */
	struct ABP_TrainingMode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetRegion
	 */
	struct ABP_TrainingMode_C_SetRegion_Params
	{
	public:
		class FName                                                Region;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddLadder
	 */
	struct ABP_TrainingMode_C_AddLadder_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Width;                                                   // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetTeamIcon
	 */
	struct ABP_TrainingMode_C_SetTeamIcon_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZH1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaskForceIcon                                      Icon;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddDoor
	 */
	struct ABP_TrainingMode_C_AddDoor_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         Mesh;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rotation;                                                // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x004C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetTeamName
	 */
	struct ABP_TrainingMode_C_SetTeamName_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0I3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddWeapon
	 */
	struct ABP_TrainingMode_C_AddWeapon_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class FString                                              Name;                                                    // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SetTeams
	 */
	struct ABP_TrainingMode_C_SetTeams_Params
	{
	public:
		TMap<class FString, struct FTaskForceIcon>                 Teams;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.SpawnWeapons
	 */
	struct ABP_TrainingMode_C_SpawnWeapons_Params
	{	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.AddButton
	 */
	struct ABP_TrainingMode_C_AddButton_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Extents;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BROG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class USoundCue*                                           PressedSound;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           ReleasedSound;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainingMode.BP_TrainingMode_C.ExecuteUbergraph_BP_TrainingMode
	 */
	struct ABP_TrainingMode_C_ExecuteUbergraph_BP_TrainingMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
