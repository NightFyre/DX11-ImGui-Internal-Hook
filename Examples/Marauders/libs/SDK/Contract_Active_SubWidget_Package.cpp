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
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.WarningNotEnoughSpace
	 * 		Flags  -> ()
	 */
	void UContract_Active_SubWidget_C::WarningNotEnoughSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.WarningNotEnoughSpace");
		
		UContract_Active_SubWidget_C_WarningNotEnoughSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.RunReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionNameReward                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContract_Active_SubWidget_C::RunReward(const class FName& MissionNameReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.RunReward");
		
		UContract_Active_SubWidget_C_RunReward_Params params {};
		params.MissionNameReward = MissionNameReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UContract_Active_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.Construct");
		
		UContract_Active_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.Update_ActiveMissionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasAMisssion                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContract_Active_SubWidget_C::Update_ActiveMissionInfo(const class FName& MissionName, bool HasAMisssion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.Update_ActiveMissionInfo");
		
		UContract_Active_SubWidget_C_Update_ActiveMissionInfo_Params params {};
		params.MissionName = MissionName;
		params.HasAMisssion = HasAMisssion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContract_Active_SubWidget_C::BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UContract_Active_SubWidget_C_BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UContract_Active_SubWidget_C::BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature");
		
		UContract_Active_SubWidget_C_BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.ExecuteUbergraph_Contract_Active_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContract_Active_SubWidget_C::ExecuteUbergraph_Contract_Active_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Contract_Active_SubWidget.Contract_Active_SubWidget_C.ExecuteUbergraph_Contract_Active_SubWidget");
		
		UContract_Active_SubWidget_C_ExecuteUbergraph_Contract_Active_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContract_Active_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContract_Active_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Contract_Active_SubWidget.Contract_Active_SubWidget_C");
		return ptr;
	}

}


