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
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetupParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::SetupParameters(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetupParameters");
		
		UBP_MainMenu_Functions_C_SetupParameters_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.DestroyCaptureCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::DestroyCaptureCharacter(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.DestroyCaptureCharacter");
		
		UBP_MainMenu_Functions_C_DestroyCaptureCharacter_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.IsCaptureCharacterExisting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_MainMenu_Functions_C::IsCaptureCharacterExisting(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.IsCaptureCharacterExisting");
		
		UBP_MainMenu_Functions_C_IsCaptureCharacterExisting_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_PauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWB_PauseMenu_C*                             WB_PauseMenu                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_WB_PauseMenu(class UObject* __WorldContext, class UWB_PauseMenu_C** WB_PauseMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_PauseMenu");
		
		UBP_MainMenu_Functions_C_Get_WB_PauseMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WB_PauseMenu != nullptr)
			*WB_PauseMenu = params.WB_PauseMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnCancelRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::UnbindOnCancelRequest(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnCancelRequest");
		
		UBP_MainMenu_Functions_C_UnbindOnCancelRequest_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnConfirmRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::UnbindOnConfirmRequest(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnConfirmRequest");
		
		UBP_MainMenu_Functions_C_UnbindOnConfirmRequest_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.RemoveRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::RemoveRequest(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.RemoveRequest");
		
		UBP_MainMenu_Functions_C_RemoveRequest_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnCancelRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::BindOnCancelRequest(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnCancelRequest");
		
		UBP_MainMenu_Functions_C_BindOnCancelRequest_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnConfirmRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::BindOnConfirmRequest(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnConfirmRequest");
		
		UBP_MainMenu_Functions_C_BindOnConfirmRequest_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.CreateRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowOnlyOkButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseCancelCountdown                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        HeadText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_MainMenu_Functions_C::CreateRequest(bool bShowOnlyOkButton, bool bUseCancelCountdown, const class FText& HeadText, const class FText& MessageText, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.CreateRequest");
		
		UBP_MainMenu_Functions_C_CreateRequest_Params params {};
		params.bShowOnlyOkButton = bShowOnlyOkButton;
		params.bUseCancelCountdown = bUseCancelCountdown;
		params.HeadText = HeadText;
		params.MessageText = MessageText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyKeybindingButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Functions_C::HasAnyKeybindingButtonFocus(class UObject* __WorldContext, bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyKeybindingButtonFocus");
		
		UBP_MainMenu_Functions_C_HasAnyKeybindingButtonFocus_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyProgressButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Functions_C::HasAnyProgressButtonFocus(class UObject* __WorldContext, bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyProgressButtonFocus");
		
		UBP_MainMenu_Functions_C_HasAnyProgressButtonFocus_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyButtonFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Functions_C::HasAnyButtonFocus(class UObject* __WorldContext, bool* HasFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HasAnyButtonFocus");
		
		UBP_MainMenu_Functions_C_HasAnyButtonFocus_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasFocus != nullptr)
			*HasFocus = params.HasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWB_ProMainMenu_C*                           WB_ProMainMenu                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_WB_MainMenu(class UObject* __WorldContext, class UWB_ProMainMenu_C** WB_ProMainMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_WB_MainMenu");
		
		UBP_MainMenu_Functions_C_Get_WB_MainMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WB_ProMainMenu != nullptr)
			*WB_ProMainMenu = params.WB_ProMainMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_HUD_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HUD_MainMenu_C*                          AsHUD_Main_Menu                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_HUD_MainMenu(class UObject* __WorldContext, class ABP_HUD_MainMenu_C** AsHUD_Main_Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_HUD_MainMenu");
		
		UBP_MainMenu_Functions_C_Get_HUD_MainMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsHUD_Main_Menu != nullptr)
			*AsHUD_Main_Menu = params.AsHUD_Main_Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PC_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PC_MainMenu_C*                           AsPC_Main_Menu                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_PC_MainMenu(class UObject* __WorldContext, class ABP_PC_MainMenu_C** AsPC_Main_Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PC_MainMenu");
		
		UBP_MainMenu_Functions_C_Get_PC_MainMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPC_Main_Menu != nullptr)
			*AsPC_Main_Menu = params.AsPC_Main_Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_GM_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_GM_MainMenu_C*                           AsGM_Main_Menu                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_GM_MainMenu(class UObject* __WorldContext, class ABP_GM_MainMenu_C** AsGM_Main_Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_GM_MainMenu");
		
		UBP_MainMenu_Functions_C_Get_GM_MainMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsGM_Main_Menu != nullptr)
			*AsGM_Main_Menu = params.AsGM_Main_Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HandleResponsiveHovering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResponsiveHovering                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWB_NativeButton_C*                          ButtonToFocus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.HandleResponsiveHovering");
		
		UBP_MainMenu_Functions_C_HandleResponsiveHovering_Params params {};
		params.bResponsiveHovering = bResponsiveHovering;
		params.ButtonToFocus = ButtonToFocus;
		params.OwningPlayer = OwningPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnhoverAllNativeButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_NativeButton_C*                          Exception                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnhoverAllNativeButtons");
		
		UBP_MainMenu_Functions_C_UnhoverAllNativeButtons_Params params {};
		params.Exception = Exception;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetPC_InputDetect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PC_InputDetect_C*                        AsPC_Input_Detect                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetPC_InputDetect");
		
		UBP_MainMenu_Functions_C_GetPC_InputDetect_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPC_Input_Detect != nullptr)
			*AsPC_Input_Detect = params.AsPC_Input_Detect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetRightInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        LastPressed_Key                                            (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetRightInputType");
		
		UBP_MainMenu_Functions_C_SetRightInputType_Params params {};
		params.InputKey = InputKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastPressed_Key != nullptr)
			*LastPressed_Key = params.LastPressed_Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.FindInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InputKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        LastPressed_Key                                            (Parm, OutParm, HasGetValueTypeHash)
	 * 		EInputType                                         InputType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, EInputType* InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.FindInputType");
		
		UBP_MainMenu_Functions_C_FindInputType_Params params {};
		params.InputKey = InputKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastPressed_Key != nullptr)
			*LastPressed_Key = params.LastPressed_Key;
		if (InputType != nullptr)
			*InputType = params.InputType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetVRControllerKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FKey>                                Oculus_VR_Keys                                             (Parm, OutParm)
	 */
	void UBP_MainMenu_Functions_C::GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetVRControllerKeys");
		
		UBP_MainMenu_Functions_C_GetVRControllerKeys_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Oculus_VR_Keys != nullptr)
			*Oculus_VR_Keys = params.Oculus_VR_Keys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetMouseKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FKey>                                MouseKeys                                                  (Parm, OutParm)
	 */
	void UBP_MainMenu_Functions_C::GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetMouseKeys");
		
		UBP_MainMenu_Functions_C_GetMouseKeys_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MouseKeys != nullptr)
			*MouseKeys = params.MouseKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetKeyboardKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FKey>                                KeyboardKeys                                               (Parm, OutParm)
	 */
	void UBP_MainMenu_Functions_C::GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetKeyboardKeys");
		
		UBP_MainMenu_Functions_C_GetKeyboardKeys_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyboardKeys != nullptr)
			*KeyboardKeys = params.KeyboardKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetGamepadKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FKey>                                GamepadKeys                                                (Parm, OutParm)
	 */
	void UBP_MainMenu_Functions_C::GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetGamepadKeys");
		
		UBP_MainMenu_Functions_C_GetGamepadKeys_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GamepadKeys != nullptr)
			*GamepadKeys = params.GamepadKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetShowMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowMouse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Functions_C::GetShowMouse(class UObject* __WorldContext, bool* bShowMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetShowMouse");
		
		UBP_MainMenu_Functions_C_GetShowMouse_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowMouse != nullptr)
			*bShowMouse = params.bShowMouse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetShowMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::SetShowMouse(bool bShowMouse, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetShowMouse");
		
		UBP_MainMenu_Functions_C_SetShowMouse_Params params {};
		params.bShowMouse = bShowMouse;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnInputTypeSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::UnbindOnInputTypeSwitched(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.UnbindOnInputTypeSwitched");
		
		UBP_MainMenu_Functions_C_UnbindOnInputTypeSwitched_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnInputTypeSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::BindOnInputTypeSwitched(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.BindOnInputTypeSwitched");
		
		UBP_MainMenu_Functions_C_BindOnInputTypeSwitched_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::SetInputType(EInputType InputType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.SetInputType");
		
		UBP_MainMenu_Functions_C_SetInputType_Params params {};
		params.InputType = InputType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInputType                                         InputType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::GetInputType(class UObject* __WorldContext, EInputType* InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.GetInputType");
		
		UBP_MainMenu_Functions_C_GetInputType_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputType != nullptr)
			*InputType = params.InputType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PMM_Instance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_PMM_Instance_C*                          AsPMM_Instance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Functions_C::Get_PMM_Instance(class UObject* __WorldContext, class UBP_PMM_Instance_C** AsPMM_Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Functions.BP_MainMenu_Functions_C.Get_PMM_Instance");
		
		UBP_MainMenu_Functions_C_Get_PMM_Instance_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPMM_Instance != nullptr)
			*AsPMM_Instance = params.AsPMM_Instance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Functions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Functions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainMenu_Functions.BP_MainMenu_Functions_C");
		return ptr;
	}

}


