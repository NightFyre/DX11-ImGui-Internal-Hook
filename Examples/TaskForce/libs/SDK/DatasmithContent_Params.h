#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	 */
	struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	 */
	struct UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringToMatch;                                           // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        OutKeys;                                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutValues;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	 */
	struct UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDatasmithAssetUserData*                             ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	 */
	struct ADatasmithImportedSequencesActor_PlayLevelSequence_Params
	{
	public:
		class ULevelSequence*                                      SequenceToPlay;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
