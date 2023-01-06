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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ActorSequence.ActorSequence
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UActorSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FActorSequenceObjectReferenceMap                    ObjectReferences;                                        // 0x0350(0x0020) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequenceComponent
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UActorSequenceComponent : public UActorComponent
	{
	public:
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x00D8(0x0014) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_66KY[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorSequence*                                      Sequence;                                                // 0x00F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActorSequencePlayer*                                SequencePlayer;                                          // 0x00F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActorSequence.ActorSequencePlayer
	 * Size -> 0x0000 (FullSize[0x0818] - InheritedSize[0x0818])
	 */
	class UActorSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
