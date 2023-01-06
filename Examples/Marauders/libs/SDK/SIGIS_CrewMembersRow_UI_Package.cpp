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
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Set_PlayerIsFillingSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CrewMemeberSlotStates                            IsPlayerFillingSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_CrewMembersRow_UI_C::Set_PlayerIsFillingSlot(E_CrewMemeberSlotStates IsPlayerFillingSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Set_PlayerIsFillingSlot");
		
		USIGIS_CrewMembersRow_UI_C_Set_PlayerIsFillingSlot_Params params {};
		params.IsPlayerFillingSlot = IsPlayerFillingSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.RefreshCrewmemberSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ElementUserID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsACaptainViewingMe                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CaptainsName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_CrewMembersRow_UI_C::RefreshCrewmemberSlot(const class FString& ElementUserID, bool IsACaptainViewingMe, const class FString& PlayerName, const class FString& CaptainsName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.RefreshCrewmemberSlot");
		
		USIGIS_CrewMembersRow_UI_C_RefreshCrewmemberSlot_Params params {};
		params.ElementUserID = ElementUserID;
		params.IsACaptainViewingMe = IsACaptainViewingMe;
		params.PlayerName = PlayerName;
		params.CaptainsName = CaptainsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_CrewMembersRow_UI_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_CrewMembersRow_UI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_CrewMembersRow_UI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Construct");
		
		USIGIS_CrewMembersRow_UI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_CrewMembersRow_UI_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USIGIS_CrewMembersRow_UI_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.SetupCrewMemberWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           CrewMember_Icon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CrewMember_Name                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsAdminView                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPersonsOwnWidge                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_CrewMembersRow_UI_C::SetupCrewMemberWidget(class UTexture2DDynamic* CrewMember_Icon, const class FString& CrewMember_Name, bool IsAdminView, bool IsPersonsOwnWidge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.SetupCrewMemberWidget");
		
		USIGIS_CrewMembersRow_UI_C_SetupCrewMemberWidget_Params params {};
		params.CrewMember_Icon = CrewMember_Icon;
		params.CrewMember_Name = CrewMember_Name;
		params.IsAdminView = IsAdminView;
		params.IsPersonsOwnWidge = IsPersonsOwnWidge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.ExecuteUbergraph_SIGIS_CrewMembersRow_UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_CrewMembersRow_UI_C::ExecuteUbergraph_SIGIS_CrewMembersRow_UI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.ExecuteUbergraph_SIGIS_CrewMembersRow_UI");
		
		USIGIS_CrewMembersRow_UI_C_ExecuteUbergraph_SIGIS_CrewMembersRow_UI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.KickPlayer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_CrewMembersRow_UI_C::KickPlayer__DelegateSignature(const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.KickPlayer__DelegateSignature");
		
		USIGIS_CrewMembersRow_UI_C_KickPlayer__DelegateSignature_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_CrewMembersRow_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_CrewMembersRow_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C");
		return ptr;
	}

}


