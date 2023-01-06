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
	 * 		Name   -> Function FrigateBoardedNotify.FrigateBoardedNotify_C.Construct
	 * 		Flags  -> ()
	 */
	void UFrigateBoardedNotify_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateBoardedNotify.FrigateBoardedNotify_C.Construct");
		
		UFrigateBoardedNotify_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateBoardedNotify.FrigateBoardedNotify_C.ExecuteUbergraph_FrigateBoardedNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFrigateBoardedNotify_C::ExecuteUbergraph_FrigateBoardedNotify(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateBoardedNotify.FrigateBoardedNotify_C.ExecuteUbergraph_FrigateBoardedNotify");
		
		UFrigateBoardedNotify_C_ExecuteUbergraph_FrigateBoardedNotify_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrigateBoardedNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrigateBoardedNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrigateBoardedNotify.FrigateBoardedNotify_C");
		return ptr;
	}

}


