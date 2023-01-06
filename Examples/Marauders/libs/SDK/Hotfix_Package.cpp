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
	 * 		Name   -> Function Hotfix.OnlineHotfixManager.StartHotfixProcess
	 * 		Flags  -> ()
	 */
	void UOnlineHotfixManager::StartHotfixProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hotfix.OnlineHotfixManager.StartHotfixProcess");
		
		UOnlineHotfixManager_StartHotfixProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineHotfixManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineHotfixManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}

}


