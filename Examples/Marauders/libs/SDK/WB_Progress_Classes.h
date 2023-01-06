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
	 * WidgetBlueprintGeneratedClass WB_Progress.WB_Progress_C
	 * Size -> 0x01F4 (FullSize[0x0454] - InheritedSize[0x0260])
	 */
	class UWB_Progress_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Last_Text_FadeOut;                                       // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Last_Text_FadeIn;                                        // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Next_Text_FadeIn;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Next_Text_FadeOut;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWB_NativeButton_C*                                  ButtonLeft;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_NativeButton_C*                                  ButtonRight;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             ProgressSlider;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ProgressText;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Left;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Right;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUseFocus;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BV0N[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ButtonIconSize;                                          // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Clicked;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResponsiveHovering;                                      // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S7SU[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OptionStates;                                            // 0x02E8(0x0010) Edit, BlueprintVisible
		int32_t                                                    MaxStateCount;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewStateCount;                                           // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Font_Normal;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           FontFace_Normal;                                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontSize_Normal;                                         // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontColor_Normal;                                        // 0x0314(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Normal;                                  // 0x0324(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CHU8[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Font_Hovered;                                            // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           FontFace_Hovered;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontSize_Hovered;                                        // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontColor_Hovered;                                       // 0x034C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Hovered;                                 // 0x035C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0WWU[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UWB_NavState_C*>                   NavStateMap;                                             // 0x0370(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FLinearColor                                        NavStateColor_Normal_Active;                             // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Hovered_Active;                            // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseNavOverview;                                          // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GE54[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavOverviewRoom;                                         // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Normal_Inactive;                           // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Hovered_Inactive;                          // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsHovered;                                              // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HWK8[0x3];                                   // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NewStateName;                                            // 0x040C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IBSM[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnProgressChanged;                                       // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ProgressMinValue;                                        // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProgressMaxValue;                                        // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ProgressDefinition;                                      // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      ProgressGamepadStepSize;                                 // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Use_Full_Int;                                            // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Use_CustomValue_Range;                                   // 0x0449(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BXVF[0x2];                                   // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomValue_Min;                                         // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CustomValueMax;                                          // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DecreaseSliderValue(float StepSize);
		void IncreaseSliderValue(float StepSize);
		void SetProgressTextValue(float ProgressValue, float MinValue, float MaxValue, const class FString& Definition);
		void SetProgressFont(class UObject* Font, class UFontFace* FontFace, int32_t FontSize, const struct FLinearColor& Color);
		void SetSliderColor(const struct FLinearColor& Color);
		void SetButtonsEnabled(bool bIsEnabled);
		struct FLinearColor ConvertOpacityToNormal(const struct FLinearColor& InColor);
		void Set_FontInfoHovered();
		void Set_FontInfoNormal();
		bool HasAnyFocus();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetButtonRight(class UButton** Native_Button);
		void GetButtonLeft(class UButton** Native_Button);
		void CheckFocus();
		void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(bool bNativeHovered);
		void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(bool bNativeHovered);
		void Construct();
		void BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void UpdateSliderText();
		void SliderClickLeft();
		void SliderClickRight();
		void CheckSliderHovered();
		void OnValueChanged(float SliderValue);
		void IsFullIntOnly(bool UseFullInt);
		void UseRangeForValue(bool ShouldUseCustomRange, float Min, float Max);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WB_Progress(int32_t EntryPoint);
		void OnProgressChanged__DelegateSignature(float Value);
		void OnHovered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
