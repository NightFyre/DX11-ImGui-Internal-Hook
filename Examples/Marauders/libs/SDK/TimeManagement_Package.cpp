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
	 * 		Name   -> PredefinedFunction UFixedFrameRateCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedFrameRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenlockedCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenlockedCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.GenlockedCustomTimeStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenlockedTimecodeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenlockedTimecodeProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.GenlockedTimecodeProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  DestinationRate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");
		
		UTimeManagementBlueprintLibrary_TransformTime_Params params {};
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.DestinationRate = DestinationRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");
		
		UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");
		
		UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SnapToRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");
		
		UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params {};
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.SnapToRate = SnapToRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");
		
		UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");
		
		UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  OtherFramerate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");
		
		UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params {};
		params.InFrameRate = InFrameRate;
		params.OtherFramerate = OtherFramerate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");
		
		UTimeManagementBlueprintLibrary_IsValid_Framerate_Params params {};
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	 * 		Flags  -> ()
	 */
	struct FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate");
		
		UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 * 		Flags  -> ()
	 */
	struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");
		
		UTimeManagementBlueprintLibrary_GetTimecode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");
		
		UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimecode                                   InTimecode                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceSignDisplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");
		
		UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params {};
		params.InTimecode = InTimecode;
		params.bForceSignDisplay = bForceSignDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InFrameTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");
		
		UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params {};
		params.InFrameTime = InFrameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");
		
		UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params {};
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InFrameNumber                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");
		
		UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params {};
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");
		
		UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");
		
		UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeManagementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeManagementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynchronizationSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

}


