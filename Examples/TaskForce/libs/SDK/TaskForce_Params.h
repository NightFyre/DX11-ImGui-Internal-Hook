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
	 * Function TaskForce.TaskForceBeaconClient.ServerPong
	 */
	struct ATaskForceBeaconClient_ServerPong_Params
	{
	public:
		int32_t                                                    BuildID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7A6N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Password;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBeaconClient.ClientPing
	 */
	struct ATaskForceBeaconClient_ClientPing_Params
	{
	public:
		bool                                                       bNeedsPassword;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBeaconClient.ClientJoin
	 */
	struct ATaskForceBeaconClient_ClientJoin_Params
	{
	public:
		bool                                                       bCanJoin;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1SE8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              JoinSteamP2P;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              JoinHostAddress;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FailedMessage;                                           // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBomb.SetCustomMesh
	 */
	struct ATaskForceBomb_SetCustomMesh_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Socket;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4OZE[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBomb.ResetBomb
	 */
	struct ATaskForceBomb_ResetBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.PlantBombResetPhysics
	 */
	struct ATaskForceBomb_PlantBombResetPhysics_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.PlantBomb
	 */
	struct ATaskForceBomb_PlantBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.PickupBomb
	 */
	struct ATaskForceBomb_PickupBomb_Params
	{
	public:
		class ATaskForceCharacter*                                 NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBomb.OnRep_Exploded
	 */
	struct ATaskForceBomb_OnRep_Exploded_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.OnRep_CustomMesh
	 */
	struct ATaskForceBomb_OnRep_CustomMesh_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.OnRep_AttachTransform
	 */
	struct ATaskForceBomb_OnRep_AttachTransform_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.OnRep_AttachSocket
	 */
	struct ATaskForceBomb_OnRep_AttachSocket_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.ExplodeBomb
	 */
	struct ATaskForceBomb_ExplodeBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.DropBomb
	 */
	struct ATaskForceBomb_DropBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBomb.DefuseBomb
	 */
	struct ATaskForceBomb_DefuseBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBotController.ShootEnemy
	 */
	struct ATaskForceBotController_ShootEnemy_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBotController.IsHostage
	 */
	struct ATaskForceBotController_IsHostage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBotController.FindClosestTarget
	 */
	struct ATaskForceBotController_FindClosestTarget_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBotController.FindClosestEnemyWithLOS
	 */
	struct ATaskForceBotController_FindClosestEnemyWithLOS_Params
	{
	public:
		class ATaskForceCharacter*                                 ExcludeEnemy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBotController.FindClosestEnemy
	 */
	struct ATaskForceBotController_FindClosestEnemy_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBreach.TriggerBreach
	 */
	struct ATaskForceBreach_TriggerBreach_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBreach.ResetState
	 */
	struct ATaskForceBreach_ResetState_Params
	{	};

	/**
	 * Function TaskForce.TaskForceBreach.IsBreachExploded
	 */
	struct ATaskForceBreach_IsBreachExploded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBreach.IsBreachActive
	 */
	struct ATaskForceBreach_IsBreachActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceBreach.Explode
	 */
	struct ATaskForceBreach_Explode_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceButton.ToggleButton
	 */
	struct ATaskForceButton_ToggleButton_Params
	{
	public:
		bool                                                       bReleased;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceButton.ResetState
	 */
	struct ATaskForceButton_ResetState_Params
	{	};

	/**
	 * Function TaskForce.TaskForceButton.IsButtonPressable
	 */
	struct ATaskForceButton_IsButtonPressable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceButton.GetButtonText
	 */
	struct ATaskForceButton_GetButtonText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.UnProne
	 */
	struct ATaskForceCharacter_UnProne_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ThrowProjectile
	 */
	struct ATaskForceCharacter_ThrowProjectile_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.TauntReset
	 */
	struct ATaskForceCharacter_TauntReset_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StopProjectile
	 */
	struct ATaskForceCharacter_StopProjectile_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StartLadderPull
	 */
	struct ATaskForceCharacter_StartLadderPull_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StartLadderHang
	 */
	struct ATaskForceCharacter_StartLadderHang_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StartLadderDrop
	 */
	struct ATaskForceCharacter_StartLadderDrop_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StartClimbJump
	 */
	struct ATaskForceCharacter_StartClimbJump_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.StartClimbHang
	 */
	struct ATaskForceCharacter_StartClimbHang_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.SpawnLadderFootstepEffects
	 */
	struct ATaskForceCharacter_SpawnLadderFootstepEffects_Params
	{
	public:
		class USoundCue*                                           FootstepSound;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.SpawnFootstepEffects
	 */
	struct ATaskForceCharacter_SpawnFootstepEffects_Params
	{
	public:
		class FName                                                Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                DirectionSocket;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLeftFoot;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.SpawnCalloutEffects
	 */
	struct ATaskForceCharacter_SpawnCalloutEffects_Params
	{
	public:
		class USoundCue*                                           CalloutSound;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ShouldPersistRagdoll
	 */
	struct ATaskForceCharacter_ShouldPersistRagdoll_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ShouldClimbRun
	 */
	struct ATaskForceCharacter_ShouldClimbRun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ShouldClimbLow
	 */
	struct ATaskForceCharacter_ShouldClimbLow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ShouldClimbJump
	 */
	struct ATaskForceCharacter_ShouldClimbJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ShouldClimbHigh
	 */
	struct ATaskForceCharacter_ShouldClimbHigh_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerTriggerVoiceTaunt
	 */
	struct ATaskForceCharacter_ServerTriggerVoiceTaunt_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerTriggerTaunt
	 */
	struct ATaskForceCharacter_ServerTriggerTaunt_Params
	{
	public:
		class ATaskForceCharacter*                                 Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerTriggerDoor
	 */
	struct ATaskForceCharacter_ServerTriggerDoor_Params
	{
	public:
		class ATaskForceDoor*                                      Door;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerTriggerButton
	 */
	struct ATaskForceCharacter_ServerTriggerButton_Params
	{
	public:
		class ATaskForceButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReleased;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerTriggerBreach
	 */
	struct ATaskForceCharacter_ServerTriggerBreach_Params
	{
	public:
		class ATaskForceBreach*                                    Breach;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetZooming
	 */
	struct ATaskForceCharacter_ServerSetZooming_Params
	{
	public:
		float                                                      fNewZooming;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetWalking
	 */
	struct ATaskForceCharacter_ServerSetWalking_Params
	{
	public:
		bool                                                       bNewWalking;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetThrowing
	 */
	struct ATaskForceCharacter_ServerSetThrowing_Params
	{
	public:
		bool                                                       bNewThrow;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetTargeting
	 */
	struct ATaskForceCharacter_ServerSetTargeting_Params
	{
	public:
		float                                                      fNewTargeting;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetRunning
	 */
	struct ATaskForceCharacter_ServerSetRunning_Params
	{
	public:
		bool                                                       bNewRunning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetPower
	 */
	struct ATaskForceCharacter_ServerSetPower_Params
	{
	public:
		float                                                      fNewPower;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetPlanting
	 */
	struct ATaskForceCharacter_ServerSetPlanting_Params
	{
	public:
		bool                                                       bNewPlanting;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetLeaningRight
	 */
	struct ATaskForceCharacter_ServerSetLeaningRight_Params
	{
	public:
		bool                                                       bNewLeaning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetLeaningLeft
	 */
	struct ATaskForceCharacter_ServerSetLeaningLeft_Params
	{
	public:
		bool                                                       bNewLeaning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetJumping
	 */
	struct ATaskForceCharacter_ServerSetJumping_Params
	{
	public:
		bool                                                       bNewJumping;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetFollow
	 */
	struct ATaskForceCharacter_ServerSetFollow_Params
	{
	public:
		class ATaskForceCharacter*                                 Follower;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATaskForceCharacter*                                 Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetFirstPerson
	 */
	struct ATaskForceCharacter_ServerSetFirstPerson_Params
	{
	public:
		bool                                                       bNewFirstPerson;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetFiring
	 */
	struct ATaskForceCharacter_ServerSetFiring_Params
	{
	public:
		bool                                                       bNewRunning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetDiving
	 */
	struct ATaskForceCharacter_ServerSetDiving_Params
	{
	public:
		bool                                                       bNewDiving;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetDefusing
	 */
	struct ATaskForceCharacter_ServerSetDefusing_Params
	{
	public:
		class ATaskForceBomb*                                      Bomb;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetClimbingLadder
	 */
	struct ATaskForceCharacter_ServerSetClimbingLadder_Params
	{
	public:
		bool                                                       bNewClimbing;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewDropping;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewPulling;                                             // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewSliding;                                             // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLadderData                                         Data;                                                    // 0x0004(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerSetClimbing
	 */
	struct ATaskForceCharacter_ServerSetClimbing_Params
	{
	public:
		bool                                                       bNewClimbing;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewDropping;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewPulling;                                             // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TOE5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FClimbData                                          Data;                                                    // 0x0004(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerPickupWeapon
	 */
	struct ATaskForceCharacter_ServerPickupWeapon_Params
	{
	public:
		class ATaskForceWeapon*                                    NewWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.ServerEquipWeapon
	 */
	struct ATaskForceCharacter_ServerEquipWeapon_Params
	{
	public:
		class ATaskForceWeapon*                                    NewWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.SendTauntMessage
	 */
	struct ATaskForceCharacter_SendTauntMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.Prone
	 */
	struct ATaskForceCharacter_Prone_Params
	{
	public:
		bool                                                       bClientSimulation;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.PlantReset
	 */
	struct ATaskForceCharacter_PlantReset_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.PlantBomb
	 */
	struct ATaskForceCharacter_PlantBomb_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.OnRep_LastTakeHitInfo
	 */
	struct ATaskForceCharacter_OnRep_LastTakeHitInfo_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.OnRep_LadderData
	 */
	struct ATaskForceCharacter_OnRep_LadderData_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.OnRep_IsProne
	 */
	struct ATaskForceCharacter_OnRep_IsProne_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.OnRep_CurrentWeapon
	 */
	struct ATaskForceCharacter_OnRep_CurrentWeapon_Params
	{
	public:
		class ATaskForceWeapon*                                    LastWeapon;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.OnRep_ClimbData
	 */
	struct ATaskForceCharacter_OnRep_ClimbData_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.LeanFraction
	 */
	struct ATaskForceCharacter_LeanFraction_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnTauntMessage
	 */
	struct ATaskForceCharacter_K2_OnTauntMessage_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnTaunt3D
	 */
	struct ATaskForceCharacter_K2_OnTaunt3D_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnTaunt2D
	 */
	struct ATaskForceCharacter_K2_OnTaunt2D_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnTaunt
	 */
	struct ATaskForceCharacter_K2_OnTaunt_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnStartProne
	 */
	struct ATaskForceCharacter_K2_OnStartProne_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnEndProne
	 */
	struct ATaskForceCharacter_K2_OnEndProne_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnDeath
	 */
	struct ATaskForceCharacter_K2_OnDeath_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_15C7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               InstigatingPawn;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.K2_OnCallout
	 */
	struct ATaskForceCharacter_K2_OnCallout_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsZooming
	 */
	struct ATaskForceCharacter_IsZooming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsWalking
	 */
	struct ATaskForceCharacter_IsWalking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsThrowing
	 */
	struct ATaskForceCharacter_IsThrowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsTargeting
	 */
	struct ATaskForceCharacter_IsTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsSpectateTarget
	 */
	struct ATaskForceCharacter_IsSpectateTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsRunning
	 */
	struct ATaskForceCharacter_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsReloading
	 */
	struct ATaskForceCharacter_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsMoving
	 */
	struct ATaskForceCharacter_IsMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLocalOrSpectateTarget
	 */
	struct ATaskForceCharacter_IsLocalOrSpectateTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLeaning
	 */
	struct ATaskForceCharacter_IsLeaning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderStepping
	 */
	struct ATaskForceCharacter_IsLadderStepping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderSpinning
	 */
	struct ATaskForceCharacter_IsLadderSpinning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderSliding
	 */
	struct ATaskForceCharacter_IsLadderSliding_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderPulling
	 */
	struct ATaskForceCharacter_IsLadderPulling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderHanging
	 */
	struct ATaskForceCharacter_IsLadderHanging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsLadderDropping
	 */
	struct ATaskForceCharacter_IsLadderDropping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsJumping
	 */
	struct ATaskForceCharacter_IsJumping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsInTaunt
	 */
	struct ATaskForceCharacter_IsInTaunt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsInStanceTransition
	 */
	struct ATaskForceCharacter_IsInStanceTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsInProneTransition
	 */
	struct ATaskForceCharacter_IsInProneTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsInCrouchTransition
	 */
	struct ATaskForceCharacter_IsInCrouchTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsHostage
	 */
	struct ATaskForceCharacter_IsHostage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsFirstPerson
	 */
	struct ATaskForceCharacter_IsFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsFiring
	 */
	struct ATaskForceCharacter_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsFalling
	 */
	struct ATaskForceCharacter_IsFalling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsDiving
	 */
	struct ATaskForceCharacter_IsDiving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbPulling
	 */
	struct ATaskForceCharacter_IsClimbPulling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbJumping
	 */
	struct ATaskForceCharacter_IsClimbJumping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbingLadder
	 */
	struct ATaskForceCharacter_IsClimbingLadder_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbing
	 */
	struct ATaskForceCharacter_IsClimbing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbHanging
	 */
	struct ATaskForceCharacter_IsClimbHanging_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsClimbDropping
	 */
	struct ATaskForceCharacter_IsClimbDropping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsBot
	 */
	struct ATaskForceCharacter_IsBot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsArming
	 */
	struct ATaskForceCharacter_IsArming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.IsAlive
	 */
	struct ATaskForceCharacter_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.HasShotgunEquipped
	 */
	struct ATaskForceCharacter_HasShotgunEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.HasProjectileEquipped
	 */
	struct ATaskForceCharacter_HasProjectileEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.HasProjectile
	 */
	struct ATaskForceCharacter_HasProjectile_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.HasPistolEquipped
	 */
	struct ATaskForceCharacter_HasPistolEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.HasKnifeEquipped
	 */
	struct ATaskForceCharacter_HasKnifeEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetWeaponAttachPoint
	 */
	struct ATaskForceCharacter_GetWeaponAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetWeapon
	 */
	struct ATaskForceCharacter_GetWeapon_Params
	{
	public:
		class ATaskForceWeapon*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetTauntID
	 */
	struct ATaskForceCharacter_GetTauntID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetSpeedModifier
	 */
	struct ATaskForceCharacter_GetSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeUpVector
	 */
	struct ATaskForceCharacter_GetScopeUpVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeRightVector
	 */
	struct ATaskForceCharacter_GetScopeRightVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeRightHandLocation
	 */
	struct ATaskForceCharacter_GetScopeRightHandLocation_Params
	{
	public:
		float                                                      CameraYaw;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CameraPitch;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFirstPerson;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RXLP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeLeftHandLocation
	 */
	struct ATaskForceCharacter_GetScopeLeftHandLocation_Params
	{
	public:
		float                                                      CameraYaw;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CameraPitch;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFirstPerson;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_045N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeForwardVector
	 */
	struct ATaskForceCharacter_GetScopeForwardVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetScopeAttachPoint
	 */
	struct ATaskForceCharacter_GetScopeAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetProjectilePower
	 */
	struct ATaskForceCharacter_GetProjectilePower_Params
	{
	public:
		float                                                      Power;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetProjectileData
	 */
	struct ATaskForceCharacter_GetProjectileData_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetMaxAnimationSpeed
	 */
	struct ATaskForceCharacter_GetMaxAnimationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetLadderFraction
	 */
	struct ATaskForceCharacter_GetLadderFraction_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetHeadAttachPoint
	 */
	struct ATaskForceCharacter_GetHeadAttachPoint_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetEyesLocation
	 */
	struct ATaskForceCharacter_GetEyesLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetEarsLocation
	 */
	struct ATaskForceCharacter_GetEarsLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.GetAimOffsets
	 */
	struct ATaskForceCharacter_GetAimOffsets_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishLadderSlide
	 */
	struct ATaskForceCharacter_FinishLadderSlide_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishLadderPull
	 */
	struct ATaskForceCharacter_FinishLadderPull_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishLadderDrop
	 */
	struct ATaskForceCharacter_FinishLadderDrop_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishDive
	 */
	struct ATaskForceCharacter_FinishDive_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishClimbPull
	 */
	struct ATaskForceCharacter_FinishClimbPull_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.FinishClimbDrop
	 */
	struct ATaskForceCharacter_FinishClimbDrop_Params
	{	};

	/**
	 * Function TaskForce.TaskForceCharacter.CustomizeCharacter
	 */
	struct ATaskForceCharacter_CustomizeCharacter_Params
	{
	public:
		class USkeletalMesh*                                       Head;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMesh*                                       Hat;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.BroadcastTaunt
	 */
	struct ATaskForceCharacter_BroadcastTaunt_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceCharacter.BroadcastCallout
	 */
	struct ATaskForceCharacter_BroadcastCallout_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.StartMatch
	 */
	struct ATFGameMode_StartMatch_Params
	{	};

	/**
	 * Function TaskForce.TFGameMode.SetBandwidthLimit
	 */
	struct ATFGameMode_SetBandwidthLimit_Params
	{
	public:
		float                                                      AsyncIOBandwidthLimit;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.Say
	 */
	struct ATFGameMode_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.RestartGame
	 */
	struct ATFGameMode_RestartGame_Params
	{	};

	/**
	 * Function TaskForce.TFGameMode.ReadyToStartMatch
	 */
	struct ATFGameMode_ReadyToStartMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.ReadyToEndMatch
	 */
	struct ATFGameMode_ReadyToEndMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.K2_OnSetMatchState
	 */
	struct ATFGameMode_K2_OnSetMatchState_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.IsMatchInProgress
	 */
	struct ATFGameMode_IsMatchInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.HasMatchEnded
	 */
	struct ATFGameMode_HasMatchEnded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.GetMatchState
	 */
	struct ATFGameMode_GetMatchState_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameMode.EndMatch
	 */
	struct ATFGameMode_EndMatch_Params
	{	};

	/**
	 * Function TaskForce.TFGameMode.AbortMatch
	 */
	struct ATFGameMode_AbortMatch_Params
	{	};

	/**
	 * Function TaskForce.TaskForceGameMode.WasMatchWon
	 */
	struct ATaskForceGameMode_WasMatchWon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceGameMode.SpawnWeapons
	 */
	struct ATaskForceGameMode_SpawnWeapons_Params
	{	};

	/**
	 * Function TaskForce.TaskForceGameMode.SetReplicatedTeamName
	 */
	struct ATaskForceGameMode_SetReplicatedTeamName_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2W5D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TeamName;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceGameMode.SayObject
	 */
	struct ATaskForceGameMode_SayObject_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceGameMode.FinishMatch
	 */
	struct ATaskForceGameMode_FinishMatch_Params
	{	};

	/**
	 * Function TaskForce.TaskForceDoor.ToggleDoor
	 */
	struct ATaskForceDoor_ToggleDoor_Params
	{	};

	/**
	 * Function TaskForce.TaskForceDoor.ResetState
	 */
	struct ATaskForceDoor_ResetState_Params
	{	};

	/**
	 * Function TaskForce.TaskForceDoor.IsDoorOpen
	 */
	struct ATaskForceDoor_IsDoorOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceDoor.IsDoorMoving
	 */
	struct ATaskForceDoor_IsDoorMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceGameInstance.UpdatePresence
	 */
	struct UTaskForceGameInstance_UpdatePresence_Params
	{
	public:
		class FString                                              details;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              State;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              largeImageKey;                                           // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              largeImageText;                                          // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              smallImageKey;                                           // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              smallImageText;                                          // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              partyId;                                                 // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              matchSecret;                                             // 0x0070(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              joinSecret;                                              // 0x0080(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              spectateSecret;                                          // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceGameInstance.TickBlueprint
	 */
	struct UTaskForceGameInstance_TickBlueprint_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameState.OnRep_MatchState
	 */
	struct ATFGameState_OnRep_MatchState_Params
	{	};

	/**
	 * Function TaskForce.TFGameState.OnRep_ElapsedTime
	 */
	struct ATFGameState_OnRep_ElapsedTime_Params
	{	};

	/**
	 * Function TaskForce.TaskForceJsonObject.SetStringValue
	 */
	struct UTaskForceJsonObject_SetStringValue_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.SetNumberValue
	 */
	struct UTaskForceJsonObject_SetNumberValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AFBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.SetNestedObject
	 */
	struct UTaskForceJsonObject_SetNestedObject_Params
	{
	public:
		class UTaskForceJsonObject*                                Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.SetBooleanValue
	 */
	struct UTaskForceJsonObject_SetBooleanValue_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BWXC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetStringValue
	 */
	struct UTaskForceJsonObject_GetStringValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetStringArray
	 */
	struct UTaskForceJsonObject_GetStringArray_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetNumberValue
	 */
	struct UTaskForceJsonObject_GetNumberValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetNumberArray
	 */
	struct UTaskForceJsonObject_GetNumberArray_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetNestedObject
	 */
	struct UTaskForceJsonObject_GetNestedObject_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTaskForceJsonObject*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetBooleanValue
	 */
	struct UTaskForceJsonObject_GetBooleanValue_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceJsonObject.GetBooleanArray
	 */
	struct UTaskForceJsonObject_GetBooleanArray_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.TriggerLaunch
	 */
	struct UTaskForceHelpers_TriggerLaunch_Params
	{	};

	/**
	 * Function TaskForce.TaskForceHelpers.ParseJSON
	 */
	struct UTaskForceHelpers_ParseJSON_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTaskForceJsonObject*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.JSONToString
	 */
	struct UTaskForceHelpers_JSONToString_Params
	{
	public:
		class UTaskForceJsonObject*                                JsonObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.IsInEditor
	 */
	struct UTaskForceHelpers_IsInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.IsFirstLaunch
	 */
	struct UTaskForceHelpers_IsFirstLaunch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.HasRemote
	 */
	struct UTaskForceHelpers_HasRemote_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.GetBuildID
	 */
	struct UTaskForceHelpers_GetBuildID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.Encrypt
	 */
	struct UTaskForceHelpers_Encrypt_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.DestroyNetActor
	 */
	struct UTaskForceHelpers_DestroyNetActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.Decrypt
	 */
	struct UTaskForceHelpers_Decrypt_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHelpers.CreateJSON
	 */
	struct UTaskForceHelpers_CreateJSON_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTaskForceJsonObject*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHitboxes.LookupBone
	 */
	struct UTaskForceHitboxes_LookupBone_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitboxBones                                        BoneData;                                                // 0x0008(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHitbox                                                    ReturnValue;                                             // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHitboxes.ListBones
	 */
	struct UTaskForceHitboxes_ListBones_Params
	{
	public:
		struct FHitboxBones                                        BoneData;                                                // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        ReturnValue;                                             // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHitboxes.FindDamage
	 */
	struct UTaskForceHitboxes_FindDamage_Params
	{
	public:
		EHitbox                                                    HitBox;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V9WG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitboxDamage                                       HitboxData;                                              // 0x0004(0x0044)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DefaultDamage;                                           // 0x0048(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceWeapon.ServerStopReload
	 */
	struct ATaskForceWeapon_ServerStopReload_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.ServerStopFire
	 */
	struct ATaskForceWeapon_ServerStopFire_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.ServerStartReload
	 */
	struct ATaskForceWeapon_ServerStartReload_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.ServerStartFire
	 */
	struct ATaskForceWeapon_ServerStartFire_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.ServerHandleFiring
	 */
	struct ATaskForceWeapon_ServerHandleFiring_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.OnRep_Reload
	 */
	struct ATaskForceWeapon_OnRep_Reload_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.OnRep_MyPawn
	 */
	struct ATaskForceWeapon_OnRep_MyPawn_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.OnRep_BurstCounter
	 */
	struct ATaskForceWeapon_OnRep_BurstCounter_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.GetScopeOffset
	 */
	struct ATaskForceWeapon_GetScopeOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceWeapon.GetScopeHandOffset
	 */
	struct ATaskForceWeapon_GetScopeHandOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceWeapon.GetScopeCameraOffset
	 */
	struct ATaskForceWeapon_GetScopeCameraOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceWeapon.GetPawnOwner
	 */
	struct ATaskForceWeapon_GetPawnOwner_Params
	{
	public:
		class ATaskForceCharacter*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceWeapon.ClientStartReload
	 */
	struct ATaskForceWeapon_ClientStartReload_Params
	{	};

	/**
	 * Function TaskForce.TaskForceWeapon.ClientBurstCounter
	 */
	struct ATaskForceWeapon_ClientBurstCounter_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHitscanWeapon.ServerProcessBullet
	 */
	struct ATaskForceHitscanWeapon_ServerProcessBullet_Params
	{
	public:
		struct FVector_NetQuantize100                              StartTrace;                                              // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              EndTrace;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsTracer;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsDebug;                                                 // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4LRR[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FBulletHitData>                              Hits;                                                    // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      PredictionTime;                                          // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHitscanWeapon.ClientProcessBullet
	 */
	struct ATaskForceHitscanWeapon_ClientProcessBullet_Params
	{
	public:
		struct FVector_NetQuantize100                              StartTrace;                                              // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              EndTrace;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsTracer;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ORSP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FBulletImpactData>                           Impacts;                                                 // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      PredictionTime;                                          // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHUD.SetFade
	 */
	struct ATaskForceHUD_SetFade_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHUD.SetClanOfficerList
	 */
	struct ATaskForceHUD_SetClanOfficerList_Params
	{
	public:
		TArray<int64_t>                                            SteamIDs;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHUD.ResetFade
	 */
	struct ATaskForceHUD_ResetFade_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceHUD.OnVoiceStop
	 */
	struct ATaskForceHUD_OnVoiceStop_Params
	{	};

	/**
	 * Function TaskForce.TaskForceHUD.OnVoiceStart
	 */
	struct ATaskForceHUD_OnVoiceStart_Params
	{	};

	/**
	 * Function TaskForce.TaskForceHUD.ExecuteJavaScript
	 */
	struct ATaskForceHUD_ExecuteJavaScript_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.UploadWorkshopData
	 */
	struct ATaskForceMenuController_UploadWorkshopData_Params
	{
	public:
		class FString                                              ItemID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProjectFile;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapFile;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapName;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GameModes;                                               // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              IconFile;                                                // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.TryJoinServer
	 */
	struct ATaskForceMenuController_TryJoinServer_Params
	{
	public:
		class FString                                              Password;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.SetWorkshopStatus
	 */
	struct ATaskForceMenuController_SetWorkshopStatus_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.SetWorkshopRunningStatus
	 */
	struct ATaskForceMenuController_SetWorkshopRunningStatus_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.SetWorkshopCompleteStatus
	 */
	struct ATaskForceMenuController_SetWorkshopCompleteStatus_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.SaveWorkshopData
	 */
	struct ATaskForceMenuController_SaveWorkshopData_Params
	{
	public:
		class FString                                              ItemID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapName;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GameModes;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              IconFile;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.OpenURL
	 */
	struct ATaskForceMenuController_OpenURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.OpenFileDialog
	 */
	struct ATaskForceMenuController_OpenFileDialog_Params
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filter;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extension;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              File;                                                    // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.OpenChatWindow
	 */
	struct ATaskForceMenuController_OpenChatWindow_Params
	{	};

	/**
	 * Function TaskForce.TaskForceMenuController.LoadWorkshopData
	 */
	struct ATaskForceMenuController_LoadWorkshopData_Params
	{	};

	/**
	 * Function TaskForce.TaskForceMenuController.JoinServer
	 */
	struct ATaskForceMenuController_JoinServer_Params
	{
	public:
		class FString                                              SteamP2P;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              HostAddress;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.InitBeaconClient
	 */
	struct ATaskForceMenuController_InitBeaconClient_Params
	{
	public:
		class FString                                              ServerURL;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.HasInvalidLogin
	 */
	struct ATaskForceMenuController_HasInvalidLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.HasEngineInstalled
	 */
	struct ATaskForceMenuController_HasEngineInstalled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GoToClientURL
	 */
	struct ATaskForceMenuController_GoToClientURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GetSteamNetTicket
	 */
	struct ATaskForceMenuController_GetSteamNetTicket_Params
	{
	public:
		TArray<int32_t>                                            Types;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Descriptions;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GetSteamLanguage
	 */
	struct ATaskForceMenuController_GetSteamLanguage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GetSteamBranch
	 */
	struct ATaskForceMenuController_GetSteamBranch_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GetSteamAuthTicket
	 */
	struct ATaskForceMenuController_GetSteamAuthTicket_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.GenerateURL
	 */
	struct ATaskForceMenuController_GenerateURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.FailServer
	 */
	struct ATaskForceMenuController_FailServer_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.ExecuteJavaScript
	 */
	struct ATaskForceMenuController_ExecuteJavaScript_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.DoSteam
	 */
	struct ATaskForceMenuController_DoSteam_Params
	{	};

	/**
	 * Function TaskForce.TaskForceMenuController.DoSession
	 */
	struct ATaskForceMenuController_DoSession_Params
	{	};

	/**
	 * Function TaskForce.TaskForceMenuController.DestroySession
	 */
	struct ATaskForceMenuController_DestroySession_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceMenuController.DestroyBeaconClient
	 */
	struct ATaskForceMenuController_DestroyBeaconClient_Params
	{	};

	/**
	 * Function TaskForce.TFPlayerController.ExecuteServerCommand
	 */
	struct ATFPlayerController_ExecuteServerCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFPlayerController.ExecuteClientCommand
	 */
	struct ATFPlayerController_ExecuteClientCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFPlayerController.ClientWorkshopRPC
	 */
	struct ATFPlayerController_ClientWorkshopRPC_Params
	{
	public:
		TArray<struct FTFWorkshopServerData>                       Added;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FTFWorkshopServerData>                       Existing;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.TriggerRemote
	 */
	struct ATaskForcePlayerController_TriggerRemote_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SwitchTeams
	 */
	struct ATaskForcePlayerController_SwitchTeams_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SimulateInputKey
	 */
	struct ATaskForcePlayerController_SimulateInputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ShowSettings
	 */
	struct ATaskForcePlayerController_ShowSettings_Params
	{
	public:
		bool                                                       IsController;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IGDQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      WorkshopSkins1;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      WorkshopSkins2;                                          // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetMouseSensitivity
	 */
	struct ATaskForcePlayerController_SetMouseSensitivity_Params
	{
	public:
		float                                                      VerticalSensitivity;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HorizontalSensitivity;                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Invert;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetDefaultWorkshopSkin
	 */
	struct ATaskForcePlayerController_SetDefaultWorkshopSkin_Params
	{
	public:
		class FString                                              Skin;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetDefaultSecondaryReticle
	 */
	struct ATaskForcePlayerController_SetDefaultSecondaryReticle_Params
	{
	public:
		class FString                                              Reticle;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetDefaultSecondary
	 */
	struct ATaskForcePlayerController_SetDefaultSecondary_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetDefaultPrimaryReticle
	 */
	struct ATaskForcePlayerController_SetDefaultPrimaryReticle_Params
	{
	public:
		class FString                                              Reticle;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetDefaultPrimary
	 */
	struct ATaskForcePlayerController_SetDefaultPrimary_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SetControllerSensitivity
	 */
	struct ATaskForcePlayerController_SetControllerSensitivity_Params
	{
	public:
		float                                                      VerticalSensitivity;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HorizontalSensitivity;                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Invert;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RJY6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Acceleration;                                            // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VerticalDeadZone;                                        // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HorizontalDeadZone;                                      // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ForwardDeadZone;                                         // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RightDeadZone;                                           // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSwitchTeams
	 */
	struct ATaskForcePlayerController_ServerSwitchTeams_Params
	{
	public:
		int32_t                                                    NewTeam;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSetSpectate
	 */
	struct ATaskForcePlayerController_ServerSetSpectate_Params
	{
	public:
		class ATaskForcePlayerState*                               NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShouldFollow;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSetIsTalking
	 */
	struct ATaskForcePlayerController_ServerSetIsTalking_Params
	{
	public:
		bool                                                       IsTalking;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSetDefaultWorkshopSkin
	 */
	struct ATaskForcePlayerController_ServerSetDefaultWorkshopSkin_Params
	{
	public:
		class FString                                              Skin;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSetDefaultSecondary
	 */
	struct ATaskForcePlayerController_ServerSetDefaultSecondary_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSetDefaultPrimary
	 */
	struct ATaskForcePlayerController_ServerSetDefaultPrimary_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerSay
	 */
	struct ATaskForcePlayerController_ServerSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TeamOnly;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ServerRemote
	 */
	struct ATaskForcePlayerController_ServerRemote_Params
	{
	public:
		class FString                                              Guid;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SayTaunt
	 */
	struct ATaskForcePlayerController_SayTaunt_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.Say
	 */
	struct ATaskForcePlayerController_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TeamOnly;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.SaveInputSettings
	 */
	struct ATaskForcePlayerController_SaveInputSettings_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.RoundWin
	 */
	struct ATaskForcePlayerController_RoundWin_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.RoundStart
	 */
	struct ATaskForcePlayerController_RoundStart_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.RemoveBinding
	 */
	struct ATaskForcePlayerController_RemoveBinding_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.RebuildInputSettings
	 */
	struct ATaskForcePlayerController_RebuildInputSettings_Params
	{
	public:
		bool                                                       RestoreDefaults;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.PingBrowserWindow
	 */
	struct ATaskForcePlayerController_PingBrowserWindow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OpenURL
	 */
	struct ATaskForcePlayerController_OpenURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnTeamMessage
	 */
	struct ATaskForcePlayerController_OnTeamMessage_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnRoundWin
	 */
	struct ATaskForcePlayerController_OnRoundWin_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WinnerTeam;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnRoundStart
	 */
	struct ATaskForcePlayerController_OnRoundStart_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnRoundEnd
	 */
	struct ATaskForcePlayerController_OnRoundEnd_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WinnerTeam;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnRep_SpectatorTarget
	 */
	struct ATaskForcePlayerController_OnRep_SpectatorTarget_Params
	{
	public:
		class ATaskForceCharacter*                                 Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnHostageKilled
	 */
	struct ATaskForcePlayerController_OnHostageKilled_Params
	{
	public:
		int32_t                                                    AttackerTeam;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WinnerTeam;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnHostageExtracted
	 */
	struct ATaskForcePlayerController_OnHostageExtracted_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnChatMessage
	 */
	struct ATaskForcePlayerController_OnChatMessage_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnBombPlanted
	 */
	struct ATaskForcePlayerController_OnBombPlanted_Params
	{
	public:
		int32_t                                                    PlantTeam;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnBombPickup
	 */
	struct ATaskForcePlayerController_OnBombPickup_Params
	{
	public:
		int32_t                                                    PickupTeam;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnBombExploded
	 */
	struct ATaskForcePlayerController_OnBombExploded_Params
	{
	public:
		int32_t                                                    PlantTeam;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.OnBombDefused
	 */
	struct ATaskForcePlayerController_OnBombDefused_Params
	{
	public:
		int32_t                                                    DefuseTeam;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.LoadInputSettings
	 */
	struct ATaskForcePlayerController_LoadInputSettings_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.LoadingComplete
	 */
	struct ATaskForcePlayerController_LoadingComplete_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.KickAway
	 */
	struct ATaskForcePlayerController_KickAway_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.IsTalking
	 */
	struct ATaskForcePlayerController_IsTalking_Params
	{
	public:
		class ATaskForcePlayerController*                          LocalController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.IsInCinematicMode
	 */
	struct ATaskForcePlayerController_IsInCinematicMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.HideSettings
	 */
	struct ATaskForcePlayerController_HideSettings_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GoToClientURL
	 */
	struct ATaskForcePlayerController_GoToClientURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GetSteamLanguage
	 */
	struct ATaskForcePlayerController_GetSteamLanguage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GetSteamBranch
	 */
	struct ATaskForcePlayerController_GetSteamBranch_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GetCurrentTeam
	 */
	struct ATaskForcePlayerController_GetCurrentTeam_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GenerateURL
	 */
	struct ATaskForcePlayerController_GenerateURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.GenerateGUID
	 */
	struct ATaskForcePlayerController_GenerateGUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.FocusBrowserWindow
	 */
	struct ATaskForcePlayerController_FocusBrowserWindow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.FindAllCharacters
	 */
	struct ATaskForcePlayerController_FindAllCharacters_Params
	{
	public:
		TArray<class ATaskForceCharacter*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ExecuteJavaScript
	 */
	struct ATaskForcePlayerController_ExecuteJavaScript_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.DefaultWorkshopSkin
	 */
	struct ATaskForcePlayerController_DefaultWorkshopSkin_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.DebugJavaScript
	 */
	struct ATaskForcePlayerController_DebugJavaScript_Params
	{
	public:
		bool                                                       bAdvanced;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExperimental;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientStartOnlineGame
	 */
	struct ATaskForcePlayerController_ClientStartOnlineGame_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSetSpectatorCamera
	 */
	struct ATaskForcePlayerController_ClientSetSpectatorCamera_Params
	{
	public:
		struct FVector                                             CameraLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendRoundWinEvent
	 */
	struct ATaskForcePlayerController_ClientSendRoundWinEvent_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F2Y5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendRoundStartEvent
	 */
	struct ATaskForcePlayerController_ClientSendRoundStartEvent_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendRoundResetEvent
	 */
	struct ATaskForcePlayerController_ClientSendRoundResetEvent_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendRoundEndEvent
	 */
	struct ATaskForcePlayerController_ClientSendRoundEndEvent_Params
	{
	public:
		TArray<struct FTaskForcePlayerStats>                       Stats;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendResetActorsEvent
	 */
	struct ATaskForcePlayerController_ClientSendResetActorsEvent_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientSendMessageEvent
	 */
	struct ATaskForcePlayerController_ClientSendMessageEvent_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientRemote
	 */
	struct ATaskForcePlayerController_ClientRemote_Params
	{
	public:
		bool                                                       bAdvanced;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExperimental;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientGameStarted
	 */
	struct ATaskForcePlayerController_ClientGameStarted_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientEndOnlineGame
	 */
	struct ATaskForcePlayerController_ClientEndOnlineGame_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientDebugWorkshop
	 */
	struct ATaskForcePlayerController_ClientDebugWorkshop_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Storage;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientDebugViewport
	 */
	struct ATaskForcePlayerController_ClientDebugViewport_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Interface;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ClientDebugGame
	 */
	struct ATaskForcePlayerController_ClientDebugGame_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.AddBinding
	 */
	struct ATaskForcePlayerController_AddBinding_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerController.ActivateGameOverlay
	 */
	struct ATaskForcePlayerController_ActivateGameOverlay_Params
	{
	public:
		class FString                                              Dialog;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.OnRep_TeamNumber
	 */
	struct ATaskForcePlayerState_OnRep_TeamNumber_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerState.OnRep_CurrentSkin
	 */
	struct ATaskForcePlayerState_OnRep_CurrentSkin_Params
	{	};

	/**
	 * Function TaskForce.TaskForcePlayerState.IsServerAdmin
	 */
	struct ATaskForcePlayerState_IsServerAdmin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.IsPriorityBacker
	 */
	struct ATaskForcePlayerState_IsPriorityBacker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.IsBacker
	 */
	struct ATaskForcePlayerState_IsBacker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.InformAboutKill
	 */
	struct ATaskForcePlayerState_InformAboutKill_Params
	{
	public:
		class ATaskForcePlayerState*                               KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATaskForcePlayerState*                               KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.InformAboutDeath
	 */
	struct ATaskForcePlayerState_InformAboutDeath_Params
	{
	public:
		class ATaskForcePlayerState*                               KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTaskForceDeathStats                                Data;                                                    // 0x0008(0x0028)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetTeamNum
	 */
	struct ATaskForcePlayerState_GetTeamNum_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetSteamID
	 */
	struct ATaskForcePlayerState_GetSteamID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetScore
	 */
	struct ATaskForcePlayerState_GetScore_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetKills
	 */
	struct ATaskForcePlayerState_GetKills_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetDeaths
	 */
	struct ATaskForcePlayerState_GetDeaths_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetCurrentSkin
	 */
	struct ATaskForcePlayerState_GetCurrentSkin_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetClientID
	 */
	struct ATaskForcePlayerState_GetClientID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetBackerLevel
	 */
	struct ATaskForcePlayerState_GetBackerLevel_Params
	{
	public:
		ETaskForceBackerLevel                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.GetAssists
	 */
	struct ATaskForcePlayerState_GetAssists_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForcePlayerState.BroadcastDeath
	 */
	struct ATaskForcePlayerState_BroadcastDeath_Params
	{
	public:
		class ATaskForcePlayerState*                               KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATaskForcePlayerState*                               KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATaskForcePlayerState*                               AssisterPlayerState;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceProjectile.OnRep_Exploded
	 */
	struct ATaskForceProjectile_OnRep_Exploded_Params
	{	};

	/**
	 * Function TaskForce.TaskForceProjectile.OnImpact
	 */
	struct ATaskForceProjectile_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceProjectile.OnHit
	 */
	struct ATaskForceProjectile_OnHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceProjectileWeapon.ServerFireProjectile
	 */
	struct ATaskForceProjectileWeapon_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SupportsHDRDisplayOutput
	 */
	struct UTaskForceSettings_SupportsHDRDisplayOutput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetVSyncEnabled
	 */
	struct UTaskForceSettings_SetVSyncEnabled_Params
	{
	public:
		bool                                                       VSync;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetVoiceVolume
	 */
	struct UTaskForceSettings_SetVoiceVolume_Params
	{
	public:
		float                                                      VoiceVolume;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1IL3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         VoiceClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetVideoSettings
	 */
	struct UTaskForceSettings_SetVideoSettings_Params
	{
	public:
		float                                                      Gamma;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetVideoQualitySettings
	 */
	struct UTaskForceSettings_SetVideoQualitySettings_Params
	{
	public:
		int32_t                                                    AntiAliasing;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Shadows;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PostProcess;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Textures;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Effects;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Foliage;                                                 // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Resolution;                                              // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ViewDistance;                                            // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetScreenResolution
	 */
	struct UTaskForceSettings_SetScreenResolution_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WindowMode;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetMusicVolume
	 */
	struct UTaskForceSettings_SetMusicVolume_Params
	{
	public:
		float                                                      MusicVolume;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SSKY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         MusicClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetMenuVolume
	 */
	struct UTaskForceSettings_SetMenuVolume_Params
	{
	public:
		float                                                      MenuVolume;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetMasterVolume
	 */
	struct UTaskForceSettings_SetMasterVolume_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1XV4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         MasterClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetHDRDisplayOutput
	 */
	struct UTaskForceSettings_SetHDRDisplayOutput_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetGamma
	 */
	struct UTaskForceSettings_SetGamma_Params
	{
	public:
		float                                                      Gamma;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetEffectsVolume
	 */
	struct UTaskForceSettings_SetEffectsVolume_Params
	{
	public:
		float                                                      EffectsVolume;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8G2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         EffectsClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetBackgroundVolume
	 */
	struct UTaskForceSettings_SetBackgroundVolume_Params
	{
	public:
		float                                                      UnfocusedVolume;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SetAudioVolumeSettings
	 */
	struct UTaskForceSettings_SetAudioVolumeSettings_Params
	{
	public:
		class USoundClass*                                         MasterClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MasterVolume;                                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MenuVolume;                                              // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UnfocusedVolume;                                         // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MFVA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         EffectsClass;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectsVolume;                                           // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VHM2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         MusicClass;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AHXP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         VoiceClass;                                              // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveVoiceVolume
	 */
	struct UTaskForceSettings_SaveVoiceVolume_Params
	{
	public:
		float                                                      VoiceVolume;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveVideoModeAndQuality
	 */
	struct UTaskForceSettings_SaveVideoModeAndQuality_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveMusicVolume
	 */
	struct UTaskForceSettings_SaveMusicVolume_Params
	{
	public:
		float                                                      MusicVolume;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveMenuVolume
	 */
	struct UTaskForceSettings_SaveMenuVolume_Params
	{
	public:
		float                                                      MenuVolume;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveEffectsVolume
	 */
	struct UTaskForceSettings_SaveEffectsVolume_Params
	{
	public:
		float                                                      EffectsVolume;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.SaveAudioVolumeSettings
	 */
	struct UTaskForceSettings_SaveAudioVolumeSettings_Params
	{
	public:
		class USoundClass*                                         MasterClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MasterVolume;                                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MenuVolume;                                              // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UnfocusedVolume;                                         // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q29Q[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         EffectsClass;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectsVolume;                                           // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4GDD[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         MusicClass;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UMK0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundClass*                                         VoiceClass;                                              // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0040(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.RevertVideoMode
	 */
	struct UTaskForceSettings_RevertVideoMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.IsVSyncEnabled
	 */
	struct UTaskForceSettings_IsVSyncEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.IsInFullscreen
	 */
	struct UTaskForceSettings_IsInFullscreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetVoiceVolume
	 */
	struct UTaskForceSettings_GetVoiceVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetVideoSettings
	 */
	struct UTaskForceSettings_GetVideoSettings_Params
	{
	public:
		float                                                      Gamma;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetVideoQualitySettings
	 */
	struct UTaskForceSettings_GetVideoQualitySettings_Params
	{
	public:
		int32_t                                                    AntiAliasing;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Shadows;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PostProcess;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Textures;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Effects;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Foliage;                                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Resolution;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ViewDistance;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetScreenResolution
	 */
	struct UTaskForceSettings_GetScreenResolution_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetMusicVolume
	 */
	struct UTaskForceSettings_GetMusicVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetMenuVolume
	 */
	struct UTaskForceSettings_GetMenuVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetMasterVolume
	 */
	struct UTaskForceSettings_GetMasterVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetEffectsVolume
	 */
	struct UTaskForceSettings_GetEffectsVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetBackgroundVolume
	 */
	struct UTaskForceSettings_GetBackgroundVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.GetAudioVolumeSettings
	 */
	struct UTaskForceSettings_GetAudioVolumeSettings_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MenuVolume;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UnfocusedVolume;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectsVolume;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.FindSavedAudioVolumeSettings
	 */
	struct UTaskForceSettings_FindSavedAudioVolumeSettings_Params
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MenuVolume;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      UnfocusedVolume;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectsVolume;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MusicVolume;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VoiceVolume;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceSettings.ChangeScreenResolution
	 */
	struct UTaskForceSettings_ChangeScreenResolution_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WindowMode;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TaskForceTeamStart.SetTeam
	 */
	struct ATaskForceTeamStart_SetTeam_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.UnsubscribeFromItem
	 */
	struct UTFGameInstance_UnsubscribeFromItem_Params
	{
	public:
		class FString                                              WorkshopID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.SubscribeToItem
	 */
	struct UTFGameInstance_SubscribeToItem_Params
	{
	public:
		class FString                                              WorkshopID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.RefreshSteamLobbies
	 */
	struct UTFGameInstance_RefreshSteamLobbies_Params
	{
	public:
		ETFSteamLobbyDistance                                      Distance;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.RefreshDedicatedServers
	 */
	struct UTFGameInstance_RefreshDedicatedServers_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.ReconnectGame
	 */
	struct UTFGameInstance_ReconnectGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.ReceiveOnStart
	 */
	struct UTFGameInstance_ReceiveOnStart_Params
	{	};

	/**
	 * Function TaskForce.TFGameInstance.ReceiveOnBackgroundMusic
	 */
	struct UTFGameInstance_ReceiveOnBackgroundMusic_Params
	{	};

	/**
	 * Function TaskForce.TFGameInstance.QuitGame
	 */
	struct UTFGameInstance_QuitGame_Params
	{	};

	/**
	 * Function TaskForce.TFGameInstance.QuerySubscribedItems
	 */
	struct UTFGameInstance_QuerySubscribedItems_Params
	{
	public:
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.QueryPlayerData
	 */
	struct UTFGameInstance_QueryPlayerData_Params
	{
	public:
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.QueryMapMetadata
	 */
	struct UTFGameInstance_QueryMapMetadata_Params
	{
	public:
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.QueryInstalledMaps
	 */
	struct UTFGameInstance_QueryInstalledMaps_Params
	{
	public:
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.ProcessJoinSecret
	 */
	struct UTFGameInstance_ProcessJoinSecret_Params
	{
	public:
		class FString                                              Secret;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.ProcessCommandLine
	 */
	struct UTFGameInstance_ProcessCommandLine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.OnDiscordShutdown
	 */
	struct UTFGameInstance_OnDiscordShutdown_Params
	{	};

	/**
	 * Function TaskForce.TFGameInstance.OnDiscordRespond
	 */
	struct UTFGameInstance_OnDiscordRespond_Params
	{
	public:
		class FString                                              DiscordUserID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccept;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.OnDiscordPresence
	 */
	struct UTFGameInstance_OnDiscordPresence_Params
	{
	public:
		struct FDiscordRichPresence                                Presence;                                                // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.OnDiscordInit
	 */
	struct UTFGameInstance_OnDiscordInit_Params
	{
	public:
		class FString                                              DiscordAppID;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SteamAppID;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.OnDiscordCallbacks
	 */
	struct UTFGameInstance_OnDiscordCallbacks_Params
	{	};

	/**
	 * Function TaskForce.TFGameInstance.MainMenu
	 */
	struct UTFGameInstance_MainMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.LoadMap
	 */
	struct UTFGameInstance_LoadMap_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GameMode;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.JoinServer
	 */
	struct UTFGameInstance_JoinServer_Params
	{
	public:
		class FString                                              ServerAddress;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ServerPassword;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsServer
	 */
	struct UTFGameInstance_IsServer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsOffline
	 */
	struct UTFGameInstance_IsOffline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInMenu
	 */
	struct UTFGameInstance_IsInMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInGame
	 */
	struct UTFGameInstance_IsInGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInEditor
	 */
	struct UTFGameInstance_IsInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInControllerMode
	 */
	struct UTFGameInstance_IsInControllerMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInConsole
	 */
	struct UTFGameInstance_IsInConsole_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsInChat
	 */
	struct UTFGameInstance_IsInChat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsDedicatedServer
	 */
	struct UTFGameInstance_IsDedicatedServer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.IsClient
	 */
	struct UTFGameInstance_IsClient_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.HostServerWithMapList
	 */
	struct UTFGameInstance_HostServerWithMapList_Params
	{
	public:
		TArray<class FString>                                      MapList;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      WorkshopIDs;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bPrivate;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I1BP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0038(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Slots;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bControllersOnly;                                        // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFriendlyFire;                                           // 0x004D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.HostServer
	 */
	struct UTFGameInstance_HostServer_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GameMode;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrivate;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1B62[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0038(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.HasProcessedCommandLine
	 */
	struct UTFGameInstance_HasProcessedCommandLine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetPrimaryController
	 */
	struct UTFGameInstance_GetPrimaryController_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameViewport
	 */
	struct UTFGameInstance_GetGameViewport_Params
	{
	public:
		class UTFGameViewportClient*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameTimeFromAPI
	 */
	struct UTFGameInstance_GetGameTimeFromAPI_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameState
	 */
	struct UTFGameInstance_GetGameState_Params
	{
	public:
		class ATFGameState*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameSessionID
	 */
	struct UTFGameInstance_GetGameSessionID_Params
	{
	public:
		struct FGuid                                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameNeedsUpdate
	 */
	struct UTFGameInstance_GetGameNeedsUpdate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.GetGameMode
	 */
	struct UTFGameInstance_GetGameMode_Params
	{
	public:
		class ATFGameMode*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.FindPlayerState
	 */
	struct UTFGameInstance_FindPlayerState_Params
	{
	public:
		class ATFPlayerState*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.FindPlayerController
	 */
	struct UTFGameInstance_FindPlayerController_Params
	{
	public:
		class ATFPlayerController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.ExecuteCommand
	 */
	struct UTFGameInstance_ExecuteCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATFPlayerController*                                 Controller;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameInstance.DisconnectGame
	 */
	struct UTFGameInstance_DisconnectGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ToggleMenu
	 */
	struct UTFGameViewportClient_ToggleMenu_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.ToggleConsole
	 */
	struct UTFGameViewportClient_ToggleConsole_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.ShowRenderTarget
	 */
	struct UTFGameViewportClient_ShowRenderTarget_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ShowMenu
	 */
	struct UTFGameViewportClient_ShowMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ShowLoadingScreen
	 */
	struct UTFGameViewportClient_ShowLoadingScreen_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ShowInterface
	 */
	struct UTFGameViewportClient_ShowInterface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ShowConsole
	 */
	struct UTFGameViewportClient_ShowConsole_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetUnderlayOpacity
	 */
	struct UTFGameViewportClient_SetUnderlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetOverlayOpacity
	 */
	struct UTFGameViewportClient_SetOverlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetMenuVolume
	 */
	struct UTFGameViewportClient_SetMenuVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetFocusToInterface
	 */
	struct UTFGameViewportClient_SetFocusToInterface_Params
	{
	public:
		bool                                                       bHUD;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetMousePosition;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMouseLockMode                                             MouseLockMode;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetFocusToGame
	 */
	struct UTFGameViewportClient_SetFocusToGame_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.SetControllerInput
	 */
	struct UTFGameViewportClient_SetControllerInput_Params
	{
	public:
		bool                                                       bController;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.SaveBindings
	 */
	struct UTFGameViewportClient_SaveBindings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ResetUnderlayOpacity
	 */
	struct UTFGameViewportClient_ResetUnderlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ResetOverlayOpacity
	 */
	struct UTFGameViewportClient_ResetOverlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ResetInterface
	 */
	struct UTFGameViewportClient_ResetInterface_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoadingScreen;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.RemoveBinding
	 */
	struct UTFGameViewportClient_RemoveBinding_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ProcessCommandLine
	 */
	struct UTFGameViewportClient_ProcessCommandLine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.OpenLegacySettings
	 */
	struct UTFGameViewportClient_OpenLegacySettings_Params
	{
	public:
		class ATaskForcePlayerController*                          Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      WorkshopSkins1;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      WorkshopSkins2;                                          // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.OpenChat
	 */
	struct UTFGameViewportClient_OpenChat_Params
	{
	public:
		bool                                                       bTeamOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.NewBinding
	 */
	struct UTFGameViewportClient_NewBinding_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.LoadScript
	 */
	struct UTFGameViewportClient_LoadScript_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHUD;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.LoadInterface
	 */
	struct UTFGameViewportClient_LoadInterface_Params
	{
	public:
		class UTFWebUI*                                            Interface;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsReady
	 */
	struct UTFGameViewportClient_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsLoading
	 */
	struct UTFGameViewportClient_IsLoading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsInMenu
	 */
	struct UTFGameViewportClient_IsInMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsInControllerMode
	 */
	struct UTFGameViewportClient_IsInControllerMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsInConsole
	 */
	struct UTFGameViewportClient_IsInConsole_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsInChat
	 */
	struct UTFGameViewportClient_IsInChat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsGameInputIgnored
	 */
	struct UTFGameViewportClient_IsGameInputIgnored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.IsAnimating
	 */
	struct UTFGameViewportClient_IsAnimating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.HideRenderTarget
	 */
	struct UTFGameViewportClient_HideRenderTarget_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.HideMenu
	 */
	struct UTFGameViewportClient_HideMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.HideLoadingScreen
	 */
	struct UTFGameViewportClient_HideLoadingScreen_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.HideInterface
	 */
	struct UTFGameViewportClient_HideInterface_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.HideConsole
	 */
	struct UTFGameViewportClient_HideConsole_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.GetUnderlayOpacity
	 */
	struct UTFGameViewportClient_GetUnderlayOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.GetOverlayOpacity
	 */
	struct UTFGameViewportClient_GetOverlayOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.GetDelay
	 */
	struct UTFGameViewportClient_GetDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.GetCrashDelay
	 */
	struct UTFGameViewportClient_GetCrashDelay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ConsolePrint
	 */
	struct UTFGameViewportClient_ConsolePrint_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ConsoleDebug
	 */
	struct UTFGameViewportClient_ConsoleDebug_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ConsoleClear
	 */
	struct UTFGameViewportClient_ConsoleClear_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.CloseLegacySettings
	 */
	struct UTFGameViewportClient_CloseLegacySettings_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.CloseChat
	 */
	struct UTFGameViewportClient_CloseChat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.CloseAlert
	 */
	struct UTFGameViewportClient_CloseAlert_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.CheckInterface
	 */
	struct UTFGameViewportClient_CheckInterface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.CancelBinding
	 */
	struct UTFGameViewportClient_CancelBinding_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.AddBinding
	 */
	struct UTFGameViewportClient_AddBinding_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFGameViewportClient.ActivateMenu
	 */
	struct UTFGameViewportClient_ActivateMenu_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.ActivateLogo
	 */
	struct UTFGameViewportClient_ActivateLogo_Params
	{	};

	/**
	 * Function TaskForce.TFGameViewportClient.ActivateInterface
	 */
	struct UTFGameViewportClient_ActivateInterface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.ServerConsole
	 */
	struct UTFHelpers_ServerConsole_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.ResetLoaded
	 */
	struct UTFHelpers_ResetLoaded_Params
	{	};

	/**
	 * Function TaskForce.TFHelpers.ProcessLoaded
	 */
	struct UTFHelpers_ProcessLoaded_Params
	{	};

	/**
	 * Function TaskForce.TFHelpers.OpenSteamChat
	 */
	struct UTFHelpers_OpenSteamChat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.OpenSteamBrowser
	 */
	struct UTFHelpers_OpenSteamBrowser_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsTestingBuild
	 */
	struct UTFHelpers_IsTestingBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsSteamSubscribed
	 */
	struct UTFHelpers_IsSteamSubscribed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsSteamRunning
	 */
	struct UTFHelpers_IsSteamRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsShippingBuild
	 */
	struct UTFHelpers_IsShippingBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInWorkshop
	 */
	struct UTFHelpers_IsInWorkshop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInTV
	 */
	struct UTFHelpers_IsInTV_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInternalBuild
	 */
	struct UTFHelpers_IsInternalBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInSteamOverlay
	 */
	struct UTFHelpers_IsInSteamOverlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInGame
	 */
	struct UTFHelpers_IsInGame_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInFocus
	 */
	struct UTFHelpers_IsInFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsInEditor
	 */
	struct UTFHelpers_IsInEditor_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.IsDevelopmentBuild
	 */
	struct UTFHelpers_IsDevelopmentBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.HasWorkshopLoadData
	 */
	struct UTFHelpers_HasWorkshopLoadData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.HasWorkshopDownloadData
	 */
	struct UTFHelpers_HasWorkshopDownloadData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.HasMapLoadProgress
	 */
	struct UTFHelpers_HasMapLoadProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetWorkshopLoadData
	 */
	struct UTFHelpers_GetWorkshopLoadData_Params
	{
	public:
		int32_t                                                    Installed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Total;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetWorkshopDownloadTotal
	 */
	struct UTFHelpers_GetWorkshopDownloadTotal_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetWorkshopDownloadProgress
	 */
	struct UTFHelpers_GetWorkshopDownloadProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamName
	 */
	struct UTFHelpers_GetSteamName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamLanguage
	 */
	struct UTFHelpers_GetSteamLanguage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamID
	 */
	struct UTFHelpers_GetSteamID_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamGroupID
	 */
	struct UTFHelpers_GetSteamGroupID_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamBranch
	 */
	struct UTFHelpers_GetSteamBranch_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetSteamAppID
	 */
	struct UTFHelpers_GetSteamAppID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetMapLoadProgress
	 */
	struct UTFHelpers_GetMapLoadProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetLastLoadedPackage
	 */
	struct UTFHelpers_GetLastLoadedPackage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.GetLastLoadedObject
	 */
	struct UTFHelpers_GetLastLoadedObject_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.ExitApplication
	 */
	struct UTFHelpers_ExitApplication_Params
	{	};

	/**
	 * Function TaskForce.TFHelpers.DrawSphere
	 */
	struct UTFHelpers_DrawSphere_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Center;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5H3P[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CR3[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawLine
	 */
	struct UTFHelpers_DrawLine_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Start;                                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_71OV[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TW8A[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawHistoryGraph
	 */
	struct UTFHelpers_DrawHistoryGraph_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Min;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              Data;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Width;                                                   // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Height;                                                  // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T96M[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawCoordinateSystem
	 */
	struct UTFHelpers_DrawCoordinateSystem_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MSCF[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_COO5[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawCapsule
	 */
	struct UTFHelpers_DrawCapsule_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Center;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HalfHeight;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZMI0[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J53I[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawBox
	 */
	struct UTFHelpers_DrawBox_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Center;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Extents;                                                 // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_55GV[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UW0W[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.DrawBodyInstance
	 */
	struct UTFHelpers_DrawBodyInstance_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0008(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UFOK[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0120(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0150(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistent;                                             // 0x0154(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SAPT[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x0158(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x015C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R64U[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Thickness;                                               // 0x0160(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFHelpers.Console
	 */
	struct UTFHelpers_Console_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Text;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFSettings.WorkshopSettings
	 */
	struct UTFSettings_WorkshopSettings_Params
	{
	public:
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFSettings.ServerSettings
	 */
	struct UTFSettings_ServerSettings_Params
	{
	public:
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.UnfocusBrowser
	 */
	struct UTFWebUI_UnfocusBrowser_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.TickDebug
	 */
	struct UTFWebUI_TickDebug_Params
	{
	public:
		class FString                                              Status;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Ping;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClientTime;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ServerTime;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GameTime;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Tick;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Step;                                                    // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delta;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.ShowRenderTarget
	 */
	struct UTFWebUI_ShowRenderTarget_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.ShowLoadingScreen
	 */
	struct UTFWebUI_ShowLoadingScreen_Params
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         Image;                                                   // 0x0010(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.ShowBrowser
	 */
	struct UTFWebUI_ShowBrowser_Params
	{
	public:
		bool                                                       bHUD;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.SetOverlayOpacity
	 */
	struct UTFWebUI_SetOverlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.RefreshBrowser
	 */
	struct UTFWebUI_RefreshBrowser_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.LoadScript
	 */
	struct UTFWebUI_LoadScript_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHUD;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.IsInLoadingScreen
	 */
	struct UTFWebUI_IsInLoadingScreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.IsBrowserVisible
	 */
	struct UTFWebUI_IsBrowserVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.HideRenderTarget
	 */
	struct UTFWebUI_HideRenderTarget_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.HideLoadingScreen
	 */
	struct UTFWebUI_HideLoadingScreen_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.HideDebug
	 */
	struct UTFWebUI_HideDebug_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.HideBrowser
	 */
	struct UTFWebUI_HideBrowser_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.FocusBrowser
	 */
	struct UTFWebUI_FocusBrowser_Params
	{
	public:
		bool                                                       bHUD;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetMousePosition;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.FadeLoadingScreen
	 */
	struct UTFWebUI_FadeLoadingScreen_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.ExecuteScript
	 */
	struct UTFWebUI_ExecuteScript_Params
	{
	public:
		class FString                                              Script;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHUD;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TaskForce.TFWebUI.ActivateMenu
	 */
	struct UTFWebUI_ActivateMenu_Params
	{	};

	/**
	 * Function TaskForce.TFWebUI.ActivateLogo
	 */
	struct UTFWebUI_ActivateLogo_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
