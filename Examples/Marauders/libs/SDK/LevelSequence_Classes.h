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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LevelSequence.LevelSequence
	 * Size -> 0x0168 (FullSize[0x01C8] - InheritedSize[0x0060])
	 */
	class ULevelSequence : public UMovieSceneSequence
	{
	public:
		unsigned char                                              UnknownData_2WMC[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieScene*                                         MovieScene;                                              // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0070(0x0050) Protected, NativeAccessSpecifierProtected
		struct FLevelSequenceBindingReferences                     BindingReferences;                                       // 0x00C0(0x00A0) Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FLevelSequenceObject>           PossessedObjects;                                        // 0x0160(0x0050) Deprecated, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DirectorClass;                                           // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x01B8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected

	public:
		void RemoveMetaDataByClass(class UClass* InClass);
		class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
		class UObject* FindMetaDataByClass(class UClass* InClass);
		class UObject* CopyMetaData(class UObject* InMetaData);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.AnimSequenceLevelSequenceLink
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UAnimSequenceLevelSequenceLink : public UAssetUserData
	{
	public:
		struct FGuid                                               SkelTrackGuid;                                           // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PathToLevelSequence;                                     // 0x0038(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.DefaultLevelSequenceInstanceData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDefaultLevelSequenceInstanceData : public UObject
	{
	public:
		unsigned char                                              UnknownData_K21W[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TransformOriginActor;                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEW2[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformOrigin;                                         // 0x0040(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceMetaData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelSequenceMetaData : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInInitSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInInitSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnInOptions
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULevelSequenceBurnInOptions : public UObject
	{
	public:
		bool                                                       bUseBurnIn;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9EH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      BurnInClass;                                             // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnInInitSettings*                    Settings;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceActor
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ALevelSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_WDXF[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0230(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7L25[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LevelSequence;                                           // 0x0250(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLevelSequenceCameraSettings                        CameraSettings;                                          // 0x0268(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHMS[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequenceBurnInOptions*                         BurnInOptions;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneBindingOverrides*                         BindingOverrides;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoPlay : 1;                                           // 0x0280(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideInstanceData : 1;                               // 0x0280(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReplicatePlayback : 1;                                  // 0x0280(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VR6[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DefaultInstanceData;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequenceBurnIn*                                BurnInInstance;                                          // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowBurnin;                                             // 0x0298(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4HFA[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (PADDING)

	public:
		void ShowBurnin();
		void SetSequence(class ULevelSequence* InSequence);
		void SetReplicatePlayback(bool ReplicatePlayback);
		void SetBindingByTag(const class FName& BindingTag, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
		void ResetBindings();
		void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
		void RemoveBindingByTag(const class FName& Tag, class AActor* Actor);
		void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
		void OnLevelSequenceLoaded__DelegateSignature();
		class ULevelSequence* LoadSequence();
		void HideBurnin();
		class ULevelSequencePlayer* GetSequencePlayer();
		class ULevelSequence* GetSequence();
		TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(const class FName& Tag);
		struct FMovieSceneObjectBindingID FindNamedBinding(const class FName& Tag);
		void AddBindingByTag(const class FName& BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
		void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceAnimSequenceLink
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULevelSequenceAnimSequenceLink : public UAssetUserData
	{
	public:
		TArray<struct FLevelSequenceAnimSequenceLinkItem>          AnimSequenceLinks;                                       // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceBurnIn
	 * Size -> 0x00C0 (FullSize[0x0320] - InheritedSize[0x0260])
	 */
	class ULevelSequenceBurnIn : public UUserWidget
	{
	public:
		struct FLevelSequencePlayerSnapshot                        FrameInformation;                                        // 0x0260(0x00B8) BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0318(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSettings(class UObject* InSettings);
		class UClass* GetSettingsClass();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceDirector
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULevelSequenceDirector : public UObject
	{
	public:
		class ULevelSequencePlayer*                                Player;                                                  // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnCreated();
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequencePlayer
	 * Size -> 0x0118 (FullSize[0x0798] - InheritedSize[0x0680])
	 */
	class ULevelSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		class FScriptMulticastDelegate                             OnCameraCut;                                             // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68U7[0x108];                                 // 0x0690(0x0108) MISSED OFFSET (PADDING)

	public:
		class UCameraComponent* GetActiveCameraComponent();
		class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class LevelSequence.LevelSequenceMediaController
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ALevelSequenceMediaController : public AActor
	{
	public:
		unsigned char                                              UnknownData_N80M[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALevelSequenceActor*                                 Sequence;                                                // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMediaComponent*                                     MediaComponent;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ServerStartTimeSeconds;                                  // 0x0238(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6SWU[0xC];                                   // 0x023C(0x000C) MISSED OFFSET (PADDING)

	public:
		void SynchronizeToServer(float DesyncThresholdSeconds);
		void Play();
		void OnRep_ServerStartTimeSeconds();
		class ALevelSequenceActor* GetSequence();
		class UMediaComponent* GetMediaComponent();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
