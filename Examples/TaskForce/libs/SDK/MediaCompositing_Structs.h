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
	 * ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
	 * Size -> 0x0030
	 */
	struct FMovieSceneMediaSectionParams
	{
	public:
		class UMediaSoundComponent*                                MediaSoundComponent;                                     // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSource*                                        MediaSource;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaTexture*                                       MediaTexture;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionStartFrame;                                       // 0x0020(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndFrame;                                         // 0x0024(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLooping;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FKS[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x002C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneMediaSectionParams                       Params;                                                  // 0x0020(0x0030) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
