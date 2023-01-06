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
	 * WidgetBlueprintGeneratedClass WB_State.WB_State_C
	 * Size -> 0x01E4 (FullSize[0x0444] - InheritedSize[0x0260])
	 */
	class UWB_State_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Last_Text_FadeOut;                                       // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Last_Text_FadeIn;                                        // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Next_Text_FadeIn;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Next_Text_FadeOut;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             B_Text_State;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_NativeButton_C*                                  ButtonLeft;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_NativeButton_C*                                  ButtonRight;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HB_NavOverview;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Left;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Right;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Left;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_NavOverview;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Right;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_State;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUseFocus;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T529[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ButtonIconSize;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Clicked;                                 // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResponsiveHovering;                                      // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y7MX[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OptionStates;                                            // 0x0308(0x0010) Edit, BlueprintVisible
		int32_t                                                    MaxStateCount;                                           // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewStateCount;                                           // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UObject*                                             Font_Normal;                                             // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           FontFace_Normal;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontSize_Normal;                                         // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontColor_Normal;                                        // 0x0344(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Normal;                                  // 0x0354(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BWWQ[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Font_Hovered;                                            // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           FontFace_Hovered;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FontSize_Hovered;                                        // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FontColor_Hovered;                                       // 0x037C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ButtonIconColor_Hovered;                                 // 0x038C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N3OQ[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class UWB_NavState_C*>                   NavStateMap;                                             // 0x03A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FLinearColor                                        NavStateColor_Normal_Active;                             // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Hovered_Active;                            // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseNavOverview;                                          // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DH0C[0x3];                                   // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavOverviewRoom;                                         // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Normal_Inactive;                           // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateColor_Hovered_Inactive;                          // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsHovered;                                              // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JQI3[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NewStateName;                                            // 0x043C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetButtonsEnabled(bool bIsEnabled);
		void SetButtonIcon(class UObject* Icon);
		struct FLinearColor ConvertOpacityToNormal(const struct FLinearColor& InColor);
		void GetNavStateKeys(TArray<class FName>* keys);
		void GetNavStateValues(TArray<class UWB_NavState_C*>* Values);
		void Set_FontInfoHovered();
		void Set_FontInfoNormal();
		void HandleFontInfo(class UObject* Font, class UFontFace* FontFace, int32_t FontSize, const struct FLinearColor& Color);
		bool HasAnyFocus();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetCurrentStateByName(class FName* State);
		int32_t GetCurrentStateByIndex();
		void SetAllButtonIconColor(const struct FLinearColor& Color);
		void GetButtonRight(class UButton** Native_Button);
		void GetButtonLeft(class UButton** Native_Button);
		void CheckFocus();
		void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(bool bNativeHovered);
		void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(bool bNativeHovered);
		void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
		void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature();
		void Construct();
		void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void InitStates(TArray<class FName> States);
		void SetNewStateText(const class FText& InText, bool bIncrease);
		void SetStateByIndex(int32_t State_Index, bool bExecute);
		void SetStateByName(const class FName& State_Name, bool bExecute);
		void ClickLeft();
		void ClickRight();
		void HandleNavigationOverview(bool bUseNavOverview, float NavOverviewRoom, const struct FLinearColor& NavStateColor_Normal_Active, const struct FLinearColor& NavStateColor_Hovered_Active);
		void CheckNavStateColor();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WB_State(int32_t EntryPoint);
		void OnStateChanged__DelegateSignature(const class FName& State_Name, int32_t State_Index);
		void OnHovered__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
