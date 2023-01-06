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
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponisBroken
	 */
	struct UBPI_PlayerAnimations_C_WeaponisBroken_Params
	{	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.SendBlockingDistance
	 */
	struct UBPI_PlayerAnimations_C_SendBlockingDistance_Params
	{
	public:
		bool                                                       isBlocking;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZX06[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlockingDistance;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.Shooting_Shaking
	 */
	struct UBPI_PlayerAnimations_C_Shooting_Shaking_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingCameraTurret
	 */
	struct UBPI_PlayerAnimations_C_IsUsingCameraTurret_Params
	{
	public:
		bool                                                       UsingCameraTurret;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.JumpHasBeenTriggered
	 */
	struct UBPI_PlayerAnimations_C_JumpHasBeenTriggered_Params
	{	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.CrouchStateChange
	 */
	struct UBPI_PlayerAnimations_C_CrouchStateChange_Params
	{
	public:
		bool                                                       isCrouchingNow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DoProxyHitReact
	 */
	struct UBPI_PlayerAnimations_C_DoProxyHitReact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.PlayHurtAnim
	 */
	struct UBPI_PlayerAnimations_C_PlayHurtAnim_Params
	{	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.StaminaVars
	 */
	struct UBPI_PlayerAnimations_C_StaminaVars_Params
	{
	public:
		float                                                      StaminaPercent;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DelayWeaponVars
	 */
	struct UBPI_PlayerAnimations_C_DelayWeaponVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponDelayVars
	 */
	struct UBPI_PlayerAnimations_C_WeaponDelayVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingPilotSeat
	 */
	struct UBPI_PlayerAnimations_C_IsUsingPilotSeat_Params
	{
	public:
		bool                                                       UsingPilotSeat;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingTurret
	 */
	struct UBPI_PlayerAnimations_C_IsUsingTurret_Params
	{
	public:
		bool                                                       UsingTurret;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
