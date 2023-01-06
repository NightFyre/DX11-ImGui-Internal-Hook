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
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.GetStateByName
	 * 		Flags  -> ()
	 */
	class FName UWB_StateButton_C::GetStateByName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.GetStateByName");
		
		UWB_StateButton_C_GetStateByName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.GetStateByIndex
	 * 		Flags  -> ()
	 */
	int32_t UWB_StateButton_C::GetStateByIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.GetStateByIndex");
		
		UWB_StateButton_C_GetStateByIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.GetHasFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWB_StateButton_C::GetHasFocus(class APlayerController* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.GetHasFocus");
		
		UWB_StateButton_C_GetHasFocus_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.HandleIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_StateButton_C::HandleIsEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.HandleIsEnabled");
		
		UWB_StateButton_C_HandleIsEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Normal
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::SetMultiState_OptionFont_Normal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Normal");
		
		UWB_StateButton_C_SetMultiState_OptionFont_Normal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Hovered
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::SetMultiState_OptionFont_Hovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Hovered");
		
		UWB_StateButton_C_SetMultiState_OptionFont_Hovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetStateButtonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ButtonIconColor_Normal                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ButtonIconColor_Hovered                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ButtonIconColor_Clicked                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ButtonIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetStateButtonInfo(const struct FLinearColor& ButtonIconColor_Normal, const struct FLinearColor& ButtonIconColor_Hovered, const struct FLinearColor& ButtonIconColor_Clicked, class UObject* ButtonIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetStateButtonInfo");
		
		UWB_StateButton_C_SetStateButtonInfo_Params params {};
		params.ButtonIconColor_Normal = ButtonIconColor_Normal;
		params.ButtonIconColor_Hovered = ButtonIconColor_Hovered;
		params.ButtonIconColor_Clicked = ButtonIconColor_Clicked;
		params.ButtonIcon = ButtonIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetMultiState_FontInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFont*                                       MultiState_Font_Normal                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFontFace*                                   MultiState_FontFace_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MultiState_FontSize_Normal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MultiState_FontColor_Normal                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFont*                                       MultiState_Font_Hovered                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFontFace*                                   MultiState_FontFace_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MultiState_FontSize_Hovered                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MultiState_FontColor_Hovered                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetMultiState_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int32_t MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int32_t MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetMultiState_FontInfo");
		
		UWB_StateButton_C_SetMultiState_FontInfo_Params params {};
		params.MultiState_Font_Normal = MultiState_Font_Normal;
		params.MultiState_FontFace_Normal = MultiState_FontFace_Normal;
		params.MultiState_FontSize_Normal = MultiState_FontSize_Normal;
		params.MultiState_FontColor_Normal = MultiState_FontColor_Normal;
		params.MultiState_Font_Hovered = MultiState_Font_Hovered;
		params.MultiState_FontFace_Hovered = MultiState_FontFace_Hovered;
		params.MultiState_FontSize_Hovered = MultiState_FontSize_Hovered;
		params.MultiState_FontColor_Hovered = MultiState_FontColor_Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetMultiStateJustification
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::SetMultiStateJustification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetMultiStateJustification");
		
		UWB_StateButton_C_SetMultiStateJustification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetMultiStateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWB_StateButton_C::SetMultiStateText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetMultiStateText");
		
		UWB_StateButton_C_SetMultiStateText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.UnhoverAllOptionsButton
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::UnhoverAllOptionsButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.UnhoverAllOptionsButton");
		
		UWB_StateButton_C_UnhoverAllOptionsButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetupSizes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetupSizes(const struct FVector2D& Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetupSizes");
		
		UWB_StateButton_C_SetupSizes_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetStateByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetStateByName(const class FName& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetStateByName");
		
		UWB_StateButton_C_SetStateByName_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetStateByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetStateByIndex(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetStateByIndex");
		
		UWB_StateButton_C_SetStateByIndex_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetUser_Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetUser_Focus(class APlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetUser_Focus");
		
		UWB_StateButton_C_SetUser_Focus_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.UpdateEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_StateButton_C::UpdateEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.UpdateEnabled");
		
		UWB_StateButton_C_UpdateEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_StateButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.PreConstruct");
		
		UWB_StateButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.Construct");
		
		UWB_StateButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.UnhoverStateButton
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::UnhoverStateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.UnhoverStateButton");
		
		UWB_StateButton_C_UnhoverStateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.Construct_State
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::Construct_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.Construct_State");
		
		UWB_StateButton_C_Construct_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.PreConstruct_State
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::PreConstruct_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.PreConstruct_State");
		
		UWB_StateButton_C_PreConstruct_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature");
		
		UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        State_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            State_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature(const class FName& State_Name, int32_t State_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature");
		
		UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature_Params params {};
		params.State_Name = State_Name;
		params.State_Index = State_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.Reconstruct
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::Reconstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.Reconstruct");
		
		UWB_StateButton_C_Reconstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetBaseColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseBaseColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Grad0                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Grad3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetBaseColor");
		
		UWB_StateButton_C_SetBaseColor_Params params {};
		params.bUseBaseColor = bUseBaseColor;
		params.Grad0 = Grad0;
		params.Grad1 = Grad1;
		params.Grad2 = Grad2;
		params.Grad3 = Grad3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.SetupButtonSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseButtonSounds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USoundBase*                                  Clicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Hovered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.SetupButtonSounds");
		
		UWB_StateButton_C_SetupButtonSounds_Params params {};
		params.bUseButtonSounds = bUseButtonSounds;
		params.Clicked = Clicked;
		params.Hovered = Hovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.MultiState_CheckUserFocus
	 * 		Flags  -> ()
	 */
	void UWB_StateButton_C::MultiState_CheckUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.MultiState_CheckUserFocus");
		
		UWB_StateButton_C_MultiState_CheckUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.ExecuteUbergraph_WB_StateButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::ExecuteUbergraph_WB_StateButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.ExecuteUbergraph_WB_StateButton");
		
		UWB_StateButton_C_ExecuteUbergraph_WB_StateButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_StateButton.WB_StateButton_C.OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_StateButton_C::OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_StateButton.WB_StateButton_C.OnStateChanged__DelegateSignature");
		
		UWB_StateButton_C_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_StateButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_StateButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_StateButton.WB_StateButton_C");
		return ptr;
	}

}


