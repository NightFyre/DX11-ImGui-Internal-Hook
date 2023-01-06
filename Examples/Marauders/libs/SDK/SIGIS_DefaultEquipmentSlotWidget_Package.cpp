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
	 * 		Name   -> Function SIGIS_DefaultEquipmentSlotWidget.SIGIS_DefaultEquipmentSlotWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_DefaultEquipmentSlotWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DefaultEquipmentSlotWidget.SIGIS_DefaultEquipmentSlotWidget_C.PreConstruct");
		
		USIGIS_DefaultEquipmentSlotWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_DefaultEquipmentSlotWidget.SIGIS_DefaultEquipmentSlotWidget_C.ExecuteUbergraph_SIGIS_DefaultEquipmentSlotWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_DefaultEquipmentSlotWidget_C::ExecuteUbergraph_SIGIS_DefaultEquipmentSlotWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_DefaultEquipmentSlotWidget.SIGIS_DefaultEquipmentSlotWidget_C.ExecuteUbergraph_SIGIS_DefaultEquipmentSlotWidget");
		
		USIGIS_DefaultEquipmentSlotWidget_C_ExecuteUbergraph_SIGIS_DefaultEquipmentSlotWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_DefaultEquipmentSlotWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_DefaultEquipmentSlotWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_DefaultEquipmentSlotWidget.SIGIS_DefaultEquipmentSlotWidget_C");
		return ptr;
	}

}


