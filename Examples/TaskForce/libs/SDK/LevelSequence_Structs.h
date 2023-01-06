#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
	 * Size -> 0x0050
	 */
	struct FLevelSequenceObjectReferenceMap
	{
	public:
		unsigned char                                              UnknownData_YHOA[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReference
	 * Size -> 0x0038
	 */
	struct FLevelSequenceBindingReference
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     ExternalObjectPath;                                      // 0x0010(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ObjectPath;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
	 * Size -> 0x0010
	 */
	struct FLevelSequenceBindingReferenceArray
	{
	public:
		TArray<struct FLevelSequenceBindingReference>              References;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReferences
	 * Size -> 0x00A0
	 */
	struct FLevelSequenceBindingReferences
	{
	public:
		TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                   // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              AnimSequenceInstances[0x50];                             // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty LevelSequence.LevelSequenceBindingReferences.AnimSequenceInstances
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceObject
	 * Size -> 0x0038
	 */
	struct FLevelSequenceObject
	{
	public:
		TLazyObjectPtr<class UObject>                              ObjectOrOwner;                                           // 0x0000(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2VUH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentName;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>                              CachedComponent;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
	 * Size -> 0x000C
	 */
	struct FLevelSequenceSnapshotSettings
	{
	public:
		unsigned char                                              ZeroPadAmount;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J46C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          FrameRate;                                               // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
	 * Size -> 0x00B8
	 */
	struct FLevelSequencePlayerSnapshot
	{
	public:
		class FString                                              MasterName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 MasterTime;                                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 SourceTime;                                              // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentShotName;                                         // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 CurrentShotLocalTime;                                    // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 CurrentShotSourceTime;                                   // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceTimecode;                                          // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CameraComponent[0x28];                                   // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LevelSequence.LevelSequencePlayerSnapshot.CameraComponent
		struct FLevelSequenceSnapshotSettings                      Settings;                                                // 0x0098(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_775V[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      ActiveShot;                                              // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               ShotID;                                                  // 0x00B0(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N8A[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.BoundActorProxy
	 * Size -> 0x0001
	 */
	struct FBoundActorProxy
	{
	public:
		unsigned char                                              UnknownData_57IR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
	 * Size -> 0x0020
	 */
	struct FLevelSequenceLegacyObjectReference
	{
	public:
		unsigned char                                              UnknownData_XZSQ[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
