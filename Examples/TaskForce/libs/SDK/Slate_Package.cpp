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
	 * 		Name   -> PredefinedFunction UButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheckBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheckBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComboButtonWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComboButtonWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableTextBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableTextWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableTextWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollBarWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBarWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrollBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrollBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlateSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlateSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpinBoxWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpinBoxWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextBlockWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextBlockWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

}


