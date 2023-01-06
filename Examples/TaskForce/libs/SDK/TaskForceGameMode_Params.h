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
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetDefaultSkins
	 */
	struct UTaskForceGameMode_C_SetDefaultSkins_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETaskForceRegions                                          Region;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ColdWeather;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddSkin
	 */
	struct UTaskForceGameMode_C_AddSkin_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O34O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTaskForceSkin                                      Skin;                                                    // 0x0018(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.GetMode
	 */
	struct UTaskForceGameMode_C_GetMode_Params
	{
	public:
		ETaskForceModes                                            Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddBreach
	 */
	struct UTaskForceGameMode_C_AddBreach_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         Mesh;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         ExplodedMesh;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Extents;                                                 // 0x004C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddButton
	 */
	struct UTaskForceGameMode_C_AddButton_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Extents;                                                 // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_72QB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class USoundCue*                                           PressedSound;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           ReleasedSound;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddWeapon
	 */
	struct UTaskForceGameMode_C_AddWeapon_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class FString                                              Name;                                                    // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddDoor
	 */
	struct UTaskForceGameMode_C_AddDoor_Params
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
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddLadder
	 */
	struct UTaskForceGameMode_C_AddLadder_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Width;                                                   // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.RemoveSpawn
	 */
	struct UTaskForceGameMode_C_RemoveSpawn_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.ClearSpawns
	 */
	struct UTaskForceGameMode_C_ClearSpawns_Params
	{	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddSpawn
	 */
	struct UTaskForceGameMode_C_AddSpawn_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetRoundMessages
	 */
	struct UTaskForceGameMode_C_SetRoundMessages_Params
	{
	public:
		TMap<int32_t, class FString>                               RoundStart;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               RoundWin;                                                // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               RoundDraw;                                               // 0x00A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetRoundSounds
	 */
	struct UTaskForceGameMode_C_SetRoundSounds_Params
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
	 * Function TaskForceGameMode.TaskForceGameMode_C.RemoveCharacter
	 */
	struct UTaskForceGameMode_C_RemoveCharacter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.ClearCharacters
	 */
	struct UTaskForceGameMode_C_ClearCharacters_Params
	{	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.AddCharacter
	 */
	struct UTaskForceGameMode_C_AddCharacter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3M43[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetRegion
	 */
	struct UTaskForceGameMode_C_SetRegion_Params
	{
	public:
		class FName                                                Region;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetTeamIcon
	 */
	struct UTaskForceGameMode_C_SetTeamIcon_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VSJ1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaskForceIcon                                      Icon;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetTeamName
	 */
	struct UTaskForceGameMode_C_SetTeamName_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3AQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceGameMode.TaskForceGameMode_C.SetTeams
	 */
	struct UTaskForceGameMode_C_SetTeams_Params
	{
	public:
		TMap<class FString, struct FTaskForceIcon>                 Teams;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
