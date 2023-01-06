/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.ActivateMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuLogo_C::ActivateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.ActivateMenu");
		
		AMainMenuLogo_C_ActivateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.Spin__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::Spin__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.Spin__FinishedFunc");
		
		AMainMenuLogo_C_Spin__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.Spin__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::Spin__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.Spin__UpdateFunc");
		
		AMainMenuLogo_C_Spin__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.SlideOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::SlideOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.SlideOut__FinishedFunc");
		
		AMainMenuLogo_C_SlideOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.SlideOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::SlideOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.SlideOut__UpdateFunc");
		
		AMainMenuLogo_C_SlideOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.SlideIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::SlideIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.SlideIn__FinishedFunc");
		
		AMainMenuLogo_C_SlideIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.SlideIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuLogo_C::SlideIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.SlideIn__UpdateFunc");
		
		AMainMenuLogo_C_SlideIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuLogo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.ReceiveBeginPlay");
		
		AMainMenuLogo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.Animate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuLogo_C::Animate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.Animate");
		
		AMainMenuLogo_C_Animate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function MainMenuLogo.MainMenuLogo_C.ExecuteUbergraph_MainMenuLogo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuLogo_C::ExecuteUbergraph_MainMenuLogo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuLogo.MainMenuLogo_C.ExecuteUbergraph_MainMenuLogo");
		
		AMainMenuLogo_C_ExecuteUbergraph_MainMenuLogo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuLogo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuLogo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuLogo.MainMenuLogo_C");
		return ptr;
	}

}


