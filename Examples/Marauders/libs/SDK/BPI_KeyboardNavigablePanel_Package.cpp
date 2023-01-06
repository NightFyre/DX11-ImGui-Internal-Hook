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
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetParentPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ParentWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::SetParentPanel(class UUserWidget* ParentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetParentPanel");
		
		UBPI_KeyboardNavigablePanel_C_SetParentPanel_Params params {};
		params.ParentWidget = ParentWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEscapeBehaviour
	 * 		Flags  -> ()
	 */
	void UBPI_KeyboardNavigablePanel_C::GetEscapeBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEscapeBehaviour");
		
		UBPI_KeyboardNavigablePanel_C_GetEscapeBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEventHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navset_event_handler_C*                  EventHandler                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEventHandler");
		
		UBPI_KeyboardNavigablePanel_C_GetEventHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventHandler != nullptr)
			*EventHandler = params.EventHandler;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetOnEscapeBehaviour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEscapeBehaviour                                   EscapeBehaviour                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::SetOnEscapeBehaviour(EEscapeBehaviour EscapeBehaviour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetOnEscapeBehaviour");
		
		UBPI_KeyboardNavigablePanel_C_SetOnEscapeBehaviour_Params params {};
		params.EscapeBehaviour = EscapeBehaviour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.OnEscapeInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_KeyboardNavigablePanel_C::OnEscapeInput(bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.OnEscapeInput");
		
		UBPI_KeyboardNavigablePanel_C_OnEscapeInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetNavManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_navigation_manager_C*                    NavManagerRef                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::SetNavManager(class UBP_navigation_manager_C* NavManagerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetNavManager");
		
		UBPI_KeyboardNavigablePanel_C_SetNavManager_Params params {};
		params.NavManagerRef = NavManagerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetStepIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StepIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::SetStepIndex(int32_t StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetStepIndex");
		
		UBPI_KeyboardNavigablePanel_C_SetStepIndex_Params params {};
		params.StepIndex = StepIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetStepIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StepIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_KeyboardNavigablePanel_C::GetStepIndex(int32_t* StepIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetStepIndex");
		
		UBPI_KeyboardNavigablePanel_C_GetStepIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StepIndex != nullptr)
			*StepIndex = params.StepIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_KeyboardNavigablePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_KeyboardNavigablePanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C");
		return ptr;
	}

}


