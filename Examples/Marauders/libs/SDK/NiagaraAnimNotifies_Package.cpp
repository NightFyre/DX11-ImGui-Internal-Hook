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
	 * 		Name   -> Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	 * 		Flags  -> ()
	 */
	class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");
		
		UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotify_PlayNiagaraEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayNiagaraEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_TimedNiagaraEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_TimedNiagaraEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
		return ptr;
	}

}


