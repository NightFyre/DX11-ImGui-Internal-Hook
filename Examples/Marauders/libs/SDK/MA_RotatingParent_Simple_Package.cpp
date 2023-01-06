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
	 * 		Name   -> Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMA_RotatingParent_Simple_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.ReceiveBeginPlay");
		
		AMA_RotatingParent_Simple_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.LoopThisActor
	 * 		Flags  -> ()
	 */
	void AMA_RotatingParent_Simple_C::LoopThisActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.LoopThisActor");
		
		AMA_RotatingParent_Simple_C_LoopThisActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.ExecuteUbergraph_MA_RotatingParent_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMA_RotatingParent_Simple_C::ExecuteUbergraph_MA_RotatingParent_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MA_RotatingParent_Simple.MA_RotatingParent_Simple_C.ExecuteUbergraph_MA_RotatingParent_Simple");
		
		AMA_RotatingParent_Simple_C_ExecuteUbergraph_MA_RotatingParent_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMA_RotatingParent_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMA_RotatingParent_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MA_RotatingParent_Simple.MA_RotatingParent_Simple_C");
		return ptr;
	}

}


