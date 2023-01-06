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
	 * 		Name   -> Function BasePoolHitEffect.BasePoolHitEffect_C.ExecuteUbergraph_BasePoolHitEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABasePoolHitEffect_C::ExecuteUbergraph_BasePoolHitEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BasePoolHitEffect.BasePoolHitEffect_C.ExecuteUbergraph_BasePoolHitEffect");
		
		ABasePoolHitEffect_C_ExecuteUbergraph_BasePoolHitEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABasePoolHitEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABasePoolHitEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BasePoolHitEffect.BasePoolHitEffect_C");
		return ptr;
	}

}


