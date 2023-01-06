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
	 * 		Name   -> Function LevelUp_Widget.LevelUp_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULevelUp_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelUp_Widget.LevelUp_Widget_C.Construct");
		
		ULevelUp_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelUp_Widget.LevelUp_Widget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULevelUp_Widget_C::BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelUp_Widget.LevelUp_Widget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		ULevelUp_Widget_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelUp_Widget.LevelUp_Widget_C.CloseAnimationFinished
	 * 		Flags  -> ()
	 */
	void ULevelUp_Widget_C::CloseAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelUp_Widget.LevelUp_Widget_C.CloseAnimationFinished");
		
		ULevelUp_Widget_C_CloseAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelUp_Widget.LevelUp_Widget_C.ExecuteUbergraph_LevelUp_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULevelUp_Widget_C::ExecuteUbergraph_LevelUp_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelUp_Widget.LevelUp_Widget_C.ExecuteUbergraph_LevelUp_Widget");
		
		ULevelUp_Widget_C_ExecuteUbergraph_LevelUp_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelUp_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelUp_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelUp_Widget.LevelUp_Widget_C");
		return ptr;
	}

}


