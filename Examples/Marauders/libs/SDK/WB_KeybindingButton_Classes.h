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
	 * WidgetBlueprintGeneratedClass WB_KeybindingButton.WB_KeybindingButton_C
	 * Size -> 0x0289 (FullSize[0x04E9] - InheritedSize[0x0260])
	 */
	class UWB_KeybindingButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBorder*                                             B_KeyRebinding_FillColor;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_KeyRebinding;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_InputKeySelector_C*                              KeybindingKey1;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_InputKeySelector_C*                              KeybindingKey2;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_Frame03_C*                                       KeyRebinding_Frame;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          KeyRebinding_PrettyNameLook;                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          KeyRebinding_Text;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OV_ContentWidget;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_Content;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_ContentWidget;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SB_KeyRebinding_Text;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKey                                                Key_ToResetTo;                                           // 0x02C0(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		class FText                                                KeymappingName;                                          // 0x02D8(0x0018) Edit, BlueprintVisible
		class FText                                                Keymap_PrettyName;                                       // 0x02F0(0x0018) Edit, BlueprintVisible
		class FText                                                NoKeySpecifiedText;                                      // 0x0308(0x0018) Edit, BlueprintVisible
		class FText                                                KeySelectionText;                                        // 0x0320(0x0018) Edit, BlueprintVisible
		float                                                      AxisMappingDirection;                                    // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ButtonSize;                                              // 0x033C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEnabled;                                               // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseGamepadFocus;                                        // 0x0345(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0Z47[0x2];                                   // 0x0346(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ButtonSound_Hovered;                                     // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ButtonSound_Clicked;                                     // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               KeyRebinding_OptionFont_Normal;                          // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           KeyRebinding_OptionFontFace_Normal;                      // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeyRebinding_OptionFontSize_Normal;                      // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_TextColor_Normal;                           // 0x036C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_FrameColor_Normal;                          // 0x037C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_FillColor_Normal;                           // 0x038C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XUL7[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               KeyRebinding_OptionFont_Hovered;                         // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           KeyRebinding_OptionFontFace_Hovered;                     // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeyRebinding_OptionFontSize_Hovered;                     // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_TextColor_Hovered;                          // 0x03B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_FrameColor_Hovered;                         // 0x03C4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeyRebinding_FillColor_Hovered;                          // 0x03D4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5IVH[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               KeybindingButton_Font_Normal;                            // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           KeybindingButton_FontFace_Normal;                        // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeybindingButton_FontSize_Normal;                        // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_TextColor_Normal;                       // 0x03FC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_FrameColor_Normal;                      // 0x040C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_FillColor_Normal;                       // 0x041C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69PZ[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               KeybindingButton_Font_Hovered;                           // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFontFace*                                           KeybindingButton_FontFaceHovered;                        // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    KeybindingButton_FontSizeHovered;                        // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_TextColorHovered;                       // 0x0444(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_FrameColorHovered;                      // 0x0454(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        KeybindingButton_FillColorHovered;                       // 0x0464(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Key_L_Enabled;                                           // 0x0474(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Key_L_AllowGamepadKeys;                                  // 0x0475(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Key_R_Enabled;                                           // 0x0476(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Key_R_AllowGamepadKeys;                                  // 0x0477(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             On_Selected_Key_Left;                                    // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Selected_Key_Right;                                   // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Key_L_AllowModifierKeys;                                 // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Key_R_AllowModifierKeys;                                 // 0x0499(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IZ4F[0x6];                                   // 0x049A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        Key_L_EscapeKeys;                                        // 0x04A0(0x0010) Edit, BlueprintVisible
		TArray<struct FKey>                                        Key_R_EscapeKeys;                                        // 0x04B0(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             On_Key_Emptied_Left;                                     // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Key_Emptied_Right;                                    // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      KeyRebindingButtonWidth;                                 // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Keybinding_TextRoom;                                     // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bResponsiveFocus;                                        // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSelectedKey(ESelectedKey ESelectedKey, struct FInputChord* SelectedKey);
		bool GetHasFocus(class APlayerController* InputPin);
		void SetKeyRebindingJustification();
		void SetIsSelectingText(const class FText& InKeySelectionText);
		void HandleIsEnabled(bool IsEnabled);
		class UWB_InputKeySelector_C* FindKey(ESelectedKey ESelectedKey);
		void SetNoKeySpecifiedText(const class FText& InText);
		void SetKeybindingKeysButtonInfo_Hovered();
		void SetKeybindingKeysButtonInfo_Normal();
		void SetKeybindingText(const class FText& InText);
		void SetKeyRebinding_OptionFont_Hovered();
		void SetKeyRebinding_OptionFont_Normal();
		void UnhoverAllOptionsButton();
		void SetupSizes(const struct FVector2D& Size);
		void SetUser_Focus(class APlayerController* Player);
		void SetSelectedKey(ESelectedKey Key, const struct FInputChord& SelectedKey);
		void SetKeyEnabled(ESelectedKey Key, bool bEnabled);
		void SetKeySelectionText(ESelectedKey Key, const class FText& KeySelectionText);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_93_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
		void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_88_OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey);
		void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void UnhoverKeyRebindingButton();
		void BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_KeyRebinding_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void Construct_KeyRebindingOption();
		void PreConstruct_KeyRebindingOption();
		void BndEvt__KeybindingKey1_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
		void BndEvt__KeybindingKey2_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void ResetHovered();
		void SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3);
		void SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered);
		void ExecuteUbergraph_WB_KeybindingButton(int32_t EntryPoint);
		void On_Key_Emptied_Right__DelegateSignature(const struct FInputChord& Last_Selected_Key);
		void On_Key_Emptied_Left__DelegateSignature(const struct FInputChord& Last_Selected_Key);
		void On_Selected_Key_Right__DelegateSignature(const struct FInputChord& SelectedKey, class UWB_KeybindingButton_C* Button);
		void On_Selected_Key_Left__DelegateSignature(const struct FInputChord& SelectedKey, class UWB_KeybindingButton_C* Button, float AxisDirection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
