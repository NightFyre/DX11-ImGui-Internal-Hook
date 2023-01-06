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
	 * 		Name   -> Function BP_ChunkActor.BP_ChunkActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ChunkActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChunkActor.BP_ChunkActor_C.UserConstructionScript");
		
		ABP_ChunkActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChunkActor.BP_ChunkActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ChunkActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChunkActor.BP_ChunkActor_C.ReceiveBeginPlay");
		
		ABP_ChunkActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChunkActor.BP_ChunkActor_C.ExecuteUbergraph_BP_ChunkActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChunkActor_C::ExecuteUbergraph_BP_ChunkActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChunkActor.BP_ChunkActor_C.ExecuteUbergraph_BP_ChunkActor");
		
		ABP_ChunkActor_C_ExecuteUbergraph_BP_ChunkActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ChunkActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ChunkActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChunkActor.BP_ChunkActor_C");
		return ptr;
	}

}


