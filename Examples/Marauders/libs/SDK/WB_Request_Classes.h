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
	 * WidgetBlueprintGeneratedClass WB_Request.WB_Request_C
	 * Size -> 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
	 */
	class UWB_Request_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Fade;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             b_RequestBox;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenBtn01_Cancel;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenBtn01_Confirm;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Head;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Question;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Cancel;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        FocusTimer;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Ok;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        CountDownTimer;                                          // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CountdownTime;                                           // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JEQQ[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                HeadText;                                                // 0x02D8(0x0018) Edit, BlueprintVisible
		class FText                                                MessageText;                                             // 0x02F0(0x0018) Edit, BlueprintVisible

	public:
		void NavToConfirmButton();
		bool GetIsGamepad();
		void NavToCancelButton();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnInputSwitched(EInputType InputType);
		void CheckFocus();
		void ActivateWidget(bool bShowOnlyOkButton, bool bUseCancelCountdown, const class FText& HeadText, const class FText& MessageText);
		void ClickCancel();
		void SetGamepadAppearance(bool Active);
		void ClickOK();
		void RemoveRequest();
		void SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3);
		void BndEvt__MM_GenBtn01_Confirm_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__MM_GenBtn01_Cancel_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature();
		void Countdown();
		void ExecuteUbergraph_WB_Request(int32_t EntryPoint);
		void OnClicked_Ok__DelegateSignature();
		void OnClicked_Cancel__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
