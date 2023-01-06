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
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetBackgroundLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTree_Skill_Widget_C::SetBackgroundLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetBackgroundLook");
		
		USkillTree_Skill_Widget_C_SetBackgroundLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetupSkillLook
	 * 		Flags  -> ()
	 */
	void USkillTree_Skill_Widget_C::SetupSkillLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetupSkillLook");
		
		USkillTree_Skill_Widget_C_SetupSkillLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTree_Skill_Widget_C::SetSelected(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.SetSelected");
		
		USkillTree_Skill_Widget_C_SetSelected_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.FakePressSkill
	 * 		Flags  -> ()
	 */
	void USkillTree_Skill_Widget_C::FakePressSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.FakePressSkill");
		
		USkillTree_Skill_Widget_C_FakePressSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillTree_Skill_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.Construct");
		
		USkillTree_Skill_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTree_Skill_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.PreConstruct");
		
		USkillTree_Skill_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.RefreshSkillWidget
	 * 		Flags  -> ()
	 */
	void USkillTree_Skill_Widget_C::RefreshSkillWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.RefreshSkillWidget");
		
		USkillTree_Skill_Widget_C_RefreshSkillWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillTree_Skill_Widget_C::BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USkillTree_Skill_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.ExecuteUbergraph_SkillTree_Skill_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_Skill_Widget_C::ExecuteUbergraph_SkillTree_Skill_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_Skill_Widget.SkillTree_Skill_Widget_C.ExecuteUbergraph_SkillTree_Skill_Widget");
		
		USkillTree_Skill_Widget_C_ExecuteUbergraph_SkillTree_Skill_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_Skill_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_Skill_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_Skill_Widget.SkillTree_Skill_Widget_C");
		return ptr;
	}

}


