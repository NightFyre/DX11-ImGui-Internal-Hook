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
	 * 		Name   -> Function BPI_ShipInterface.BPI_ShipInterface_C.ShipTakeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ShipInterface_C::ShipTakeDamage(float DamageAmount, int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShipInterface.BPI_ShipInterface_C.ShipTakeDamage");
		
		UBPI_ShipInterface_C_ShipTakeDamage_Params params {};
		params.DamageAmount = DamageAmount;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ShipInterface.BPI_ShipInterface_C.Frigate_IsEnteringArea
	 * 		Flags  -> ()
	 */
	void UBPI_ShipInterface_C::Frigate_IsEnteringArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShipInterface.BPI_ShipInterface_C.Frigate_IsEnteringArea");
		
		UBPI_ShipInterface_C_Frigate_IsEnteringArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ShipInterface.BPI_ShipInterface_C.Trigger_FrigateCinematicCameraMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  ToSocketOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ToRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ToBoomLength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ShipInterface_C::Trigger_FrigateCinematicCameraMove(const struct FTransform& ToSocketOffset, const struct FRotator& ToRotation, float ToBoomLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ShipInterface.BPI_ShipInterface_C.Trigger_FrigateCinematicCameraMove");
		
		UBPI_ShipInterface_C_Trigger_FrigateCinematicCameraMove_Params params {};
		params.ToSocketOffset = ToSocketOffset;
		params.ToRotation = ToRotation;
		params.ToBoomLength = ToBoomLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ShipInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ShipInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ShipInterface.BPI_ShipInterface_C");
		return ptr;
	}

}


