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
	 * WidgetBlueprintGeneratedClass Crew_Invite_SubWidget.Crew_Invite_SubWidget_C
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UCrew_Invite_SubWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Hide;                                               // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Show;                                               // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_btn_Accept;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_btn_Cancel;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt__CrewName;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CaptainWhoInvitedMe;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              InviteInfo;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              CptnWhoInvitedMe_Name;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CptnWhoInvitedMe_CrewID;                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CptnWhoInvitedMe_CrewName;                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void OnError_B6856B7D44880E506726A5955983B651(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void OnSuccess_B6856B7D44880E506726A5955983B651(const struct FNakamaListGroupMembersResponse& SuccessResponse, const struct FNakamaErrorResponse& ErrorResponse);
		void Construct();
		void DestroyTheWidget();
		void BndEvt__Crew_Invite_SubWidget_MM_btn_Accept_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__Crew_Invite_SubWidget_MM_btn_Cancel_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature();
		void ExecuteUbergraph_Crew_Invite_SubWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
