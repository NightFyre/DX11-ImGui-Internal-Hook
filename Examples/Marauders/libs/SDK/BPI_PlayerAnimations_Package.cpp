/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponisBroken
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerAnimations_C::WeaponisBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponisBroken");
		
		UBPI_PlayerAnimations_C_WeaponisBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.SendBlockingDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBlocking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlockingDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerAnimations_C::SendBlockingDistance(bool isBlocking, float BlockingDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.SendBlockingDistance");
		
		UBPI_PlayerAnimations_C_SendBlockingDistance_Params params {};
		params.isBlocking = isBlocking;
		params.BlockingDistance = BlockingDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.Shooting_Shaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerAnimations_C::Shooting_Shaking(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.Shooting_Shaking");
		
		UBPI_PlayerAnimations_C_Shooting_Shaking_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingCameraTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingCameraTurret                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerAnimations_C::IsUsingCameraTurret(bool UsingCameraTurret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingCameraTurret");
		
		UBPI_PlayerAnimations_C_IsUsingCameraTurret_Params params {};
		params.UsingCameraTurret = UsingCameraTurret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.JumpHasBeenTriggered
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerAnimations_C::JumpHasBeenTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.JumpHasBeenTriggered");
		
		UBPI_PlayerAnimations_C_JumpHasBeenTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.CrouchStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCrouchingNow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerAnimations_C::CrouchStateChange(bool isCrouchingNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.CrouchStateChange");
		
		UBPI_PlayerAnimations_C_CrouchStateChange_Params params {};
		params.isCrouchingNow = isCrouchingNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DoProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPI_PlayerAnimations_C::DoProxyHitReact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DoProxyHitReact");
		
		UBPI_PlayerAnimations_C_DoProxyHitReact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.PlayHurtAnim
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerAnimations_C::PlayHurtAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.PlayHurtAnim");
		
		UBPI_PlayerAnimations_C_PlayHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.StaminaVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerAnimations_C::StaminaVars(float StaminaPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.StaminaVars");
		
		UBPI_PlayerAnimations_C_StaminaVars_Params params {};
		params.StaminaPercent = StaminaPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DelayWeaponVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Turn_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveRight_Input                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LookUp_Input                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerAnimations_C::DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.DelayWeaponVars");
		
		UBPI_PlayerAnimations_C_DelayWeaponVars_Params params {};
		params.Turn_Input = Turn_Input;
		params.MoveRight_Input = MoveRight_Input;
		params.LookUp_Input = LookUp_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponDelayVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Turn_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveRight_Input                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LookUp_Input                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerAnimations_C::WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.WeaponDelayVars");
		
		UBPI_PlayerAnimations_C_WeaponDelayVars_Params params {};
		params.Turn_Input = Turn_Input;
		params.MoveRight_Input = MoveRight_Input;
		params.LookUp_Input = LookUp_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingPilotSeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingPilotSeat                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerAnimations_C::IsUsingPilotSeat(bool UsingPilotSeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingPilotSeat");
		
		UBPI_PlayerAnimations_C_IsUsingPilotSeat_Params params {};
		params.UsingPilotSeat = UsingPilotSeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingTurret                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerAnimations_C::IsUsingTurret(bool UsingTurret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimations.BPI_PlayerAnimations_C.IsUsingTurret");
		
		UBPI_PlayerAnimations_C_IsUsingTurret_Params params {};
		params.UsingTurret = UsingTurret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerAnimations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerAnimations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerAnimations.BPI_PlayerAnimations_C");
		return ptr;
	}

}


