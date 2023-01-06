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
	 * 		Name   -> Function DropPodBootScreen.DropPodBootScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UDropPodBootScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPodBootScreen.DropPodBootScreen_C.Construct");
		
		UDropPodBootScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPodBootScreen.DropPodBootScreen_C.TriggerDossStartup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SoundWorldLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPodBootScreen_C::TriggerDossStartup(const struct FVector& SoundWorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPodBootScreen.DropPodBootScreen_C.TriggerDossStartup");
		
		UDropPodBootScreen_C_TriggerDossStartup_Params params {};
		params.SoundWorldLocation = SoundWorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPodBootScreen.DropPodBootScreen_C.ResetDosScreen
	 * 		Flags  -> ()
	 */
	void UDropPodBootScreen_C::ResetDosScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPodBootScreen.DropPodBootScreen_C.ResetDosScreen");
		
		UDropPodBootScreen_C_ResetDosScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropPodBootScreen.DropPodBootScreen_C.ExecuteUbergraph_DropPodBootScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPodBootScreen_C::ExecuteUbergraph_DropPodBootScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPodBootScreen.DropPodBootScreen_C.ExecuteUbergraph_DropPodBootScreen");
		
		UDropPodBootScreen_C_ExecuteUbergraph_DropPodBootScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDropPodBootScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropPodBootScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropPodBootScreen.DropPodBootScreen_C");
		return ptr;
	}

}


