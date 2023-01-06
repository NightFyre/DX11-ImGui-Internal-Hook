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
	 * 		Name   -> Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.Run_LinearMissions_RewardsPannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           ChapterMissionRewards                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FName>                                ArrayOfItemDTRow_Rewards                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_RewardPannel_C::Run_LinearMissions_RewardsPannel(const struct FChapterMissionUI& ChapterMissionRewards, TArray<class FName> ArrayOfItemDTRow_Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.Run_LinearMissions_RewardsPannel");
		
		USIGIS_RewardPannel_C_Run_LinearMissions_RewardsPannel_Params params {};
		params.ChapterMissionRewards = ChapterMissionRewards;
		params.ArrayOfItemDTRow_Rewards = ArrayOfItemDTRow_Rewards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.ExecuteUbergraph_SIGIS_RewardPannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_RewardPannel_C::ExecuteUbergraph_SIGIS_RewardPannel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_RewardPannel.SIGIS_RewardPannel_C.ExecuteUbergraph_SIGIS_RewardPannel");
		
		USIGIS_RewardPannel_C_ExecuteUbergraph_SIGIS_RewardPannel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_RewardPannel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_RewardPannel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_RewardPannel.SIGIS_RewardPannel_C");
		return ptr;
	}

}


