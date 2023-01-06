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
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.CheckIfisA_VIP_Player
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::CheckIfisA_VIP_Player()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.CheckIfisA_VIP_Player");
		
		USIGIS_SkillTree_Widget_C_CheckIfisA_VIP_Player_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.RefreshAllSkillSubwidgets
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::RefreshAllSkillSubwidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.RefreshAllSkillSubwidgets");
		
		USIGIS_SkillTree_Widget_C_RefreshAllSkillSubwidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.GetSkillRequiredIcons
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::GetSkillRequiredIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.GetSkillRequiredIcons");
		
		USIGIS_SkillTree_Widget_C_GetSkillRequiredIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddSkillIncreaseUnlocks
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::AddSkillIncreaseUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddSkillIncreaseUnlocks");
		
		USIGIS_SkillTree_Widget_C_AddSkillIncreaseUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddRecipeUnlocks
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::AddRecipeUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddRecipeUnlocks");
		
		USIGIS_SkillTree_Widget_C_AddRecipeUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.UnlockTheCurrentSkill
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::UnlockTheCurrentSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.UnlockTheCurrentSkill");
		
		USIGIS_SkillTree_Widget_C_UnlockTheCurrentSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.SkillInfoArea_BuyState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SkillTreeBuySkillStates                          CurrentSkillBuyState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_SkillTree_Widget_C::SkillInfoArea_BuyState(E_SkillTreeBuySkillStates CurrentSkillBuyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.SkillInfoArea_BuyState");
		
		USIGIS_SkillTree_Widget_C_SkillInfoArea_BuyState_Params params {};
		params.CurrentSkillBuyState = CurrentSkillBuyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.FillSelectedSkill_Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillTree_Skill_Widget_C*                   Selected_SkillRef                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Current_Skill_Unique_ID                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Current_Skill_Cost                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Current_Skill_Name                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Current_Skill_Desc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Current_Skill_Icon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              RequiresSkills                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Current_Skill_RecipeUnlock                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    Current_Stat_Unlock                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_SkillTree_Widget_C::FillSelectedSkill_Info(class USkillTree_Skill_Widget_C* Selected_SkillRef, int32_t Current_Skill_Unique_ID, int32_t Current_Skill_Cost, const class FString& Current_Skill_Name, const class FString& Current_Skill_Desc, class UTexture2D* Current_Skill_Icon, TArray<unsigned char>* RequiresSkills, TArray<int32_t>* Current_Skill_RecipeUnlock, TArray<int32_t>* Current_Stat_Unlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.FillSelectedSkill_Info");
		
		USIGIS_SkillTree_Widget_C_FillSelectedSkill_Info_Params params {};
		params.Selected_SkillRef = Selected_SkillRef;
		params.Current_Skill_Unique_ID = Current_Skill_Unique_ID;
		params.Current_Skill_Cost = Current_Skill_Cost;
		params.Current_Skill_Name = Current_Skill_Name;
		params.Current_Skill_Desc = Current_Skill_Desc;
		params.Current_Skill_Icon = Current_Skill_Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequiresSkills != nullptr)
			*RequiresSkills = params.RequiresSkills;
		if (Current_Skill_RecipeUnlock != nullptr)
			*Current_Skill_RecipeUnlock = params.Current_Skill_RecipeUnlock;
		if (Current_Stat_Unlock != nullptr)
			*Current_Stat_Unlock = params.Current_Stat_Unlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Set_SelectedSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetSelectedSkill                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_SkillTree_Widget_C::Set_SelectedSkill(int32_t SetSelectedSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Set_SelectedSkill");
		
		USIGIS_SkillTree_Widget_C_Set_SelectedSkill_Params params {};
		params.SetSelectedSkill = SetSelectedSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Get_AllSkillWidgets
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::Get_AllSkillWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Get_AllSkillWidgets");
		
		USIGIS_SkillTree_Widget_C_Get_AllSkillWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Construct");
		
		USIGIS_SkillTree_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Refresh_SkillTree
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::Refresh_SkillTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Refresh_SkillTree");
		
		USIGIS_SkillTree_Widget_C_Refresh_SkillTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_SkillTree_Widget_C::BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USIGIS_SkillTree_Widget_C_BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.ExecuteUbergraph_SIGIS_SkillTree_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_SkillTree_Widget_C::ExecuteUbergraph_SIGIS_SkillTree_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.ExecuteUbergraph_SIGIS_SkillTree_Widget");
		
		USIGIS_SkillTree_Widget_C_ExecuteUbergraph_SIGIS_SkillTree_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_SkillTree_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_SkillTree_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C");
		return ptr;
	}

}


