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
	 * 		Name   -> Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnimBP_MainMenuSceneCharacters_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.AnimGraph");
		
		UAnimBP_MainMenuSceneCharacters_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_MM_CharacterPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               AnimToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_MainMenuSceneCharacters_C::Set_MM_CharacterPose(class UAnimSequence* AnimToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_MM_CharacterPose");
		
		UAnimBP_MainMenuSceneCharacters_C_Set_MM_CharacterPose_Params params {};
		params.AnimToUse = AnimToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichChar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_MainMenuSceneCharacters_C::Set_WhichMM_CharIAm(int32_t WhichChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm");
		
		UAnimBP_MainMenuSceneCharacters_C_Set_WhichMM_CharIAm_Params params {};
		params.WhichChar = WhichChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.ExecuteUbergraph_AnimBP_MainMenuSceneCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimBP_MainMenuSceneCharacters_C::ExecuteUbergraph_AnimBP_MainMenuSceneCharacters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C.ExecuteUbergraph_AnimBP_MainMenuSceneCharacters");
		
		UAnimBP_MainMenuSceneCharacters_C_ExecuteUbergraph_AnimBP_MainMenuSceneCharacters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBP_MainMenuSceneCharacters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBP_MainMenuSceneCharacters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MainMenuSceneCharacters.AnimBP_MainMenuSceneCharacters_C");
		return ptr;
	}

}


