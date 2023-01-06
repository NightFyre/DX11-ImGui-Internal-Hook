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
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.RowHasAEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::RowHasAEntry(bool HasEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.RowHasAEntry");
		
		UEvent_SmallLeaderboardRow_Widget_C_RowHasAEntry_Params params {};
		params.HasEntry = HasEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRowBasedOnContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhatRow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::WorkOutMyRowBasedOnContainer(int32_t* WhatRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRowBasedOnContainer");
		
		UEvent_SmallLeaderboardRow_Widget_C_WorkOutMyRowBasedOnContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WhatRow != nullptr)
			*WhatRow = params.WhatRow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.GetBrushColor_1
	 * 		Flags  -> ()
	 */
	struct FLinearColor UEvent_SmallLeaderboardRow_Widget_C::GetBrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.GetBrushColor_1");
		
		UEvent_SmallLeaderboardRow_Widget_C_GetBrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.Construct");
		
		UEvent_SmallLeaderboardRow_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRow
	 * 		Flags  -> ()
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::WorkOutMyRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.WorkOutMyRow");
		
		UEvent_SmallLeaderboardRow_Widget_C_WorkOutMyRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderBoardMemberInfo                      LeaderboardEntry                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::UPDATE_Event_LeaderboardRow(const struct FLeaderBoardMemberInfo& LeaderboardEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow");
		
		UEvent_SmallLeaderboardRow_Widget_C_UPDATE_Event_LeaderboardRow_Params params {};
		params.LeaderboardEntry = LeaderboardEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow_FULL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLeaderBoardMemberInfo                      LeaderBoardMemberInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::UPDATE_Event_LeaderboardRow_FULL(const struct FLeaderBoardMemberInfo& LeaderBoardMemberInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.UPDATE_Event_LeaderboardRow_FULL");
		
		UEvent_SmallLeaderboardRow_Widget_C_UPDATE_Event_LeaderboardRow_FULL_Params params {};
		params.LeaderBoardMemberInfo = LeaderBoardMemberInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.ExecuteUbergraph_Event_SmallLeaderboardRow_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEvent_SmallLeaderboardRow_Widget_C::ExecuteUbergraph_Event_SmallLeaderboardRow_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C.ExecuteUbergraph_Event_SmallLeaderboardRow_Widget");
		
		UEvent_SmallLeaderboardRow_Widget_C_ExecuteUbergraph_Event_SmallLeaderboardRow_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEvent_SmallLeaderboardRow_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEvent_SmallLeaderboardRow_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Event_SmallLeaderboardRow_Widget.Event_SmallLeaderboardRow_Widget_C");
		return ptr;
	}

}


