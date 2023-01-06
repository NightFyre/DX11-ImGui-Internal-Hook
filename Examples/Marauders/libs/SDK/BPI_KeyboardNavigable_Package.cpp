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
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetSelectedIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::GetSelectedIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetSelectedIndex");
		
		UBPI_KeyboardNavigable_C_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetNavigationAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNavItemAction                             Action                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::GetNavigationAction(struct FFNavItemAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetNavigationAction");
		
		UBPI_KeyboardNavigable_C_GetNavigationAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Action != nullptr)
			*Action = params.Action;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.RemoveFocus
	 * 		Flags  -> ()
	 */
	void UBPI_KeyboardNavigable_C::RemoveFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.RemoveFocus");
		
		UBPI_KeyboardNavigable_C_RemoveFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetFocusBPIVersion
	 * 		Flags  -> ()
	 */
	void UBPI_KeyboardNavigable_C::SetFocusBPIVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetFocusBPIVersion");
		
		UBPI_KeyboardNavigable_C_SetFocusBPIVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::GetIndex(int32_t* SelectedIndex, int32_t* StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetIndex");
		
		UBPI_KeyboardNavigable_C_GetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedIndex != nullptr)
			*SelectedIndex = params.SelectedIndex;
		if (StepIndex != nullptr)
			*StepIndex = params.StepIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::SetIndex(int32_t SelectedIndex, int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetIndex");
		
		UBPI_KeyboardNavigable_C_SetIndex_Params params {};
		params.SelectedIndex = SelectedIndex;
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetEventHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navset_event_handler_C*                  Event_Handler                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetEventHandler");
		
		UBPI_KeyboardNavigable_C_GetEventHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Event_Handler != nullptr)
			*Event_Handler = params.Event_Handler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetEventHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navset_event_handler_C*                  Event_Handler                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigable_C::SetEventHandler(class UBP_navset_event_handler_C* Event_Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetEventHandler");
		
		UBPI_KeyboardNavigable_C_SetEventHandler_Params params {};
		params.Event_Handler = Event_Handler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.OnClick
	 * 		Flags  -> ()
	 */
	void UBPI_KeyboardNavigable_C::OnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.OnClick");
		
		UBPI_KeyboardNavigable_C_OnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.ChangeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_KeyboardNavigable_C::ChangeValue(bool Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.ChangeValue");
		
		UBPI_KeyboardNavigable_C_ChangeValue_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_KeyboardNavigable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_KeyboardNavigable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_KeyboardNavigable.BPI_KeyboardNavigable_C");
		return ptr;
	}

}


