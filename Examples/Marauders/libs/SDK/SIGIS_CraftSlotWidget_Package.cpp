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
	 * 		Name   -> Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.CheckHaveEnoughToCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanCraft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_CraftSlotWidget_C::CheckHaveEnoughToCraft(bool* CanCraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.CheckHaveEnoughToCraft");
		
		USIGIS_CraftSlotWidget_C_CheckHaveEnoughToCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCraft != nullptr)
			*CanCraft = params.CanCraft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_CraftSlotWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.Construct");
		
		USIGIS_CraftSlotWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.RefreshSlotInfo
	 * 		Flags  -> ()
	 */
	void USIGIS_CraftSlotWidget_C::RefreshSlotInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.RefreshSlotInfo");
		
		USIGIS_CraftSlotWidget_C_RefreshSlotInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.ExecuteUbergraph_SIGIS_CraftSlotWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_CraftSlotWidget_C::ExecuteUbergraph_SIGIS_CraftSlotWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C.ExecuteUbergraph_SIGIS_CraftSlotWidget");
		
		USIGIS_CraftSlotWidget_C_ExecuteUbergraph_SIGIS_CraftSlotWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_CraftSlotWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_CraftSlotWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_CraftSlotWidget.SIGIS_CraftSlotWidget_C");
		return ptr;
	}

}


