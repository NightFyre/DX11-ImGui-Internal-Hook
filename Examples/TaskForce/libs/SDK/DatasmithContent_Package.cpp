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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithObjectTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithObjectTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithActorTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithActorTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithAdditionalData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAdditionalData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADatasmithAreaLightActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADatasmithAreaLightActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithAreaLightActorTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAreaLightActorTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshCADImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshCADImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithTranslatedSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithTranslatedSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithCADImportSceneData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCADImportSceneData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithMDLSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithMDLSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithGLTFSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithGLTFSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshGLTFImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshGLTFImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithDeltaGenAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithDeltaGenAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithDeltaGenSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithDeltaGenSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithVREDAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithVREDAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithVREDSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithVREDSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithIFCSceneImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithIFCSceneImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshIFCImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshIFCImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithAssetUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithAssetUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithCineCameraActorTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCineCameraActorTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithCineCameraComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCineCameraComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00438BC0
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params params {};
		params.Object = Object;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00438A10
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringToMatch                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                OutKeys                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutValues                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params params {};
		params.Object = Object;
		params.StringToMatch = StringToMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
		if (OutValues != nullptr)
			*OutValues = params.OutValues;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00438990
	 * 		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserData(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");
		
		UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithContentBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithContentBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithCustomActionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCustomActionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00438CC0
	 * 		Name   -> Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelSequence*                              SequenceToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADatasmithImportedSequencesActor::PlayLevelSequence(class ULevelSequence* SequenceToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");
		
		ADatasmithImportedSequencesActor_PlayLevelSequence_Params params {};
		params.SequenceToPlay = SequenceToPlay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADatasmithImportedSequencesActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADatasmithImportedSequencesActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithCommonTessellationOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithCommonTessellationOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithImportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithImportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithLandscapeTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithLandscapeTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithMaterialInstanceTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithMaterialInstanceTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithPointLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithPointLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithPostProcessVolumeTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithPostProcessVolumeTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithScene.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithScene::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADatasmithSceneActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADatasmithSceneActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithSceneComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSceneComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithSkyLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSkyLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithSpotLightComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithSpotLightComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshComponentTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshComponentTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDatasmithStaticMeshTemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDatasmithStaticMeshTemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

}


