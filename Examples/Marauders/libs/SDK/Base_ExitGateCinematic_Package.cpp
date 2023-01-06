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
	 * 		Name   -> Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABase_ExitGateCinematic_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__FinishedFunc");
		
		ABase_ExitGateCinematic_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABase_ExitGateCinematic_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.Timeline_0__UpdateFunc");
		
		ABase_ExitGateCinematic_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.OnLoaded_F35158C34C07B2A5A38E7AB5D7360091
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ExitGateCinematic_C::OnLoaded_F35158C34C07B2A5A38E7AB5D7360091(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.OnLoaded_F35158C34C07B2A5A38E7AB5D7360091");
		
		ABase_ExitGateCinematic_C_OnLoaded_F35158C34C07B2A5A38E7AB5D7360091_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.RunCinematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidPlayerController*                       WhichPlayerController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFrigate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NameOfShip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ExitGateCinematic_C::RunCinematic(class ARaidPlayerController* WhichPlayerController, bool IsFrigate, const class FName& NameOfShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.RunCinematic");
		
		ABase_ExitGateCinematic_C_RunCinematic_Params params {};
		params.WhichPlayerController = WhichPlayerController;
		params.IsFrigate = IsFrigate;
		params.NameOfShip = NameOfShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.ExecuteUbergraph_Base_ExitGateCinematic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_ExitGateCinematic_C::ExecuteUbergraph_Base_ExitGateCinematic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_ExitGateCinematic.Base_ExitGateCinematic_C.ExecuteUbergraph_Base_ExitGateCinematic");
		
		ABase_ExitGateCinematic_C_ExecuteUbergraph_Base_ExitGateCinematic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_ExitGateCinematic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_ExitGateCinematic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_ExitGateCinematic.Base_ExitGateCinematic_C");
		return ptr;
	}

}


