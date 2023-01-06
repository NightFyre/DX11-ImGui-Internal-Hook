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
	 * 		Name   -> Function TargetAnimations.TargetAnimations_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UTargetAnimations_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetAnimations.TargetAnimations_C.AnimGraph");
		
		UTargetAnimations_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TargetAnimations.TargetAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTargetAnimations_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetAnimations.TargetAnimations_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D");
		
		UTargetAnimations_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TargetAnimations_AnimGraphNode_ModifyBone_81D9975142E368A80BC1549F0FF8892D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TargetAnimations.TargetAnimations_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetAnimations_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetAnimations.TargetAnimations_C.BlueprintUpdateAnimation");
		
		UTargetAnimations_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TargetAnimations.TargetAnimations_C.ExecuteUbergraph_TargetAnimations
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetAnimations_C::ExecuteUbergraph_TargetAnimations(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetAnimations.TargetAnimations_C.ExecuteUbergraph_TargetAnimations");
		
		UTargetAnimations_C_ExecuteUbergraph_TargetAnimations_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetAnimations_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetAnimations_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TargetAnimations.TargetAnimations_C");
		return ptr;
	}

}


