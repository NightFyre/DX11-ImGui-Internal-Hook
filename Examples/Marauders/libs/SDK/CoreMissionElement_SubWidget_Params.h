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
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.IsSelectedLook
	 */
	struct UCoreMissionElement_SubWidget_C_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RZJB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCoreMissionElement_SubWidget_C_BndEvt__CoreMissionElement_SubWidget_Button_38_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Update
	 */
	struct UCoreMissionElement_SubWidget_C_Update_Params
	{	};

	/**
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.Construct
	 */
	struct UCoreMissionElement_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ExecuteUbergraph_CoreMissionElement_SubWidget
	 */
	struct UCoreMissionElement_SubWidget_C_ExecuteUbergraph_CoreMissionElement_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLDK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CoreMissionElement_SubWidget.CoreMissionElement_SubWidget_C.ED_MissionPressed__DelegateSignature
	 */
	struct UCoreMissionElement_SubWidget_C_ED_MissionPressed__DelegateSignature_Params
	{
	public:
		struct FChapterMissionUI                                   PressedMissionInfo;                                      // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldPlaySound;                                         // 0x0138(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
