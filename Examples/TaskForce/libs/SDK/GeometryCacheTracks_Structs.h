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
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
	 * Size -> 0x0038
	 */
	struct FMovieSceneGeometryCacheParams
	{
	public:
		class UGeometryCache*                                      GeometryCacheAsset;                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        EndFrameOffset;                                          // 0x000C(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverse : 1;                                            // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1UY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartOffset;                                             // 0x0018(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x001C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GeometryCache;                                           // 0x0020(0x0018) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
	{
	public:
		struct FFrameNumber                                        SectionStartTime;                                        // 0x0038(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        SectionEndTime;                                          // 0x003C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneGeometryCacheSectionTemplateParameters   Params;                                                  // 0x0020(0x0040) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
