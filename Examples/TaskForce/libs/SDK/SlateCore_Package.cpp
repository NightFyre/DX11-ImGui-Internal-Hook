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
	 * 		Name   -> PredefinedFunction UFontBulkData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontBulkData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFontFaceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontFaceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFontProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFontProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateWidgetStyleAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateWidgetStyleContainerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleContainerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateWidgetStyleContainerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateWidgetStyleContainerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

}


