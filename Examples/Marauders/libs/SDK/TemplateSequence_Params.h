#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function TemplateSequence.TemplateSequenceActor.SetSequence
	 */
	struct ATemplateSequenceActor_SetSequence_Params
	{
	public:
		class UTemplateSequence*                                   InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.SetBinding
	 */
	struct ATemplateSequenceActor_SetBinding_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.LoadSequence
	 */
	struct ATemplateSequenceActor_LoadSequence_Params
	{
	public:
		class UTemplateSequence*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	 */
	struct ATemplateSequenceActor_GetSequencePlayer_Params
	{
	public:
		class UTemplateSequencePlayer*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequenceActor.GetSequence
	 */
	struct ATemplateSequenceActor_GetSequence_Params
	{
	public:
		class UTemplateSequence*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	 */
	struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTemplateSequence*                                   TemplateSequence;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMovieSceneSequencePlaybackSettings                 Settings;                                                // 0x0010(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LQSQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATemplateSequenceActor*                              OutActor;                                                // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTemplateSequencePlayer*                             ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
