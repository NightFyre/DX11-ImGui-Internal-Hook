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
	 * 		Name   -> Function RewardPannel_Row_SubWidget.RewardPannel_Row_SubWidget_C.ExecuteUbergraph_RewardPannel_Row_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URewardPannel_Row_SubWidget_C::ExecuteUbergraph_RewardPannel_Row_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardPannel_Row_SubWidget.RewardPannel_Row_SubWidget_C.ExecuteUbergraph_RewardPannel_Row_SubWidget");
		
		URewardPannel_Row_SubWidget_C_ExecuteUbergraph_RewardPannel_Row_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardPannel_Row_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardPannel_Row_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardPannel_Row_SubWidget.RewardPannel_Row_SubWidget_C");
		return ptr;
	}

}


