#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
		unsigned char                                              UnknownData_4MOK[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
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
		TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                   // 0x0000(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              AnimSequenceInstances[0x50];                             // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceObject
	 * Size -> 0x0038
	 */
	struct FLevelSequenceObject
	{
	public:
		TLazyObjectPtr<class UObject>                              ObjectOrOwner;                                           // 0x0000(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UYQH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentName;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>                              CachedComponent;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceCameraSettings
	 * Size -> 0x0002
	 */
	struct FLevelSequenceCameraSettings
	{
	public:
		bool                                                       bOverrideAspectRatioAxisConstraint;                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAspectRatioAxisConstraint                                 AspectRatioAxisConstraint;                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
	 * Size -> 0x0030
	 */
	struct FLevelSequenceAnimSequenceLinkItem
	{
	public:
		struct FGuid                                               SkelTrackGuid;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PathToAnimSequence;                                      // 0x0010(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportTransforms;                                       // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportCurves;                                           // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecordInWorldSpace;                                     // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HV9F[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
	 * Size -> 0x000C
	 */
	struct FLevelSequenceSnapshotSettings
	{
	public:
		unsigned char                                              ZeroPadAmount;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PP0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              CameraComponent[0x28];                                   // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLevelSequenceSnapshotSettings                      Settings;                                                // 0x0098(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DY9[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      ActiveShot;                                              // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               ShotID;                                                  // 0x00B0(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFVF[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.BoundActorProxy
	 * Size -> 0x0001
	 */
	struct FBoundActorProxy
	{
	public:
		unsigned char                                              UnknownData_4SVJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
	 * Size -> 0x0020
	 */
	struct FLevelSequenceLegacyObjectReference
	{
	public:
		unsigned char                                              UnknownData_51CX[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
