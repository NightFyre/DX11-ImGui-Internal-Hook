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
	 * 		RVA    -> 0x0046C800
	 * 		Name   -> Function ImgMedia.ImgMediaSource.SetSequencePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UImgMediaSource::SetSequencePath(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");
		
		UImgMediaSource_SetSequencePath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0046C730
	 * 		Name   -> Function ImgMedia.ImgMediaSource.GetSequencePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UImgMediaSource::GetSequencePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");
		
		UImgMediaSource_GetSequencePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0046C660
	 * 		Name   -> Function ImgMedia.ImgMediaSource.GetProxies
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class FString>                              OutProxies                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UImgMediaSource::GetProxies(TArray<class FString>* OutProxies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");
		
		UImgMediaSource_GetProxies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProxies != nullptr)
			*OutProxies = params.OutProxies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImgMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImgMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}

}


