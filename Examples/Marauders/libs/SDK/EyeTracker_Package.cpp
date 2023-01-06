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
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");
		
		UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	 * 		Flags  -> ()
	 */
	bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");
		
		UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	 * 		Flags  -> ()
	 */
	bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");
		
		UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEyeTrackerStereoGazeData                   OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");
		
		UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEyeTrackerGazeData                         OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");
		
		UEyeTrackerFunctionLibrary_GetGazeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEyeTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEyeTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}

}


