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
	 * WidgetBlueprintGeneratedClass SIGIS_EndMatchReportPlayer.SIGIS_EndMatchReportPlayer_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class USIGIS_EndMatchReportPlayer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_SentOffReport;                                      // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Open;                                               // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget_2;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_2;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_ReportPlayerMenu;            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableTextBox*                           MultiLineEditableTextBox_354;                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Kills_Side;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_NumberOfKills_2;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_ReportMessage;                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_ReportSent;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ED_EndMatchReport_Closed;                                // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_EndMatchReport_SendOff;                               // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                Report_MessageToSend;                                    // 0x02D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_GoBack_ReportPlayerMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_EndMatchReportPlayer_MM_GenericSmallBtn01_1_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_EndMatchReportPlayer_MultiLineEditableTextBox_353_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void SendOffAnimationFinished();
		void ExecuteUbergraph_SIGIS_EndMatchReportPlayer(int32_t EntryPoint);
		void ED_EndMatchReport_SendOff__DelegateSignature(const class FText& MessageToSend);
		void ED_EndMatchReport_Closed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
