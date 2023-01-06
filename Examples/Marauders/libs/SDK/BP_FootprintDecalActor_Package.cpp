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
	 * 		Name   -> Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.SetupTheFootprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          NewDecalMaterial                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxStepsForMatType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentStepsLeft                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootprintDecalActor_C::SetupTheFootprint(class UMaterialInterface* NewDecalMaterial, float Duration, float MaxStepsForMatType, float CurrentStepsLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.SetupTheFootprint");
		
		ABP_FootprintDecalActor_C_SetupTheFootprint_Params params {};
		params.NewDecalMaterial = NewDecalMaterial;
		params.Duration = Duration;
		params.MaxStepsForMatType = MaxStepsForMatType;
		params.CurrentStepsLeft = CurrentStepsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FootprintDecalActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ReceiveBeginPlay");
		
		ABP_FootprintDecalActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ExecuteUbergraph_BP_FootprintDecalActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FootprintDecalActor_C::ExecuteUbergraph_BP_FootprintDecalActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FootprintDecalActor.BP_FootprintDecalActor_C.ExecuteUbergraph_BP_FootprintDecalActor");
		
		ABP_FootprintDecalActor_C_ExecuteUbergraph_BP_FootprintDecalActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FootprintDecalActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FootprintDecalActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FootprintDecalActor.BP_FootprintDecalActor_C");
		return ptr;
	}

}


