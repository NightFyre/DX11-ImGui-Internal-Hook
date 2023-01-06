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
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.IsSelectedLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreMissionElement_SubWidget_C::IsSelectedLook(bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.IsSelectedLook");
		
		UCoreMissionElement_SubWidget_C_IsSelectedLook_Params params {};
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCoreMissionElement_SubWidget_C::BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UCoreMissionElement_SubWidget_C_BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Update
	 * 		Flags  -> ()
	 */
	void UCoreMissionElement_SubWidget_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Update");
		
		UCoreMissionElement_SubWidget_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UCoreMissionElement_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Construct");
		
		UCoreMissionElement_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ExecuteUbergraph_CoreMissionElement_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoreMissionElement_SubWidget_C::ExecuteUbergraph_CoreMissionElement_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ExecuteUbergraph_CoreMissionElement_SubWidget");
		
		UCoreMissionElement_SubWidget_C_ExecuteUbergraph_CoreMissionElement_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ED_MissionPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           PressedMissionInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShouldPlaySound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCoreMissionElement_SubWidget_C::ED_MissionPressed__DelegateSignature(const struct FChapterMissionUI& PressedMissionInfo, bool ShouldPlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ED_MissionPressed__DelegateSignature");
		
		UCoreMissionElement_SubWidget_C_ED_MissionPressed__DelegateSignature_Params params {};
		params.PressedMissionInfo = PressedMissionInfo;
		params.ShouldPlaySound = ShouldPlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMissionElement_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMissionElement_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C");
		return ptr;
	}

}


