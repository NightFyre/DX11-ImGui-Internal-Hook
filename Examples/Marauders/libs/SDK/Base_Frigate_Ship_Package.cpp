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
	 * 		Name   -> Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckifAbleToDock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAllowedToDock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_Frigate_Ship_C::CheckifAbleToDock(bool isAllowedToDock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckifAbleToDock");
		
		ABase_Frigate_Ship_C_CheckifAbleToDock_Params params {};
		params.isAllowedToDock = isAllowedToDock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Frigate_Ship.Base_Frigate_Ship_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_Frigate_Ship_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Frigate_Ship.Base_Frigate_Ship_C.ReceiveBeginPlay");
		
		ABase_Frigate_Ship_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckIfCanDock
	 * 		Flags  -> ()
	 */
	void ABase_Frigate_Ship_C::CheckIfCanDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Frigate_Ship.Base_Frigate_Ship_C.CheckIfCanDock");
		
		ABase_Frigate_Ship_C_CheckIfCanDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_Frigate_Ship.Base_Frigate_Ship_C.ExecuteUbergraph_Base_Frigate_Ship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_Frigate_Ship_C::ExecuteUbergraph_Base_Frigate_Ship(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_Frigate_Ship.Base_Frigate_Ship_C.ExecuteUbergraph_Base_Frigate_Ship");
		
		ABase_Frigate_Ship_C_ExecuteUbergraph_Base_Frigate_Ship_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_Frigate_Ship_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_Frigate_Ship_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_Frigate_Ship.Base_Frigate_Ship_C");
		return ptr;
	}

}


