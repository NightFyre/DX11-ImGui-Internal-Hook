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
	 * 		Name   -> Function DetectifShouldRunPatrol.DetectifShouldRunPatrol_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectifShouldRunPatrol_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectifShouldRunPatrol.DetectifShouldRunPatrol_C.ReceiveTick");
		
		UDetectifShouldRunPatrol_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DetectifShouldRunPatrol.DetectifShouldRunPatrol_C.ExecuteUbergraph_DetectifShouldRunPatrol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDetectifShouldRunPatrol_C::ExecuteUbergraph_DetectifShouldRunPatrol(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DetectifShouldRunPatrol.DetectifShouldRunPatrol_C.ExecuteUbergraph_DetectifShouldRunPatrol");
		
		UDetectifShouldRunPatrol_C_ExecuteUbergraph_DetectifShouldRunPatrol_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDetectifShouldRunPatrol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDetectifShouldRunPatrol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DetectifShouldRunPatrol.DetectifShouldRunPatrol_C");
		return ptr;
	}

}


