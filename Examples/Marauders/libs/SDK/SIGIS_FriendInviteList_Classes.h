#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SIGIS_FriendInviteList.SIGIS_FriendInviteList_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class USIGIS_FriendInviteList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UFriendInviteRow_SubWidget_C*                        FriendInviteRow_SubWidget;                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_FriendsList;                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_14;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_FriendList;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_NoFriends;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       CrewIsFullCantAddMore;                                   // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FT6E[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TH_RefreshFriendsList;                                   // 0x02A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      Array_FriendsIDCurrentlyInList;                          // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HasFriendsInList(bool ShowFriendsList);
		void OnError_EC6EB65B44D1EAD4DEA4AA955F732CD7(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_EC6EB65B44D1EAD4DEA4AA955F732CD7(const struct FNakamaRPCResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnError_CD3C8ACD495820EBD384FEBCAA19A996(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_CD3C8ACD495820EBD384FEBCAA19A996(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void Construct();
		void BndEvt__SIGIS_FriendInviteList_MM_GenericSmallBtn01_GoBack_News_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void Refresh_FriendsList();
		void SendoutAnInvite(const struct FSteamNakamaFriend& NakamaFriendToInvite);
		void Return_AllFriends(TArray<struct FSteamNakamaFriend> FreindArry, const class FString& pageNum);
		void ExecuteUbergraph_SIGIS_FriendInviteList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
