/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0045C210
	 * 		Name   -> Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ScreenshotName                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxGlobalError                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxLocalError                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapNameOverride                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAutomationUtilsBlueprintLibrary::STATIC_TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");
		
		UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params params {};
		params.ScreenshotName = ScreenshotName;
		params.MaxGlobalError = MaxGlobalError;
		params.MaxLocalError = MaxLocalError;
		params.MapNameOverride = MapNameOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutomationUtilsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutomationUtilsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AutomationUtils.AutomationUtilsBlueprintLibrary");
		return ptr;
	}

}


