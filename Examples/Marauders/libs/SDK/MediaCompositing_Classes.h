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
	 * Class MediaCompositing.MovieSceneMediaPlayerPropertySection
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1PR[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_FDT6[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaCompositing.MovieSceneMediaSection
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UMovieSceneMediaSection : public UMovieSceneSection
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D77A[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x00F4(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaTexture*                                       MediaTexture;                                            // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSoundComponent*                                MediaSoundComponent;                                     // 0x0100(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExternalMediaPlayer;                                 // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUQO[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        ExternalMediaPlayer;                                     // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaCompositing.MovieSceneMediaTrack
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_RP7K[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          MediaSections;                                           // 0x0080(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
