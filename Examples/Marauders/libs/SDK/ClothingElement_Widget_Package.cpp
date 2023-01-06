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
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.Set_isSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClothingElement_Widget_C::Set_isSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.Set_isSelectedLook");
		
		UClothingElement_Widget_C_Set_isSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.SetupLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Whats_In_ThisSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClothingElement_Widget_C::SetupLook(class UTexture2D* Texture, const class FName& Whats_In_ThisSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.SetupLook");
		
		UClothingElement_Widget_C_SetupLook_Params params {};
		params.Texture = Texture;
		params.Whats_In_ThisSlot = Whats_In_ThisSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.ISLockedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClothingElement_Widget_C::ISLockedLook(bool isUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.ISLockedLook");
		
		UClothingElement_Widget_C_ISLockedLook_Params params {};
		params.isUnlocked = isUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.GetBackground_1
	 * 		Flags  -> ()
	 */
	struct FSlateBrush UClothingElement_Widget_C::GetBackground_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.GetBackground_1");
		
		UClothingElement_Widget_C_GetBackground_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.Construct");
		
		UClothingElement_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UClothingElement_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.PreConstruct");
		
		UClothingElement_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.Recipe_ForceUnselectedColour
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::Recipe_ForceUnselectedColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.Recipe_ForceUnselectedColour");
		
		UClothingElement_Widget_C_Recipe_ForceUnselectedColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.ExecuteUbergraph_ClothingElement_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClothingElement_Widget_C::ExecuteUbergraph_ClothingElement_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.ExecuteUbergraph_ClothingElement_Widget");
		
		UClothingElement_Widget_C_ExecuteUbergraph_ClothingElement_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ClothingElement_Widget.ClothingElement_Widget_C.ED_ClothingElementPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UClothingElement_Widget_C::ED_ClothingElementPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClothingElement_Widget.ClothingElement_Widget_C.ED_ClothingElementPressed__DelegateSignature");
		
		UClothingElement_Widget_C_ED_ClothingElementPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingElement_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingElement_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClothingElement_Widget.ClothingElement_Widget_C");
		return ptr;
	}

}


