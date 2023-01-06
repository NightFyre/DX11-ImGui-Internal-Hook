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
	 * 		Name   -> Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_HanagrDoor01_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.AnimGraph");
		
		UAnimBP_HanagrDoor01_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_B6CA3E0D43EBD33858A500A16D2094C2
	 * 		Flags  -> ()
	 */
	void UAnimBP_HanagrDoor01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_B6CA3E0D43EBD33858A500A16D2094C2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_B6CA3E0D43EBD33858A500A16D2094C2");
		
		UAnimBP_HanagrDoor01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_B6CA3E0D43EBD33858A500A16D2094C2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_F6D03F0E4FCB4089CF8338B44E757BAF
	 * 		Flags  -> ()
	 */
	void UAnimBP_HanagrDoor01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_F6D03F0E4FCB4089CF8338B44E757BAF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_F6D03F0E4FCB4089CF8338B44E757BAF");
		
		UAnimBP_HanagrDoor01_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HanagrDoor01_AnimGraphNode_TransitionResult_F6D03F0E4FCB4089CF8338B44E757BAF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.SetHangarDoorOpenClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAnimBP_HanagrDoor01_C::SetHangarDoorOpenClose(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.SetHangarDoorOpenClose");
		
		UAnimBP_HanagrDoor01_C_SetHangarDoorOpenClose_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.ExecuteUbergraph_AnimBP_HanagrDoor01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_HanagrDoor01_C::ExecuteUbergraph_AnimBP_HanagrDoor01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C.ExecuteUbergraph_AnimBP_HanagrDoor01");
		
		UAnimBP_HanagrDoor01_C_ExecuteUbergraph_AnimBP_HanagrDoor01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_HanagrDoor01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_HanagrDoor01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_HanagrDoor01.AnimBP_HanagrDoor01_C");
		return ptr;
	}

}


