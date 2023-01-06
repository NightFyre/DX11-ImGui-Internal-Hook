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
	 * WidgetBlueprintGeneratedClass WB_StateButton.WB_StateButton_C
	 * Size -> 0x0205 (FullSize[0x0465] - InheritedSize[0x0260])
	 */
	class UWB_StateButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             B_MultiState_FillColor;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             b_MultiStateOption;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Multistate;                                       // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Frame03_C*                                       MultiState_Frame;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MultiState_TextBlock;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OV_ContentWidget;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Content;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_ContentWidget;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_MultiState_Option;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_MultiState_Text;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_State_C*                                         WB_States;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                ButtonText;                                              // 0x02C0(0x0018) Edit, BlueprintVisible
		struct FVector2D                                           ButtonSize;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               Button_Font_Normal;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           Button_FontFace_Normal;                                  // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Button_FontSize_Normal;                                  // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_TextColor_Normal;                                 // 0x02F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_FrameColor_Normal;                                // 0x0304(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_FillColor_Normal;                                 // 0x0314(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GN9B[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Button_Font_Hovered;                                     // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           Button_FontFace_Hovered;                                 // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Button_FontSize_Hovered;                                 // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_TextColor_Hovered;                                // 0x033C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_FrameColor_Hovered;                               // 0x034C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Button_FillColor_Hovered;                                // 0x035C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CF5Q[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MultiState_States;                                       // 0x0370(0x0010) Edit, BlueprintVisible
		bool                                                       IsEnabled;                                               // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OX99[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ButtonSound_Clicked;                                     // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ButtonSound_Hovered;                                     // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UFont*                                               MultiState_Font_Normal;                                  // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           MultiState_FontFace_Normal;                              // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MultiState_FontSize_Normal;                              // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MultiState_FontColor_Normal;                             // 0x03BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CW2T[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               MultiState_Font_Hovered;                                 // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           MultiState_FontFace_Hovered;                             // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MultiState_FontSize_Hovered;                             // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MultiState_FontColor_Hovered;                            // 0x03E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseNavStateOverview;                                    // 0x03F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OYKW[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavStateOverview_Room;                                   // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateOverviewColor_Normal;                            // 0x03FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NavStateOverviewColor_Hovered;                           // 0x040C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1DOL[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MultiState_ButtonIcon;                                   // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MultiState_ButtonColorNormal;                            // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MultiState_ButtonColorHovered;                           // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MultiState_ButtonColorClicked;                           // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseGamepadFocus;                                        // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LBDP[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      State_Width;                                             // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MultiState_TextRoom;                                     // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bResponsiveFocus;                                        // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FName GetStateByName();
		int32_t GetStateByIndex();
		bool GetHasFocus(class APlayerController* InputPin);
		void HandleIsEnabled(bool IsEnabled);
		void SetMultiState_OptionFont_Normal();
		void SetMultiState_OptionFont_Hovered();
		void SetStateButtonInfo(const struct FLinearColor& ButtonIconColor_Normal, const struct FLinearColor& ButtonIconColor_Hovered, const struct FLinearColor& ButtonIconColor_Clicked, class UObject* ButtonIcon);
		void SetMultiState_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int32_t MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int32_t MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered);
		void SetMultiStateJustification();
		void SetMultiStateText(const class FText& InText);
		void UnhoverAllOptionsButton();
		void SetupSizes(const struct FVector2D& Size);
		void SetStateByName(const class FName& State);
		void SetStateByIndex(int32_t State);
		void SetUser_Focus(class APlayerController* Player);
		void UpdateEnabled(bool IsEnabled);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void UnhoverStateButton();
		void Construct_State();
		void PreConstruct_State();
		void BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature();
		void BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature(const class FName& State_Name, int32_t State_Index);
		void Reconstruct();
		void SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3);
		void SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered);
		void MultiState_CheckUserFocus();
		void ExecuteUbergraph_WB_StateButton(int32_t EntryPoint);
		void OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
