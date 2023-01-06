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
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.WarningNotEnoughSpace
	 */
	struct UContract_ActiveMidSize_SubWidget_C_WarningNotEnoughSpace_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.RunReward
	 */
	struct UContract_ActiveMidSize_SubWidget_C_RunReward_Params
	{
	public:
		class FName                                                MissionNameReward;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.Construct
	 */
	struct UContract_ActiveMidSize_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.Update_ActiveMissionInfo
	 */
	struct UContract_ActiveMidSize_SubWidget_C_Update_ActiveMissionInfo_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasAMisssion;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UContract_ActiveMidSize_SubWidget_C_BndEvt__Contract_Active_SubWidget_Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct UContract_ActiveMidSize_SubWidget_C_BndEvt__Contract_Active_SubWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_2_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.BndEvt__Contract_ActiveMidSize_SubWidget_MM_GenericSmallBtn01_AddNewMission_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UContract_ActiveMidSize_SubWidget_C_BndEvt__Contract_ActiveMidSize_SubWidget_MM_GenericSmallBtn01_AddNewMission_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.BndEvt__Contract_ActiveMidSize_SubWidget_MM_GenericSmallBtn01_AddNewMission_1_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UContract_ActiveMidSize_SubWidget_C_BndEvt__Contract_ActiveMidSize_SubWidget_MM_GenericSmallBtn01_AddNewMission_1_K2Node_ComponentBoundEvent_3_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.ExecuteUbergraph_Contract_ActiveMidSize_SubWidget
	 */
	struct UContract_ActiveMidSize_SubWidget_C_ExecuteUbergraph_Contract_ActiveMidSize_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Contract_ActiveMidSize_SubWidget.Contract_ActiveMidSize_SubWidget_C.ED_DailyMissionAdd__DelegateSignature
	 */
	struct UContract_ActiveMidSize_SubWidget_C_ED_DailyMissionAdd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
