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
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.SortBGItemTypeColour
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::SortBGItemTypeColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.SortBGItemTypeColour");
		
		USIGIS_DraggableItemWidget_C_SortBGItemTypeColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CalculateTheUnlockTimeBasedOnSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CombinedSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DraggableItemWidget_C::CalculateTheUnlockTimeBasedOnSize(float CombinedSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CalculateTheUnlockTimeBasedOnSize");
		
		USIGIS_DraggableItemWidget_C_CalculateTheUnlockTimeBasedOnSize_Params params {};
		params.CombinedSize = CombinedSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USIGIS_DraggableItemWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnPreviewKeyDown");
		
		USIGIS_DraggableItemWidget_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USIGIS_DraggableItemWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnKeyDown");
		
		USIGIS_DraggableItemWidget_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Set_CanSeeBuySellCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show_MoneyCost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_DraggableItemWidget_C::Set_CanSeeBuySellCost(bool Show_MoneyCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Set_CanSeeBuySellCost");
		
		USIGIS_DraggableItemWidget_C_Set_CanSeeBuySellCost_Params params {};
		params.Show_MoneyCost = Show_MoneyCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_Amount_Text_1
	 * 		Flags  -> ()
	 */
	class FText USIGIS_DraggableItemWidget_C::Get_Amount_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_Amount_Text_1");
		
		USIGIS_DraggableItemWidget_C_Get_Amount_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_CashValue_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility USIGIS_DraggableItemWidget_C::Get_CashValue_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_CashValue_Visibility_1");
		
		USIGIS_DraggableItemWidget_C_Get_CashValue_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EquipmentNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DraggableItemWidget_C::EquipmentNewSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EquipmentNewSize");
		
		USIGIS_DraggableItemWidget_C_EquipmentNewSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.IsALootWidgetandNeedsLocked
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::IsALootWidgetandNeedsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.IsALootWidgetandNeedsLocked");
		
		USIGIS_DraggableItemWidget_C_IsALootWidgetandNeedsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartWidgetBeingUnLocked
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::StartWidgetBeingUnLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartWidgetBeingUnLocked");
		
		USIGIS_DraggableItemWidget_C_StartWidgetBeingUnLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnlockAnimFinished
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::UnlockAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnlockAnimFinished");
		
		USIGIS_DraggableItemWidget_C_UnlockAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckDurability
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::CheckDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckDurability");
		
		USIGIS_DraggableItemWidget_C_CheckDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DuribilityChanged
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::DuribilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DuribilityChanged");
		
		USIGIS_DraggableItemWidget_C_DuribilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckAmmoType
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::CheckAmmoType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckAmmoType");
		
		USIGIS_DraggableItemWidget_C_CheckAmmoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckArmourValue
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::CheckArmourValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckArmourValue");
		
		USIGIS_DraggableItemWidget_C_CheckArmourValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartDraggingEvent
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::StartDraggingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartDraggingEvent");
		
		USIGIS_DraggableItemWidget_C_StartDraggingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EndDraggingEvent
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::EndDraggingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EndDraggingEvent");
		
		USIGIS_DraggableItemWidget_C_EndDraggingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.WidgetsNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DraggableItemWidget_C::WidgetsNewSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.WidgetsNewSize");
		
		USIGIS_DraggableItemWidget_C_WidgetsNewSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.HighLightWidget
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::HighLightWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.HighLightWidget");
		
		USIGIS_DraggableItemWidget_C_HighLightWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnHighLightWidget
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::UnHighLightWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnHighLightWidget");
		
		USIGIS_DraggableItemWidget_C_UnHighLightWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DisableWidget
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::DisableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DisableWidget");
		
		USIGIS_DraggableItemWidget_C_DisableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EnableWidget
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::EnableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EnableWidget");
		
		USIGIS_DraggableItemWidget_C_EnableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Construct");
		
		USIGIS_DraggableItemWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckIfHasCustomContainerName
	 * 		Flags  -> ()
	 */
	void USIGIS_DraggableItemWidget_C::CheckIfHasCustomContainerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckIfHasCustomContainerName");
		
		USIGIS_DraggableItemWidget_C_CheckIfHasCustomContainerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.ExecuteUbergraph_SIGIS_DraggableItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DraggableItemWidget_C::ExecuteUbergraph_SIGIS_DraggableItemWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.ExecuteUbergraph_SIGIS_DraggableItemWidget");
		
		USIGIS_DraggableItemWidget_C_ExecuteUbergraph_SIGIS_DraggableItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_DraggableItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_DraggableItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C");
		return ptr;
	}

}


