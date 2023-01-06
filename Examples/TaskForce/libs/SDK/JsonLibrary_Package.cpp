/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x003D7240
	 * 		Name   -> Function JsonLibrary.JsonLibraryBlueprintHelpers.StructToJson
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UScriptStruct*                               StructType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStructBase                                 Struct                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryBlueprintHelpers::STATIC_StructToJson(class UScriptStruct* StructType, const struct FStructBase& Struct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryBlueprintHelpers.StructToJson");
		
		UJsonLibraryBlueprintHelpers_StructToJson_Params params {};
		params.StructType = StructType;
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D70E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryBlueprintHelpers.StructFromJson
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UScriptStruct*                               StructType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FStructBase                                 OutStruct                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryBlueprintHelpers::STATIC_StructFromJson(class UScriptStruct* StructType, const struct FJsonLibraryObject& Object, struct FStructBase* OutStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryBlueprintHelpers.StructFromJson");
		
		UJsonLibraryBlueprintHelpers_StructFromJson_Params params {};
		params.StructType = StructType;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStruct != nullptr)
			*OutStruct = params.OutStruct;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C45B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryBlueprintHelpers.IsValidObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryBlueprintHelpers::STATIC_IsValidObject(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryBlueprintHelpers.IsValidObject");
		
		UJsonLibraryBlueprintHelpers_IsValidObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF030
	 * 		Name   -> Function JsonLibrary.JsonLibraryBlueprintHelpers.ConstructInvalidObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FJsonLibraryObject UJsonLibraryBlueprintHelpers::STATIC_ConstructInvalidObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryBlueprintHelpers.ConstructInvalidObject");
		
		UJsonLibraryBlueprintHelpers_ConstructInvalidObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJsonLibraryBlueprintHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJsonLibraryBlueprintHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JsonLibrary.JsonLibraryBlueprintHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9F00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToVectorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FVector> UJsonLibraryHelpers::STATIC_ToVectorMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToVectorMap");
		
		UJsonLibraryHelpers_ToVectorMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9DF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToVectorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UJsonLibraryHelpers::STATIC_ToVectorArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToVectorArray");
		
		UJsonLibraryHelpers_ToVectorArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9D20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UJsonLibraryHelpers::STATIC_ToVector(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToVector");
		
		UJsonLibraryHelpers_ToVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9BA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToTransformMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FTransform> UJsonLibraryHelpers::STATIC_ToTransformMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToTransformMap");
		
		UJsonLibraryHelpers_ToTransformMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9A90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToTransformArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FTransform> UJsonLibraryHelpers::STATIC_ToTransformArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToTransformArray");
		
		UJsonLibraryHelpers_ToTransformArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9990
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UJsonLibraryHelpers::STATIC_ToTransform(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToTransform");
		
		UJsonLibraryHelpers_ToTransform_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D97F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToStringMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, class FString> UJsonLibraryHelpers::STATIC_ToStringMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToStringMap");
		
		UJsonLibraryHelpers_ToStringMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D96E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToStringArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UJsonLibraryHelpers::STATIC_ToStringArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToStringArray");
		
		UJsonLibraryHelpers_ToStringArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D95D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_ToString(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToString");
		
		UJsonLibraryHelpers_ToString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9450
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToRotatorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FRotator> UJsonLibraryHelpers::STATIC_ToRotatorMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToRotatorMap");
		
		UJsonLibraryHelpers_ToRotatorMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9340
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToRotatorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRotator> UJsonLibraryHelpers::STATIC_ToRotatorArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToRotatorArray");
		
		UJsonLibraryHelpers_ToRotatorArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D9270
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FRotator UJsonLibraryHelpers::STATIC_ToRotator(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToRotator");
		
		UJsonLibraryHelpers_ToRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D90E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToObjectArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryObject> UJsonLibraryHelpers::STATIC_ToObjectArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToObjectArray");
		
		UJsonLibraryHelpers_ToObjectArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8FB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ToObject(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToObject");
		
		UJsonLibraryHelpers_ToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8E70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ToMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToMap");
		
		UJsonLibraryHelpers_ToMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8D40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ToList(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToList");
		
		UJsonLibraryHelpers_ToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8BC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToLinearColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FLinearColor> UJsonLibraryHelpers::STATIC_ToLinearColorMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToLinearColorMap");
		
		UJsonLibraryHelpers_ToLinearColorMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8AB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToLinearColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLinearColor> UJsonLibraryHelpers::STATIC_ToLinearColorArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToLinearColorArray");
		
		UJsonLibraryHelpers_ToLinearColorArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D89E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UJsonLibraryHelpers::STATIC_ToLinearColor(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToLinearColor");
		
		UJsonLibraryHelpers_ToLinearColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8860
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToIntegerMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, int32_t> UJsonLibraryHelpers::STATIC_ToIntegerMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToIntegerMap");
		
		UJsonLibraryHelpers_ToIntegerMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8750
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToIntegerArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UJsonLibraryHelpers::STATIC_ToIntegerArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToIntegerArray");
		
		UJsonLibraryHelpers_ToIntegerArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8690
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_ToInteger(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToInteger");
		
		UJsonLibraryHelpers_ToInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8510
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToGuidMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FGuid> UJsonLibraryHelpers::STATIC_ToGuidMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToGuidMap");
		
		UJsonLibraryHelpers_ToGuidMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8400
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToGuidArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FGuid> UJsonLibraryHelpers::STATIC_ToGuidArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToGuidArray");
		
		UJsonLibraryHelpers_ToGuidArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D8330
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FGuid UJsonLibraryHelpers::STATIC_ToGuid(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToGuid");
		
		UJsonLibraryHelpers_ToGuid_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D81B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToFloatMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, float> UJsonLibraryHelpers::STATIC_ToFloatMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToFloatMap");
		
		UJsonLibraryHelpers_ToFloatMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D80A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToFloatArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<float> UJsonLibraryHelpers::STATIC_ToFloatArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToFloatArray");
		
		UJsonLibraryHelpers_ToFloatArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7FD0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UJsonLibraryHelpers::STATIC_ToFloat(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToFloat");
		
		UJsonLibraryHelpers_ToFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7E50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToDateTimeMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FDateTime> UJsonLibraryHelpers::STATIC_ToDateTimeMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToDateTimeMap");
		
		UJsonLibraryHelpers_ToDateTimeMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7D40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FDateTime> UJsonLibraryHelpers::STATIC_ToDateTimeArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToDateTimeArray");
		
		UJsonLibraryHelpers_ToDateTimeArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7C70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UJsonLibraryHelpers::STATIC_ToDateTime(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToDateTime");
		
		UJsonLibraryHelpers_ToDateTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7AF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FColor> UJsonLibraryHelpers::STATIC_ToColorMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToColorMap");
		
		UJsonLibraryHelpers_ToColorMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D79E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FColor> UJsonLibraryHelpers::STATIC_ToColorArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToColorArray");
		
		UJsonLibraryHelpers_ToColorArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7910
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FColor UJsonLibraryHelpers::STATIC_ToColor(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToColor");
		
		UJsonLibraryHelpers_ToColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7790
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToBooleanMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, bool> UJsonLibraryHelpers::STATIC_ToBooleanMap(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToBooleanMap");
		
		UJsonLibraryHelpers_ToBooleanMap_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D7680
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToBooleanArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UJsonLibraryHelpers::STATIC_ToBooleanArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToBooleanArray");
		
		UJsonLibraryHelpers_ToBooleanArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D75C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_ToBoolean(const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToBoolean");
		
		UJsonLibraryHelpers_ToBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D74A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ToArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ToArray(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ToArray");
		
		UJsonLibraryHelpers_ToArray_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6F80
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.StripCommentsOrCommas
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComments                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrailingCommas                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_StripCommentsOrCommas(const class FString& Text, bool bComments, bool bTrailingCommas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.StripCommentsOrCommas");
		
		UJsonLibraryHelpers_StripCommentsOrCommas_Params params {};
		params.Text = Text;
		params.bComments = bComments;
		params.bTrailingCommas = bTrailingCommas;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6E00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ParseObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Notify                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ParseObject(const class FString& Text, const class FScriptDelegate& Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ParseObject");
		
		UJsonLibraryHelpers_ParseObject_Params params {};
		params.Text = Text;
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6C80
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ParseList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Notify                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ParseList(const class FString& Text, const class FScriptDelegate& Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ParseList");
		
		UJsonLibraryHelpers_ParseList_Params params {};
		params.Text = Text;
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6B30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.Parse
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bComments                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrailingCommas                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_Parse(const class FString& Text, bool bComments, bool bTrailingCommas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.Parse");
		
		UJsonLibraryHelpers_Parse_Params params {};
		params.Text = Text;
		params.bComments = bComments;
		params.bTrailingCommas = bTrailingCommas;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D69E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_Stringify
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondensed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_JsonValue_Stringify(const struct FJsonLibraryValue& Target, bool bCondensed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_Stringify");
		
		UJsonLibraryHelpers_JsonValue_Stringify_Params params {};
		params.Target = Target;
		params.bCondensed = bCondensed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6920
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_IsVector(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsVector");
		
		UJsonLibraryHelpers_JsonValue_IsVector_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6860
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsValid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_IsValid(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsValid");
		
		UJsonLibraryHelpers_JsonValue_IsValid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D67A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_IsTransform(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsTransform");
		
		UJsonLibraryHelpers_JsonValue_IsTransform_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D66E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_IsRotator(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsRotator");
		
		UJsonLibraryHelpers_JsonValue_IsRotator_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6620
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_IsGuid(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_IsGuid");
		
		UJsonLibraryHelpers_JsonValue_IsGuid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6560
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_GetType
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EJsonLibraryType UJsonLibraryHelpers::STATIC_JsonValue_GetType(const struct FJsonLibraryValue& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_GetType");
		
		UJsonLibraryHelpers_JsonValue_GetType_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6410
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonValue_Equals
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonValue_Equals(const struct FJsonLibraryValue& Target, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonValue_Equals");
		
		UJsonLibraryHelpers_JsonValue_Equals_Params params {};
		params.Target = Target;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D6280
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_Stringify
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondensed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_JsonObject_Stringify(const struct FJsonLibraryObject& Target, bool bCondensed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_Stringify");
		
		UJsonLibraryHelpers_JsonObject_Stringify_Params params {};
		params.Target = Target;
		params.bCondensed = bCondensed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D60D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetVector(struct FJsonLibraryObject* Target, const class FString& Key, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetVector");
		
		UJsonLibraryHelpers_JsonObject_SetVector_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5EF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetValue(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetValue");
		
		UJsonLibraryHelpers_JsonObject_SetValue_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5D00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetTransform(struct FJsonLibraryObject* Target, const class FString& Key, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetTransform");
		
		UJsonLibraryHelpers_JsonObject_SetTransform_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5B50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetString(struct FJsonLibraryObject* Target, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetString");
		
		UJsonLibraryHelpers_JsonObject_SetString_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D59A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetRotator(struct FJsonLibraryObject* Target, const class FString& Key, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetRotator");
		
		UJsonLibraryHelpers_JsonObject_SetRotator_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5790
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetObject(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetObject");
		
		UJsonLibraryHelpers_JsonObject_SetObject_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5580
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetMap(struct FJsonLibraryObject* Target, const class FString& Key, TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetMap");
		
		UJsonLibraryHelpers_JsonObject_SetMap_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5370
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetList(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetList");
		
		UJsonLibraryHelpers_JsonObject_SetList_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D51C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetLinearColor(struct FJsonLibraryObject* Target, const class FString& Key, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetLinearColor");
		
		UJsonLibraryHelpers_JsonObject_SetLinearColor_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D5020
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetInteger(struct FJsonLibraryObject* Target, const class FString& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetInteger");
		
		UJsonLibraryHelpers_JsonObject_SetInteger_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4E70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetGuid(struct FJsonLibraryObject* Target, const class FString& Key, const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetGuid");
		
		UJsonLibraryHelpers_JsonObject_SetGuid_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4CC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetFloat(struct FJsonLibraryObject* Target, const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetFloat");
		
		UJsonLibraryHelpers_JsonObject_SetFloat_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4B10
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetDateTime(struct FJsonLibraryObject* Target, const class FString& Key, const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetDateTime");
		
		UJsonLibraryHelpers_JsonObject_SetDateTime_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4960
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetColor(struct FJsonLibraryObject* Target, const class FString& Key, const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetColor");
		
		UJsonLibraryHelpers_JsonObject_SetColor_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D47B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetBoolean(struct FJsonLibraryObject* Target, const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetBoolean");
		
		UJsonLibraryHelpers_JsonObject_SetBoolean_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D45A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_SetArray(struct FJsonLibraryObject* Target, const class FString& Key, TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_SetArray");
		
		UJsonLibraryHelpers_JsonObject_SetArray_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4440
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_RemoveKey
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_RemoveKey(struct FJsonLibraryObject* Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_RemoveKey");
		
		UJsonLibraryHelpers_JsonObject_RemoveKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4350
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_IsVector(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsVector");
		
		UJsonLibraryHelpers_JsonObject_IsVector_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C45B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsValid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_IsValid(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsValid");
		
		UJsonLibraryHelpers_JsonObject_IsValid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4260
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_IsTransform(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsTransform");
		
		UJsonLibraryHelpers_JsonObject_IsTransform_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4170
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_IsRotator(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsRotator");
		
		UJsonLibraryHelpers_JsonObject_IsRotator_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D4080
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsEmpty
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_IsEmpty(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_IsEmpty");
		
		UJsonLibraryHelpers_JsonObject_IsEmpty_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3F30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_HasKey
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_HasKey(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_HasKey");
		
		UJsonLibraryHelpers_JsonObject_HasKey_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3DC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UJsonLibraryHelpers::STATIC_JsonObject_GetVector(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetVector");
		
		UJsonLibraryHelpers_JsonObject_GetVector_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3C70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValues
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_JsonObject_GetValues(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValues");
		
		UJsonLibraryHelpers_JsonObject_GetValues_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3AE0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_JsonObject_GetValue(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetValue");
		
		UJsonLibraryHelpers_JsonObject_GetValue_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3960
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UJsonLibraryHelpers::STATIC_JsonObject_GetTransform(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetTransform");
		
		UJsonLibraryHelpers_JsonObject_GetTransform_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D37C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_JsonObject_GetString(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetString");
		
		UJsonLibraryHelpers_JsonObject_GetString_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3650
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UJsonLibraryHelpers::STATIC_JsonObject_GetRotator(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetRotator");
		
		UJsonLibraryHelpers_JsonObject_GetRotator_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3490
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_GetObject(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetObject");
		
		UJsonLibraryHelpers_JsonObject_GetObject_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D32D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_JsonObject_GetMap(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetMap");
		
		UJsonLibraryHelpers_JsonObject_GetMap_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D3110
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonObject_GetList(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetList");
		
		UJsonLibraryHelpers_JsonObject_GetList_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2FB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UJsonLibraryHelpers::STATIC_JsonObject_GetLinearColor(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetLinearColor");
		
		UJsonLibraryHelpers_JsonObject_GetLinearColor_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2E70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetKeys
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UJsonLibraryHelpers::STATIC_JsonObject_GetKeys(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetKeys");
		
		UJsonLibraryHelpers_JsonObject_GetKeys_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2D20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonObject_GetInteger(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetInteger");
		
		UJsonLibraryHelpers_JsonObject_GetInteger_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2BC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UJsonLibraryHelpers::STATIC_JsonObject_GetGuid(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetGuid");
		
		UJsonLibraryHelpers_JsonObject_GetGuid_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2A70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UJsonLibraryHelpers::STATIC_JsonObject_GetFloat(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetFloat");
		
		UJsonLibraryHelpers_JsonObject_GetFloat_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2910
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UJsonLibraryHelpers::STATIC_JsonObject_GetDateTime(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetDateTime");
		
		UJsonLibraryHelpers_JsonObject_GetDateTime_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D27B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UJsonLibraryHelpers::STATIC_JsonObject_GetColor(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetColor");
		
		UJsonLibraryHelpers_JsonObject_GetColor_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2660
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_GetBoolean(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetBoolean");
		
		UJsonLibraryHelpers_JsonObject_GetBoolean_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D24A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_JsonObject_GetArray(const struct FJsonLibraryObject& Target, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_GetArray");
		
		UJsonLibraryHelpers_JsonObject_GetArray_Params params {};
		params.Target = Target;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D22F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_Equals
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonObject_Equals(const struct FJsonLibraryObject& Target, const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_Equals");
		
		UJsonLibraryHelpers_JsonObject_Equals_Params params {};
		params.Target = Target;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2200
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_Count
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonObject_Count(const struct FJsonLibraryObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_Count");
		
		UJsonLibraryHelpers_JsonObject_Count_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D2100
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_Clear
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_Clear(struct FJsonLibraryObject* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_Clear");
		
		UJsonLibraryHelpers_JsonObject_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1F30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddVectorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FVector>                Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddVectorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FVector> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddVectorMap");
		
		UJsonLibraryHelpers_JsonObject_AddVectorMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1D60
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddTransformMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FTransform>             Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddTransformMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FTransform> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddTransformMap");
		
		UJsonLibraryHelpers_JsonObject_AddTransformMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1B90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddStringMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddStringMap(struct FJsonLibraryObject* Target, TMap<class FString, class FString> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddStringMap");
		
		UJsonLibraryHelpers_JsonObject_AddStringMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D19C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddRotatorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FRotator>               Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddRotatorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FRotator> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddRotatorMap");
		
		UJsonLibraryHelpers_JsonObject_AddRotatorMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D17F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddLinearColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FLinearColor>           Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddLinearColorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FLinearColor> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddLinearColorMap");
		
		UJsonLibraryHelpers_JsonObject_AddLinearColorMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1620
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddIntegerMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, int32_t>                       Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddIntegerMap(struct FJsonLibraryObject* Target, TMap<class FString, int32_t> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddIntegerMap");
		
		UJsonLibraryHelpers_JsonObject_AddIntegerMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1450
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddGuidMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FGuid>                  Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddGuidMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FGuid> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddGuidMap");
		
		UJsonLibraryHelpers_JsonObject_AddGuidMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D1280
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddFloatMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, float>                         Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddFloatMap(struct FJsonLibraryObject* Target, TMap<class FString, float> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddFloatMap");
		
		UJsonLibraryHelpers_JsonObject_AddFloatMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D10B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddDateTimeMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FDateTime>              Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddDateTimeMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FDateTime> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddDateTimeMap");
		
		UJsonLibraryHelpers_JsonObject_AddDateTimeMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0EE0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FColor>                 Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddColorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FColor> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddColorMap");
		
		UJsonLibraryHelpers_JsonObject_AddColorMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0D10
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddBooleanMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, bool>                          Map                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_AddBooleanMap(struct FJsonLibraryObject* Target, TMap<class FString, bool> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_AddBooleanMap");
		
		UJsonLibraryHelpers_JsonObject_AddBooleanMap_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0B50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonObject_Add
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonObject_Add(struct FJsonLibraryObject* Target, const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonObject_Add");
		
		UJsonLibraryHelpers_JsonObject_Add_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D09C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Swap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_Swap(struct FJsonLibraryList* Target, int32_t IndexA, int32_t IndexB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Swap");
		
		UJsonLibraryHelpers_JsonList_Swap_Params params {};
		params.IndexA = IndexA;
		params.IndexB = IndexB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0830
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Stringify
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondensed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_JsonList_Stringify(const struct FJsonLibraryList& Target, bool bCondensed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Stringify");
		
		UJsonLibraryHelpers_JsonList_Stringify_Params params {};
		params.Target = Target;
		params.bCondensed = bCondensed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0690
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetVector(struct FJsonLibraryList* Target, int32_t Index, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetVector");
		
		UJsonLibraryHelpers_JsonList_SetVector_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D04C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetValue(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetValue");
		
		UJsonLibraryHelpers_JsonList_SetValue_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D02E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetTransform(struct FJsonLibraryList* Target, int32_t Index, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetTransform");
		
		UJsonLibraryHelpers_JsonList_SetTransform_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003D0140
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetString(struct FJsonLibraryList* Target, int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetString");
		
		UJsonLibraryHelpers_JsonList_SetString_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CFFA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetRotator(struct FJsonLibraryList* Target, int32_t Index, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetRotator");
		
		UJsonLibraryHelpers_JsonList_SetRotator_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CFDA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetObject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetObject");
		
		UJsonLibraryHelpers_JsonList_SetObject_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CFBA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetMap(struct FJsonLibraryList* Target, int32_t Index, TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetMap");
		
		UJsonLibraryHelpers_JsonList_SetMap_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF9A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetList(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetList");
		
		UJsonLibraryHelpers_JsonList_SetList_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF800
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetLinearColor(struct FJsonLibraryList* Target, int32_t Index, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetLinearColor");
		
		UJsonLibraryHelpers_JsonList_SetLinearColor_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF670
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetInteger(struct FJsonLibraryList* Target, int32_t Index, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetInteger");
		
		UJsonLibraryHelpers_JsonList_SetInteger_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF4D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetGuid(struct FJsonLibraryList* Target, int32_t Index, const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetGuid");
		
		UJsonLibraryHelpers_JsonList_SetGuid_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF340
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetFloat(struct FJsonLibraryList* Target, int32_t Index, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetFloat");
		
		UJsonLibraryHelpers_JsonList_SetFloat_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF1B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetDateTime(struct FJsonLibraryList* Target, int32_t Index, const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetDateTime");
		
		UJsonLibraryHelpers_JsonList_SetDateTime_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CF020
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetColor(struct FJsonLibraryList* Target, int32_t Index, const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetColor");
		
		UJsonLibraryHelpers_JsonList_SetColor_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CEE90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetBoolean(struct FJsonLibraryList* Target, int32_t Index, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetBoolean");
		
		UJsonLibraryHelpers_JsonList_SetBoolean_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CEC90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_SetArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_SetArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_SetArray");
		
		UJsonLibraryHelpers_JsonList_SetArray_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CEB40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveVector(struct FJsonLibraryList* Target, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveVector");
		
		UJsonLibraryHelpers_JsonList_RemoveVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE9B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveValue(struct FJsonLibraryList* Target, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveValue");
		
		UJsonLibraryHelpers_JsonList_RemoveValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE810
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveTransform(struct FJsonLibraryList* Target, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveTransform");
		
		UJsonLibraryHelpers_JsonList_RemoveTransform_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE6B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveString(struct FJsonLibraryList* Target, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveString");
		
		UJsonLibraryHelpers_JsonList_RemoveString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE560
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveRotator(struct FJsonLibraryList* Target, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveRotator");
		
		UJsonLibraryHelpers_JsonList_RemoveRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE3A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveObject(struct FJsonLibraryList* Target, const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveObject");
		
		UJsonLibraryHelpers_JsonList_RemoveObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE1E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveList(struct FJsonLibraryList* Target, const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveList");
		
		UJsonLibraryHelpers_JsonList_RemoveList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CE090
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveLinearColor(struct FJsonLibraryList* Target, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveLinearColor");
		
		UJsonLibraryHelpers_JsonList_RemoveLinearColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CDF50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveInteger(struct FJsonLibraryList* Target, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveInteger");
		
		UJsonLibraryHelpers_JsonList_RemoveInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CDDF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveGuid(struct FJsonLibraryList* Target, const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveGuid");
		
		UJsonLibraryHelpers_JsonList_RemoveGuid_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CDCA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveFloat(struct FJsonLibraryList* Target, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveFloat");
		
		UJsonLibraryHelpers_JsonList_RemoveFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CDB50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveDateTime(struct FJsonLibraryList* Target, const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveDateTime");
		
		UJsonLibraryHelpers_JsonList_RemoveDateTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CDA00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveColor(struct FJsonLibraryList* Target, const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveColor");
		
		UJsonLibraryHelpers_JsonList_RemoveColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD8B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_RemoveBoolean(struct FJsonLibraryList* Target, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_RemoveBoolean");
		
		UJsonLibraryHelpers_JsonList_RemoveBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD770
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Remove
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_Remove(struct FJsonLibraryList* Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Remove");
		
		UJsonLibraryHelpers_JsonList_Remove_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD680
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_IsValid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonList_IsValid(const struct FJsonLibraryList& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_IsValid");
		
		UJsonLibraryHelpers_JsonList_IsValid_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD590
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_IsEmpty
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonList_IsEmpty(const struct FJsonLibraryList& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_IsEmpty");
		
		UJsonLibraryHelpers_JsonList_IsEmpty_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD3F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertVector(struct FJsonLibraryList* Target, int32_t Index, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertVector");
		
		UJsonLibraryHelpers_JsonList_InsertVector_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD220
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertValue(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertValue");
		
		UJsonLibraryHelpers_JsonList_InsertValue_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CD040
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertTransform(struct FJsonLibraryList* Target, int32_t Index, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertTransform");
		
		UJsonLibraryHelpers_JsonList_InsertTransform_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CCEA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertString(struct FJsonLibraryList* Target, int32_t Index, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertString");
		
		UJsonLibraryHelpers_JsonList_InsertString_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CCD00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertRotator(struct FJsonLibraryList* Target, int32_t Index, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertRotator");
		
		UJsonLibraryHelpers_JsonList_InsertRotator_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CCB00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertObject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertObject");
		
		UJsonLibraryHelpers_JsonList_InsertObject_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC900
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertMap(struct FJsonLibraryList* Target, int32_t Index, TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertMap");
		
		UJsonLibraryHelpers_JsonList_InsertMap_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC700
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertList(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertList");
		
		UJsonLibraryHelpers_JsonList_InsertList_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC560
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertLinearColor(struct FJsonLibraryList* Target, int32_t Index, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertLinearColor");
		
		UJsonLibraryHelpers_JsonList_InsertLinearColor_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC3D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertInteger(struct FJsonLibraryList* Target, int32_t Index, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertInteger");
		
		UJsonLibraryHelpers_JsonList_InsertInteger_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC230
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertGuid(struct FJsonLibraryList* Target, int32_t Index, const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertGuid");
		
		UJsonLibraryHelpers_JsonList_InsertGuid_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CC0A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertFloat(struct FJsonLibraryList* Target, int32_t Index, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertFloat");
		
		UJsonLibraryHelpers_JsonList_InsertFloat_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBF10
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertDateTime(struct FJsonLibraryList* Target, int32_t Index, const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertDateTime");
		
		UJsonLibraryHelpers_JsonList_InsertDateTime_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBD80
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertColor(struct FJsonLibraryList* Target, int32_t Index, const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertColor");
		
		UJsonLibraryHelpers_JsonList_InsertColor_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CBBF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertBoolean(struct FJsonLibraryList* Target, int32_t Index, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertBoolean");
		
		UJsonLibraryHelpers_JsonList_InsertBoolean_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB9F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InsertArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InsertArray");
		
		UJsonLibraryHelpers_JsonList_InsertArray_Params params {};
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB840
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectVectorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectVectorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FVector> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectVectorArray");
		
		UJsonLibraryHelpers_JsonList_InjectVectorArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB690
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectTransformArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectTransformArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FTransform> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectTransformArray");
		
		UJsonLibraryHelpers_JsonList_InjectTransformArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB4B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectStringArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectStringArray(struct FJsonLibraryList* Target, int32_t Index, TArray<class FString> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectStringArray");
		
		UJsonLibraryHelpers_JsonList_InjectStringArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB300
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectRotatorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRotator>                            Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectRotatorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FRotator> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectRotatorArray");
		
		UJsonLibraryHelpers_JsonList_InjectRotatorArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CB150
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectObjectArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryObject>                  Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectObjectArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryObject> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectObjectArray");
		
		UJsonLibraryHelpers_JsonList_InjectObjectArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAFA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectLinearColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectLinearColorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FLinearColor> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectLinearColorArray");
		
		UJsonLibraryHelpers_JsonList_InjectLinearColorArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CADF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectIntegerArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectIntegerArray(struct FJsonLibraryList* Target, int32_t Index, TArray<int32_t> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectIntegerArray");
		
		UJsonLibraryHelpers_JsonList_InjectIntegerArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAC40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectGuidArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectGuidArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FGuid> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectGuidArray");
		
		UJsonLibraryHelpers_JsonList_InjectGuidArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CAA90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectFloatArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectFloatArray(struct FJsonLibraryList* Target, int32_t Index, TArray<float> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectFloatArray");
		
		UJsonLibraryHelpers_JsonList_InjectFloatArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA8E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDateTime>                           Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectDateTimeArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FDateTime> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectDateTimeArray");
		
		UJsonLibraryHelpers_JsonList_InjectDateTimeArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA730
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectColorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FColor> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectColorArray");
		
		UJsonLibraryHelpers_JsonList_InjectColorArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA580
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectBooleanArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_InjectBooleanArray(struct FJsonLibraryList* Target, int32_t Index, TArray<bool> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_InjectBooleanArray");
		
		UJsonLibraryHelpers_JsonList_InjectBooleanArray_Params params {};
		params.Index = Index;
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA380
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Inject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            List                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_Inject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Inject");
		
		UJsonLibraryHelpers_JsonList_Inject_Params params {};
		params.Index = Index;
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA220
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UJsonLibraryHelpers::STATIC_JsonList_GetVector(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetVector");
		
		UJsonLibraryHelpers_JsonList_GetVector_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003CA0A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_JsonList_GetValue(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetValue");
		
		UJsonLibraryHelpers_JsonList_GetValue_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9F30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UJsonLibraryHelpers::STATIC_JsonList_GetTransform(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetTransform");
		
		UJsonLibraryHelpers_JsonList_GetTransform_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9DA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UJsonLibraryHelpers::STATIC_JsonList_GetString(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetString");
		
		UJsonLibraryHelpers_JsonList_GetString_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9C40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UJsonLibraryHelpers::STATIC_JsonList_GetRotator(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetRotator");
		
		UJsonLibraryHelpers_JsonList_GetRotator_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9A80
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_JsonList_GetObject(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetObject");
		
		UJsonLibraryHelpers_JsonList_GetObject_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C98C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_JsonList_GetMap(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetMap");
		
		UJsonLibraryHelpers_JsonList_GetMap_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9700
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_GetList(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetList");
		
		UJsonLibraryHelpers_JsonList_GetList_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C95B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UJsonLibraryHelpers::STATIC_JsonList_GetLinearColor(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetLinearColor");
		
		UJsonLibraryHelpers_JsonList_GetLinearColor_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9470
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_GetInteger(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetInteger");
		
		UJsonLibraryHelpers_JsonList_GetInteger_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9320
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UJsonLibraryHelpers::STATIC_JsonList_GetGuid(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetGuid");
		
		UJsonLibraryHelpers_JsonList_GetGuid_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C91E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UJsonLibraryHelpers::STATIC_JsonList_GetFloat(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetFloat");
		
		UJsonLibraryHelpers_JsonList_GetFloat_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C9090
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UJsonLibraryHelpers::STATIC_JsonList_GetDateTime(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetDateTime");
		
		UJsonLibraryHelpers_JsonList_GetDateTime_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8F40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UJsonLibraryHelpers::STATIC_JsonList_GetColor(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetColor");
		
		UJsonLibraryHelpers_JsonList_GetColor_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8E00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonList_GetBoolean(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetBoolean");
		
		UJsonLibraryHelpers_JsonList_GetBoolean_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8C50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_GetArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_JsonList_GetArray(const struct FJsonLibraryList& Target, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_GetArray");
		
		UJsonLibraryHelpers_JsonList_GetArray_Params params {};
		params.Target = Target;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8AC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindVector(const struct FJsonLibraryList& Target, const struct FVector& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindVector");
		
		UJsonLibraryHelpers_JsonList_FindVector_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C88F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindValue(const struct FJsonLibraryList& Target, const struct FJsonLibraryValue& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindValue");
		
		UJsonLibraryHelpers_JsonList_FindValue_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8710
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindTransform(const struct FJsonLibraryList& Target, const struct FTransform& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindTransform");
		
		UJsonLibraryHelpers_JsonList_FindTransform_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C8570
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindString(const struct FJsonLibraryList& Target, const class FString& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindString");
		
		UJsonLibraryHelpers_JsonList_FindString_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C83E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindRotator(const struct FJsonLibraryList& Target, const struct FRotator& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindRotator");
		
		UJsonLibraryHelpers_JsonList_FindRotator_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C81E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindObject(const struct FJsonLibraryList& Target, const struct FJsonLibraryObject& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindObject");
		
		UJsonLibraryHelpers_JsonList_FindObject_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7FE0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindList(const struct FJsonLibraryList& Target, const struct FJsonLibraryList& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindList");
		
		UJsonLibraryHelpers_JsonList_FindList_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7E50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindLinearColor(const struct FJsonLibraryList& Target, const struct FLinearColor& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindLinearColor");
		
		UJsonLibraryHelpers_JsonList_FindLinearColor_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7CC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindInteger(const struct FJsonLibraryList& Target, int32_t Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindInteger");
		
		UJsonLibraryHelpers_JsonList_FindInteger_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7B20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindGuid(const struct FJsonLibraryList& Target, const struct FGuid& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindGuid");
		
		UJsonLibraryHelpers_JsonList_FindGuid_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7990
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindFloat(const struct FJsonLibraryList& Target, float Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindFloat");
		
		UJsonLibraryHelpers_JsonList_FindFloat_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C77F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindDateTime(const struct FJsonLibraryList& Target, const struct FDateTime& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindDateTime");
		
		UJsonLibraryHelpers_JsonList_FindDateTime_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7650
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindColor(const struct FJsonLibraryList& Target, const struct FColor& Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindColor");
		
		UJsonLibraryHelpers_JsonList_FindColor_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C74B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_FindBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_FindBoolean(const struct FJsonLibraryList& Target, bool Value, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_FindBoolean");
		
		UJsonLibraryHelpers_JsonList_FindBoolean_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7300
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Equals
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            List                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UJsonLibraryHelpers::STATIC_JsonList_Equals(const struct FJsonLibraryList& Target, const struct FJsonLibraryList& List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Equals");
		
		UJsonLibraryHelpers_JsonList_Equals_Params params {};
		params.Target = Target;
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7210
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Count
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UJsonLibraryHelpers::STATIC_JsonList_Count(const struct FJsonLibraryList& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Count");
		
		UJsonLibraryHelpers_JsonList_Count_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C7110
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Clear
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_Clear(struct FJsonLibraryList* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Clear");
		
		UJsonLibraryHelpers_JsonList_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6FA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendVectorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendVectorArray(struct FJsonLibraryList* Target, TArray<struct FVector> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendVectorArray");
		
		UJsonLibraryHelpers_JsonList_AppendVectorArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6E30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendTransformArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendTransformArray(struct FJsonLibraryList* Target, TArray<struct FTransform> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendTransformArray");
		
		UJsonLibraryHelpers_JsonList_AppendTransformArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6CA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendStringArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendStringArray(struct FJsonLibraryList* Target, TArray<class FString> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendStringArray");
		
		UJsonLibraryHelpers_JsonList_AppendStringArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6B30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendRotatorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRotator>                            Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendRotatorArray(struct FJsonLibraryList* Target, TArray<struct FRotator> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendRotatorArray");
		
		UJsonLibraryHelpers_JsonList_AppendRotatorArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C69D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendObjectArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryObject>                  Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendObjectArray(struct FJsonLibraryList* Target, TArray<struct FJsonLibraryObject> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendObjectArray");
		
		UJsonLibraryHelpers_JsonList_AppendObjectArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6860
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendLinearColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendLinearColorArray(struct FJsonLibraryList* Target, TArray<struct FLinearColor> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendLinearColorArray");
		
		UJsonLibraryHelpers_JsonList_AppendLinearColorArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C66F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendIntegerArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendIntegerArray(struct FJsonLibraryList* Target, TArray<int32_t> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendIntegerArray");
		
		UJsonLibraryHelpers_JsonList_AppendIntegerArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6580
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendGuidArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGuid>                               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendGuidArray(struct FJsonLibraryList* Target, TArray<struct FGuid> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendGuidArray");
		
		UJsonLibraryHelpers_JsonList_AppendGuidArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6410
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendFloatArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendFloatArray(struct FJsonLibraryList* Target, TArray<float> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendFloatArray");
		
		UJsonLibraryHelpers_JsonList_AppendFloatArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C62A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDateTime>                           Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendDateTimeArray(struct FJsonLibraryList* Target, TArray<struct FDateTime> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendDateTimeArray");
		
		UJsonLibraryHelpers_JsonList_AppendDateTimeArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C6130
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendColorArray(struct FJsonLibraryList* Target, TArray<struct FColor> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendColorArray");
		
		UJsonLibraryHelpers_JsonList_AppendColorArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5FC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendBooleanArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AppendBooleanArray(struct FJsonLibraryList* Target, TArray<bool> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AppendBooleanArray");
		
		UJsonLibraryHelpers_JsonList_AppendBooleanArray_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5E00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_Append
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            List                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_Append(struct FJsonLibraryList* Target, const struct FJsonLibraryList& List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_Append");
		
		UJsonLibraryHelpers_JsonList_Append_Params params {};
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5CB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddVector(struct FJsonLibraryList* Target, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddVector");
		
		UJsonLibraryHelpers_JsonList_AddVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5B20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddValue(struct FJsonLibraryList* Target, const struct FJsonLibraryValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddValue");
		
		UJsonLibraryHelpers_JsonList_AddValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5980
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddTransform(struct FJsonLibraryList* Target, const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddTransform");
		
		UJsonLibraryHelpers_JsonList_AddTransform_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5820
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddString
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddString(struct FJsonLibraryList* Target, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddString");
		
		UJsonLibraryHelpers_JsonList_AddString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C56D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddRotator(struct FJsonLibraryList* Target, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddRotator");
		
		UJsonLibraryHelpers_JsonList_AddRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5510
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddObject(struct FJsonLibraryList* Target, const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddObject");
		
		UJsonLibraryHelpers_JsonList_AddObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5340
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddMap(struct FJsonLibraryList* Target, TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddMap");
		
		UJsonLibraryHelpers_JsonList_AddMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5180
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddList(struct FJsonLibraryList* Target, const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddList");
		
		UJsonLibraryHelpers_JsonList_AddList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C5030
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddLinearColor(struct FJsonLibraryList* Target, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddLinearColor");
		
		UJsonLibraryHelpers_JsonList_AddLinearColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4EF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddInteger
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddInteger(struct FJsonLibraryList* Target, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddInteger");
		
		UJsonLibraryHelpers_JsonList_AddInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4D90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddGuid(struct FJsonLibraryList* Target, const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddGuid");
		
		UJsonLibraryHelpers_JsonList_AddGuid_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4C40
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddFloat
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddFloat(struct FJsonLibraryList* Target, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddFloat");
		
		UJsonLibraryHelpers_JsonList_AddFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4AF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddDateTime(struct FJsonLibraryList* Target, const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddDateTime");
		
		UJsonLibraryHelpers_JsonList_AddDateTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C49A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddColor(struct FJsonLibraryList* Target, const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddColor");
		
		UJsonLibraryHelpers_JsonList_AddColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4850
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddBoolean
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddBoolean(struct FJsonLibraryList* Target, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddBoolean");
		
		UJsonLibraryHelpers_JsonList_AddBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C46A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.JsonList_AddArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Target                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_JsonList_AddArray(struct FJsonLibraryList* Target, TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.JsonList_AddArray");
		
		UJsonLibraryHelpers_JsonList_AddArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Target != nullptr)
			*Target = params.Target;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4470
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromVectorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FVector>                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromVectorMap(TMap<class FString, struct FVector> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromVectorMap");
		
		UJsonLibraryHelpers_FromVectorMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4390
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromVectorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromVectorArray(TArray<struct FVector> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromVectorArray");
		
		UJsonLibraryHelpers_FromVectorArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C42C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromVector(const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromVector");
		
		UJsonLibraryHelpers_FromVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C4180
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromTransformMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FTransform>             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromTransformMap(TMap<class FString, struct FTransform> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromTransformMap");
		
		UJsonLibraryHelpers_FromTransformMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C40A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromTransformArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTransform>                          Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromTransformArray(TArray<struct FTransform> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromTransformArray");
		
		UJsonLibraryHelpers_FromTransformArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3F90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromTransform(const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromTransform");
		
		UJsonLibraryHelpers_FromTransform_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3E30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromStringMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromStringMap(TMap<class FString, class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromStringMap");
		
		UJsonLibraryHelpers_FromStringMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3D20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromStringArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromStringArray(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromStringArray");
		
		UJsonLibraryHelpers_FromStringArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3C50
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromString
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromString");
		
		UJsonLibraryHelpers_FromString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3B10
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromRotatorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FRotator>               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromRotatorMap(TMap<class FString, struct FRotator> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromRotatorMap");
		
		UJsonLibraryHelpers_FromRotatorMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3A30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromRotatorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRotator>                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromRotatorArray(TArray<struct FRotator> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromRotatorArray");
		
		UJsonLibraryHelpers_FromRotatorArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3960
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromRotator(const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromRotator");
		
		UJsonLibraryHelpers_FromRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3880
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromObjectArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FJsonLibraryObject>                  Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromObjectArray(TArray<struct FJsonLibraryObject> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromObjectArray");
		
		UJsonLibraryHelpers_FromObjectArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3750
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromObject(const struct FJsonLibraryObject& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromObject");
		
		UJsonLibraryHelpers_FromObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C35F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromMap(TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromMap");
		
		UJsonLibraryHelpers_FromMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C34C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryList                            Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromList(const struct FJsonLibraryList& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromList");
		
		UJsonLibraryHelpers_FromList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3380
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromLinearColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FLinearColor>           Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromLinearColorMap(TMap<class FString, struct FLinearColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromLinearColorMap");
		
		UJsonLibraryHelpers_FromLinearColorMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C32A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromLinearColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromLinearColorArray(TArray<struct FLinearColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromLinearColorArray");
		
		UJsonLibraryHelpers_FromLinearColorArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C31D0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromLinearColor(const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromLinearColor");
		
		UJsonLibraryHelpers_FromLinearColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C3090
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromIntegerMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, int32_t>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromIntegerMap(TMap<class FString, int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromIntegerMap");
		
		UJsonLibraryHelpers_FromIntegerMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2FB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromIntegerArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromIntegerArray(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromIntegerArray");
		
		UJsonLibraryHelpers_FromIntegerArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2EF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromInteger
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromInteger");
		
		UJsonLibraryHelpers_FromInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2DB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromGuidMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FGuid>                  Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromGuidMap(TMap<class FString, struct FGuid> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromGuidMap");
		
		UJsonLibraryHelpers_FromGuidMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2CD0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromGuidArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FGuid>                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromGuidArray(TArray<struct FGuid> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromGuidArray");
		
		UJsonLibraryHelpers_FromGuidArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2C00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromGuid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGuid                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromGuid(const struct FGuid& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromGuid");
		
		UJsonLibraryHelpers_FromGuid_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2AC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromFloatMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, float>                         Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromFloatMap(TMap<class FString, float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromFloatMap");
		
		UJsonLibraryHelpers_FromFloatMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C29E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromFloatArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromFloatArray(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromFloatArray");
		
		UJsonLibraryHelpers_FromFloatArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2920
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromFloat
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromFloat(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromFloat");
		
		UJsonLibraryHelpers_FromFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C27E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromDateTimeMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FDateTime>              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromDateTimeMap(TMap<class FString, struct FDateTime> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromDateTimeMap");
		
		UJsonLibraryHelpers_FromDateTimeMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2700
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromDateTimeArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromDateTimeArray(TArray<struct FDateTime> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromDateTimeArray");
		
		UJsonLibraryHelpers_FromDateTimeArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2630
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromDateTime
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromDateTime(const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromDateTime");
		
		UJsonLibraryHelpers_FromDateTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C24F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromColorMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FColor>                 Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromColorMap(TMap<class FString, struct FColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromColorMap");
		
		UJsonLibraryHelpers_FromColorMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2410
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromColorArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FColor>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromColorArray(TArray<struct FColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromColorArray");
		
		UJsonLibraryHelpers_FromColorArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2340
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FColor                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromColor(const struct FColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromColor");
		
		UJsonLibraryHelpers_FromColor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2200
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromBooleanMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, bool>                          Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromBooleanMap(TMap<class FString, bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromBooleanMap");
		
		UJsonLibraryHelpers_FromBooleanMap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2120
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromBooleanArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromBooleanArray(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromBooleanArray");
		
		UJsonLibraryHelpers_FromBooleanArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C2060
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromBoolean
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromBoolean(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromBoolean");
		
		UJsonLibraryHelpers_FromBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1F30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.FromArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_FromArray(TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.FromArray");
		
		UJsonLibraryHelpers_FromArray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1E30
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertVectorToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertVectorToObject(const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertVectorToObject");
		
		UJsonLibraryHelpers_ConvertVectorToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1CC0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertVectorMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FVector>                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertVectorMapToObject(TMap<class FString, struct FVector> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertVectorMapToObject");
		
		UJsonLibraryHelpers_ConvertVectorMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1BB0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertVectorArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertVectorArrayToList(TArray<struct FVector> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertVectorArrayToList");
		
		UJsonLibraryHelpers_ConvertVectorArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1A60
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertTransformToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTransform                                  Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertTransformToObject(const struct FTransform& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertTransformToObject");
		
		UJsonLibraryHelpers_ConvertTransformToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C18F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertTransformMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FTransform>             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertTransformMapToObject(TMap<class FString, struct FTransform> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertTransformMapToObject");
		
		UJsonLibraryHelpers_ConvertTransformMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C17E0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertTransformArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FTransform>                          Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertTransformArrayToList(TArray<struct FTransform> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertTransformArrayToList");
		
		UJsonLibraryHelpers_ConvertTransformArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1650
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertStringMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertStringMapToObject(TMap<class FString, class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertStringMapToObject");
		
		UJsonLibraryHelpers_ConvertStringMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1520
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertStringArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertStringArrayToList(TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertStringArrayToList");
		
		UJsonLibraryHelpers_ConvertStringArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C1420
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertRotatorToObject(const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorToObject");
		
		UJsonLibraryHelpers_ConvertRotatorToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C12B0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FRotator>               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertRotatorMapToObject(TMap<class FString, struct FRotator> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorMapToObject");
		
		UJsonLibraryHelpers_ConvertRotatorMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C11A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRotator>                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertRotatorArrayToList(TArray<struct FRotator> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertRotatorArrayToList");
		
		UJsonLibraryHelpers_ConvertRotatorArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C10A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToVector
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UJsonLibraryHelpers::STATIC_ConvertObjectToVector(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToVector");
		
		UJsonLibraryHelpers_ConvertObjectToVector_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0F70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UJsonLibraryHelpers::STATIC_ConvertObjectToTransform(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToTransform");
		
		UJsonLibraryHelpers_ConvertObjectToTransform_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0E70
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToRotator
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FRotator UJsonLibraryHelpers::STATIC_ConvertObjectToRotator(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToRotator");
		
		UJsonLibraryHelpers_ConvertObjectToRotator_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0D00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToMap
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ConvertObjectToMap(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToMap");
		
		UJsonLibraryHelpers_ConvertObjectToMap_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0C00
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToLinearColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FJsonLibraryObject                          Object                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UJsonLibraryHelpers::STATIC_ConvertObjectToLinearColor(const struct FJsonLibraryObject& Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectToLinearColor");
		
		UJsonLibraryHelpers_ConvertObjectToLinearColor_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0AF0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertObjectArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FJsonLibraryObject>                  Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertObjectArrayToList(TArray<struct FJsonLibraryObject> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertObjectArrayToList");
		
		UJsonLibraryHelpers_ConvertObjectArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0960
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FJsonLibraryValue>      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertMapToObject(TMap<class FString, struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertMapToObject");
		
		UJsonLibraryHelpers_ConvertMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0810
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertListToArray
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryList                            List                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ConvertListToArray(const struct FJsonLibraryList& List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertListToArray");
		
		UJsonLibraryHelpers_ConvertListToArray_Params params {};
		params.List = List;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0710
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertLinearColorToObject(const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorToObject");
		
		UJsonLibraryHelpers_ConvertLinearColorToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C05A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FLinearColor>           Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertLinearColorMapToObject(TMap<class FString, struct FLinearColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorMapToObject");
		
		UJsonLibraryHelpers_ConvertLinearColorMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0490
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertLinearColorArrayToList(TArray<struct FLinearColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertLinearColorArrayToList");
		
		UJsonLibraryHelpers_ConvertLinearColorArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0320
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, int32_t>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertIntegerMapToObject(TMap<class FString, int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerMapToObject");
		
		UJsonLibraryHelpers_ConvertIntegerMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C0210
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertIntegerArrayToList(TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertIntegerArrayToList");
		
		UJsonLibraryHelpers_ConvertIntegerArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003C00A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertGuidMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FGuid>                  Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertGuidMapToObject(TMap<class FString, struct FGuid> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertGuidMapToObject");
		
		UJsonLibraryHelpers_ConvertGuidMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BFF90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertGuidArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FGuid>                               Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertGuidArrayToList(TArray<struct FGuid> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertGuidArrayToList");
		
		UJsonLibraryHelpers_ConvertGuidArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BFE20
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertFloatMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, float>                         Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertFloatMapToObject(TMap<class FString, float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertFloatMapToObject");
		
		UJsonLibraryHelpers_ConvertFloatMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BFD10
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertFloatArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertFloatArrayToList(TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertFloatArrayToList");
		
		UJsonLibraryHelpers_ConvertFloatArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BFBA0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FDateTime>              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertDateTimeMapToObject(TMap<class FString, struct FDateTime> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeMapToObject");
		
		UJsonLibraryHelpers_ConvertDateTimeMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BFA90
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FDateTime>                           Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertDateTimeArrayToList(TArray<struct FDateTime> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertDateTimeArrayToList");
		
		UJsonLibraryHelpers_ConvertDateTimeArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF920
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertColorMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, struct FColor>                 Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertColorMapToObject(TMap<class FString, struct FColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertColorMapToObject");
		
		UJsonLibraryHelpers_ConvertColorMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF810
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertColorArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FColor>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertColorArrayToList(TArray<struct FColor> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertColorArrayToList");
		
		UJsonLibraryHelpers_ConvertColorArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF6A0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanMapToObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, bool>                          Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConvertBooleanMapToObject(TMap<class FString, bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanMapToObject");
		
		UJsonLibraryHelpers_ConvertBooleanMapToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF590
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertBooleanArrayToList(TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertBooleanArrayToList");
		
		UJsonLibraryHelpers_ConvertBooleanArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF430
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConvertArrayToList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FJsonLibraryValue>                   Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConvertArrayToList(TArray<struct FJsonLibraryValue> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConvertArrayToList");
		
		UJsonLibraryHelpers_ConvertArrayToList_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF300
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConstructObject
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Notify                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryObject UJsonLibraryHelpers::STATIC_ConstructObject(const class FScriptDelegate& Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConstructObject");
		
		UJsonLibraryHelpers_ConstructObject_Params params {};
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF290
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConstructNull
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 */
	struct FJsonLibraryValue UJsonLibraryHelpers::STATIC_ConstructNull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConstructNull");
		
		UJsonLibraryHelpers_ConstructNull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF1F0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConstructMap
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 */
	TMap<class FString, struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ConstructMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConstructMap");
		
		UJsonLibraryHelpers_ConstructMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BF0C0
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConstructList
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Notify                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryList UJsonLibraryHelpers::STATIC_ConstructList(const class FScriptDelegate& Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConstructList");
		
		UJsonLibraryHelpers_ConstructList_Params params {};
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003BEF80
	 * 		Name   -> Function JsonLibrary.JsonLibraryHelpers.ConstructArray
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 */
	TArray<struct FJsonLibraryValue> UJsonLibraryHelpers::STATIC_ConstructArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JsonLibrary.JsonLibraryHelpers.ConstructArray");
		
		UJsonLibraryHelpers_ConstructArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJsonLibraryHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJsonLibraryHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class JsonLibrary.JsonLibraryHelpers");
		return ptr;
	}

}


