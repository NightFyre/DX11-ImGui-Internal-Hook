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
	 * Class TemplateSequence.TemplateSequence
	 * Size -> 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
	 */
	class UTemplateSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoundActorClass[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BoundPreviewActor[0x28];                                 // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, class FName>                            BoundActorComponents;                                    // 0x00B8(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequence
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UCameraAnimationSequence : public UTemplateSequence
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakeCameraStandIn
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakeCameraStandIn : public UObject
	{
	public:
		unsigned char                                              UnknownData_S0MS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FieldOfView;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLVA[0x3C];                                  // 0x0034(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShake
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class USequenceCameraShake : public UCameraShakeBase
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSegmentDuration;                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSegment;                                          // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKMU[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USequenceCameraShakeSequencePlayer*                  Player;                                                  // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USequenceCameraShakeCameraStandIn*                   CameraStandIn;                                           // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AUZV[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakeSequencePlayer
	 * Size -> 0x05B0 (FullSize[0x05D8] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakeSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_PFEJ[0x458];                                 // 0x0028(0x0458) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             BoundObjectOverride;                                     // 0x0480(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSequence*                                 Sequence;                                                // 0x0488(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x0490(0x00E8) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8EMU[0x60];                                  // 0x0578(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceActor
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ATemplateSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_SH1L[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0228(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06IK[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTemplateSequencePlayer*                             SequencePlayer;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TemplateSequence;                                        // 0x0248(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTemplateSequenceBindingOverrideData                BindingOverride;                                         // 0x0260(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LGA[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSequence(class UTemplateSequence* InSequence);
		void SetBinding(class AActor* Actor);
		class UTemplateSequence* LoadSequence();
		class UTemplateSequencePlayer* GetSequencePlayer();
		class UTemplateSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePlayer
	 * Size -> 0x0008 (FullSize[0x0688] - InheritedSize[0x0680])
	 */
	class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_KYR3[0x8];                                   // 0x0680(0x0008) MISSED OFFSET (PADDING)

	public:
		class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSection
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class UTemplateSequenceSection : public UMovieSceneSubSection
	{
	public:
		unsigned char                                              UnknownData_6KVT[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSystem
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UTemplateSequenceSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_R4QC[0x70];                                  // 0x0040(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceTrack
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UTemplateSequenceTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
