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
	 * 		Name   -> Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InMinimumSeverity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProfanityFilterFunctionLibrary::ContainsProfanity_Text(const class FText& InText, unsigned char InMinimumSeverity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Text");
		
		UProfanityFilterFunctionLibrary_ContainsProfanity_Text_Params params {};
		params.InText = InText;
		params.InMinimumSeverity = InMinimumSeverity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InMinimumSeverity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProfanityFilterFunctionLibrary::ContainsProfanity_String(const class FString& inString, unsigned char InMinimumSeverity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_String");
		
		UProfanityFilterFunctionLibrary_ContainsProfanity_String_Params params {};
		params.inString = inString;
		params.InMinimumSeverity = InMinimumSeverity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      InMinimumSeverity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProfanityFilterFunctionLibrary::ContainsProfanity_Name(const class FName& InName, unsigned char InMinimumSeverity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProfanityFilter.ProfanityFilterFunctionLibrary.ContainsProfanity_Name");
		
		UProfanityFilterFunctionLibrary_ContainsProfanity_Name_Params params {};
		params.InName = InName;
		params.InMinimumSeverity = InMinimumSeverity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProfanityFilterFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProfanityFilterFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProfanityFilter.ProfanityFilterFunctionLibrary");
		return ptr;
	}

}


