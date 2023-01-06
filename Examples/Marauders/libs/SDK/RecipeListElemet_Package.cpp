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
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.Set_isSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecipeListElemet_C::Set_isSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.Set_isSelectedLook");
		
		URecipeListElemet_C_Set_isSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.SetupLook
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::SetupLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.SetupLook");
		
		URecipeListElemet_C_SetupLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.ISLockedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecipeListElemet_C::ISLockedLook(bool isUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.ISLockedLook");
		
		URecipeListElemet_C_ISLockedLook_Params params {};
		params.isUnlocked = isUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.GetBackground_1
	 * 		Flags  -> ()
	 */
	struct FSlateBrush URecipeListElemet_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.GetBackground_1");
		
		URecipeListElemet_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.UnlockedRecipe
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::UnlockedRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.UnlockedRecipe");
		
		URecipeListElemet_C_UnlockedRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.DeActiveRecipe
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::DeActiveRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.DeActiveRecipe");
		
		URecipeListElemet_C_DeActiveRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.RefreshLook
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::RefreshLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.RefreshLook");
		
		URecipeListElemet_C_RefreshLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::FakePress_RecipeListBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn");
		
		URecipeListElemet_C_FakePress_RecipeListBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.ActiveRecipe
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::ActiveRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.ActiveRecipe");
		
		URecipeListElemet_C_ActiveRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.Construct
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.Construct");
		
		URecipeListElemet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URecipeListElemet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.PreConstruct");
		
		URecipeListElemet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.Recipe_ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::Recipe_ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.Recipe_ForceUnselectedColour");
		
		URecipeListElemet_C_Recipe_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn_WithDelay
	 * 		Flags  -> ()
	 */
	void URecipeListElemet_C::FakePress_RecipeListBtn_WithDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn_WithDelay");
		
		URecipeListElemet_C_FakePress_RecipeListBtn_WithDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RecipeListElemet.RecipeListElemet_C.ExecuteUbergraph_RecipeListElemet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URecipeListElemet_C::ExecuteUbergraph_RecipeListElemet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RecipeListElemet.RecipeListElemet_C.ExecuteUbergraph_RecipeListElemet");
		
		URecipeListElemet_C_ExecuteUbergraph_RecipeListElemet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecipeListElemet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecipeListElemet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RecipeListElemet.RecipeListElemet_C");
		return ptr;
	}

}


