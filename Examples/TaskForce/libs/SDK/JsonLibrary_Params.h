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
	 * Function JsonLibrary.JsonLibraryBlueprintHelpers.StructToJson
	 */
	struct UJsonLibraryBlueprintHelpers_StructToJson_Params
	{
	public:
		class UScriptStruct*                                       StructType;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStructBase                                         Struct;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryBlueprintHelpers.StructFromJson
	 */
	struct UJsonLibraryBlueprintHelpers_StructFromJson_Params
	{
	public:
		class UScriptStruct*                                       StructType;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Object;                                                  // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FStructBase                                         OutStruct;                                               // 0x0040(0x0008)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryBlueprintHelpers.IsValidObject
	 */
	struct UJsonLibraryBlueprintHelpers_IsValidObject_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryBlueprintHelpers.ConstructInvalidObject
	 */
	struct UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Params
	{
	public:
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToVectorMap
	 */
	struct UJsonLibraryHelpers_ToVectorMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FVector>                        ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToVectorArray
	 */
	struct UJsonLibraryHelpers_ToVectorArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToVector
	 */
	struct UJsonLibraryHelpers_ToVector_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToTransformMap
	 */
	struct UJsonLibraryHelpers_ToTransformMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FTransform>                     ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToTransformArray
	 */
	struct UJsonLibraryHelpers_ToTransformArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToTransform
	 */
	struct UJsonLibraryHelpers_ToTransform_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToStringMap
	 */
	struct UJsonLibraryHelpers_ToStringMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToStringArray
	 */
	struct UJsonLibraryHelpers_ToStringArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToString
	 */
	struct UJsonLibraryHelpers_ToString_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToRotatorMap
	 */
	struct UJsonLibraryHelpers_ToRotatorMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FRotator>                       ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToRotatorArray
	 */
	struct UJsonLibraryHelpers_ToRotatorArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FRotator>                                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToRotator
	 */
	struct UJsonLibraryHelpers_ToRotator_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToObjectArray
	 */
	struct UJsonLibraryHelpers_ToObjectArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryObject>                          ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToObject
	 */
	struct UJsonLibraryHelpers_ToObject_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToMap
	 */
	struct UJsonLibraryHelpers_ToMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FJsonLibraryValue>              ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToList
	 */
	struct UJsonLibraryHelpers_ToList_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToLinearColorMap
	 */
	struct UJsonLibraryHelpers_ToLinearColorMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FLinearColor>                   ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToLinearColorArray
	 */
	struct UJsonLibraryHelpers_ToLinearColorArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToLinearColor
	 */
	struct UJsonLibraryHelpers_ToLinearColor_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToIntegerMap
	 */
	struct UJsonLibraryHelpers_ToIntegerMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, int32_t>                               ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToIntegerArray
	 */
	struct UJsonLibraryHelpers_ToIntegerArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToInteger
	 */
	struct UJsonLibraryHelpers_ToInteger_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToGuidMap
	 */
	struct UJsonLibraryHelpers_ToGuidMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FGuid>                          ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToGuidArray
	 */
	struct UJsonLibraryHelpers_ToGuidArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToGuid
	 */
	struct UJsonLibraryHelpers_ToGuid_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToFloatMap
	 */
	struct UJsonLibraryHelpers_ToFloatMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, float>                                 ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToFloatArray
	 */
	struct UJsonLibraryHelpers_ToFloatArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToFloat
	 */
	struct UJsonLibraryHelpers_ToFloat_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToDateTimeMap
	 */
	struct UJsonLibraryHelpers_ToDateTimeMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FDateTime>                      ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToDateTimeArray
	 */
	struct UJsonLibraryHelpers_ToDateTimeArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FDateTime>                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToDateTime
	 */
	struct UJsonLibraryHelpers_ToDateTime_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToColorMap
	 */
	struct UJsonLibraryHelpers_ToColorMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FColor>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToColorArray
	 */
	struct UJsonLibraryHelpers_ToColorArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToColor
	 */
	struct UJsonLibraryHelpers_ToColor_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToBooleanMap
	 */
	struct UJsonLibraryHelpers_ToBooleanMap_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, bool>                                  ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToBooleanArray
	 */
	struct UJsonLibraryHelpers_ToBooleanArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToBoolean
	 */
	struct UJsonLibraryHelpers_ToBoolean_Params
	{
	public:
		struct FJsonLibraryValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ToArray
	 */
	struct UJsonLibraryHelpers_ToArray_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.StripCommentsOrCommas
	 */
	struct UJsonLibraryHelpers_StripCommentsOrCommas_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bComments;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrailingCommas;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I65D[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ParseObject
	 */
	struct UJsonLibraryHelpers_ParseObject_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Notify;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ParseList
	 */
	struct UJsonLibraryHelpers_ParseList_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Notify;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.Parse
	 */
	struct UJsonLibraryHelpers_Parse_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bComments;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTrailingCommas;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S3T0[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_Stringify
	 */
	struct UJsonLibraryHelpers_JsonValue_Stringify_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCondensed;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8FJ9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsVector
	 */
	struct UJsonLibraryHelpers_JsonValue_IsVector_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsValid
	 */
	struct UJsonLibraryHelpers_JsonValue_IsValid_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsTransform
	 */
	struct UJsonLibraryHelpers_JsonValue_IsTransform_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsRotator
	 */
	struct UJsonLibraryHelpers_JsonValue_IsRotator_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsGuid
	 */
	struct UJsonLibraryHelpers_JsonValue_IsGuid_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_GetType
	 */
	struct UJsonLibraryHelpers_JsonValue_GetType_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EJsonLibraryType                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonValue_Equals
	 */
	struct UJsonLibraryHelpers_JsonValue_Equals_Params
	{
	public:
		struct FJsonLibraryValue                                   Target;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Value;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_Stringify
	 */
	struct UJsonLibraryHelpers_JsonObject_Stringify_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCondensed;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NLR2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetVector
	 */
	struct UJsonLibraryHelpers_JsonObject_SetVector_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0048(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8KJJ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetValue
	 */
	struct UJsonLibraryHelpers_JsonObject_SetValue_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Value;                                                   // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetTransform
	 */
	struct UJsonLibraryHelpers_JsonObject_SetTransform_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SLED[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0050(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0080(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetString
	 */
	struct UJsonLibraryHelpers_JsonObject_SetString_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetRotator
	 */
	struct UJsonLibraryHelpers_JsonObject_SetRotator_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0048(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VO9G[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetObject
	 */
	struct UJsonLibraryHelpers_JsonObject_SetObject_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Value;                                                   // 0x0048(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0080(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetMap
	 */
	struct UJsonLibraryHelpers_JsonObject_SetMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0048(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0098(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetList
	 */
	struct UJsonLibraryHelpers_JsonObject_SetList_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    Value;                                                   // 0x0048(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0080(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetLinearColor
	 */
	struct UJsonLibraryHelpers_JsonObject_SetLinearColor_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetInteger
	 */
	struct UJsonLibraryHelpers_JsonObject_SetInteger_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IQR1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetGuid
	 */
	struct UJsonLibraryHelpers_JsonObject_SetGuid_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetFloat
	 */
	struct UJsonLibraryHelpers_JsonObject_SetFloat_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_16DX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetDateTime
	 */
	struct UJsonLibraryHelpers_JsonObject_SetDateTime_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           Value;                                                   // 0x0048(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetColor
	 */
	struct UJsonLibraryHelpers_JsonObject_SetColor_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x0048(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5DNI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetBoolean
	 */
	struct UJsonLibraryHelpers_JsonObject_SetBoolean_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7HK2[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetArray
	 */
	struct UJsonLibraryHelpers_JsonObject_SetArray_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0058(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_RemoveKey
	 */
	struct UJsonLibraryHelpers_JsonObject_RemoveKey_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsVector
	 */
	struct UJsonLibraryHelpers_JsonObject_IsVector_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsValid
	 */
	struct UJsonLibraryHelpers_JsonObject_IsValid_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsTransform
	 */
	struct UJsonLibraryHelpers_JsonObject_IsTransform_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsRotator
	 */
	struct UJsonLibraryHelpers_JsonObject_IsRotator_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsEmpty
	 */
	struct UJsonLibraryHelpers_JsonObject_IsEmpty_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_HasKey
	 */
	struct UJsonLibraryHelpers_JsonObject_HasKey_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetVector
	 */
	struct UJsonLibraryHelpers_JsonObject_GetVector_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0048(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValues
	 */
	struct UJsonLibraryHelpers_JsonObject_GetValues_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValue
	 */
	struct UJsonLibraryHelpers_JsonObject_GetValue_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetTransform
	 */
	struct UJsonLibraryHelpers_JsonObject_GetTransform_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6RSK[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0050(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetString
	 */
	struct UJsonLibraryHelpers_JsonObject_GetString_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetRotator
	 */
	struct UJsonLibraryHelpers_JsonObject_GetRotator_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0048(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetObject
	 */
	struct UJsonLibraryHelpers_JsonObject_GetObject_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetMap
	 */
	struct UJsonLibraryHelpers_JsonObject_GetMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FJsonLibraryValue>              ReturnValue;                                             // 0x0048(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetList
	 */
	struct UJsonLibraryHelpers_JsonObject_GetList_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetLinearColor
	 */
	struct UJsonLibraryHelpers_JsonObject_GetLinearColor_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetKeys
	 */
	struct UJsonLibraryHelpers_JsonObject_GetKeys_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetInteger
	 */
	struct UJsonLibraryHelpers_JsonObject_GetInteger_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetGuid
	 */
	struct UJsonLibraryHelpers_JsonObject_GetGuid_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetFloat
	 */
	struct UJsonLibraryHelpers_JsonObject_GetFloat_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetDateTime
	 */
	struct UJsonLibraryHelpers_JsonObject_GetDateTime_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetColor
	 */
	struct UJsonLibraryHelpers_JsonObject_GetColor_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetBoolean
	 */
	struct UJsonLibraryHelpers_JsonObject_GetBoolean_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetArray
	 */
	struct UJsonLibraryHelpers_JsonObject_GetArray_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_Equals
	 */
	struct UJsonLibraryHelpers_JsonObject_Equals_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Object;                                                  // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_Count
	 */
	struct UJsonLibraryHelpers_JsonObject_Count_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_Clear
	 */
	struct UJsonLibraryHelpers_JsonObject_Clear_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0038(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddVectorMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddVectorMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FVector>                        Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddTransformMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddTransformMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FTransform>                     Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddStringMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddStringMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddRotatorMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddRotatorMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FRotator>                       Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddLinearColorMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddLinearColorMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FLinearColor>                   Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddIntegerMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddIntegerMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, int32_t>                               Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddGuidMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddGuidMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FGuid>                          Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddFloatMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddFloatMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, float>                                 Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddDateTimeMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddDateTimeMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FDateTime>                      Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddColorMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddColorMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FColor>                         Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddBooleanMap
	 */
	struct UJsonLibraryHelpers_JsonObject_AddBooleanMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, bool>                                  Map;                                                     // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonObject_Add
	 */
	struct UJsonLibraryHelpers_JsonObject_Add_Params
	{
	public:
		struct FJsonLibraryObject                                  Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Object;                                                  // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Swap
	 */
	struct UJsonLibraryHelpers_JsonList_Swap_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    IndexA;                                                  // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IndexB;                                                  // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Stringify
	 */
	struct UJsonLibraryHelpers_JsonList_Stringify_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCondensed;                                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9C7Y[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetVector
	 */
	struct UJsonLibraryHelpers_JsonList_SetVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x003C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetValue
	 */
	struct UJsonLibraryHelpers_JsonList_SetValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TG8X[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   Value;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetTransform
	 */
	struct UJsonLibraryHelpers_JsonList_SetTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_INN0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetString
	 */
	struct UJsonLibraryHelpers_JsonList_SetString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J0GQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetRotator
	 */
	struct UJsonLibraryHelpers_JsonList_SetRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x003C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetObject
	 */
	struct UJsonLibraryHelpers_JsonList_SetObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AU0K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  Value;                                                   // 0x0040(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0078(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetMap
	 */
	struct UJsonLibraryHelpers_JsonList_SetMap_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EBVH[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0040(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0090(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetList
	 */
	struct UJsonLibraryHelpers_JsonList_SetList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EGPD[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    Value;                                                   // 0x0040(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0078(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_SetLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x003C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UP6B[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetInteger
	 */
	struct UJsonLibraryHelpers_JsonList_SetInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetGuid
	 */
	struct UJsonLibraryHelpers_JsonList_SetGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x003C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZAD8[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetFloat
	 */
	struct UJsonLibraryHelpers_JsonList_SetFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_SetDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UCDM[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Value;                                                   // 0x0040(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetColor
	 */
	struct UJsonLibraryHelpers_JsonList_SetColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x003C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_SetBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1GMX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_SetArray
	 */
	struct UJsonLibraryHelpers_JsonList_SetArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UR2P[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveVector
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BHJ5[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveValue
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveTransform
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SGKX[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveString
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveRotator
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AK9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveObject
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveList
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveInteger
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZG4D[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveGuid
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveFloat
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8FGS[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           Value;                                                   // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveColor
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x0038(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_90QP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_RemoveBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2WI6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Remove
	 */
	struct UJsonLibraryHelpers_JsonList_Remove_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_08WY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_IsValid
	 */
	struct UJsonLibraryHelpers_JsonList_IsValid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_IsEmpty
	 */
	struct UJsonLibraryHelpers_JsonList_IsEmpty_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertVector
	 */
	struct UJsonLibraryHelpers_JsonList_InsertVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x003C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertValue
	 */
	struct UJsonLibraryHelpers_JsonList_InsertValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KI6T[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   Value;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertTransform
	 */
	struct UJsonLibraryHelpers_JsonList_InsertTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H5AR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertString
	 */
	struct UJsonLibraryHelpers_JsonList_InsertString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A29H[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertRotator
	 */
	struct UJsonLibraryHelpers_JsonList_InsertRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x003C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertObject
	 */
	struct UJsonLibraryHelpers_JsonList_InsertObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PZFW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  Value;                                                   // 0x0040(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0078(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertMap
	 */
	struct UJsonLibraryHelpers_JsonList_InsertMap_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2TP1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0040(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0090(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertList
	 */
	struct UJsonLibraryHelpers_JsonList_InsertList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VIEN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    Value;                                                   // 0x0040(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0078(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_InsertLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x003C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2J7V[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertInteger
	 */
	struct UJsonLibraryHelpers_JsonList_InsertInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertGuid
	 */
	struct UJsonLibraryHelpers_JsonList_InsertGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x003C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IOMM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertFloat
	 */
	struct UJsonLibraryHelpers_JsonList_InsertFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_InsertDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LLJY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           Value;                                                   // 0x0040(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertColor
	 */
	struct UJsonLibraryHelpers_JsonList_InsertColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x003C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_InsertBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AHIX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertArray
	 */
	struct UJsonLibraryHelpers_JsonList_InsertArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZI99[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectVectorArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectVectorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S5JZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectTransformArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectTransformArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BLPG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTransform>                                  Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectStringArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectStringArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BGKO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectRotatorArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectRotatorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZD1O[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRotator>                                    Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectObjectArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectObjectArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K2Q4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FJsonLibraryObject>                          Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectLinearColorArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectLinearColorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7W3K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLinearColor>                                Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectIntegerArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectIntegerArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F9ZO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectGuidArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectGuidArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S8S9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGuid>                                       Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectFloatArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectFloatArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HWRT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectDateTimeArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectDateTimeArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JBOE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FDateTime>                                   Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectColorArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectColorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQ9L[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FColor>                                      Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectBooleanArray
	 */
	struct UJsonLibraryHelpers_JsonList_InjectBooleanArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D565[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               Array;                                                   // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Inject
	 */
	struct UJsonLibraryHelpers_JsonList_Inject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EDU5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    List;                                                    // 0x0040(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0078(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetVector
	 */
	struct UJsonLibraryHelpers_JsonList_GetVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetValue
	 */
	struct UJsonLibraryHelpers_JsonList_GetValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FHYZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetTransform
	 */
	struct UJsonLibraryHelpers_JsonList_GetTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PQXE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetString
	 */
	struct UJsonLibraryHelpers_JsonList_GetString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ESNL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetRotator
	 */
	struct UJsonLibraryHelpers_JsonList_GetRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetObject
	 */
	struct UJsonLibraryHelpers_JsonList_GetObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TEL7[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetMap
	 */
	struct UJsonLibraryHelpers_JsonList_GetMap_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_862A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FJsonLibraryValue>              ReturnValue;                                             // 0x0040(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetList
	 */
	struct UJsonLibraryHelpers_JsonList_GetList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YYDU[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_GetLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x003C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetInteger
	 */
	struct UJsonLibraryHelpers_JsonList_GetInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetGuid
	 */
	struct UJsonLibraryHelpers_JsonList_GetGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x003C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetFloat
	 */
	struct UJsonLibraryHelpers_JsonList_GetFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_GetDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KK8S[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetColor
	 */
	struct UJsonLibraryHelpers_JsonList_GetColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_GetBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_GetArray
	 */
	struct UJsonLibraryHelpers_JsonList_GetArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1TYF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindVector
	 */
	struct UJsonLibraryHelpers_JsonList_FindVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindValue
	 */
	struct UJsonLibraryHelpers_JsonList_FindValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindTransform
	 */
	struct UJsonLibraryHelpers_JsonList_FindTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M01S[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindString
	 */
	struct UJsonLibraryHelpers_JsonList_FindString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindRotator
	 */
	struct UJsonLibraryHelpers_JsonList_FindRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindObject
	 */
	struct UJsonLibraryHelpers_JsonList_FindObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindList
	 */
	struct UJsonLibraryHelpers_JsonList_FindList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0074(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_FindLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindInteger
	 */
	struct UJsonLibraryHelpers_JsonList_FindInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindGuid
	 */
	struct UJsonLibraryHelpers_JsonList_FindGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindFloat
	 */
	struct UJsonLibraryHelpers_JsonList_FindFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_FindDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           Value;                                                   // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindColor
	 */
	struct UJsonLibraryHelpers_JsonList_FindColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x0038(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_FindBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_FindBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L9BG[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Equals
	 */
	struct UJsonLibraryHelpers_JsonList_Equals_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    List;                                                    // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Count
	 */
	struct UJsonLibraryHelpers_JsonList_Count_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Clear
	 */
	struct UJsonLibraryHelpers_JsonList_Clear_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0038(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendVectorArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendVectorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendTransformArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendTransformArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendStringArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendStringArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendRotatorArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendRotatorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FRotator>                                    Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendObjectArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendObjectArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryObject>                          Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendLinearColorArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendLinearColorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendIntegerArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendIntegerArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendGuidArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendGuidArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendFloatArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendFloatArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendDateTimeArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendDateTimeArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FDateTime>                                   Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendColorArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendColorArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendBooleanArray
	 */
	struct UJsonLibraryHelpers_JsonList_AppendBooleanArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<bool>                                               Array;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_Append
	 */
	struct UJsonLibraryHelpers_JsonList_Append_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    List;                                                    // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddVector
	 */
	struct UJsonLibraryHelpers_JsonList_AddVector_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DKAR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddValue
	 */
	struct UJsonLibraryHelpers_JsonList_AddValue_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddTransform
	 */
	struct UJsonLibraryHelpers_JsonList_AddTransform_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3RFN[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddString
	 */
	struct UJsonLibraryHelpers_JsonList_AddString_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddRotator
	 */
	struct UJsonLibraryHelpers_JsonList_AddRotator_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0038(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ILIK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddObject
	 */
	struct UJsonLibraryHelpers_JsonList_AddObject_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddMap
	 */
	struct UJsonLibraryHelpers_JsonList_AddMap_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0038(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0088(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddList
	 */
	struct UJsonLibraryHelpers_JsonList_AddList_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    Value;                                                   // 0x0038(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0070(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddLinearColor
	 */
	struct UJsonLibraryHelpers_JsonList_AddLinearColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddInteger
	 */
	struct UJsonLibraryHelpers_JsonList_AddInteger_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CUZ4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddGuid
	 */
	struct UJsonLibraryHelpers_JsonList_AddGuid_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGuid                                               Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddFloat
	 */
	struct UJsonLibraryHelpers_JsonList_AddFloat_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AU0K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddDateTime
	 */
	struct UJsonLibraryHelpers_JsonList_AddDateTime_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDateTime                                           Value;                                                   // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddColor
	 */
	struct UJsonLibraryHelpers_JsonList_AddColor_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FColor                                              Value;                                                   // 0x0038(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MDS3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddBoolean
	 */
	struct UJsonLibraryHelpers_JsonList_AddBoolean_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YHXW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0040(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.JsonList_AddArray
	 */
	struct UJsonLibraryHelpers_JsonList_AddArray_Params
	{
	public:
		struct FJsonLibraryList                                    Target;                                                  // 0x0000(0x0038)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0048(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromVectorMap
	 */
	struct UJsonLibraryHelpers_FromVectorMap_Params
	{
	public:
		TMap<class FString, struct FVector>                        Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromVectorArray
	 */
	struct UJsonLibraryHelpers_FromVectorArray_Params
	{
	public:
		TArray<struct FVector>                                     Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromVector
	 */
	struct UJsonLibraryHelpers_FromVector_Params
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U1WX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromTransformMap
	 */
	struct UJsonLibraryHelpers_FromTransformMap_Params
	{
	public:
		TMap<class FString, struct FTransform>                     Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromTransformArray
	 */
	struct UJsonLibraryHelpers_FromTransformArray_Params
	{
	public:
		TArray<struct FTransform>                                  Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromTransform
	 */
	struct UJsonLibraryHelpers_FromTransform_Params
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromStringMap
	 */
	struct UJsonLibraryHelpers_FromStringMap_Params
	{
	public:
		TMap<class FString, class FString>                         Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromStringArray
	 */
	struct UJsonLibraryHelpers_FromStringArray_Params
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromString
	 */
	struct UJsonLibraryHelpers_FromString_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromRotatorMap
	 */
	struct UJsonLibraryHelpers_FromRotatorMap_Params
	{
	public:
		TMap<class FString, struct FRotator>                       Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromRotatorArray
	 */
	struct UJsonLibraryHelpers_FromRotatorArray_Params
	{
	public:
		TArray<struct FRotator>                                    Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromRotator
	 */
	struct UJsonLibraryHelpers_FromRotator_Params
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A0LD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromObjectArray
	 */
	struct UJsonLibraryHelpers_FromObjectArray_Params
	{
	public:
		TArray<struct FJsonLibraryObject>                          Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromObject
	 */
	struct UJsonLibraryHelpers_FromObject_Params
	{
	public:
		struct FJsonLibraryObject                                  Value;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromMap
	 */
	struct UJsonLibraryHelpers_FromMap_Params
	{
	public:
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromList
	 */
	struct UJsonLibraryHelpers_FromList_Params
	{
	public:
		struct FJsonLibraryList                                    Value;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromLinearColorMap
	 */
	struct UJsonLibraryHelpers_FromLinearColorMap_Params
	{
	public:
		TMap<class FString, struct FLinearColor>                   Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromLinearColorArray
	 */
	struct UJsonLibraryHelpers_FromLinearColorArray_Params
	{
	public:
		TArray<struct FLinearColor>                                Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromLinearColor
	 */
	struct UJsonLibraryHelpers_FromLinearColor_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromIntegerMap
	 */
	struct UJsonLibraryHelpers_FromIntegerMap_Params
	{
	public:
		TMap<class FString, int32_t>                               Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromIntegerArray
	 */
	struct UJsonLibraryHelpers_FromIntegerArray_Params
	{
	public:
		TArray<int32_t>                                            Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromInteger
	 */
	struct UJsonLibraryHelpers_FromInteger_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3I8G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromGuidMap
	 */
	struct UJsonLibraryHelpers_FromGuidMap_Params
	{
	public:
		TMap<class FString, struct FGuid>                          Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromGuidArray
	 */
	struct UJsonLibraryHelpers_FromGuidArray_Params
	{
	public:
		TArray<struct FGuid>                                       Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromGuid
	 */
	struct UJsonLibraryHelpers_FromGuid_Params
	{
	public:
		struct FGuid                                               Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromFloatMap
	 */
	struct UJsonLibraryHelpers_FromFloatMap_Params
	{
	public:
		TMap<class FString, float>                                 Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromFloatArray
	 */
	struct UJsonLibraryHelpers_FromFloatArray_Params
	{
	public:
		TArray<float>                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromFloat
	 */
	struct UJsonLibraryHelpers_FromFloat_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TA1R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromDateTimeMap
	 */
	struct UJsonLibraryHelpers_FromDateTimeMap_Params
	{
	public:
		TMap<class FString, struct FDateTime>                      Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromDateTimeArray
	 */
	struct UJsonLibraryHelpers_FromDateTimeArray_Params
	{
	public:
		TArray<struct FDateTime>                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromDateTime
	 */
	struct UJsonLibraryHelpers_FromDateTime_Params
	{
	public:
		struct FDateTime                                           Value;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromColorMap
	 */
	struct UJsonLibraryHelpers_FromColorMap_Params
	{
	public:
		TMap<class FString, struct FColor>                         Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromColorArray
	 */
	struct UJsonLibraryHelpers_FromColorArray_Params
	{
	public:
		TArray<struct FColor>                                      Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromColor
	 */
	struct UJsonLibraryHelpers_FromColor_Params
	{
	public:
		struct FColor                                              Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8R5D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromBooleanMap
	 */
	struct UJsonLibraryHelpers_FromBooleanMap_Params
	{
	public:
		TMap<class FString, bool>                                  Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromBooleanArray
	 */
	struct UJsonLibraryHelpers_FromBooleanArray_Params
	{
	public:
		TArray<bool>                                               Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromBoolean
	 */
	struct UJsonLibraryHelpers_FromBoolean_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YT1M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.FromArray
	 */
	struct UJsonLibraryHelpers_FromArray_Params
	{
	public:
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertVectorToObject
	 */
	struct UJsonLibraryHelpers_ConvertVectorToObject_Params
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_86F2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertVectorMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertVectorMapToObject_Params
	{
	public:
		TMap<class FString, struct FVector>                        Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertVectorArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertVectorArrayToList_Params
	{
	public:
		TArray<struct FVector>                                     Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertTransformToObject
	 */
	struct UJsonLibraryHelpers_ConvertTransformToObject_Params
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0030(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertTransformMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertTransformMapToObject_Params
	{
	public:
		TMap<class FString, struct FTransform>                     Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertTransformArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertTransformArrayToList_Params
	{
	public:
		TArray<struct FTransform>                                  Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertStringMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertStringMapToObject_Params
	{
	public:
		TMap<class FString, class FString>                         Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertStringArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertStringArrayToList_Params
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorToObject
	 */
	struct UJsonLibraryHelpers_ConvertRotatorToObject_Params
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GS3P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertRotatorMapToObject_Params
	{
	public:
		TMap<class FString, struct FRotator>                       Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertRotatorArrayToList_Params
	{
	public:
		TArray<struct FRotator>                                    Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToVector
	 */
	struct UJsonLibraryHelpers_ConvertObjectToVector_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToTransform
	 */
	struct UJsonLibraryHelpers_ConvertObjectToTransform_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0NT7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToRotator
	 */
	struct UJsonLibraryHelpers_ConvertObjectToRotator_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToMap
	 */
	struct UJsonLibraryHelpers_ConvertObjectToMap_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<class FString, struct FJsonLibraryValue>              ReturnValue;                                             // 0x0038(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToLinearColor
	 */
	struct UJsonLibraryHelpers_ConvertObjectToLinearColor_Params
	{
	public:
		struct FJsonLibraryObject                                  Object;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertObjectArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertObjectArrayToList_Params
	{
	public:
		TArray<struct FJsonLibraryObject>                          Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertMapToObject_Params
	{
	public:
		TMap<class FString, struct FJsonLibraryValue>              Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertListToArray
	 */
	struct UJsonLibraryHelpers_ConvertListToArray_Params
	{
	public:
		struct FJsonLibraryList                                    List;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorToObject
	 */
	struct UJsonLibraryHelpers_ConvertLinearColorToObject_Params
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertLinearColorMapToObject_Params
	{
	public:
		TMap<class FString, struct FLinearColor>                   Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertLinearColorArrayToList_Params
	{
	public:
		TArray<struct FLinearColor>                                Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertIntegerMapToObject_Params
	{
	public:
		TMap<class FString, int32_t>                               Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertIntegerArrayToList_Params
	{
	public:
		TArray<int32_t>                                            Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertGuidMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertGuidMapToObject_Params
	{
	public:
		TMap<class FString, struct FGuid>                          Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertGuidArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertGuidArrayToList_Params
	{
	public:
		TArray<struct FGuid>                                       Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertFloatMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertFloatMapToObject_Params
	{
	public:
		TMap<class FString, float>                                 Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertFloatArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertFloatArrayToList_Params
	{
	public:
		TArray<float>                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertDateTimeMapToObject_Params
	{
	public:
		TMap<class FString, struct FDateTime>                      Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertDateTimeArrayToList_Params
	{
	public:
		TArray<struct FDateTime>                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertColorMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertColorMapToObject_Params
	{
	public:
		TMap<class FString, struct FColor>                         Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertColorArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertColorArrayToList_Params
	{
	public:
		TArray<struct FColor>                                      Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanMapToObject
	 */
	struct UJsonLibraryHelpers_ConvertBooleanMapToObject_Params
	{
	public:
		TMap<class FString, bool>                                  Value;                                                   // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0050(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertBooleanArrayToList_Params
	{
	public:
		TArray<bool>                                               Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConvertArrayToList
	 */
	struct UJsonLibraryHelpers_ConvertArrayToList_Params
	{
	public:
		TArray<struct FJsonLibraryValue>                           Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConstructObject
	 */
	struct UJsonLibraryHelpers_ConstructObject_Params
	{
	public:
		class FScriptDelegate                                      Notify;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryObject                                  ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConstructNull
	 */
	struct UJsonLibraryHelpers_ConstructNull_Params
	{
	public:
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConstructMap
	 */
	struct UJsonLibraryHelpers_ConstructMap_Params
	{
	public:
		TMap<class FString, struct FJsonLibraryValue>              ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConstructList
	 */
	struct UJsonLibraryHelpers_ConstructList_Params
	{
	public:
		class FScriptDelegate                                      Notify;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FJsonLibraryList                                    ReturnValue;                                             // 0x0010(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function JsonLibrary.JsonLibraryHelpers.ConstructArray
	 */
	struct UJsonLibraryHelpers_ConstructArray_Params
	{
	public:
		TArray<struct FJsonLibraryValue>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
