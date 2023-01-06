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
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.SetSpinningLightOnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarDoor01_C::SetSpinningLightOnOff(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.SetSpinningLightOnOff");
		
		AHangarDoor01_C_SetSpinningLightOnOff_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.FadeTheLights__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AHangarDoor01_C::FadeTheLights__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.FadeTheLights__FinishedFunc");
		
		AHangarDoor01_C_FadeTheLights__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.FadeTheLights__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AHangarDoor01_C::FadeTheLights__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.FadeTheLights__UpdateFunc");
		
		AHangarDoor01_C_FadeTheLights__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AHangarDoor01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.ReceiveBeginPlay");
		
		AHangarDoor01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHangarDoor01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.ReceiveTick");
		
		AHangarDoor01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.TriggerHangarDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarDoor01_C::TriggerHangarDoor(bool ShouldOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.TriggerHangarDoor");
		
		AHangarDoor01_C_TriggerHangarDoor_Params params {};
		params.ShouldOpen = ShouldOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.LightsOnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LightsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHangarDoor01_C::LightsOnOff(bool LightsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.LightsOnOff");
		
		AHangarDoor01_C_LightsOnOff_Params params {};
		params.LightsOn = LightsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor01.HangarDoor01_C.ExecuteUbergraph_HangarDoor01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHangarDoor01_C::ExecuteUbergraph_HangarDoor01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor01.HangarDoor01_C.ExecuteUbergraph_HangarDoor01");
		
		AHangarDoor01_C_ExecuteUbergraph_HangarDoor01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHangarDoor01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHangarDoor01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HangarDoor01.HangarDoor01_C");
		return ptr;
	}

}


