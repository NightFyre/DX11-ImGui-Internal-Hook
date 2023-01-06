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
	 * WidgetBlueprintGeneratedClass WB_Options_Audio.WB_Options_Audio_C
	 * Size -> 0x0071 (FullSize[0x02D1] - InheritedSize[0x0260])
	 */
	class UWB_Options_Audio_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Fade;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericBtn_Audio_ResetToDefault;                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_AudioProfile;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_DialogueVolume_HijackignForUI;                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_EffectsVolume;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MasterVolume;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_MusicVolume;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_MyMicrophone;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_ProgressButton_C*                                Option_OthersMicVolume;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_Subtitles;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Back;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        FocusTimer;                                              // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMainMenu;                                             // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		bool GetIsGamepad();
		void NavToBackButton();
		void NavToOptionsButtons();
		void NavToTextButtons();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnInputSwitched(EInputType InputType);
		void ActivateWidget();
		void SetGamepadAppearance(bool Active);
		void HandleRemoveWidget();
		void OnConfirmReset();
		void BndEvt__Option_MasterVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_MusicVolume_K2Node_ComponentBoundEvent_1_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_DialogueVolume_K2Node_ComponentBoundEvent_2_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_EffectsVolume_K2Node_ComponentBoundEvent_3_OnProgressChanged__DelegateSignature(float Value);
		void BndEvt__Option_AudioProfile_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_Music_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_Subtitles_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void SetupButtons();
		void CheckFocus();
		void OnCancelRequest();
		void BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_7_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__WB_Options_Audio_Option_OthersMicVolume_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature(float Value);
		void ClickBack();
		void ExecuteUbergraph_WB_Options_Audio(int32_t EntryPoint);
		void OnClicked_Back__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
