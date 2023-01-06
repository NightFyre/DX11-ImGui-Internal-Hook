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
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GetSetShipName
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::GetSetShipName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GetSetShipName");
		
		AShip_Frigate01_Pawn_C_GetSetShipName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrustersLeftRightOnOff
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::ThrustersLeftRightOnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrustersLeftRightOnOff");
		
		AShip_Frigate01_Pawn_C_ThrustersLeftRightOnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrustersUpDownOnOff
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::ThrustersUpDownOnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrustersUpDownOnOff");
		
		AShip_Frigate01_Pawn_C_ThrustersUpDownOnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrusterDirectionalChanges
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::ThrusterDirectionalChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ThrusterDirectionalChanges");
		
		AShip_Frigate01_Pawn_C_ThrusterDirectionalChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GoingUpThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::GoingUpThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GoingUpThrusterParticle");
		
		AShip_Frigate01_Pawn_C_GoingUpThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GoingDownThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::GoingDownThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.GoingDownThrusterParticle");
		
		AShip_Frigate01_Pawn_C_GoingDownThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.TurnOnOffNiagaraTrails
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::TurnOnOffNiagaraTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.TurnOnOffNiagaraTrails");
		
		AShip_Frigate01_Pawn_C_TurnOnOffNiagaraTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_ShipHull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount_Percent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::DamageEffects_ShipHull(float DamageAmount_Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_ShipHull");
		
		AShip_Frigate01_Pawn_C_DamageEffects_ShipHull_Params params {};
		params.DamageAmount_Percent = DamageAmount_Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::DamageEffects_HelmGun(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_HelmGun");
		
		AShip_Frigate01_Pawn_C_DamageEffects_HelmGun_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::DamageEffects_Engine(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_Engine");
		
		AShip_Frigate01_Pawn_C_DamageEffects_Engine_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::DamageEffects_Turret(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.DamageEffects_Turret");
		
		AShip_Frigate01_Pawn_C_DamageEffects_Turret_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.AdjustBoomLength
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::AdjustBoomLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.AdjustBoomLength");
		
		AShip_Frigate01_Pawn_C_AdjustBoomLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PlayLeftRightThrusterSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::PlayLeftRightThrusterSound(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PlayLeftRightThrusterSound");
		
		AShip_Frigate01_Pawn_C_PlayLeftRightThrusterSound_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.SetMainThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::SetMainThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.SetMainThrusterParticle");
		
		AShip_Frigate01_Pawn_C_SetMainThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ActivateSubThrusters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::ActivateSubThrusters(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ActivateSubThrusters");
		
		AShip_Frigate01_Pawn_C_ActivateSubThrusters_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.LeftThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::LeftThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.LeftThrusterParticle");
		
		AShip_Frigate01_Pawn_C_LeftThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.RightThrusterParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TryTurnOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AShip_Frigate01_Pawn_C::RightThrusterParticle(bool TryTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.RightThrusterParticle");
		
		AShip_Frigate01_Pawn_C_RightThrusterParticle_Params params {};
		params.TryTurnOn = TryTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Timeline_0__FinishedFunc");
		
		AShip_Frigate01_Pawn_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Timeline_0__UpdateFunc");
		
		AShip_Frigate01_Pawn_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpActEvt_N_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_N_K2Node_InputKeyEvent_3");
		
		AShip_Frigate01_Pawn_C_InpActEvt_N_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2");
		
		AShip_Frigate01_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
		
		AShip_Frigate01_Pawn_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AShip_Frigate01_Pawn_C::BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		AShip_Frigate01_Pawn_C_BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ReceiveTick");
		
		AShip_Frigate01_Pawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ReceiveBeginPlay");
		
		AShip_Frigate01_Pawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ShipHealthCheck
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::ShipHealthCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ShipHealthCheck");
		
		AShip_Frigate01_Pawn_C_ShipHealthCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1");
		
		AShip_Frigate01_Pawn_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PawnTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PawnTakenDamage");
		
		AShip_Frigate01_Pawn_C_PawnTakenDamage_Params params {};
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
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AShip_Frigate01_Pawn_C::BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		AShip_Frigate01_Pawn_C_BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InitialCheck_TurningHard
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::InitialCheck_TurningHard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InitialCheck_TurningHard");
		
		AShip_Frigate01_Pawn_C_InitialCheck_TurningHard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PlayAHardTurnSound
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::PlayAHardTurnSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.PlayAHardTurnSound");
		
		AShip_Frigate01_Pawn_C_PlayAHardTurnSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");
		
		AShip_Frigate01_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Trigger_FrigateCinematicCameraMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  ToSocketOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ToRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ToBoomLength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::Trigger_FrigateCinematicCameraMove(const struct FTransform& ToSocketOffset, const struct FRotator& ToRotation, float ToBoomLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Trigger_FrigateCinematicCameraMove");
		
		AShip_Frigate01_Pawn_C_Trigger_FrigateCinematicCameraMove_Params params {};
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
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Frigate_IsEnteringArea
	 * 		Flags  -> ()
	 */
	void AShip_Frigate01_Pawn_C::Frigate_IsEnteringArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.Frigate_IsEnteringArea");
		
		AShip_Frigate01_Pawn_C_Frigate_IsEnteringArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.OnFaceRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.OnFaceRotation");
		
		AShip_Frigate01_Pawn_C_OnFaceRotation_Params params {};
		params.NewRotation = NewRotation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4");
		
		AShip_Frigate01_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_5");
		
		AShip_Frigate01_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_5_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ShipTakeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::ShipTakeDamage(float DamageAmount, int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ShipTakeDamage");
		
		AShip_Frigate01_Pawn_C_ShipTakeDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ExecuteUbergraph_Ship_Frigate01_Pawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_Frigate01_Pawn_C::ExecuteUbergraph_Ship_Frigate01_Pawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C.ExecuteUbergraph_Ship_Frigate01_Pawn");
		
		AShip_Frigate01_Pawn_C_ExecuteUbergraph_Ship_Frigate01_Pawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShip_Frigate01_Pawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShip_Frigate01_Pawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ship_Frigate01_Pawn.Ship_Frigate01_Pawn_C");
		return ptr;
	}

}


