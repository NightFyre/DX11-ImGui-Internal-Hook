#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.SetCraftTimeRemaining
	 */
	struct UCraftingQueWidget_C_SetCraftTimeRemaining_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957
	 */
	struct UCraftingQueWidget_C_OnLoaded_2733EC1949CB2225C2F8BAB96B4CC957_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.Construct
	 */
	struct UCraftingQueWidget_C_Construct_Params
	{	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.UpdateWidget
	 */
	struct UCraftingQueWidget_C_UpdateWidget_Params
	{
	public:
		bool                                                       IsCraftingHere;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isReadyToCollect;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MDIR[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SecondsTillFinished;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemRowName;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.EnableCollect
	 */
	struct UCraftingQueWidget_C_EnableCollect_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.EmptySlot
	 */
	struct UCraftingQueWidget_C_EmptySlot_Params
	{	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCraftingQueWidget_C_BndEvt__CollectBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftingQueWidget.CraftingQueWidget_C.ExecuteUbergraph_CraftingQueWidget
	 */
	struct UCraftingQueWidget_C_ExecuteUbergraph_CraftingQueWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D4UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
