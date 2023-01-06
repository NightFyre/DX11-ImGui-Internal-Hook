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
	 * 		Name   -> Function SearchEnemyLOS.SearchEnemyLOS_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USearchEnemyLOS_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SearchEnemyLOS.SearchEnemyLOS_C.ReceiveTick");
		
		USearchEnemyLOS_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function SearchEnemyLOS.SearchEnemyLOS_C.ExecuteUbergraph_SearchEnemyLOS
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USearchEnemyLOS_C::ExecuteUbergraph_SearchEnemyLOS(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SearchEnemyLOS.SearchEnemyLOS_C.ExecuteUbergraph_SearchEnemyLOS");
		
		USearchEnemyLOS_C_ExecuteUbergraph_SearchEnemyLOS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USearchEnemyLOS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchEnemyLOS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SearchEnemyLOS.SearchEnemyLOS_C");
		return ptr;
	}

}


