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
	 * 		Name   -> Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UPrestigeUnlockElement_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.Construct");
		
		UPrestigeUnlockElement_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.BndEvt__PrestigeUnlockElement_SubWidget_MM_GenericLargeBtn01_PrestigeUnlockBtn_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPrestigeUnlockElement_SubWidget_C::BndEvt__PrestigeUnlockElement_SubWidget_MM_GenericLargeBtn01_PrestigeUnlockBtn_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.BndEvt__PrestigeUnlockElement_SubWidget_MM_GenericLargeBtn01_PrestigeUnlockBtn_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature");
		
		UPrestigeUnlockElement_SubWidget_C_BndEvt__PrestigeUnlockElement_SubWidget_MM_GenericLargeBtn01_PrestigeUnlockBtn_K2Node_ComponentBoundEvent_1_GenericLargeBtn_Pressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.ExecuteUbergraph_PrestigeUnlockElement_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrestigeUnlockElement_SubWidget_C::ExecuteUbergraph_PrestigeUnlockElement_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.ExecuteUbergraph_PrestigeUnlockElement_SubWidget");
		
		UPrestigeUnlockElement_SubWidget_C_ExecuteUbergraph_PrestigeUnlockElement_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.ED_TriedToUnlock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UnlockName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrestigeUnlockElement_SubWidget_C::ED_TriedToUnlock__DelegateSignature(const class FName& UnlockName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C.ED_TriedToUnlock__DelegateSignature");
		
		UPrestigeUnlockElement_SubWidget_C_ED_TriedToUnlock__DelegateSignature_Params params {};
		params.UnlockName = UnlockName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrestigeUnlockElement_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrestigeUnlockElement_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PrestigeUnlockElement_SubWidget.PrestigeUnlockElement_SubWidget_C");
		return ptr;
	}

}


