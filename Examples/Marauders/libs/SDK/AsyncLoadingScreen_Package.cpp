/**
 * Name: RaidGame
 * Version: 1
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
	 * 		Name   -> Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TipTextIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAsyncLoadingScreenLibrary::SetDisplayTipTextIndex(int32_t TipTextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex");
		
		UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params params {};
		params.TipTextIndex = TipTextIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MovieIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAsyncLoadingScreenLibrary::SetDisplayMovieIndex(int32_t MovieIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex");
		
		UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params params {};
		params.MovieIndex = MovieIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BackgroundIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAsyncLoadingScreenLibrary::SetDisplayBackgroundIndex(int32_t BackgroundIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex");
		
		UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params params {};
		params.BackgroundIndex = BackgroundIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncLoadingScreenLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncLoadingScreenLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsyncLoadingScreen.AsyncLoadingScreenLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsyncLoadingScreen.LoadingScreenSettings");
		return ptr;
	}

}


