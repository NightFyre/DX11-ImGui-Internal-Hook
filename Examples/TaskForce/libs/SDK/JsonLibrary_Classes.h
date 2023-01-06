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
	 * Class JsonLibrary.JsonLibraryBlueprintHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJsonLibraryBlueprintHelpers : public UBlueprintFunctionLibrary
	{
	public:
		struct FJsonLibraryObject STATIC_StructToJson(class UScriptStruct* StructType, const struct FStructBase& Struct);
		bool STATIC_StructFromJson(class UScriptStruct* StructType, const struct FJsonLibraryObject& Object, struct FStructBase* OutStruct);
		bool STATIC_IsValidObject(const struct FJsonLibraryObject& Object);
		struct FJsonLibraryObject STATIC_ConstructInvalidObject();
		static UClass* StaticClass();
	};

	/**
	 * Class JsonLibrary.JsonLibraryHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJsonLibraryHelpers : public UBlueprintFunctionLibrary
	{
	public:
		TMap<class FString, struct FVector> STATIC_ToVectorMap(const struct FJsonLibraryValue& Target);
		TArray<struct FVector> STATIC_ToVectorArray(const struct FJsonLibraryValue& Target);
		struct FVector STATIC_ToVector(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FTransform> STATIC_ToTransformMap(const struct FJsonLibraryValue& Target);
		TArray<struct FTransform> STATIC_ToTransformArray(const struct FJsonLibraryValue& Target);
		struct FTransform STATIC_ToTransform(const struct FJsonLibraryValue& Value);
		TMap<class FString, class FString> STATIC_ToStringMap(const struct FJsonLibraryValue& Target);
		TArray<class FString> STATIC_ToStringArray(const struct FJsonLibraryValue& Target);
		class FString STATIC_ToString(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FRotator> STATIC_ToRotatorMap(const struct FJsonLibraryValue& Target);
		TArray<struct FRotator> STATIC_ToRotatorArray(const struct FJsonLibraryValue& Target);
		struct FRotator STATIC_ToRotator(const struct FJsonLibraryValue& Value);
		TArray<struct FJsonLibraryObject> STATIC_ToObjectArray(const struct FJsonLibraryValue& Target);
		struct FJsonLibraryObject STATIC_ToObject(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FJsonLibraryValue> STATIC_ToMap(const struct FJsonLibraryValue& Target);
		struct FJsonLibraryList STATIC_ToList(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FLinearColor> STATIC_ToLinearColorMap(const struct FJsonLibraryValue& Target);
		TArray<struct FLinearColor> STATIC_ToLinearColorArray(const struct FJsonLibraryValue& Target);
		struct FLinearColor STATIC_ToLinearColor(const struct FJsonLibraryValue& Value);
		TMap<class FString, int32_t> STATIC_ToIntegerMap(const struct FJsonLibraryValue& Target);
		TArray<int32_t> STATIC_ToIntegerArray(const struct FJsonLibraryValue& Target);
		int32_t STATIC_ToInteger(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FGuid> STATIC_ToGuidMap(const struct FJsonLibraryValue& Target);
		TArray<struct FGuid> STATIC_ToGuidArray(const struct FJsonLibraryValue& Target);
		struct FGuid STATIC_ToGuid(const struct FJsonLibraryValue& Value);
		TMap<class FString, float> STATIC_ToFloatMap(const struct FJsonLibraryValue& Target);
		TArray<float> STATIC_ToFloatArray(const struct FJsonLibraryValue& Target);
		float STATIC_ToFloat(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FDateTime> STATIC_ToDateTimeMap(const struct FJsonLibraryValue& Target);
		TArray<struct FDateTime> STATIC_ToDateTimeArray(const struct FJsonLibraryValue& Target);
		struct FDateTime STATIC_ToDateTime(const struct FJsonLibraryValue& Value);
		TMap<class FString, struct FColor> STATIC_ToColorMap(const struct FJsonLibraryValue& Target);
		TArray<struct FColor> STATIC_ToColorArray(const struct FJsonLibraryValue& Target);
		struct FColor STATIC_ToColor(const struct FJsonLibraryValue& Value);
		TMap<class FString, bool> STATIC_ToBooleanMap(const struct FJsonLibraryValue& Target);
		TArray<bool> STATIC_ToBooleanArray(const struct FJsonLibraryValue& Target);
		bool STATIC_ToBoolean(const struct FJsonLibraryValue& Value);
		TArray<struct FJsonLibraryValue> STATIC_ToArray(const struct FJsonLibraryValue& Target);
		class FString STATIC_StripCommentsOrCommas(const class FString& Text, bool bComments, bool bTrailingCommas);
		struct FJsonLibraryObject STATIC_ParseObject(const class FString& Text, const class FScriptDelegate& Notify);
		struct FJsonLibraryList STATIC_ParseList(const class FString& Text, const class FScriptDelegate& Notify);
		struct FJsonLibraryValue STATIC_Parse(const class FString& Text, bool bComments, bool bTrailingCommas);
		class FString STATIC_JsonValue_Stringify(const struct FJsonLibraryValue& Target, bool bCondensed);
		bool STATIC_JsonValue_IsVector(const struct FJsonLibraryValue& Target);
		bool STATIC_JsonValue_IsValid(const struct FJsonLibraryValue& Target);
		bool STATIC_JsonValue_IsTransform(const struct FJsonLibraryValue& Target);
		bool STATIC_JsonValue_IsRotator(const struct FJsonLibraryValue& Target);
		bool STATIC_JsonValue_IsGuid(const struct FJsonLibraryValue& Target);
		EJsonLibraryType STATIC_JsonValue_GetType(const struct FJsonLibraryValue& Target);
		bool STATIC_JsonValue_Equals(const struct FJsonLibraryValue& Target, const struct FJsonLibraryValue& Value);
		class FString STATIC_JsonObject_Stringify(const struct FJsonLibraryObject& Target, bool bCondensed);
		struct FJsonLibraryObject STATIC_JsonObject_SetVector(struct FJsonLibraryObject* Target, const class FString& Key, const struct FVector& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetValue(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryValue& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetTransform(struct FJsonLibraryObject* Target, const class FString& Key, const struct FTransform& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetString(struct FJsonLibraryObject* Target, const class FString& Key, const class FString& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetRotator(struct FJsonLibraryObject* Target, const class FString& Key, const struct FRotator& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetObject(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryObject& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetMap(struct FJsonLibraryObject* Target, const class FString& Key, TMap<class FString, struct FJsonLibraryValue> Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetList(struct FJsonLibraryObject* Target, const class FString& Key, const struct FJsonLibraryList& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetLinearColor(struct FJsonLibraryObject* Target, const class FString& Key, const struct FLinearColor& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetInteger(struct FJsonLibraryObject* Target, const class FString& Key, int32_t Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetGuid(struct FJsonLibraryObject* Target, const class FString& Key, const struct FGuid& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetFloat(struct FJsonLibraryObject* Target, const class FString& Key, float Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetDateTime(struct FJsonLibraryObject* Target, const class FString& Key, const struct FDateTime& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetColor(struct FJsonLibraryObject* Target, const class FString& Key, const struct FColor& Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetBoolean(struct FJsonLibraryObject* Target, const class FString& Key, bool Value);
		struct FJsonLibraryObject STATIC_JsonObject_SetArray(struct FJsonLibraryObject* Target, const class FString& Key, TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryObject STATIC_JsonObject_RemoveKey(struct FJsonLibraryObject* Target, const class FString& Key);
		bool STATIC_JsonObject_IsVector(const struct FJsonLibraryObject& Target);
		bool STATIC_JsonObject_IsValid(const struct FJsonLibraryObject& Target);
		bool STATIC_JsonObject_IsTransform(const struct FJsonLibraryObject& Target);
		bool STATIC_JsonObject_IsRotator(const struct FJsonLibraryObject& Target);
		bool STATIC_JsonObject_IsEmpty(const struct FJsonLibraryObject& Target);
		bool STATIC_JsonObject_HasKey(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FVector STATIC_JsonObject_GetVector(const struct FJsonLibraryObject& Target, const class FString& Key);
		TArray<struct FJsonLibraryValue> STATIC_JsonObject_GetValues(const struct FJsonLibraryObject& Target);
		struct FJsonLibraryValue STATIC_JsonObject_GetValue(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FTransform STATIC_JsonObject_GetTransform(const struct FJsonLibraryObject& Target, const class FString& Key);
		class FString STATIC_JsonObject_GetString(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FRotator STATIC_JsonObject_GetRotator(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FJsonLibraryObject STATIC_JsonObject_GetObject(const struct FJsonLibraryObject& Target, const class FString& Key);
		TMap<class FString, struct FJsonLibraryValue> STATIC_JsonObject_GetMap(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FJsonLibraryList STATIC_JsonObject_GetList(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FLinearColor STATIC_JsonObject_GetLinearColor(const struct FJsonLibraryObject& Target, const class FString& Key);
		TArray<class FString> STATIC_JsonObject_GetKeys(const struct FJsonLibraryObject& Target);
		int32_t STATIC_JsonObject_GetInteger(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FGuid STATIC_JsonObject_GetGuid(const struct FJsonLibraryObject& Target, const class FString& Key);
		float STATIC_JsonObject_GetFloat(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FDateTime STATIC_JsonObject_GetDateTime(const struct FJsonLibraryObject& Target, const class FString& Key);
		struct FColor STATIC_JsonObject_GetColor(const struct FJsonLibraryObject& Target, const class FString& Key);
		bool STATIC_JsonObject_GetBoolean(const struct FJsonLibraryObject& Target, const class FString& Key);
		TArray<struct FJsonLibraryValue> STATIC_JsonObject_GetArray(const struct FJsonLibraryObject& Target, const class FString& Key);
		bool STATIC_JsonObject_Equals(const struct FJsonLibraryObject& Target, const struct FJsonLibraryObject& Object);
		int32_t STATIC_JsonObject_Count(const struct FJsonLibraryObject& Target);
		struct FJsonLibraryObject STATIC_JsonObject_Clear(struct FJsonLibraryObject* Target);
		struct FJsonLibraryObject STATIC_JsonObject_AddVectorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FVector> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddTransformMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FTransform> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddStringMap(struct FJsonLibraryObject* Target, TMap<class FString, class FString> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddRotatorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FRotator> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddLinearColorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FLinearColor> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddIntegerMap(struct FJsonLibraryObject* Target, TMap<class FString, int32_t> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddGuidMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FGuid> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddFloatMap(struct FJsonLibraryObject* Target, TMap<class FString, float> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddDateTimeMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FDateTime> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddColorMap(struct FJsonLibraryObject* Target, TMap<class FString, struct FColor> Map);
		struct FJsonLibraryObject STATIC_JsonObject_AddBooleanMap(struct FJsonLibraryObject* Target, TMap<class FString, bool> Map);
		struct FJsonLibraryObject STATIC_JsonObject_Add(struct FJsonLibraryObject* Target, const struct FJsonLibraryObject& Object);
		struct FJsonLibraryList STATIC_JsonList_Swap(struct FJsonLibraryList* Target, int32_t IndexA, int32_t IndexB);
		class FString STATIC_JsonList_Stringify(const struct FJsonLibraryList& Target, bool bCondensed);
		struct FJsonLibraryList STATIC_JsonList_SetVector(struct FJsonLibraryList* Target, int32_t Index, const struct FVector& Value);
		struct FJsonLibraryList STATIC_JsonList_SetValue(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryValue& Value);
		struct FJsonLibraryList STATIC_JsonList_SetTransform(struct FJsonLibraryList* Target, int32_t Index, const struct FTransform& Value);
		struct FJsonLibraryList STATIC_JsonList_SetString(struct FJsonLibraryList* Target, int32_t Index, const class FString& Value);
		struct FJsonLibraryList STATIC_JsonList_SetRotator(struct FJsonLibraryList* Target, int32_t Index, const struct FRotator& Value);
		struct FJsonLibraryList STATIC_JsonList_SetObject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryObject& Value);
		struct FJsonLibraryList STATIC_JsonList_SetMap(struct FJsonLibraryList* Target, int32_t Index, TMap<class FString, struct FJsonLibraryValue> Value);
		struct FJsonLibraryList STATIC_JsonList_SetList(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& Value);
		struct FJsonLibraryList STATIC_JsonList_SetLinearColor(struct FJsonLibraryList* Target, int32_t Index, const struct FLinearColor& Value);
		struct FJsonLibraryList STATIC_JsonList_SetInteger(struct FJsonLibraryList* Target, int32_t Index, int32_t Value);
		struct FJsonLibraryList STATIC_JsonList_SetGuid(struct FJsonLibraryList* Target, int32_t Index, const struct FGuid& Value);
		struct FJsonLibraryList STATIC_JsonList_SetFloat(struct FJsonLibraryList* Target, int32_t Index, float Value);
		struct FJsonLibraryList STATIC_JsonList_SetDateTime(struct FJsonLibraryList* Target, int32_t Index, const struct FDateTime& Value);
		struct FJsonLibraryList STATIC_JsonList_SetColor(struct FJsonLibraryList* Target, int32_t Index, const struct FColor& Value);
		struct FJsonLibraryList STATIC_JsonList_SetBoolean(struct FJsonLibraryList* Target, int32_t Index, bool Value);
		struct FJsonLibraryList STATIC_JsonList_SetArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveVector(struct FJsonLibraryList* Target, const struct FVector& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveValue(struct FJsonLibraryList* Target, const struct FJsonLibraryValue& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveTransform(struct FJsonLibraryList* Target, const struct FTransform& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveString(struct FJsonLibraryList* Target, const class FString& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveRotator(struct FJsonLibraryList* Target, const struct FRotator& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveObject(struct FJsonLibraryList* Target, const struct FJsonLibraryObject& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveList(struct FJsonLibraryList* Target, const struct FJsonLibraryList& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveLinearColor(struct FJsonLibraryList* Target, const struct FLinearColor& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveInteger(struct FJsonLibraryList* Target, int32_t Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveGuid(struct FJsonLibraryList* Target, const struct FGuid& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveFloat(struct FJsonLibraryList* Target, float Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveDateTime(struct FJsonLibraryList* Target, const struct FDateTime& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveColor(struct FJsonLibraryList* Target, const struct FColor& Value);
		struct FJsonLibraryList STATIC_JsonList_RemoveBoolean(struct FJsonLibraryList* Target, bool Value);
		struct FJsonLibraryList STATIC_JsonList_Remove(struct FJsonLibraryList* Target, int32_t Index);
		bool STATIC_JsonList_IsValid(const struct FJsonLibraryList& Target);
		bool STATIC_JsonList_IsEmpty(const struct FJsonLibraryList& Target);
		struct FJsonLibraryList STATIC_JsonList_InsertVector(struct FJsonLibraryList* Target, int32_t Index, const struct FVector& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertValue(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryValue& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertTransform(struct FJsonLibraryList* Target, int32_t Index, const struct FTransform& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertString(struct FJsonLibraryList* Target, int32_t Index, const class FString& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertRotator(struct FJsonLibraryList* Target, int32_t Index, const struct FRotator& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertObject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryObject& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertMap(struct FJsonLibraryList* Target, int32_t Index, TMap<class FString, struct FJsonLibraryValue> Value);
		struct FJsonLibraryList STATIC_JsonList_InsertList(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertLinearColor(struct FJsonLibraryList* Target, int32_t Index, const struct FLinearColor& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertInteger(struct FJsonLibraryList* Target, int32_t Index, int32_t Value);
		struct FJsonLibraryList STATIC_JsonList_InsertGuid(struct FJsonLibraryList* Target, int32_t Index, const struct FGuid& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertFloat(struct FJsonLibraryList* Target, int32_t Index, float Value);
		struct FJsonLibraryList STATIC_JsonList_InsertDateTime(struct FJsonLibraryList* Target, int32_t Index, const struct FDateTime& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertColor(struct FJsonLibraryList* Target, int32_t Index, const struct FColor& Value);
		struct FJsonLibraryList STATIC_JsonList_InsertBoolean(struct FJsonLibraryList* Target, int32_t Index, bool Value);
		struct FJsonLibraryList STATIC_JsonList_InsertArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryList STATIC_JsonList_InjectVectorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FVector> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectTransformArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FTransform> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectStringArray(struct FJsonLibraryList* Target, int32_t Index, TArray<class FString> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectRotatorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FRotator> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectObjectArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FJsonLibraryObject> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectLinearColorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FLinearColor> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectIntegerArray(struct FJsonLibraryList* Target, int32_t Index, TArray<int32_t> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectGuidArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FGuid> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectFloatArray(struct FJsonLibraryList* Target, int32_t Index, TArray<float> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectDateTimeArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FDateTime> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectColorArray(struct FJsonLibraryList* Target, int32_t Index, TArray<struct FColor> Array);
		struct FJsonLibraryList STATIC_JsonList_InjectBooleanArray(struct FJsonLibraryList* Target, int32_t Index, TArray<bool> Array);
		struct FJsonLibraryList STATIC_JsonList_Inject(struct FJsonLibraryList* Target, int32_t Index, const struct FJsonLibraryList& List);
		struct FVector STATIC_JsonList_GetVector(const struct FJsonLibraryList& Target, int32_t Index);
		struct FJsonLibraryValue STATIC_JsonList_GetValue(const struct FJsonLibraryList& Target, int32_t Index);
		struct FTransform STATIC_JsonList_GetTransform(const struct FJsonLibraryList& Target, int32_t Index);
		class FString STATIC_JsonList_GetString(const struct FJsonLibraryList& Target, int32_t Index);
		struct FRotator STATIC_JsonList_GetRotator(const struct FJsonLibraryList& Target, int32_t Index);
		struct FJsonLibraryObject STATIC_JsonList_GetObject(const struct FJsonLibraryList& Target, int32_t Index);
		TMap<class FString, struct FJsonLibraryValue> STATIC_JsonList_GetMap(const struct FJsonLibraryList& Target, int32_t Index);
		struct FJsonLibraryList STATIC_JsonList_GetList(const struct FJsonLibraryList& Target, int32_t Index);
		struct FLinearColor STATIC_JsonList_GetLinearColor(const struct FJsonLibraryList& Target, int32_t Index);
		int32_t STATIC_JsonList_GetInteger(const struct FJsonLibraryList& Target, int32_t Index);
		struct FGuid STATIC_JsonList_GetGuid(const struct FJsonLibraryList& Target, int32_t Index);
		float STATIC_JsonList_GetFloat(const struct FJsonLibraryList& Target, int32_t Index);
		struct FDateTime STATIC_JsonList_GetDateTime(const struct FJsonLibraryList& Target, int32_t Index);
		struct FColor STATIC_JsonList_GetColor(const struct FJsonLibraryList& Target, int32_t Index);
		bool STATIC_JsonList_GetBoolean(const struct FJsonLibraryList& Target, int32_t Index);
		TArray<struct FJsonLibraryValue> STATIC_JsonList_GetArray(const struct FJsonLibraryList& Target, int32_t Index);
		int32_t STATIC_JsonList_FindVector(const struct FJsonLibraryList& Target, const struct FVector& Value, int32_t Index);
		int32_t STATIC_JsonList_FindValue(const struct FJsonLibraryList& Target, const struct FJsonLibraryValue& Value, int32_t Index);
		int32_t STATIC_JsonList_FindTransform(const struct FJsonLibraryList& Target, const struct FTransform& Value, int32_t Index);
		int32_t STATIC_JsonList_FindString(const struct FJsonLibraryList& Target, const class FString& Value, int32_t Index);
		int32_t STATIC_JsonList_FindRotator(const struct FJsonLibraryList& Target, const struct FRotator& Value, int32_t Index);
		int32_t STATIC_JsonList_FindObject(const struct FJsonLibraryList& Target, const struct FJsonLibraryObject& Value, int32_t Index);
		int32_t STATIC_JsonList_FindList(const struct FJsonLibraryList& Target, const struct FJsonLibraryList& Value, int32_t Index);
		int32_t STATIC_JsonList_FindLinearColor(const struct FJsonLibraryList& Target, const struct FLinearColor& Value, int32_t Index);
		int32_t STATIC_JsonList_FindInteger(const struct FJsonLibraryList& Target, int32_t Value, int32_t Index);
		int32_t STATIC_JsonList_FindGuid(const struct FJsonLibraryList& Target, const struct FGuid& Value, int32_t Index);
		int32_t STATIC_JsonList_FindFloat(const struct FJsonLibraryList& Target, float Value, int32_t Index);
		int32_t STATIC_JsonList_FindDateTime(const struct FJsonLibraryList& Target, const struct FDateTime& Value, int32_t Index);
		int32_t STATIC_JsonList_FindColor(const struct FJsonLibraryList& Target, const struct FColor& Value, int32_t Index);
		int32_t STATIC_JsonList_FindBoolean(const struct FJsonLibraryList& Target, bool Value, int32_t Index);
		bool STATIC_JsonList_Equals(const struct FJsonLibraryList& Target, const struct FJsonLibraryList& List);
		int32_t STATIC_JsonList_Count(const struct FJsonLibraryList& Target);
		struct FJsonLibraryList STATIC_JsonList_Clear(struct FJsonLibraryList* Target);
		struct FJsonLibraryList STATIC_JsonList_AppendVectorArray(struct FJsonLibraryList* Target, TArray<struct FVector> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendTransformArray(struct FJsonLibraryList* Target, TArray<struct FTransform> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendStringArray(struct FJsonLibraryList* Target, TArray<class FString> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendRotatorArray(struct FJsonLibraryList* Target, TArray<struct FRotator> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendObjectArray(struct FJsonLibraryList* Target, TArray<struct FJsonLibraryObject> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendLinearColorArray(struct FJsonLibraryList* Target, TArray<struct FLinearColor> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendIntegerArray(struct FJsonLibraryList* Target, TArray<int32_t> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendGuidArray(struct FJsonLibraryList* Target, TArray<struct FGuid> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendFloatArray(struct FJsonLibraryList* Target, TArray<float> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendDateTimeArray(struct FJsonLibraryList* Target, TArray<struct FDateTime> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendColorArray(struct FJsonLibraryList* Target, TArray<struct FColor> Array);
		struct FJsonLibraryList STATIC_JsonList_AppendBooleanArray(struct FJsonLibraryList* Target, TArray<bool> Array);
		struct FJsonLibraryList STATIC_JsonList_Append(struct FJsonLibraryList* Target, const struct FJsonLibraryList& List);
		struct FJsonLibraryList STATIC_JsonList_AddVector(struct FJsonLibraryList* Target, const struct FVector& Value);
		struct FJsonLibraryList STATIC_JsonList_AddValue(struct FJsonLibraryList* Target, const struct FJsonLibraryValue& Value);
		struct FJsonLibraryList STATIC_JsonList_AddTransform(struct FJsonLibraryList* Target, const struct FTransform& Value);
		struct FJsonLibraryList STATIC_JsonList_AddString(struct FJsonLibraryList* Target, const class FString& Value);
		struct FJsonLibraryList STATIC_JsonList_AddRotator(struct FJsonLibraryList* Target, const struct FRotator& Value);
		struct FJsonLibraryList STATIC_JsonList_AddObject(struct FJsonLibraryList* Target, const struct FJsonLibraryObject& Value);
		struct FJsonLibraryList STATIC_JsonList_AddMap(struct FJsonLibraryList* Target, TMap<class FString, struct FJsonLibraryValue> Value);
		struct FJsonLibraryList STATIC_JsonList_AddList(struct FJsonLibraryList* Target, const struct FJsonLibraryList& Value);
		struct FJsonLibraryList STATIC_JsonList_AddLinearColor(struct FJsonLibraryList* Target, const struct FLinearColor& Value);
		struct FJsonLibraryList STATIC_JsonList_AddInteger(struct FJsonLibraryList* Target, int32_t Value);
		struct FJsonLibraryList STATIC_JsonList_AddGuid(struct FJsonLibraryList* Target, const struct FGuid& Value);
		struct FJsonLibraryList STATIC_JsonList_AddFloat(struct FJsonLibraryList* Target, float Value);
		struct FJsonLibraryList STATIC_JsonList_AddDateTime(struct FJsonLibraryList* Target, const struct FDateTime& Value);
		struct FJsonLibraryList STATIC_JsonList_AddColor(struct FJsonLibraryList* Target, const struct FColor& Value);
		struct FJsonLibraryList STATIC_JsonList_AddBoolean(struct FJsonLibraryList* Target, bool Value);
		struct FJsonLibraryList STATIC_JsonList_AddArray(struct FJsonLibraryList* Target, TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryValue STATIC_FromVectorMap(TMap<class FString, struct FVector> Value);
		struct FJsonLibraryValue STATIC_FromVectorArray(TArray<struct FVector> Value);
		struct FJsonLibraryValue STATIC_FromVector(const struct FVector& Value);
		struct FJsonLibraryValue STATIC_FromTransformMap(TMap<class FString, struct FTransform> Value);
		struct FJsonLibraryValue STATIC_FromTransformArray(TArray<struct FTransform> Value);
		struct FJsonLibraryValue STATIC_FromTransform(const struct FTransform& Value);
		struct FJsonLibraryValue STATIC_FromStringMap(TMap<class FString, class FString> Value);
		struct FJsonLibraryValue STATIC_FromStringArray(TArray<class FString> Value);
		struct FJsonLibraryValue STATIC_FromString(const class FString& Value);
		struct FJsonLibraryValue STATIC_FromRotatorMap(TMap<class FString, struct FRotator> Value);
		struct FJsonLibraryValue STATIC_FromRotatorArray(TArray<struct FRotator> Value);
		struct FJsonLibraryValue STATIC_FromRotator(const struct FRotator& Value);
		struct FJsonLibraryValue STATIC_FromObjectArray(TArray<struct FJsonLibraryObject> Value);
		struct FJsonLibraryValue STATIC_FromObject(const struct FJsonLibraryObject& Value);
		struct FJsonLibraryValue STATIC_FromMap(TMap<class FString, struct FJsonLibraryValue> Value);
		struct FJsonLibraryValue STATIC_FromList(const struct FJsonLibraryList& Value);
		struct FJsonLibraryValue STATIC_FromLinearColorMap(TMap<class FString, struct FLinearColor> Value);
		struct FJsonLibraryValue STATIC_FromLinearColorArray(TArray<struct FLinearColor> Value);
		struct FJsonLibraryValue STATIC_FromLinearColor(const struct FLinearColor& Value);
		struct FJsonLibraryValue STATIC_FromIntegerMap(TMap<class FString, int32_t> Value);
		struct FJsonLibraryValue STATIC_FromIntegerArray(TArray<int32_t> Value);
		struct FJsonLibraryValue STATIC_FromInteger(int32_t Value);
		struct FJsonLibraryValue STATIC_FromGuidMap(TMap<class FString, struct FGuid> Value);
		struct FJsonLibraryValue STATIC_FromGuidArray(TArray<struct FGuid> Value);
		struct FJsonLibraryValue STATIC_FromGuid(const struct FGuid& Value);
		struct FJsonLibraryValue STATIC_FromFloatMap(TMap<class FString, float> Value);
		struct FJsonLibraryValue STATIC_FromFloatArray(TArray<float> Value);
		struct FJsonLibraryValue STATIC_FromFloat(float Value);
		struct FJsonLibraryValue STATIC_FromDateTimeMap(TMap<class FString, struct FDateTime> Value);
		struct FJsonLibraryValue STATIC_FromDateTimeArray(TArray<struct FDateTime> Value);
		struct FJsonLibraryValue STATIC_FromDateTime(const struct FDateTime& Value);
		struct FJsonLibraryValue STATIC_FromColorMap(TMap<class FString, struct FColor> Value);
		struct FJsonLibraryValue STATIC_FromColorArray(TArray<struct FColor> Value);
		struct FJsonLibraryValue STATIC_FromColor(const struct FColor& Value);
		struct FJsonLibraryValue STATIC_FromBooleanMap(TMap<class FString, bool> Value);
		struct FJsonLibraryValue STATIC_FromBooleanArray(TArray<bool> Value);
		struct FJsonLibraryValue STATIC_FromBoolean(bool Value);
		struct FJsonLibraryValue STATIC_FromArray(TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryObject STATIC_ConvertVectorToObject(const struct FVector& Value);
		struct FJsonLibraryObject STATIC_ConvertVectorMapToObject(TMap<class FString, struct FVector> Value);
		struct FJsonLibraryList STATIC_ConvertVectorArrayToList(TArray<struct FVector> Value);
		struct FJsonLibraryObject STATIC_ConvertTransformToObject(const struct FTransform& Value);
		struct FJsonLibraryObject STATIC_ConvertTransformMapToObject(TMap<class FString, struct FTransform> Value);
		struct FJsonLibraryList STATIC_ConvertTransformArrayToList(TArray<struct FTransform> Value);
		struct FJsonLibraryObject STATIC_ConvertStringMapToObject(TMap<class FString, class FString> Value);
		struct FJsonLibraryList STATIC_ConvertStringArrayToList(TArray<class FString> Value);
		struct FJsonLibraryObject STATIC_ConvertRotatorToObject(const struct FRotator& Value);
		struct FJsonLibraryObject STATIC_ConvertRotatorMapToObject(TMap<class FString, struct FRotator> Value);
		struct FJsonLibraryList STATIC_ConvertRotatorArrayToList(TArray<struct FRotator> Value);
		struct FVector STATIC_ConvertObjectToVector(const struct FJsonLibraryObject& Object);
		struct FTransform STATIC_ConvertObjectToTransform(const struct FJsonLibraryObject& Object);
		struct FRotator STATIC_ConvertObjectToRotator(const struct FJsonLibraryObject& Object);
		TMap<class FString, struct FJsonLibraryValue> STATIC_ConvertObjectToMap(const struct FJsonLibraryObject& Object);
		struct FLinearColor STATIC_ConvertObjectToLinearColor(const struct FJsonLibraryObject& Object);
		struct FJsonLibraryList STATIC_ConvertObjectArrayToList(TArray<struct FJsonLibraryObject> Value);
		struct FJsonLibraryObject STATIC_ConvertMapToObject(TMap<class FString, struct FJsonLibraryValue> Value);
		TArray<struct FJsonLibraryValue> STATIC_ConvertListToArray(const struct FJsonLibraryList& List);
		struct FJsonLibraryObject STATIC_ConvertLinearColorToObject(const struct FLinearColor& Value);
		struct FJsonLibraryObject STATIC_ConvertLinearColorMapToObject(TMap<class FString, struct FLinearColor> Value);
		struct FJsonLibraryList STATIC_ConvertLinearColorArrayToList(TArray<struct FLinearColor> Value);
		struct FJsonLibraryObject STATIC_ConvertIntegerMapToObject(TMap<class FString, int32_t> Value);
		struct FJsonLibraryList STATIC_ConvertIntegerArrayToList(TArray<int32_t> Value);
		struct FJsonLibraryObject STATIC_ConvertGuidMapToObject(TMap<class FString, struct FGuid> Value);
		struct FJsonLibraryList STATIC_ConvertGuidArrayToList(TArray<struct FGuid> Value);
		struct FJsonLibraryObject STATIC_ConvertFloatMapToObject(TMap<class FString, float> Value);
		struct FJsonLibraryList STATIC_ConvertFloatArrayToList(TArray<float> Value);
		struct FJsonLibraryObject STATIC_ConvertDateTimeMapToObject(TMap<class FString, struct FDateTime> Value);
		struct FJsonLibraryList STATIC_ConvertDateTimeArrayToList(TArray<struct FDateTime> Value);
		struct FJsonLibraryObject STATIC_ConvertColorMapToObject(TMap<class FString, struct FColor> Value);
		struct FJsonLibraryList STATIC_ConvertColorArrayToList(TArray<struct FColor> Value);
		struct FJsonLibraryObject STATIC_ConvertBooleanMapToObject(TMap<class FString, bool> Value);
		struct FJsonLibraryList STATIC_ConvertBooleanArrayToList(TArray<bool> Value);
		struct FJsonLibraryList STATIC_ConvertArrayToList(TArray<struct FJsonLibraryValue> Value);
		struct FJsonLibraryObject STATIC_ConstructObject(const class FScriptDelegate& Notify);
		struct FJsonLibraryValue STATIC_ConstructNull();
		TMap<class FString, struct FJsonLibraryValue> STATIC_ConstructMap();
		struct FJsonLibraryList STATIC_ConstructList(const class FScriptDelegate& Notify);
		TArray<struct FJsonLibraryValue> STATIC_ConstructArray();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
