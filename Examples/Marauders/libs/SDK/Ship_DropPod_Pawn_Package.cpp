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
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetAbleToBreach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAllowedToBreach                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::SetAbleToBreach(bool isAllowedToBreach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetAbleToBreach");
		
		AShip_DropPod_Pawn_C_SetAbleToBreach_Params params {};
		params.isAllowedToBreach = isAllowedToBreach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Pod_Cinematic_CameraMove
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Pod_Cinematic_CameraMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Pod_Cinematic_CameraMove");
		
		AShip_DropPod_Pawn_C_Pod_Cinematic_CameraMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetBoostingVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BoostOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::SetBoostingVisuals(bool BoostOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetBoostingVisuals");
		
		AShip_DropPod_Pawn_C_SetBoostingVisuals_Params params {};
		params.BoostOn = BoostOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetExtraThrustersLightIntensity
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::SetExtraThrustersLightIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.SetExtraThrustersLightIntensity");
		
		AShip_DropPod_Pawn_C_SetExtraThrustersLightIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ThrusterDirectionalChanges
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::ThrusterDirectionalChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ThrusterDirectionalChanges");
		
		AShip_DropPod_Pawn_C_ThrusterDirectionalChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.TurnOnOffNiagaraTrails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::TurnOnOffNiagaraTrails(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.TurnOnOffNiagaraTrails");
		
		AShip_DropPod_Pawn_C_TurnOnOffNiagaraTrails_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayThrusterSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::PlayThrusterSounds(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayThrusterSounds");
		
		AShip_DropPod_Pawn_C_PlayThrusterSounds_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrusterSounds
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::WorkOutExtraThrusterSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrusterSounds");
		
		AShip_DropPod_Pawn_C_WorkOutExtraThrusterSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingUpThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurn_On                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::GoingUpThrusterParticle(bool TryTurn_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingUpThrusterParticle");
		
		AShip_DropPod_Pawn_C_GoingUpThrusterParticle_Params params {};
		params.TryTurn_On = TryTurn_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingDownThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurn_On                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::GoingDownThrusterParticle(bool TryTurn_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GoingDownThrusterParticle");
		
		AShip_DropPod_Pawn_C_GoingDownThrusterParticle_Params params {};
		params.TryTurn_On = TryTurn_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrustersOnOff
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::WorkOutExtraThrustersOnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.WorkOutExtraThrustersOnOff");
		
		AShip_DropPod_Pawn_C_WorkOutExtraThrustersOnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CalculateRotDifferenceForThrusters
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::CalculateRotDifferenceForThrusters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CalculateRotDifferenceForThrusters");
		
		AShip_DropPod_Pawn_C_CalculateRotDifferenceForThrusters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.LeftThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurn_On                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::LeftThrusterParticle(bool TryTurn_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.LeftThrusterParticle");
		
		AShip_DropPod_Pawn_C_LeftThrusterParticle_Params params {};
		params.TryTurn_On = TryTurn_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.RightThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurn_On                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::RightThrusterParticle(bool TryTurn_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.RightThrusterParticle");
		
		AShip_DropPod_Pawn_C_RightThrusterParticle_Params params {};
		params.TryTurn_On = TryTurn_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotationOnMouseMove
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::CameraRotationOnMouseMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotationOnMouseMove");
		
		AShip_DropPod_Pawn_C_CameraRotationOnMouseMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AdjustBoomLength
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::AdjustBoomLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AdjustBoomLength");
		
		AShip_DropPod_Pawn_C_AdjustBoomLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.UserConstructionScript");
		
		AShip_DropPod_Pawn_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__FinishedFunc");
		
		AShip_DropPod_Pawn_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_0__UpdateFunc");
		
		AShip_DropPod_Pawn_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__FinishedFunc");
		
		AShip_DropPod_Pawn_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timeline_1__UpdateFunc");
		
		AShip_DropPod_Pawn_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpActEvt_N_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_3");
		
		AShip_DropPod_Pawn_C_InpActEvt_N_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2");
		
		AShip_DropPod_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
		
		AShip_DropPod_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ChangedGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGear                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::ChangedGear(int32_t NewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ChangedGear");
		
		AShip_DropPod_Pawn_C_ChangedGear_Params params {};
		params.NewGear = NewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AShip_DropPod_Pawn_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		AShip_DropPod_Pawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveTick");
		
		AShip_DropPod_Pawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PawnTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PawnTakenDamage");
		
		AShip_DropPod_Pawn_C_PawnTakenDamage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveBeginPlay");
		
		AShip_DropPod_Pawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2");
		
		AShip_DropPod_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Turret_ControlAimPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ControlAimLoc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Turret_ControlAimPoint(const struct FVector& ControlAimLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Turret_ControlAimPoint");
		
		AShip_DropPod_Pawn_C_Turret_ControlAimPoint_Params params {};
		params.ControlAimLoc = ControlAimLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Ship_ActorPitchAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PitchAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Ship_ActorPitchAmount(float PitchAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Ship_ActorPitchAmount");
		
		AShip_DropPod_Pawn_C_Ship_ActorPitchAmount_Params params {};
		params.PitchAmount = PitchAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodisBreaching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBreaching                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::DropPodisBreaching(bool isBreaching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodisBreaching");
		
		AShip_DropPod_Pawn_C_DropPodisBreaching_Params params {};
		params.isBreaching = isBreaching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodBoosting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoosting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::DropPodBoosting(bool IsBoosting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodBoosting");
		
		AShip_DropPod_Pawn_C_DropPodBoosting_Params params {};
		params.IsBoosting = IsBoosting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");
		
		AShip_DropPod_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPod_Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    RotMovementDelta                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentGear                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPod_Movement");
		
		AShip_DropPod_Pawn_C_DropPod_Movement_Params params {};
		params.RotMovementDelta = RotMovementDelta;
		params.CurrentGear = CurrentGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerUpDownInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::PlayerUpDownInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerUpDownInputAxis");
		
		AShip_DropPod_Pawn_C_PlayerUpDownInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_SpeedAsApercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SpeedAsPercentage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XY_Speed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z_Speed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_SpeedAsApercentage");
		
		AShip_DropPod_Pawn_C_Frigate_SpeedAsApercentage_Params params {};
		params.SpeedAsPercentage = SpeedAsPercentage;
		params.XY_Speed = XY_Speed;
		params.Z_Speed = Z_Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Hull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::Frigate_Damage_Hull(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Hull");
		
		AShip_DropPod_Pawn_C_Frigate_Damage_Hull_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BoostEffectEvent
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::BoostEffectEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BoostEffectEvent");
		
		AShip_DropPod_Pawn_C_BoostEffectEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::Frigate_Damage_HelmGun(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_HelmGun");
		
		AShip_DropPod_Pawn_C_Frigate_Damage_HelmGun_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::Frigate_Damage_Turret(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Turret");
		
		AShip_DropPod_Pawn_C_Frigate_Damage_Turret_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::Frigate_Damage_Engine(bool isDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Frigate_Damage_Engine");
		
		AShip_DropPod_Pawn_C_Frigate_Damage_Engine_Params params {};
		params.isDamaged = isDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerLeftRightInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::PlayerLeftRightInputAxis(float Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.PlayerLeftRightInputAxis");
		
		AShip_DropPod_Pawn_C_PlayerLeftRightInputAxis_Params params {};
		params.Float = Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Shoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TurretID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Shoot(int32_t TurretID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Shoot");
		
		AShip_DropPod_Pawn_C_Shoot_Params params {};
		params.TurretID = TurretID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    CameraRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotClamp_Min                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RotClamp_Max                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurretAnimRotSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.CameraRotation");
		
		AShip_DropPod_Pawn_C_CameraRotation_Params params {};
		params.CameraRotation = CameraRotation;
		params.RotClamp_Min = RotClamp_Min;
		params.RotClamp_Max = RotClamp_Max;
		params.TurretAnimRotSpeed = TurretAnimRotSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GearChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhatGear                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::GearChange(int32_t WhatGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.GearChange");
		
		AShip_DropPod_Pawn_C_GearChange_Params params {};
		params.WhatGear = WhatGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DebugShipAnimations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldDebugAnimations                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::DebugShipAnimations(bool ShouldDebugAnimations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DebugShipAnimations");
		
		AShip_DropPod_Pawn_C_DebugShipAnimations_Params params {};
		params.ShouldDebugAnimations = ShouldDebugAnimations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Trigger_PodCameraMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     FromSocketOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    FromRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ToSocketOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ToRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ToBoomLength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Trigger_PodCameraMove(const struct FVector& FromSocketOffset, const struct FRotator& FromRotation, const struct FVector& ToSocketOffset, const struct FRotator& ToRotation, float ToBoomLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Trigger_PodCameraMove");
		
		AShip_DropPod_Pawn_C_Trigger_PodCameraMove_Params params {};
		params.FromSocketOffset = FromSocketOffset;
		params.FromRotation = FromRotation;
		params.ToSocketOffset = ToSocketOffset;
		params.ToRotation = ToRotation;
		params.ToBoomLength = ToBoomLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AttachDropPodToShip
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::AttachDropPodToShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.AttachDropPodToShip");
		
		AShip_DropPod_Pawn_C_AttachDropPodToShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.isBreaching
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::isBreaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.isBreaching");
		
		AShip_DropPod_Pawn_C_isBreaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.IsEnteringArea
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::IsEnteringArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.IsEnteringArea");
		
		AShip_DropPod_Pawn_C_IsEnteringArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Force_DropPodGearChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGearToUse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::Force_DropPodGearChange(int32_t NewGearToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Force_DropPodGearChange");
		
		AShip_DropPod_Pawn_C_Force_DropPodGearChange_Params params {};
		params.NewGearToUse = NewGearToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timed_BreachCheck
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::Timed_BreachCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.Timed_BreachCheck");
		
		AShip_DropPod_Pawn_C_Timed_BreachCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ForceDropBoostingEffectForBreach
	 * 		Flags  -> ()
	 */
	void AShip_DropPod_Pawn_C::ForceDropBoostingEffectForBreach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ForceDropBoostingEffectForBreach");
		
		AShip_DropPod_Pawn_C_ForceDropBoostingEffectForBreach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BreachingEffects_Part1_Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayBreachEffects                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_DropPod_Pawn_C::BreachingEffects_Part1_Movement(bool PlayBreachEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.BreachingEffects_Part1_Movement");
		
		AShip_DropPod_Pawn_C_BreachingEffects_Part1_Movement_Params params {};
		params.PlayBreachEffects = PlayBreachEffects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4");
		
		AShip_DropPod_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5");
		
		AShip_DropPod_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_5_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.OnFaceRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.OnFaceRotation");
		
		AShip_DropPod_Pawn_C_OnFaceRotation_Params params {};
		params.NewRotation = NewRotation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ReceiveAnyDamage");
		
		AShip_DropPod_Pawn_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodHasTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::DropPodHasTakenDamage(float DamageAmount, int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.DropPodHasTakenDamage");
		
		AShip_DropPod_Pawn_C_DropPodHasTakenDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ExecuteUbergraph_Ship_DropPod_Pawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_DropPod_Pawn_C::ExecuteUbergraph_Ship_DropPod_Pawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_DropPod_Pawn.Ship_DropPod_Pawn_C.ExecuteUbergraph_Ship_DropPod_Pawn");
		
		AShip_DropPod_Pawn_C_ExecuteUbergraph_Ship_DropPod_Pawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShip_DropPod_Pawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShip_DropPod_Pawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ship_DropPod_Pawn.Ship_DropPod_Pawn_C");
		return ptr;
	}

}


