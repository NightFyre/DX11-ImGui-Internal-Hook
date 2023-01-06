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
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerInHangarNow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerIsInTheHangar                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::Set_PlayerInHangarNow(bool PlayerIsInTheHangar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerInHangarNow");
		
		AMM_HangarShipViewer_C_Set_PlayerInHangarNow_Params params {};
		params.PlayerIsInTheHangar = PlayerIsInTheHangar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.AttachingRelativeTransformChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                WhichShipPart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  AttachOffsetTransform                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::AttachingRelativeTransformChange(EShipAttachmentSlot WhichShipPart, const struct FTransform& AttachOffsetTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.AttachingRelativeTransformChange");
		
		AMM_HangarShipViewer_C_AttachingRelativeTransformChange_Params params {};
		params.WhichShipPart = WhichShipPart;
		params.AttachOffsetTransform = AttachOffsetTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_SetBoomLengthAttachmentCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInstantChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetArmLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZoomXamount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::Ship_SetBoomLengthAttachmentCamera(bool isInstantChange, float TargetArmLength, float ZoomXamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_SetBoomLengthAttachmentCamera");
		
		AMM_HangarShipViewer_C_Ship_SetBoomLengthAttachmentCamera_Params params {};
		params.isInstantChange = isInstantChange;
		params.TargetArmLength = TargetArmLength;
		params.ZoomXamount = ZoomXamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_Switch to Ship Attachment Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                WhichShipAttachmentSlot                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CurrentShipItemDTName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoAZoom                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::Ship_Switch_to_Ship_Attachment_Slot(EShipAttachmentSlot WhichShipAttachmentSlot, const class FName& CurrentShipItemDTName, bool DoAZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_Switch to Ship Attachment Slot");
		
		AMM_HangarShipViewer_C_Ship_Switch_to_Ship_Attachment_Slot_Params params {};
		params.WhichShipAttachmentSlot = WhichShipAttachmentSlot;
		params.CurrentShipItemDTName = CurrentShipItemDTName;
		params.DoAZoom = DoAZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerAbleToRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isallowed_to_rotate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::Set_PlayerAbleToRotate(bool isallowed_to_rotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerAbleToRotate");
		
		AMM_HangarShipViewer_C_Set_PlayerAbleToRotate_Params params {};
		params.isallowed_to_rotate = isallowed_to_rotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Switch Ship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::Switch_Ship(const class FName& ShipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Switch Ship");
		
		AMM_HangarShipViewer_C_Switch_Ship_Params params {};
		params.ShipName = ShipName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
		
		AMM_HangarShipViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");
		
		AMM_HangarShipViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E");
		
		AMM_HangarShipViewer_C_OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.SetWhichCameraView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAttachmentView                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::SetWhichCameraView(bool isAttachmentView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.SetWhichCameraView");
		
		AMM_HangarShipViewer_C_SetWhichCameraView_Params params {};
		params.isAttachmentView = isAttachmentView;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.SwitchShipNew_DoNotUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Switch_Ship                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::SwitchShipNew_DoNotUse(const class FName& Switch_Ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.SwitchShipNew_DoNotUse");
		
		AMM_HangarShipViewer_C_SwitchShipNew_DoNotUse_Params params {};
		params.Switch_Ship = Switch_Ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveTick");
		
		AMM_HangarShipViewer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMM_HangarShipViewer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveBeginPlay");
		
		AMM_HangarShipViewer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_UpdateShipRenderActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Switch_Ship                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnlyUpdateBaseTransform                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsStarterShip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_HangarShipViewer_C::Ship_UpdateShipRenderActor(const class FName& Switch_Ship, bool OnlyUpdateBaseTransform, bool IsStarterShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_UpdateShipRenderActor");
		
		AMM_HangarShipViewer_C_Ship_UpdateShipRenderActor_Params params {};
		params.Switch_Ship = Switch_Ship;
		params.OnlyUpdateBaseTransform = OnlyUpdateBaseTransform;
		params.IsStarterShip = IsStarterShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_HangarShipViewer.MM_HangarShipViewer_C.ExecuteUbergraph_MM_HangarShipViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_HangarShipViewer_C::ExecuteUbergraph_MM_HangarShipViewer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_HangarShipViewer.MM_HangarShipViewer_C.ExecuteUbergraph_MM_HangarShipViewer");
		
		AMM_HangarShipViewer_C_ExecuteUbergraph_MM_HangarShipViewer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMM_HangarShipViewer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMM_HangarShipViewer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_HangarShipViewer.MM_HangarShipViewer_C");
		return ptr;
	}

}


