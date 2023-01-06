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
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ShowHide_ReadyOrNotSection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Crews_RowSmall_C::ShowHide_ReadyOrNotSection(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ShowHide_ReadyOrNotSection");
		
		USIGIS_Crews_RowSmall_C_ShowHide_ReadyOrNotSection_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnFail_966A71F24D32FD12AF04C5AC35A1975B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_RowSmall_C::OnFail_966A71F24D32FD12AF04C5AC35A1975B(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnFail_966A71F24D32FD12AF04C5AC35A1975B");
		
		USIGIS_Crews_RowSmall_C_OnFail_966A71F24D32FD12AF04C5AC35A1975B_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnSuccess_966A71F24D32FD12AF04C5AC35A1975B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_RowSmall_C::OnSuccess_966A71F24D32FD12AF04C5AC35A1975B(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnSuccess_966A71F24D32FD12AF04C5AC35A1975B");
		
		USIGIS_Crews_RowSmall_C_OnSuccess_966A71F24D32FD12AF04C5AC35A1975B_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_RowSmall_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.Construct");
		
		USIGIS_Crews_RowSmall_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.RefreshSlot_Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           ThisPlayerEOS_ID                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FNakamaNGroupUser                           NakamaMember                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               is_captainView                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isEmptySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_RowSmall_C::RefreshSlot_Info(const struct FEOSProductUserId& ThisPlayerEOS_ID, const struct FNakamaNGroupUser& NakamaMember, bool is_captainView, bool isEmptySlot, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.RefreshSlot_Info");
		
		USIGIS_Crews_RowSmall_C_RefreshSlot_Info_Params params {};
		params.ThisPlayerEOS_ID = ThisPlayerEOS_ID;
		params.NakamaMember = NakamaMember;
		params.is_captainView = is_captainView;
		params.isEmptySlot = isEmptySlot;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_RowSmall_C::BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_RowSmall_C_BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MM_SecondaryOptions                              WhichButtonPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_RowSmall_C::BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature(E_MM_SecondaryOptions WhichButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_Crews_RowSmall_C_BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhichButtonPressed = WhichButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_RowSmall_C::BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_Crews_RowSmall_C_BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.IsSearchingForAMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSearchingForAMatch                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_Crews_RowSmall_C::IsSearchingForAMatch(bool IsSearchingForAMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.IsSearchingForAMatch");
		
		USIGIS_Crews_RowSmall_C_IsSearchingForAMatch_Params params {};
		params.IsSearchingForAMatch = IsSearchingForAMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ExecuteUbergraph_SIGIS_Crews_RowSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_Crews_RowSmall_C::ExecuteUbergraph_SIGIS_Crews_RowSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ExecuteUbergraph_SIGIS_Crews_RowSmall");
		
		USIGIS_Crews_RowSmall_C_ExecuteUbergraph_SIGIS_Crews_RowSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ED_AddFriendToEmptyRow__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_Crews_RowSmall_C::ED_AddFriendToEmptyRow__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ED_AddFriendToEmptyRow__DelegateSignature");
		
		USIGIS_Crews_RowSmall_C_ED_AddFriendToEmptyRow__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.CptWantToKickPlayer__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           EOS_ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FNakamaNGroupUser                           NakamaMemberInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_Crews_RowSmall_C::CptWantToKickPlayer__DelegateSignature(const struct FEOSProductUserId& EOS_ID, const struct FNakamaNGroupUser& NakamaMemberInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.CptWantToKickPlayer__DelegateSignature");
		
		USIGIS_Crews_RowSmall_C_CptWantToKickPlayer__DelegateSignature_Params params {};
		params.EOS_ID = EOS_ID;
		params.NakamaMemberInfo = NakamaMemberInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_Crews_RowSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_Crews_RowSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C");
		return ptr;
	}

}


