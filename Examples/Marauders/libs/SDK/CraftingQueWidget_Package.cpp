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
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.SetCraftTimeRemaining
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftingQueWidget_C::SetCraftTimeRemaining(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.SetCraftTimeRemaining");
		
		UCraftingQueWidget_C_SetCraftTimeRemaining_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftingQueWidget_C::OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957");
		
		UCraftingQueWidget_C_OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftingQueWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.Construct");
		
		UCraftingQueWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.UpdateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCraftingHere                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isReadyToCollect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SecondsTillFinished                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftingQueWidget_C::UpdateWidget(bool IsCraftingHere, bool isReadyToCollect, int32_t SecondsTillFinished, const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.UpdateWidget");
		
		UCraftingQueWidget_C_UpdateWidget_Params params {};
		params.IsCraftingHere = IsCraftingHere;
		params.isReadyToCollect = isReadyToCollect;
		params.SecondsTillFinished = SecondsTillFinished;
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.EnableCollect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftingQueWidget_C::EnableCollect(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.EnableCollect");
		
		UCraftingQueWidget_C_EnableCollect_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.EmptySlot
	 * 		Flags  -> ()
	 */
	void UCraftingQueWidget_C::EmptySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.EmptySlot");
		
		UCraftingQueWidget_C_EmptySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftingQueWidget_C::BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCraftingQueWidget_C_BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftingQueWidget.CraftingQueWidget_C.ExecuteUbergraph_CraftingQueWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftingQueWidget_C::ExecuteUbergraph_CraftingQueWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftingQueWidget.CraftingQueWidget_C.ExecuteUbergraph_CraftingQueWidget");
		
		UCraftingQueWidget_C_ExecuteUbergraph_CraftingQueWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftingQueWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftingQueWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftingQueWidget.CraftingQueWidget_C");
		return ptr;
	}

}


