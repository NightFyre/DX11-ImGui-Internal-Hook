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
	 * WidgetBlueprintGeneratedClass WB_Options_Video.WB_Options_Video_C
	 * Size -> 0x00C8 (FullSize[0x0328] - InheritedSize[0x0260])
	 */
	class UWB_Options_Video_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Fade;                                                    // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericBtn_Audio_ResetToDefault;                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_AA_Quality;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_DynamicResolution;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_FoliageQuality;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_FrameRateLimit;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_MotionBlur;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_OverallQuality;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_PostProcessQuality;                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_Resolution;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_ResolutionScale;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_ShadowQuality;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_TextureQuality;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_VerticalSync;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_ViewDistance;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_VisualEffectsQuality;                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_StateButton_C*                                   Option_WindowMode;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Scroll_VideoSettings;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked_Back;                                          // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        FocusTimer;                                              // 0x0308(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMainMenu;                                             // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_RAK9[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWB_StateButton_C*>                           Array_GraphicsSettings;                                  // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void SetMotionBlur(int32_t MotionBlurSetting);
		void OnScalabilitySettingsDiffer(bool* bDiffer);
		void RunAndApplyHardwareBenchmark(int32_t WorkScale);
		void IsCustom(int32_t Index, bool* bIsCustom);
		void GetScalabilityButtons(TArray<class UWB_StateButton_C*>* Array);
		void SetPostProcessQuality(int32_t Value);
		int32_t GetPostProcessQuality();
		void SetViewDistanceQuality(int32_t Value);
		int32_t GetViewDistanceQuality();
		void SetFoliageQuality(int32_t Value);
		int32_t GetFoliageQuality();
		void SetAAQuality(int32_t Value);
		int32_t GetAAQuality();
		void SetVisualEffectsQuality(int32_t Value);
		int32_t GetVisualEffectsQuality();
		void SetShadowQuality(int32_t Value);
		int32_t GetShadowQuality();
		void SetTextureQuality(int32_t Value);
		int32_t GetTextureQuality();
		bool GetVsync();
		void SetVSync(bool bEnable);
		void GetFrameRateLimit(float* limit);
		void SetFrameRateLimit(float NewLimit);
		void SetResolutionScaleNormalized(float NewScaleNormalized);
		void SetResolutionScale(float NewScaleValue);
		void GetResolutionScale(float* CurrentScaleNormalized, float* CurrentScaleValue);
		void SaveSettings();
		void ApplyAllSettings();
		void ApplySettings();
		void ApplyNonResolutionSettings();
		bool IsScreenResolutionDirty();
		bool IsFulllscreenModeDirty();
		void SetWindowMode(EWindowMode InFullscreenMode);
		EWindowMode GetWindowMode();
		void FindButtonResolutionState(const struct FIntPoint& Resolution, bool* Found, int32_t* FoundIndex);
		void TranslateResolutionFromButton(const class FName& InName, struct FIntPoint* IntPoint);
		class FName GetScreenResolutionName();
		void HasState(class UWB_StateButton_C* Target, const class FName& Name, bool* HasState);
		void ApplyResolutionSettings();
		void SetDynamicResolutionEnabled(bool bEnable);
		bool IsDynamicResolutionEnabled();
		bool IsDynamicResolutionDirty();
		struct FIntPoint GetLastConfirmedScreenResolution();
		void SetScreenResolution(const struct FIntPoint& Resolution);
		struct FIntPoint GetDesktopResolution();
		struct FIntPoint GetScreenResolution();
		class UGameUserSettings* GetUserSettings();
		bool GetIsGamepad();
		void ScrollToCurrentlyFocusedWidget();
		void NavToBackButton();
		void NavToOptionsButtons();
		void NavToTextButtons();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ActivateWidget();
		void OnInputSwitched(EInputType InputType);
		void CheckFocus();
		void ClickBack();
		void SetGamepadAppearance(bool Active);
		void HandleRemoveWidget();
		void OnConfirmReset();
		void SetDefaultValues();
		void InitializeVideoSettings();
		void BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void SetupButtons();
		void CheckSettings();
		void SetSavedValues();
		void BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void OnCancelRequest();
		void BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		void BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature();
		void ExecuteUbergraph_WB_Options_Video(int32_t EntryPoint);
		void OnClicked_Back__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
