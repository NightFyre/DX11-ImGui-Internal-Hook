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
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime");
		
		UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime");
		
		UConstantQNRT_GetChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime");
		
		ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime");
		
		ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime");
		
		ULoudnessNRT_GetLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime");
		
		ULoudnessNRT_GetChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes");
		
		UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes");
		
		UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRT");
		return ptr;
	}

}


