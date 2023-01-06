#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	 */
	struct ULevelSequence_RemoveMetaDataByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	 */
	struct ULevelSequence_FindOrAddMetaDataByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequence.FindMetaDataByClass
	 */
	struct ULevelSequence_FindMetaDataByClass_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequence.CopyMetaData
	 */
	struct ULevelSequence_CopyMetaData_Params
	{
	public:
		class UObject*                                             InMetaData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	 */
	struct ULevelSequenceBurnInOptions_SetBurnIn_Params
	{
	public:
		struct FSoftClassPath                                      InBurnInClass;                                           // 0x0000(0x0018)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ShowBurnin
	 */
	struct ALevelSequenceActor_ShowBurnin_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetSequence
	 */
	struct ALevelSequenceActor_SetSequence_Params
	{
	public:
		class ULevelSequence*                                      InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	 */
	struct ALevelSequenceActor_SetReplicatePlayback_Params
	{
	public:
		bool                                                       ReplicatePlayback;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetEventReceivers
	 */
	struct ALevelSequenceActor_SetEventReceivers_Params
	{
	public:
		TArray<class AActor*>                                      AdditionalReceivers;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.SetBinding
	 */
	struct ALevelSequenceActor_SetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      Actors;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBindings
	 */
	struct ALevelSequenceActor_ResetBindings_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.ResetBinding
	 */
	struct ALevelSequenceActor_ResetBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.RemoveBinding
	 */
	struct ALevelSequenceActor_RemoveBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	 */
	struct ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.LoadSequence
	 */
	struct ALevelSequenceActor_LoadSequence_Params
	{
	public:
		class ULevelSequence*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.HideBurnin
	 */
	struct ALevelSequenceActor_HideBurnin_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	 */
	struct ALevelSequenceActor_GetSequencePlayer_Params
	{
	public:
		class ULevelSequencePlayer*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.GetSequence
	 */
	struct ALevelSequenceActor_GetSequence_Params
	{
	public:
		class ULevelSequence*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceActor.AddBinding
	 */
	struct ALevelSequenceActor_AddBinding_Params
	{
	public:
		struct FMovieSceneObjectBindingID                          Binding;                                                 // 0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowBindingsFromAsset;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.SetSettings
	 */
	struct ULevelSequenceBurnIn_SetSettings_Params
	{
	public:
		class UObject*                                             InSettings;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	 */
	struct ULevelSequenceBurnIn_GetSettingsClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequenceDirector.OnCreated
	 */
	struct ULevelSequenceDirector_OnCreated_Params
	{	};

	/**
	 * Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	 */
	struct ULevelSequencePlayer_GetActiveCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	 */
	struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0010(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U0KC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ALevelSequenceActor*                                 OutActor;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelSequencePlayer*                                ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
