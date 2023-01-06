#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.HasFriendsInList
	 */
	struct USIGIS_FriendInviteList_C_HasFriendsInList_Params
	{
	public:
		bool                                                       ShowFriendsList;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7
	 */
	struct USIGIS_FriendInviteList_C_OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7
	 */
	struct USIGIS_FriendInviteList_C_OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7_Params
	{
	public:
		struct FNakamaRPCResponse                                  SuccessResponse;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnError_CD3C8ACD495820EBD384FEBCAA19A996
	 */
	struct USIGIS_FriendInviteList_C_OnError_CD3C8ACD495820EBD384FEBCAA19A996_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996
	 */
	struct USIGIS_FriendInviteList_C_OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996_Params
	{
	public:
		struct FNakamaListGroupMembersResponse                     SuccessResponse;                                         // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaErrorResponse                                ErrorResponse;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Construct
	 */
	struct USIGIS_FriendInviteList_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_FriendInviteList_C_BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Refresh_FriendsList
	 */
	struct USIGIS_FriendInviteList_C_Refresh_FriendsList_Params
	{	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.SendoutAnInvite
	 */
	struct USIGIS_FriendInviteList_C_SendoutAnInvite_Params
	{
	public:
		struct FSteamNakamaFriend                                  NakamaFriendToInvite;                                    // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.Return_AllFriends
	 */
	struct USIGIS_FriendInviteList_C_Return_AllFriends_Params
	{
	public:
		TArray<struct FSteamNakamaFriend>                          FreindArry;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              pageNum;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_FriendInviteList.SIGIS_FriendInviteList_C.ExecuteUbergraph_SIGIS_FriendInviteList
	 */
	struct USIGIS_FriendInviteList_C_ExecuteUbergraph_SIGIS_FriendInviteList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
