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
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRowBasedOnContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhatRow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaderboard_RecordWidget_C::WorkOutMyRowBasedOnContainer(int32_t* WhatRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRowBasedOnContainer");
		
		ULeaderboard_RecordWidget_C_WorkOutMyRowBasedOnContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WhatRow != nullptr)
			*WhatRow = params.WhatRow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.GetBrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor ULeaderboard_RecordWidget_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.GetBrushColor_1");
		
		ULeaderboard_RecordWidget_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.FillInFromAws
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaderboard_RecordWidget_C::FillInFromAws(const class FString& PlayerName, int32_t rank, int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.FillInFromAws");
		
		ULeaderboard_RecordWidget_C_FillInFromAws_Params params {};
		params.PlayerName = PlayerName;
		params.rank = rank;
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.IsImportantRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isImportant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULeaderboard_RecordWidget_C::IsImportantRow(bool isImportant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.IsImportantRow");
		
		ULeaderboard_RecordWidget_C_IsImportantRow_Params params {};
		params.isImportant = isImportant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULeaderboard_RecordWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.Construct");
		
		ULeaderboard_RecordWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRow
	 * 		Flags  -> ()
	 */
	void ULeaderboard_RecordWidget_C::WorkOutMyRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.WorkOutMyRow");
		
		ULeaderboard_RecordWidget_C_WorkOutMyRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.ExecuteUbergraph_Leaderboard_RecordWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeaderboard_RecordWidget_C::ExecuteUbergraph_Leaderboard_RecordWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Leaderboard_RecordWidget.Leaderboard_RecordWidget_C.ExecuteUbergraph_Leaderboard_RecordWidget");
		
		ULeaderboard_RecordWidget_C_ExecuteUbergraph_Leaderboard_RecordWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboard_RecordWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboard_RecordWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Leaderboard_RecordWidget.Leaderboard_RecordWidget_C");
		return ptr;
	}

}


