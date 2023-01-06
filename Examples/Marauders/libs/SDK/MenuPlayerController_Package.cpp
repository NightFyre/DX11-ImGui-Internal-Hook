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
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.CenterOutMouse
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::CenterOutMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.CenterOutMouse");
		
		AMenuPlayerController_C_CenterOutMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.DragItemStopSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::DragItemStopSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.DragItemStopSound");
		
		AMenuPlayerController_C_DragItemStopSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.DragItemStartSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::DragItemStartSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.DragItemStartSound");
		
		AMenuPlayerController_C_DragItemStartSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.OnLoaded_F2824D544019EA2DC6C4DDA438C83372
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::OnLoaded_F2824D544019EA2DC6C4DDA438C83372(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.OnLoaded_F2824D544019EA2DC6C4DDA438C83372");
		
		AMenuPlayerController_C_OnLoaded_F2824D544019EA2DC6C4DDA438C83372_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_Y_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_2");
		
		AMenuPlayerController_C_InpActEvt_Y_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_N_K2Node_InputKeyEvent_1");
		
		AMenuPlayerController_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_MenuSelect_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4");
		
		AMenuPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_MenuSelect_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_3");
		
		AMenuPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_InGameMenu_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_2");
		
		AMenuPlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::InpActEvt_ToggleInventory_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_1");
		
		AMenuPlayerController_C_InpActEvt_ToggleInventory_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.UI_StartedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::UI_StartedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.UI_StartedDrag");
		
		AMenuPlayerController_C_UI_StartedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.UI_EndedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::UI_EndedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.UI_EndedDrag");
		
		AMenuPlayerController_C_UI_EndedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.UILeveledUP
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::UILeveledUP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.UILeveledUP");
		
		AMenuPlayerController_C_UILeveledUP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.PlaySoftRef_2DSound
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::PlaySoftRef_2DSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.PlaySoftRef_2DSound");
		
		AMenuPlayerController_C_PlaySoftRef_2DSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.OnShowUIDestroyPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::OnShowUIDestroyPrompt(const class FString& ItemUID, const class FName& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.OnShowUIDestroyPrompt");
		
		AMenuPlayerController_C_OnShowUIDestroyPrompt_Params params {};
		params.ItemUID = ItemUID;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.MM_ConfirmDestroyItemReturnFromMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UIDString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::MM_ConfirmDestroyItemReturnFromMenu(const class FString& UIDString, const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.MM_ConfirmDestroyItemReturnFromMenu");
		
		AMenuPlayerController_C_MM_ConfirmDestroyItemReturnFromMenu_Params params {};
		params.UIDString = UIDString;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.MM_CancelDestroyItem
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::MM_CancelDestroyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.MM_CancelDestroyItem");
		
		AMenuPlayerController_C_MM_CancelDestroyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.FAKE_LevelUpUI
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::FAKE_LevelUpUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.FAKE_LevelUpUI");
		
		AMenuPlayerController_C_FAKE_LevelUpUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.FirstStartComic
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::FirstStartComic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.FirstStartComic");
		
		AMenuPlayerController_C_FirstStartComic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.FirstTimeGuide_HasBeenClosed
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::FirstTimeGuide_HasBeenClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.FirstTimeGuide_HasBeenClosed");
		
		AMenuPlayerController_C_FirstTimeGuide_HasBeenClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.ItemAttemptedToScrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScrapSuccesful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuPlayerController_C::ItemAttemptedToScrap(const class FName& ItemData, bool ScrapSuccesful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.ItemAttemptedToScrap");
		
		AMenuPlayerController_C_ItemAttemptedToScrap_Params params {};
		params.ItemData = ItemData;
		params.ScrapSuccesful = ScrapSuccesful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.ReceiveBeginPlay");
		
		AMenuPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.OnMutatedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::OnMutatedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.OnMutatedItem");
		
		AMenuPlayerController_C_OnMutatedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.CantFoldItemsInside
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::CantFoldItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.CantFoldItemsInside");
		
		AMenuPlayerController_C_CantFoldItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.OnAntiCheatCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAntiCheat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EEOSEAntiCheatClientViolationType                  ViolationOut                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ViolationDetails                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::OnAntiCheatCheck(bool HasAntiCheat, EEOSEAntiCheatClientViolationType ViolationOut, const class FString& ViolationDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.OnAntiCheatCheck");
		
		AMenuPlayerController_C_OnAntiCheatCheck_Params params {};
		params.HasAntiCheat = HasAntiCheat;
		params.ViolationOut = ViolationOut;
		params.ViolationDetails = ViolationDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.EscapePressed
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::EscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.EscapePressed");
		
		AMenuPlayerController_C_EscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.OnItemRepaired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::OnItemRepaired(const class FName& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.OnItemRepaired");
		
		AMenuPlayerController_C_OnItemRepaired_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.CantLandEmemyOnBoard
	 * 		Flags  -> ()
	 */
	void AMenuPlayerController_C::CantLandEmemyOnBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.CantLandEmemyOnBoard");
		
		AMenuPlayerController_C_CantLandEmemyOnBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.EventShowMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenuPlayerController_C::EventShowMouse(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.EventShowMouse");
		
		AMenuPlayerController_C_EventShowMouse_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MenuPlayerController.MenuPlayerController_C.ExecuteUbergraph_MenuPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenuPlayerController_C::ExecuteUbergraph_MenuPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuPlayerController.MenuPlayerController_C.ExecuteUbergraph_MenuPlayerController");
		
		AMenuPlayerController_C_ExecuteUbergraph_MenuPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenuPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenuPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuPlayerController.MenuPlayerController_C");
		return ptr;
	}

}


