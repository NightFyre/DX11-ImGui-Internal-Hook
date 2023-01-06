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
	 * Function PlayerPawn.PlayerPawn_C.FlashbangFadeOut
	 */
	struct APlayerPawn_C_FlashbangFadeOut_Params
	{
	public:
		bool                                                       FinishedFading;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Flashbang_CalculateValues
	 */
	struct APlayerPawn_C_Flashbang_CalculateValues_Params
	{
	public:
		struct FVector                                             FlashLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Instance_Distance;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Instance_Angle;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Instance_Screenposition_X;                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Instance_Screenposition_Y;                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Instance_bISBehindPlayer;                                // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R460[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Flashbang_CheckForLineOfSight
	 */
	struct APlayerPawn_C_Flashbang_CheckForLineOfSight_Params
	{
	public:
		struct FVector                                             FlashBangStartLocation;                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PODI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Analytics_VoiceLineUsed
	 */
	struct APlayerPawn_C_Analytics_VoiceLineUsed_Params
	{
	public:
		class FString                                              VoiceLineUsed;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InterfaceSendValuesToAnimBP
	 */
	struct APlayerPawn_C_InterfaceSendValuesToAnimBP_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.StaminaCalculations
	 */
	struct APlayerPawn_C_StaminaCalculations_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_1__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_1__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_2__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_2__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_0__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_0__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_3__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_3__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.HitPostEffect__FinishedFunc
	 */
	struct APlayerPawn_C_HitPostEffect__FinishedFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.HitPostEffect__UpdateFunc
	 */
	struct APlayerPawn_C_HitPostEffect__UpdateFunc_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9
	 */
	struct APlayerPawn_C_InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice01_K2Node_InputActionEvent_8
	 */
	struct APlayerPawn_C_InpActEvt_Voice01_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice02_K2Node_InputActionEvent_7
	 */
	struct APlayerPawn_C_InpActEvt_Voice02_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice03_K2Node_InputActionEvent_6
	 */
	struct APlayerPawn_C_InpActEvt_Voice03_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice04_K2Node_InputActionEvent_5
	 */
	struct APlayerPawn_C_InpActEvt_Voice04_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice05_K2Node_InputActionEvent_4
	 */
	struct APlayerPawn_C_InpActEvt_Voice05_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice06_K2Node_InputActionEvent_3
	 */
	struct APlayerPawn_C_InpActEvt_Voice06_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice07_K2Node_InputActionEvent_2
	 */
	struct APlayerPawn_C_InpActEvt_Voice07_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice08_K2Node_InputActionEvent_1
	 */
	struct APlayerPawn_C_InpActEvt_Voice08_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_F_K2Node_InputKeyEvent_1
	 */
	struct APlayerPawn_C_InpActEvt_F_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLoaded_6FF4C9544EDDD0BC8561C89898811C29
	 */
	struct APlayerPawn_C_OnLoaded_6FF4C9544EDDD0BC8561C89898811C29_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32
	 */
	struct APlayerPawn_C_OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLoaded_AD2B2025447837D17B29C18B74ECDFA9
	 */
	struct APlayerPawn_C_OnLoaded_AD2B2025447837D17B29C18B74ECDFA9_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241
	 */
	struct APlayerPawn_C_OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodStart
	 */
	struct APlayerPawn_C_OnLowHealthBloodStart_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodEnd
	 */
	struct APlayerPawn_C_OnLowHealthBloodEnd_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DrivingFrigate
	 */
	struct APlayerPawn_C_DrivingFrigate_Params
	{
	public:
		class URaidUseableFrigateHelmComponent*                    HelmOut;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DrivingTurret
	 */
	struct APlayerPawn_C_DrivingTurret_Params
	{
	public:
		class URaidUseableTurretConrtrolComponent*                 TurretOut;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TurnOffTheDriving
	 */
	struct APlayerPawn_C_TurnOffTheDriving_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TurnOffTheGunner
	 */
	struct APlayerPawn_C_TurnOffTheGunner_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnProxyHitReact
	 */
	struct APlayerPawn_C_OnProxyHitReact_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.K2_OnStartCrouch
	 */
	struct APlayerPawn_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.K2_OnEndCrouch
	 */
	struct APlayerPawn_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.StaminaChargeStart
	 */
	struct APlayerPawn_C_StaminaChargeStart_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.StaminaChargeEnd
	 */
	struct APlayerPawn_C_StaminaChargeEnd_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnJumped
	 */
	struct APlayerPawn_C_OnJumped_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PlayEmoteVoice
	 */
	struct APlayerPawn_C_PlayEmoteVoice_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.MulticastPlayVoice
	 */
	struct APlayerPawn_C_MulticastPlayVoice_Params
	{
	public:
		bool                                                       is_A_Shout;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F8XU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                VoiceSet_DT_Row;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JOW3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSet_DT;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.RunOnServerVoice
	 */
	struct APlayerPawn_C_RunOnServerVoice_Params
	{
	public:
		bool                                                       IsAShout;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0I83[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                VoiceSet_DT_Row;                                         // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J4AR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDataTable*                                          VoiceSet_DT;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                VoiceLine;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TryPlayVoice
	 */
	struct APlayerPawn_C_TryPlayVoice_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ReceiveTick
	 */
	struct APlayerPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ReceiveEndPlay
	 */
	struct APlayerPawn_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ReceiveBeginPlay
	 */
	struct APlayerPawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.WeaponisBroken
	 */
	struct APlayerPawn_C_WeaponisBroken_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.SendBlockingDistance
	 */
	struct APlayerPawn_C_SendBlockingDistance_Params
	{
	public:
		bool                                                       isBlocking;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D8BT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlockingDistance;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.IsUsingCameraTurret
	 */
	struct APlayerPawn_C_IsUsingCameraTurret_Params
	{
	public:
		bool                                                       UsingCameraTurret;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.JumpHasBeenTriggered
	 */
	struct APlayerPawn_C_JumpHasBeenTriggered_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.CrouchStateChange
	 */
	struct APlayerPawn_C_CrouchStateChange_Params
	{
	public:
		bool                                                       isCrouchingNow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DoProxyHitReact
	 */
	struct APlayerPawn_C_DoProxyHitReact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PlayHurtAnim
	 */
	struct APlayerPawn_C_PlayHurtAnim_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.StaminaVars
	 */
	struct APlayerPawn_C_StaminaVars_Params
	{
	public:
		float                                                      StaminaPercent;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DelayWeaponVars
	 */
	struct APlayerPawn_C_DelayWeaponVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.WeaponDelayVars
	 */
	struct APlayerPawn_C_WeaponDelayVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.IsUsingPilotSeat
	 */
	struct APlayerPawn_C_IsUsingPilotSeat_Params
	{
	public:
		bool                                                       UsingPilotSeat;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.IsUsingTurret
	 */
	struct APlayerPawn_C_IsUsingTurret_Params
	{
	public:
		bool                                                       UsingTurret;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnPlayReachOutAnim
	 */
	struct APlayerPawn_C_OnPlayReachOutAnim_Params
	{
	public:
		class FName                                                AnimToUse;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.HumanPlayerDied
	 */
	struct APlayerPawn_C_HumanPlayerDied_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TurnOffTheCameraTurret
	 */
	struct APlayerPawn_C_TurnOffTheCameraTurret_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Trigger_CameraMode
	 */
	struct APlayerPawn_C_Trigger_CameraMode_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.CamMode_Multi
	 */
	struct APlayerPawn_C_CamMode_Multi_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FakeAddInput
	 */
	struct APlayerPawn_C_FakeAddInput_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Shooting_Shaking
	 */
	struct APlayerPawn_C_Shooting_Shaking_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.CheckForBlockingTrace
	 */
	struct APlayerPawn_C_CheckForBlockingTrace_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TickRelativeOffsetTheMask
	 */
	struct APlayerPawn_C_TickRelativeOffsetTheMask_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OxygenDyingTimer
	 */
	struct APlayerPawn_C_OxygenDyingTimer_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APlayerPawn_C_BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTYG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BeenFlashbanged
	 */
	struct APlayerPawn_C_BeenFlashbanged_Params
	{
	public:
		struct FVector                                             FlashLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LengthBeforeFade;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSFlashbangSettings                                 FlashbangSettings;                                       // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FadeOutFlashBangEffect
	 */
	struct APlayerPawn_C_FadeOutFlashBangEffect_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FadeOutTheFlashbangEffects
	 */
	struct APlayerPawn_C_FadeOutTheFlashbangEffects_Params
	{	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.OnTakeAnyDamage_Event
	 */
	struct APlayerPawn_C_OnTakeAnyDamage_Event_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGDF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PlayerHasTakenDamage
	 */
	struct APlayerPawn_C_PlayerHasTakenDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              DamageType;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn
	 */
	struct APlayerPawn_C_ExecuteUbergraph_PlayerPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
