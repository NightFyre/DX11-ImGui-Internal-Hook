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
	 * Class MediaCompositing.MovieSceneMediaSection
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UMovieSceneMediaSection : public UMovieSceneSection
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3UV[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x00EC(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaTexture*                                       MediaTexture;                                            // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSoundComponent*                                MediaSoundComponent;                                     // 0x00F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExternalMediaPlayer;                                 // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBQH[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        ExternalMediaPlayer;                                     // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaCompositing.MovieSceneMediaTrack
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          MediaSections;                                           // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
