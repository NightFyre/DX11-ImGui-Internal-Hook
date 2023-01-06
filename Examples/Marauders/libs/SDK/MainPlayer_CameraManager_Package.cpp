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
	 * 		Name   -> Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StartSprinting
	 * 		Flags  -> ()
	 */
	void AMainPlayer_CameraManager_C::CameraShake_StartSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StartSprinting");
		
		AMainPlayer_CameraManager_C_CameraShake_StartSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StopSprinting
	 * 		Flags  -> ()
	 */
	void AMainPlayer_CameraManager_C::CameraShake_StopSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.CameraShake_StopSprinting");
		
		AMainPlayer_CameraManager_C_CameraShake_StopSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.ExecuteUbergraph_MainPlayer_CameraManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainPlayer_CameraManager_C::ExecuteUbergraph_MainPlayer_CameraManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainPlayer_CameraManager.MainPlayer_CameraManager_C.ExecuteUbergraph_MainPlayer_CameraManager");
		
		AMainPlayer_CameraManager_C_ExecuteUbergraph_MainPlayer_CameraManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainPlayer_CameraManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainPlayer_CameraManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainPlayer_CameraManager.MainPlayer_CameraManager_C");
		return ptr;
	}

}


