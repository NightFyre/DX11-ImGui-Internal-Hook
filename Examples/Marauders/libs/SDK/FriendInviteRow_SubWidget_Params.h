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
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.Construct
	 */
	struct UFriendInviteRow_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UFriendInviteRow_SubWidget_C_BndEvt__FriendInviteRow_SubWidget_MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ShowIsSendingState
	 */
	struct UFriendInviteRow_SubWidget_C_ShowIsSendingState_Params
	{
	public:
		bool                                                       ShowSending;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.RefreshFriendInfo
	 */
	struct UFriendInviteRow_SubWidget_C_RefreshFriendInfo_Params
	{
	public:
		struct FSteamNakamaFriend                                  FriendInfoToRefresh;                                     // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CrewisCompletelyFull;                                    // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ExecuteUbergraph_FriendInviteRow_SubWidget
	 */
	struct UFriendInviteRow_SubWidget_C_ExecuteUbergraph_FriendInviteRow_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FriendInviteRow_SubWidget.FriendInviteRow_SubWidget_C.ED_SendInvite__DelegateSignature
	 */
	struct UFriendInviteRow_SubWidget_C_ED_SendInvite__DelegateSignature_Params
	{
	public:
		struct FSteamNakamaFriend                                  NakamaFriend;                                            // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
