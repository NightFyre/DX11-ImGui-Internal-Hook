/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BlackHawkAnimations.BlackHawkAnimations_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBlackHawkAnimations_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackHawkAnimations.BlackHawkAnimations_C.AnimGraph");
		
		UBlackHawkAnimations_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BlackHawkAnimations.BlackHawkAnimations_C.UpdateRotationBasedUponSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    InRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERotorRotation                                     Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackHawkAnimations_C::UpdateRotationBasedUponSpeed(const struct FRotator& InRotation, float Speed, ERotorRotation Axis, struct FRotator* OutRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackHawkAnimations.BlackHawkAnimations_C.UpdateRotationBasedUponSpeed");
		
		UBlackHawkAnimations_C_UpdateRotationBasedUponSpeed_Params params {};
		params.InRotation = InRotation;
		params.Speed = Speed;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRotation != nullptr)
			*OutRotation = params.OutRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BlackHawkAnimations.BlackHawkAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBlackHawkAnimations_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackHawkAnimations.BlackHawkAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C");
		
		UBlackHawkAnimations_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BlackHawkAnimations_AnimGraphNode_ModifyBone_8B194FB840CC403D1A70DD95BA7E441C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BlackHawkAnimations.BlackHawkAnimations_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackHawkAnimations_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackHawkAnimations.BlackHawkAnimations_C.BlueprintUpdateAnimation");
		
		UBlackHawkAnimations_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BlackHawkAnimations.BlackHawkAnimations_C.ExecuteUbergraph_BlackHawkAnimations
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackHawkAnimations_C::ExecuteUbergraph_BlackHawkAnimations(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlackHawkAnimations.BlackHawkAnimations_C.ExecuteUbergraph_BlackHawkAnimations");
		
		UBlackHawkAnimations_C_ExecuteUbergraph_BlackHawkAnimations_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackHawkAnimations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackHawkAnimations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BlackHawkAnimations.BlackHawkAnimations_C");
		return ptr;
	}

}


