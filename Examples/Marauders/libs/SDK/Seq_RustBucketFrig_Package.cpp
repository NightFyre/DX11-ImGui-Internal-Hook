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
	 * 		Name   -> Function Seq_RustBucketFrig.Seq_RustBucketFrig_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASeq_RustBucketFrig_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seq_RustBucketFrig.Seq_RustBucketFrig_C.ReceiveBeginPlay");
		
		ASeq_RustBucketFrig_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Seq_RustBucketFrig.Seq_RustBucketFrig_C.ExecuteUbergraph_Seq_RustBucketFrig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASeq_RustBucketFrig_C::ExecuteUbergraph_Seq_RustBucketFrig(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seq_RustBucketFrig.Seq_RustBucketFrig_C.ExecuteUbergraph_Seq_RustBucketFrig");
		
		ASeq_RustBucketFrig_C_ExecuteUbergraph_Seq_RustBucketFrig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASeq_RustBucketFrig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeq_RustBucketFrig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Seq_RustBucketFrig.Seq_RustBucketFrig_C");
		return ptr;
	}

}


