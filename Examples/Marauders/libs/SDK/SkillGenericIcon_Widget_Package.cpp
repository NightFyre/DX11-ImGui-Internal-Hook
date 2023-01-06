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
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillGenericIcon_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.PreConstruct");
		
		USkillGenericIcon_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillGenericIcon_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Construct");
		
		USkillGenericIcon_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Set_RecipeReqIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillGenericIcon_Widget_C::Set_RecipeReqIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Set_RecipeReqIcon");
		
		USkillGenericIcon_Widget_C_Set_RecipeReqIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MM_SecondaryOptions                              WhichButtonPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillGenericIcon_Widget_C::BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature(E_MM_SecondaryOptions WhichButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature");
		
		USkillGenericIcon_Widget_C_BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhichButtonPressed = WhichButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.ExecuteUbergraph_SkillGenericIcon_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillGenericIcon_Widget_C::ExecuteUbergraph_SkillGenericIcon_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.ExecuteUbergraph_SkillGenericIcon_Widget");
		
		USkillGenericIcon_Widget_C_ExecuteUbergraph_SkillGenericIcon_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Pressed_SkillsRequiredForUnlock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CraftType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Craft_ID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillGenericIcon_Widget_C::Pressed_SkillsRequiredForUnlock__DelegateSignature(const class FString& CraftType, int32_t Craft_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Pressed_SkillsRequiredForUnlock__DelegateSignature");
		
		USkillGenericIcon_Widget_C_Pressed_SkillsRequiredForUnlock__DelegateSignature_Params params {};
		params.CraftType = CraftType;
		params.Craft_ID = Craft_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillGenericIcon_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillGenericIcon_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillGenericIcon_Widget.SkillGenericIcon_Widget_C");
		return ptr;
	}

}


