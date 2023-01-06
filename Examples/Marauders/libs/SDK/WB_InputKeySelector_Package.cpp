/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_InputKeySelector_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnPreviewKeyDown");
		
		UWB_InputKeySelector_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  HoveredSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  ClickedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::SetButtonSounds(class USoundBase* HoveredSound, class USoundBase* ClickedSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonSounds");
		
		UWB_InputKeySelector_C_SetButtonSounds_Params params {};
		params.HoveredSound = HoveredSound;
		params.ClickedSound = ClickedSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::UnhoverAllKeyButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.UnhoverAllKeyButtons");
		
		UWB_InputKeySelector_C_UnhoverAllKeyButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InputChord                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	class FText UWB_InputKeySelector_C::FindKeyboardKey(struct FInputChord* InputChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.FindKeyboardKey");
		
		UWB_InputKeySelector_C_FindKeyboardKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputChord != nullptr)
			*InputChord = params.InputChord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsCombKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FText UWB_InputKeySelector_C::TranslateCombKey(const struct FKey& Key, bool IsCombKey, const class FString& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateCombKey");
		
		UWB_InputKeySelector_C_TranslateCombKey_Params params {};
		params.Key = Key;
		params.IsCombKey = IsCombKey;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class FText                                        Key_Text                                                   (Parm, OutParm)
	 */
	void UWB_InputKeySelector_C::TranslateGamepadKeys(const struct FKey& Key, class FText* Key_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.TranslateGamepadKeys");
		
		UWB_InputKeySelector_C_TranslateGamepadKeys_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key_Text != nullptr)
			*Key_Text = params.Key_Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bIsGamepadKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::GetIsGamepadKey(const struct FKey& Key, bool* bIsGamepadKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsGamepadKey");
		
		UWB_InputKeySelector_C_GetIsGamepadKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsGamepadKey != nullptr)
			*bIsGamepadKey = params.bIsGamepadKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bIsKeyboardKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::GetIsKeyboardKey(const struct FKey& Key, bool* bIsKeyboardKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsKeyboardKey");
		
		UWB_InputKeySelector_C_GetIsKeyboardKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsKeyboardKey != nullptr)
			*bIsKeyboardKey = params.bIsKeyboardKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MappingIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::SetCurrentMappingByIndex(int32_t MappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetCurrentMappingByIndex");
		
		UWB_InputKeySelector_C_SetCurrentMappingByIndex_Params params {};
		params.MappingIndex = MappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAxisMapping                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::GetIsAxisMapping(const class FName& ItemToFind, bool* bIsAxisMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsAxisMapping");
		
		UWB_InputKeySelector_C_GetIsAxisMapping_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAxisMapping != nullptr)
			*bIsAxisMapping = params.bIsAxisMapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsActionMapping                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::GetIsActionMapping(const class FName& ItemToFind, bool* bIsActionMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.GetIsActionMapping");
		
		UWB_InputKeySelector_C_GetIsActionMapping_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsActionMapping != nullptr)
			*bIsActionMapping = params.bIsActionMapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        KeymappingText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InputKeySelector_C::SetKeymappingName(const class FText& KeymappingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeymappingName");
		
		UWB_InputKeySelector_C_SetKeymappingName_Params params {};
		params.KeymappingText = KeymappingText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::SetInfo_Normal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Normal");
		
		UWB_InputKeySelector_C_SetInfo_Normal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::SetInfo_Hovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetInfo_Hovered");
		
		UWB_InputKeySelector_C_SetInfo_Hovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFont*                                       Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFontFace*                                   FontFace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                FrameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::SetButtonInfo(class UFont* Font, class UFontFace* FontFace, int32_t FontSize, const struct FLinearColor& TextColor, const struct FLinearColor& FrameColor, const struct FLinearColor& FillColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetButtonInfo");
		
		UWB_InputKeySelector_C_SetButtonInfo_Params params {};
		params.Font = Font;
		params.FontFace = FontFace;
		params.FontSize = FontSize;
		params.TextColor = TextColor;
		params.FrameColor = FrameColor;
		params.FillColor = FillColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.PreConstruct");
		
		UWB_InputKeySelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature");
		
		UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_289_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature");
		
		UWB_InputKeySelector_C_BndEvt__Input_KeySelector_K2Node_ComponentBoundEvent_290_OnIsSelectingKeyChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::InitConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.InitConstruct");
		
		UWB_InputKeySelector_C_InitConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::CheckHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.CheckHovered");
		
		UWB_InputKeySelector_C_CheckHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNoKeySpecifiedText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InputKeySelector_C::SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetNoKeySpecifiedText");
		
		UWB_InputKeySelector_C_SetNoKeySpecifiedText_Params params {};
		params.InNoKeySpecifiedText = InNoKeySpecifiedText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InSelectedKey                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::SetSelectedKey(const struct FInputChord& InSelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetSelectedKey");
		
		UWB_InputKeySelector_C_SetSelectedKey_Params params {};
		params.InSelectedKey = InSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InputKeySelector_C::SetKeyRebindingText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeyRebindingText");
		
		UWB_InputKeySelector_C_SetKeyRebindingText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InKeySelectionText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_InputKeySelector_C::SetKeySelectionText(const class FText& InKeySelectionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetKeySelectionText");
		
		UWB_InputKeySelector_C_SetKeySelectionText_Params params {};
		params.InKeySelectionText = InKeySelectionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetEnabled");
		
		UWB_InputKeySelector_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowGamepadKeys                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::SetAllowGamepadKeys(bool AllowGamepadKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowGamepadKeys");
		
		UWB_InputKeySelector_C_SetAllowGamepadKeys_Params params {};
		params.AllowGamepadKeys = AllowGamepadKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowModifierKeys                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::SetAllowModifierKeys(bool bAllowModifierKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetAllowModifierKeys");
		
		UWB_InputKeySelector_C_SetAllowModifierKeys_Params params {};
		params.bAllowModifierKeys = bAllowModifierKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                InKeys                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWB_InputKeySelector_C::SetEscapeKeys(TArray<struct FKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetEscapeKeys");
		
		UWB_InputKeySelector_C_SetEscapeKeys_Params params {};
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::UpdateKeyInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.UpdateKeyInfo");
		
		UWB_InputKeySelector_C_UpdateKeyInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResponsiveHovering                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_InputKeySelector_C::SetResponsiveHovering(bool bResponsiveHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetResponsiveHovering");
		
		UWB_InputKeySelector_C_SetResponsiveHovering_Params params {};
		params.bResponsiveHovering = bResponsiveHovering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   LocalSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::SetLocalSize(const struct FVector2D& LocalSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.SetLocalSize");
		
		UWB_InputKeySelector_C_SetLocalSize_Params params {};
		params.LocalSize = LocalSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::ExecuteUbergraph_WB_InputKeySelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.ExecuteUbergraph_WB_InputKeySelector");
		
		UWB_InputKeySelector_C_ExecuteUbergraph_WB_InputKeySelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_InputKeySelector_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnHovered__DelegateSignature");
		
		UWB_InputKeySelector_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 LastSelectedKey                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::OnKeyEmptied__DelegateSignature(const struct FInputChord& LastSelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeyEmptied__DelegateSignature");
		
		UWB_InputKeySelector_C_OnKeyEmptied__DelegateSignature_Params params {};
		params.LastSelectedKey = LastSelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWB_InputKeySelector_C::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_InputKeySelector.WB_InputKeySelector_C.OnKeySelected__DelegateSignature");
		
		UWB_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_InputKeySelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_InputKeySelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_InputKeySelector.WB_InputKeySelector_C");
		return ptr;
	}

}


