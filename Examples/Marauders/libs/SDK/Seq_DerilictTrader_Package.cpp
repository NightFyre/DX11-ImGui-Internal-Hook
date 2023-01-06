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
	 * 		Name   -> Function Seq_DerilictTrader.Seq_DerilictTrader_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASeq_DerilictTrader_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seq_DerilictTrader.Seq_DerilictTrader_C.ReceiveBeginPlay");
		
		ASeq_DerilictTrader_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Seq_DerilictTrader.Seq_DerilictTrader_C.ExecuteUbergraph_Seq_DerilictTrader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASeq_DerilictTrader_C::ExecuteUbergraph_Seq_DerilictTrader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Seq_DerilictTrader.Seq_DerilictTrader_C.ExecuteUbergraph_Seq_DerilictTrader");
		
		ASeq_DerilictTrader_C_ExecuteUbergraph_Seq_DerilictTrader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASeq_DerilictTrader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeq_DerilictTrader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Seq_DerilictTrader.Seq_DerilictTrader_C");
		return ptr;
	}

}


