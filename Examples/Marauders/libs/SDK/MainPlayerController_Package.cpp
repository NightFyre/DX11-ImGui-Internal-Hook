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
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CauseRandomExplosionOnShip
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CauseRandomExplosionOnShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CauseRandomExplosionOnShip");
		
		AMainPlayerController_C_CauseRandomExplosionOnShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CheckIfAimingController
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CheckIfAimingController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CheckIfAimingController");
		
		AMainPlayerController_C_CheckIfAimingController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CenterOutMouse
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CenterOutMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CenterOutMouse");
		
		AMainPlayerController_C_CenterOutMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CheckSetInvertedYMouse
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CheckSetInvertedYMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CheckSetInvertedYMouse");
		
		AMainPlayerController_C_CheckSetInvertedYMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.DragItem_StopSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::DragItem_StopSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.DragItem_StopSound");
		
		AMainPlayerController_C_DragItem_StopSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.DragItem_StartSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::DragItem_StartSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.DragItem_StartSound");
		
		AMainPlayerController_C_DragItem_StartSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlayDropItemSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::PlayDropItemSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlayDropItemSound");
		
		AMainPlayerController_C_PlayDropItemSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlayPickupSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::PlayPickupSound(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlayPickupSound");
		
		AMainPlayerController_C_PlayPickupSound_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_Tab_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_Tab_K2Node_InputKeyEvent_1");
		
		AMainPlayerController_C_InpActEvt_Tab_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_MenuSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_5");
		
		AMainPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_MenuSelect_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4");
		
		AMainPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_MenuOptions_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_3");
		
		AMainPlayerController_C_InpActEvt_MenuOptions_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_MenuOptions_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_MenuOptions_K2Node_InputActionEvent_2");
		
		AMainPlayerController_C_InpActEvt_MenuOptions_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpActEvt_InGameMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_1");
		
		AMainPlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9");
		
		AMainPlayerController_C_OnLoaded_4C1D4E9B4BC4E96078881BB908C8ADB9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD");
		
		AMainPlayerController_C_OnLoaded_66CA392A49C8AF2B03E39AB30921D2BD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CantLandEmemyOnBoard
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CantLandEmemyOnBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CantLandEmemyOnBoard");
		
		AMainPlayerController_C_CantLandEmemyOnBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.NotTheCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustCrew                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::NotTheCaptain(bool JustCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.NotTheCaptain");
		
		AMainPlayerController_C_NotTheCaptain_Params params {};
		params.JustCrew = JustCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.EnteringLandRaidVolume
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::EnteringLandRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.EnteringLandRaidVolume");
		
		AMainPlayerController_C_EnteringLandRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.EnteringPlanetRaidVolume
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::EnteringPlanetRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.EnteringPlanetRaidVolume");
		
		AMainPlayerController_C_EnteringPlanetRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.EnteringPlanetSpaceVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Boarded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::EnteringPlanetSpaceVolume(bool Boarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.EnteringPlanetSpaceVolume");
		
		AMainPlayerController_C_EnteringPlanetSpaceVolume_Params params {};
		params.Boarded = Boarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.ReceiveBeginPlay");
		
		AMainPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.TransitionStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTranisitionState                            From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerTranisitionState                            To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::TransitionStateChange(EPlayerTranisitionState From, EPlayerTranisitionState To)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.TransitionStateChange");
		
		AMainPlayerController_C_TransitionStateChange_Params params {};
		params.From = From;
		params.To = To;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnFrigatesBeenHitAndInside
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::OnFrigatesBeenHitAndInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnFrigatesBeenHitAndInside");
		
		AMainPlayerController_C_OnFrigatesBeenHitAndInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.BP_CloseEvenventory
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::BP_CloseEvenventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.BP_CloseEvenventory");
		
		AMainPlayerController_C_BP_CloseEvenventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.ShowHangerKeyPad
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::ShowHangerKeyPad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.ShowHangerKeyPad");
		
		AMainPlayerController_C_ShowHangerKeyPad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CloseShowHangar_KeyPad
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CloseShowHangar_KeyPad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CloseShowHangar_KeyPad");
		
		AMainPlayerController_C_CloseShowHangar_KeyPad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlayCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Shake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::PlayCameraShake(class UClass* Shake, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlayCameraShake");
		
		AMainPlayerController_C_PlayCameraShake_Params params {};
		params.Shake = Shake;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.World_PickedUpItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::World_PickedUpItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.World_PickedUpItem");
		
		AMainPlayerController_C_World_PickedUpItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.World_DroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::World_DroppedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.World_DroppedItem");
		
		AMainPlayerController_C_World_DroppedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.UI_EndedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::UI_EndedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.UI_EndedDrag");
		
		AMainPlayerController_C_UI_EndedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.UI_StartedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::UI_StartedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.UI_StartedDrag");
		
		AMainPlayerController_C_UI_StartedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.KeyEnterCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::KeyEnterCheck(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.KeyEnterCheck");
		
		AMainPlayerController_C_KeyEnterCheck_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.EvacRaid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Frigate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        FrigNameIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::EvacRaid(bool Frigate, const class FName& FrigNameIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.EvacRaid");
		
		AMainPlayerController_C_EvacRaid_Params params {};
		params.Frigate = Frigate;
		params.FrigNameIn = FrigNameIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnClientFiredTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeforReload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnClientFiredTurret(float TimeforReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnClientFiredTurret");
		
		AMainPlayerController_C_OnClientFiredTurret_Params params {};
		params.TimeforReload = TimeforReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnClientNoAmmoForTuret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReloadTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnClientNoAmmoForTuret(float ReloadTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnClientNoAmmoForTuret");
		
		AMainPlayerController_C_OnClientNoAmmoForTuret_Params params {};
		params.ReloadTime = ReloadTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.RefreshTurretInfo
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::RefreshTurretInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.RefreshTurretInfo");
		
		AMainPlayerController_C_RefreshTurretInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.TurretFirstTimeOpen
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::TurretFirstTimeOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.TurretFirstTimeOpen");
		
		AMainPlayerController_C_TurretFirstTimeOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.Turret_CurrentAimLocToHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldTargetLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Core                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  TurretCrosshair_Aim                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurretIsZoomedIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TurretAimingAtOwnShip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::Turret_CurrentAimLocToHUD(const struct FVector& WorldTargetLocation, class UTexture2D* TurretCrosshair_Core, class UTexture2D* TurretCrosshair_Aim, bool TurretIsZoomedIn, bool TurretAimingAtOwnShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.Turret_CurrentAimLocToHUD");
		
		AMainPlayerController_C_Turret_CurrentAimLocToHUD_Params params {};
		params.WorldTargetLocation = WorldTargetLocation;
		params.TurretCrosshair_Core = TurretCrosshair_Core;
		params.TurretCrosshair_Aim = TurretCrosshair_Aim;
		params.TurretIsZoomedIn = TurretIsZoomedIn;
		params.TurretAimingAtOwnShip = TurretAimingAtOwnShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.BeenBreached
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::BeenBreached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.BeenBreached");
		
		AMainPlayerController_C_BeenBreached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.HealingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealingOptions                                    HealEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::HealingEvent(EHealingOptions HealEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.HealingEvent");
		
		AMainPlayerController_C_HealingEvent_Params params {};
		params.HealEvent = HealEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnUsedItemEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnUsedItemEvent(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnUsedItemEvent");
		
		AMainPlayerController_C_OnUsedItemEvent_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3");
		
		AMainPlayerController_C_InpAxisEvt_ControllerLook_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4");
		
		AMainPlayerController_C_InpAxisEvt_ControllerTurn_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnUpDateMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRowUpdated                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnUpDateMission(const class FName& MissionRowUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnUpDateMission");
		
		AMainPlayerController_C_OnUpDateMission_Params params {};
		params.MissionRowUpdated = MissionRowUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.ReceiveTick");
		
		AMainPlayerController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.InitialiseAimingSensitivity
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::InitialiseAimingSensitivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.InitialiseAimingSensitivity");
		
		AMainPlayerController_C_InitialiseAimingSensitivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CantFireWeaponBroken
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CantFireWeaponBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CantFireWeaponBroken");
		
		AMainPlayerController_C_CantFireWeaponBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PoolTimer
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::PoolTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PoolTimer");
		
		AMainPlayerController_C_PoolTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.HangerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHangerEvent                                       HEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::HangerEvent(EHangerEvent HEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.HangerEvent");
		
		AMainPlayerController_C_HangerEvent_Params params {};
		params.HEvent = HEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlaySoftRef_2DSound
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::PlaySoftRef_2DSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlaySoftRef_2DSound");
		
		AMainPlayerController_C_PlaySoftRef_2DSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.Headshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::Headshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.Headshot");
		
		AMainPlayerController_C_Headshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.Bodyshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainPlayerController_C::Bodyshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.Bodyshot");
		
		AMainPlayerController_C_Bodyshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.BulletWizzPastHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBulletType                                        BulletType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::BulletWizzPastHead(EBulletType BulletType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.BulletWizzPastHead");
		
		AMainPlayerController_C_BulletWizzPastHead_Params params {};
		params.BulletType = BulletType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlaySoftRef_WorldLocationSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::PlaySoftRef_WorldLocationSound(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlaySoftRef_WorldLocationSound");
		
		AMainPlayerController_C_PlaySoftRef_WorldLocationSound_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnMutatedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnMutatedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnMutatedItem");
		
		AMainPlayerController_C_OnMutatedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.CantFoldItemsInside
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::CantFoldItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.CantFoldItemsInside");
		
		AMainPlayerController_C_CantFoldItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnHealingAnimStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealingTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnHealingAnimStarted(const class FName& ItemRow, float HealingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnHealingAnimStarted");
		
		AMainPlayerController_C_OnHealingAnimStarted_Params params {};
		params.ItemRow = ItemRow;
		params.HealingTime = HealingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnHealingAnimStopped
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::OnHealingAnimStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnHealingAnimStopped");
		
		AMainPlayerController_C_OnHealingAnimStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.PlayerTakenDamageEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            directionInt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::PlayerTakenDamageEvent(float DamageAmount, int32_t directionInt, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.PlayerTakenDamageEvent");
		
		AMainPlayerController_C_PlayerTakenDamageEvent_Params params {};
		params.DamageAmount = DamageAmount;
		params.directionInt = directionInt;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.ForceLookSensitivityRefresh
	 * 		Flags  -> ()
	 */
	void AMainPlayerController_C::ForceLookSensitivityRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.ForceLookSensitivityRefresh");
		
		AMainPlayerController_C_ForceLookSensitivityRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.OnUpDateChapterMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::OnUpDateChapterMission(bool bCompleted, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.OnUpDateChapterMission");
		
		AMainPlayerController_C_OnUpDateChapterMission_Params params {};
		params.bCompleted = bCompleted;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayerController.MainPlayerController_C.ExecuteUbergraph_MainPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayerController_C::ExecuteUbergraph_MainPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayerController.MainPlayerController_C.ExecuteUbergraph_MainPlayerController");
		
		AMainPlayerController_C_ExecuteUbergraph_MainPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainPlayerController.MainPlayerController_C");
		return ptr;
	}

}


