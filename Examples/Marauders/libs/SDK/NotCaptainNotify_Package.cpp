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
	 * 		Name   -> Function NotCaptainNotify.NotCaptainNotify_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotCaptainNotify_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotCaptainNotify.NotCaptainNotify_C.Construct");
		
		UNotCaptainNotify_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotCaptainNotify.NotCaptainNotify_C.ExecuteUbergraph_NotCaptainNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotCaptainNotify_C::ExecuteUbergraph_NotCaptainNotify(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotCaptainNotify.NotCaptainNotify_C.ExecuteUbergraph_NotCaptainNotify");
		
		UNotCaptainNotify_C_ExecuteUbergraph_NotCaptainNotify_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotCaptainNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotCaptainNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotCaptainNotify.NotCaptainNotify_C");
		return ptr;
	}

}


