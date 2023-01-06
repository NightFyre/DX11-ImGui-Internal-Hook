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
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.HasFriendsInList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowFriendsList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	 */
	void USIGIS_FriendInviteList_C::HasFriendsInList(bool ShowFriendsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.HasFriendsInList");
		
		USIGIS_FriendInviteList_C_HasFriendsInList_Params params {};
		params.ShowFriendsList = ShowFriendsList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_FriendInviteList_C::OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7");
		
		USIGIS_FriendInviteList_C_OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaRPCResponse                          SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_FriendInviteList_C::OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7");
		
		USIGIS_FriendInviteList_C_OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_CD3C8ACD495820EBD384FEBCAA19A996
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_FriendInviteList_C::OnError_CD3C8ACD495820EBD384FEBCAA19A996(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_CD3C8ACD495820EBD384FEBCAA19A996");
		
		USIGIS_FriendInviteList_C_OnError_CD3C8ACD495820EBD384FEBCAA19A996_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNakamaListGroupMembersResponse             SuccessResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FNakamaErrorResponse                        ErrorResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_FriendInviteList_C::OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996");
		
		USIGIS_FriendInviteList_C_OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996_Params params {};
		params.SuccessResponse = SuccessResponse;
		params.ErrorResponse = ErrorResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_FriendInviteList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Construct");
		
		USIGIS_FriendInviteList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_FriendInviteList_C::BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature");
		
		USIGIS_FriendInviteList_C_BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Refresh_FriendsList
	 * 		Flags  -> ()
	 */
	void USIGIS_FriendInviteList_C::Refresh_FriendsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Refresh_FriendsList");
		
		USIGIS_FriendInviteList_C_Refresh_FriendsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.SendoutAnInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamNakamaFriend                          NakamaFriendToInvite                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_FriendInviteList_C::SendoutAnInvite(const struct FSteamNakamaFriend& NakamaFriendToInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.SendoutAnInvite");
		
		USIGIS_FriendInviteList_C_SendoutAnInvite_Params params {};
		params.NakamaFriendToInvite = NakamaFriendToInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Return_AllFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamNakamaFriend>                  FreindArry                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      pageNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_FriendInviteList_C::Return_AllFriends(TArray<struct FSteamNakamaFriend> FreindArry, const class FString& pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Return_AllFriends");
		
		USIGIS_FriendInviteList_C_Return_AllFriends_Params params {};
		params.FreindArry = FreindArry;
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.ExecuteUbergraph_SIGIS_FriendInviteList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_FriendInviteList_C::ExecuteUbergraph_SIGIS_FriendInviteList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.ExecuteUbergraph_SIGIS_FriendInviteList");
		
		USIGIS_FriendInviteList_C_ExecuteUbergraph_SIGIS_FriendInviteList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_FriendInviteList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_FriendInviteList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_FriendInviteList.SIGIS_FriendInviteList_C");
		return ptr;
	}

}


