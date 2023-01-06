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
	 * 		Name   -> Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.CalculateBloodEffectRotation
	 * 		Flags  -> ()
	 */
	struct FRotator UBP_C_SimpleGoreSystem_C::CalculateBloodEffectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.CalculateBloodEffectRotation");
		
		UBP_C_SimpleGoreSystem_C_CalculateBloodEffectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.Dismember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimationAsset*                             AnimMontageToPlay                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_C_SimpleGoreSystem_C::Dismember(const class FName& Bone, const struct FVector& ImpactNormal, class UAnimationAsset* AnimMontageToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.Dismember");
		
		UBP_C_SimpleGoreSystem_C_Dismember_Params params {};
		params.Bone = Bone;
		params.ImpactNormal = ImpactNormal;
		params.AnimMontageToPlay = AnimMontageToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.DismemberWithCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactNormal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                DeathAnimationMontage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_C_SimpleGoreSystem_C::DismemberWithCheck(const class FName& Bone, const struct FVector& ImpactNormal, class UAnimMontage* DeathAnimationMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.DismemberWithCheck");
		
		UBP_C_SimpleGoreSystem_C_DismemberWithCheck_Params params {};
		params.Bone = Bone;
		params.ImpactNormal = ImpactNormal;
		params.DeathAnimationMontage = DeathAnimationMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.ExecuteUbergraph_BP_C_SimpleGoreSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_C_SimpleGoreSystem_C::ExecuteUbergraph_BP_C_SimpleGoreSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.ExecuteUbergraph_BP_C_SimpleGoreSystem");
		
		UBP_C_SimpleGoreSystem_C_ExecuteUbergraph_BP_C_SimpleGoreSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_C_SimpleGoreSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_C_SimpleGoreSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C");
		return ptr;
	}

}


