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
	 * 		Name   -> Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.OnLoaded_5FCAA87D42375C106FB93AAF652D6513
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrap_SmallIcon_Widget_C::OnLoaded_5FCAA87D42375C106FB93AAF652D6513(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.OnLoaded_5FCAA87D42375C106FB93AAF652D6513");
		
		UScrap_SmallIcon_Widget_C_OnLoaded_5FCAA87D42375C106FB93AAF652D6513_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UScrap_SmallIcon_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.Construct");
		
		UScrap_SmallIcon_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.ExecuteUbergraph_Scrap_SmallIcon_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScrap_SmallIcon_Widget_C::ExecuteUbergraph_Scrap_SmallIcon_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C.ExecuteUbergraph_Scrap_SmallIcon_Widget");
		
		UScrap_SmallIcon_Widget_C_ExecuteUbergraph_Scrap_SmallIcon_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScrap_SmallIcon_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScrap_SmallIcon_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C");
		return ptr;
	}

}


