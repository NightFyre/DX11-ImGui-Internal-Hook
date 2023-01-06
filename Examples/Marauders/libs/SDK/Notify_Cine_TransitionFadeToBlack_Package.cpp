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
	 * 		Name   -> Function Notify_Cine_TransitionFadeToBlack.Notify_Cine_TransitionFadeToBlack_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UNotify_Cine_TransitionFadeToBlack_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notify_Cine_TransitionFadeToBlack.Notify_Cine_TransitionFadeToBlack_C.Received_Notify");
		
		UNotify_Cine_TransitionFadeToBlack_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotify_Cine_TransitionFadeToBlack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotify_Cine_TransitionFadeToBlack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Notify_Cine_TransitionFadeToBlack.Notify_Cine_TransitionFadeToBlack_C");
		return ptr;
	}

}


