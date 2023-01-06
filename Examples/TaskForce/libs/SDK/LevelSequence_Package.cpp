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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultLevelSequenceInstanceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultLevelSequenceInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445BC0
	 * 		Name   -> Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");
		
		ULevelSequence_RemoveMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445780
	 * 		Name   -> Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");
		
		ULevelSequence_FindOrAddMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445780
	 * 		Name   -> Function LevelSequence.LevelSequence.FindMetaDataByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");
		
		ULevelSequence_FindMetaDataByClass_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445780
	 * 		Name   -> Function LevelSequence.LevelSequence.CopyMetaData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InMetaData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");
		
		ULevelSequence_CopyMetaData_Params params {};
		params.InMetaData = InMetaData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnInInitSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInInitSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445F60
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoftClassPath                              InBurnInClass                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");
		
		ULevelSequenceBurnInOptions_SetBurnIn_Params params {};
		params.InBurnInClass = InBurnInClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnInOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnInOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01446270
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ShowBurnin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::ShowBurnin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");
		
		ALevelSequenceActor_ShowBurnin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014461F0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelSequence*                              InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");
		
		ALevelSequenceActor_SetSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01446160
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ReplicatePlayback                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");
		
		ALevelSequenceActor_SetReplicatePlayback_Params params {};
		params.ReplicatePlayback = ReplicatePlayback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01446020
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              AdditionalReceivers                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");
		
		ALevelSequenceActor_SetEventReceivers_Params params {};
		params.AdditionalReceivers = AdditionalReceivers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445D70
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.SetBinding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");
		
		ALevelSequenceActor_SetBinding_Params params {};
		params.Binding = Binding;
		params.Actors = Actors;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445D20
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::ResetBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");
		
		ALevelSequenceActor_ResetBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445C30
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.ResetBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");
		
		ALevelSequenceActor_ResetBinding_Params params {};
		params.Binding = Binding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445A80
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.RemoveBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");
		
		ALevelSequenceActor_RemoveBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");
		
		ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445A50
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.LoadSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequence* ALevelSequenceActor::LoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");
		
		ALevelSequenceActor_LoadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445A30
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.HideBurnin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALevelSequenceActor::HideBurnin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");
		
		ALevelSequenceActor_HideBurnin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014459E0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");
		
		ALevelSequenceActor_GetSequencePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x014459B0
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.GetSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULevelSequence* ALevelSequenceActor::GetSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");
		
		ALevelSequenceActor_GetSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445630
	 * 		Name   -> Function LevelSequence.LevelSequenceActor.AddBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");
		
		ALevelSequenceActor_AddBinding_Params params {};
		params.Binding = Binding;
		params.Actor = Actor;
		params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALevelSequenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelSequenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InSettings                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");
		
		ULevelSequenceBurnIn_SetSettings_Params params {};
		params.InSettings = InSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445A10
	 * 		Name   -> Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UClass* ULevelSequenceBurnIn::GetSettingsClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");
		
		ULevelSequenceBurnIn_GetSettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceBurnIn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceBurnIn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function LevelSequence.LevelSequenceDirector.OnCreated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULevelSequenceDirector::OnCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");
		
		ULevelSequenceDirector_OnCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequenceDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequenceDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegacyLevelSequenceDirectorBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegacyLevelSequenceDirectorBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445970
	 * 		Name   -> Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");
		
		ULevelSequencePlayer_GetActiveCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01445800
	 * 		Name   -> Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelSequence*                              LevelSequence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ALevelSequenceActor*                         OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");
		
		ULevelSequencePlayer_CreateLevelSequencePlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelSequence = LevelSequence;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActor != nullptr)
			*OutActor = params.OutActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSequencePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}

}


