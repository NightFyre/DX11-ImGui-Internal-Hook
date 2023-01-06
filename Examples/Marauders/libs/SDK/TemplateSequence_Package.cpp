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
	 * 		Name   -> PredefinedFunction UTemplateSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraAnimationSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraAnimationSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.CameraAnimationSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceCameraShakeCameraStandIn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShakeCameraStandIn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShakeCameraStandIn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequenceCameraShakeSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceCameraShakeSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.SequenceCameraShakeSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.SetSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemplateSequence*                           InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");
		
		ATemplateSequenceActor_SetSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.SetBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATemplateSequenceActor::SetBinding(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");
		
		ATemplateSequenceActor_SetBinding_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.LoadSequence
	 * 		Flags  -> ()
	 */
	class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");
		
		ATemplateSequenceActor_LoadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	 * 		Flags  -> ()
	 */
	class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");
		
		ATemplateSequenceActor_GetSequencePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequence
	 * 		Flags  -> ()
	 */
	class UTemplateSequence* ATemplateSequenceActor::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");
		
		ATemplateSequenceActor_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATemplateSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATemplateSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTemplateSequence*                           TemplateSequence                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ATemplateSequenceActor*                      OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer");
		
		UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TemplateSequence = TemplateSequence;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplateSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequencePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplateSequenceSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplateSequenceSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemplateSequenceTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemplateSequenceTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceTrack");
		return ptr;
	}

}


