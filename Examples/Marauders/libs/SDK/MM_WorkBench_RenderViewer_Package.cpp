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
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Set_Workbench_AbleToRotate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAllowedToBeRotatedByPlayer                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_WorkBench_RenderViewer_C::Set_Workbench_AbleToRotate(bool isAllowedToBeRotatedByPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Set_Workbench_AbleToRotate");
		
		AMM_WorkBench_RenderViewer_C_Set_Workbench_AbleToRotate_Params params {};
		params.isAllowedToBeRotatedByPlayer = isAllowedToBeRotatedByPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Show Hide Wpn_WB_Actor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_WorkBench_RenderViewer_C::Show_Hide_Wpn_WB_Actor(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Show Hide Wpn_WB_Actor");
		
		AMM_WorkBench_RenderViewer_C_Show_Hide_Wpn_WB_Actor_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.AttachingRelativeTransformChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    WhichPart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  AttachOffsetTransform                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void AMM_WorkBench_RenderViewer_C::AttachingRelativeTransformChange(EAttachmentSlot WhichPart, const struct FTransform& AttachOffsetTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.AttachingRelativeTransformChange");
		
		AMM_WorkBench_RenderViewer_C_AttachingRelativeTransformChange_Params params {};
		params.WhichPart = WhichPart;
		params.AttachOffsetTransform = AttachOffsetTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_AttachmentCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInstantChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetArmLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZoomXamount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::SetBoomLength_AttachmentCamera(bool isInstantChange, float TargetArmLength, float ZoomXamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_AttachmentCamera");
		
		AMM_WorkBench_RenderViewer_C_SetBoomLength_AttachmentCamera_Params params {};
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
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SwitchToAttachmentCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    WhichAttachement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemDataName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_WorkBench_RenderViewer_C::SwitchToAttachmentCamera(EAttachmentSlot WhichAttachement, const class FName& ItemDataName, bool DoZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SwitchToAttachmentCamera");
		
		AMM_WorkBench_RenderViewer_C_SwitchToAttachmentCamera_Params params {};
		params.WhichAttachement = WhichAttachement;
		params.ItemDataName = ItemDataName;
		params.DoZoom = DoZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_MainCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInstantChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetArmLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZoomXamount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::SetBoomLength_MainCamera(bool isInstantChange, float TargetArmLength, float ZoomXamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_MainCamera");
		
		AMM_WorkBench_RenderViewer_C_SetBoomLength_MainCamera_Params params {};
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
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetMainMeshTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_WorkBench_RenderViewer_C::SetMainMeshTransform(const struct FVector& NewLocation, const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetMainMeshTransform");
		
		AMM_WorkBench_RenderViewer_C_SetMainMeshTransform_Params params {};
		params.NewLocation = NewLocation;
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
		
		AMM_WorkBench_RenderViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1");
		
		AMM_WorkBench_RenderViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveTick");
		
		AMM_WorkBench_RenderViewer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMM_WorkBench_RenderViewer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveBeginPlay");
		
		AMM_WorkBench_RenderViewer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ExecuteUbergraph_MM_WorkBench_RenderViewer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_WorkBench_RenderViewer_C::ExecuteUbergraph_MM_WorkBench_RenderViewer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ExecuteUbergraph_MM_WorkBench_RenderViewer");
		
		AMM_WorkBench_RenderViewer_C_ExecuteUbergraph_MM_WorkBench_RenderViewer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMM_WorkBench_RenderViewer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMM_WorkBench_RenderViewer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C");
		return ptr;
	}

}


