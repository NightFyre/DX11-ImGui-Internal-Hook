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
	 * 		Name   -> Function ShootEnemy.ShootEnemy_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootEnemy_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootEnemy.ShootEnemy_C.ReceiveTick");
		
		UShootEnemy_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function ShootEnemy.ShootEnemy_C.ExecuteUbergraph_ShootEnemy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootEnemy_C::ExecuteUbergraph_ShootEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootEnemy.ShootEnemy_C.ExecuteUbergraph_ShootEnemy");
		
		UShootEnemy_C_ExecuteUbergraph_ShootEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShootEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShootEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShootEnemy.ShootEnemy_C");
		return ptr;
	}

}


