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
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveVectorParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter");
		
		UMovieSceneParameterSection_RemoveVectorParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveVector2DParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter");
		
		UMovieSceneParameterSection_RemoveVector2DParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveTransformParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter");
		
		UMovieSceneParameterSection_RemoveTransformParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveScalarParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter");
		
		UMovieSceneParameterSection_RemoveScalarParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveColorParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter");
		
		UMovieSceneParameterSection_RemoveColorParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneParameterSection::RemoveBoolParameter(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter");
		
		UMovieSceneParameterSection_RemoveBoolParameter_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	 * 		Flags  -> ()
	 */
	void UMovieSceneParameterSection::GetParameterNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames");
		
		UMovieSceneParameterSection_GetParameterNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddVectorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey");
		
		UMovieSceneParameterSection_AddVectorParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddVector2DParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey");
		
		UMovieSceneParameterSection_AddVector2DParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddTransformParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey");
		
		UMovieSceneParameterSection_AddTransformParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddScalarParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey");
		
		UMovieSceneParameterSection_AddScalarParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddColorParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey");
		
		UMovieSceneParameterSection_AddColorParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                InTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneParameterSection::AddBoolParameterKey(const class FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey");
		
		UMovieSceneParameterSection_AddBoolParameterKey_Params params {};
		params.InParameterName = InParameterName;
		params.InTime = InTime;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneParameterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParameterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloatChannelEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloatChannelEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.FloatChannelEvaluatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	 * 		Flags  -> ()
	 */
	struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");
		
		UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTransformOrigin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformOrigin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InConstraintBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");
		
		UMovieScene3DConstraintSection_SetConstraintBindingID_Params params {};
		params.InConstraintBindingID = InConstraintBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");
		
		UMovieScene3DConstraintSection_GetConstraintBindingID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DConstraintSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DConstraintSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DAttachSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DAttachSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DConstraintTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DConstraintTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DAttachTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DAttachTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DPathSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DPathSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DPathTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DPathTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformPropertySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DTransformSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScene3DTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScene3DTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneActorReferenceSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneActorReferenceSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneActorReferenceTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneActorReferenceTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InStartOffset                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");
		
		UMovieSceneAudioSection_SetStartOffset_Params params {};
		params.InStartOffset = InStartOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  InSound                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");
		
		UMovieSceneAudioSection_SetSound_Params params {};
		params.InSound = InSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	 * 		Flags  -> ()
	 */
	struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");
		
		UMovieSceneAudioSection_GetStartOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetSound
	 * 		Flags  -> ()
	 */
	class USoundBase* UMovieSceneAudioSection::GetSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");
		
		UMovieSceneAudioSection_GetSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAudioSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAudioTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAudioTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBaseValueEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBaseValueEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneBoolTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneBoolTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneByteSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneByteSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneByteTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneByteTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraAnimSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraAnimSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraAnimTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraAnimTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  InCameraBindingID                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");
		
		UMovieSceneCameraCutSection_SetCameraBindingID_Params params {};
		params.InCameraBindingID = InCameraBindingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	 * 		Flags  -> ()
	 */
	struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");
		
		UMovieSceneCameraCutSection_GetCameraBindingID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraCutSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraCutTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraCutTrackInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraCutTrackInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrackInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeSourceShakeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceShakeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeSourceShakeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceShakeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeSourceTriggerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceTriggerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeSourceTriggerTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeSourceTriggerTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCameraShakeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCameraShakeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InShotDisplayName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");
		
		UMovieSceneCinematicShotSection_SetShotDisplayName_Params params {};
		params.InShotDisplayName = InShotDisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	 * 		Flags  -> ()
	 */
	class FString UMovieSceneCinematicShotSection::GetShotDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");
		
		UMovieSceneCinematicShotSection_GetShotDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCinematicShotSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCinematicShotSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCinematicShotTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneCinematicShotTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneColorSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneColorSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneColorTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneColorTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComponentAttachmentInvalidatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComponentAttachmentSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentAttachmentSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentAttachmentSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComponentMobilitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentMobilitySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMobilitySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePreAnimatedComponentTransformSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreAnimatedComponentTransformSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComponentTransformSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentTransformSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentTransformSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEnumSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEnumSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEnumTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEnumTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEulerTransformPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEulerTransformPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEulerTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEulerTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventSectionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSectionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventRepeaterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventRepeaterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePreSpawnEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePreSpawnEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePreSpawnEventSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePostSpawnEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePostSpawnEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePostSpawnEventSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePostEvalEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePostEvalEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePostEvalEventSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneEventTriggerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneEventTriggerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFadeSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFadeSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFloatTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFadeTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFadeTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFloatPropertySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatPropertySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatPropertySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneFloatSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneFloatSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneHierarchicalBiasSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneHierarchicalBiasSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneIntegerSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneIntegerSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneIntegerTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneIntegerTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneInterrogatedPropertyInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelVisibility                                   InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");
		
		UMovieSceneLevelVisibilitySection_SetVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InLevelNames                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<class FName> InLevelNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");
		
		UMovieSceneLevelVisibilitySection_SetLevelNames_Params params {};
		params.InLevelNames = InLevelNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	 * 		Flags  -> ()
	 */
	ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");
		
		UMovieSceneLevelVisibilitySection_GetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	 * 		Flags  -> ()
	 */
	TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");
		
		UMovieSceneLevelVisibilitySection_GetLevelNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneLevelVisibilitySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilitySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneLevelVisibilitySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilitySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneLevelVisibilityTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneLevelVisibilityTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMaterialParameterCollectionTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneMaterialParameterCollectionTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComponentMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComponentMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneObjectPropertySection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneObjectPropertySection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneObjectPropertyTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneObjectPropertyTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneParticleParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneParticleSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneParticleTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneParticleTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePiecewiseFloatBlenderSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePiecewiseFloatBlenderSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePrimitiveMaterialSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePrimitiveMaterialSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePrimitiveMaterialTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePrimitiveMaterialTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieScenePropertyInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieScenePropertyInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneQuaternionInterpolationRotationSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneQuaternionInterpolationRotationSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSkeletalAnimationSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSkeletalAnimationSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSkeletalAnimationTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSkeletalAnimationTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSlomoSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSlomoSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneSlomoTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneSlomoTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneStringSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneStringSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneStringTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneStringTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTransformOriginSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformOriginSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOriginSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneTransformTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneTransformTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneVectorSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVectorSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneVectorTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVectorTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneVisibilityTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneVisibilityTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneHierarchicalEasingInstantiatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightAndEasingEvaluatorSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightAndEasingEvaluatorSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieSceneTracks.WeightAndEasingEvaluatorSystem");
		return ptr;
	}

}


