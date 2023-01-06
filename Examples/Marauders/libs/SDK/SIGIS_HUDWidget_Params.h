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
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshCoreMissionProgress
	 */
	struct USIGIS_HUDWidget_C_RefreshCoreMissionProgress_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshMissionProgress
	 */
	struct USIGIS_HUDWidget_C_RefreshMissionProgress_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.CheckStatusEffects
	 */
	struct USIGIS_HUDWidget_C_CheckStatusEffects_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Get_Bar_Health_Percent
	 */
	struct USIGIS_HUDWidget_C_Get_Bar_Health_Percent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Construct
	 */
	struct USIGIS_HUDWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.Tick
	 */
	struct USIGIS_HUDWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.InventoryStateChange
	 */
	struct USIGIS_HUDWidget_C_InventoryStateChange_Params
	{
	public:
		EInventoryState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.MenuOpenStateChange
	 */
	struct USIGIS_HUDWidget_C_MenuOpenStateChange_Params
	{
	public:
		ELootWindowState                                           NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_HUDWidget_C_BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_HUDWidget_C_BndEvt__SIGIS_HUDWidget_Button_68_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.RefreshStaminaBarValues
	 */
	struct USIGIS_HUDWidget_C_RefreshStaminaBarValues_Params
	{	};

	/**
	 * Function SIGIS_HUDWidget.SIGIS_HUDWidget_C.ExecuteUbergraph_SIGIS_HUDWidget
	 */
	struct USIGIS_HUDWidget_C_ExecuteUbergraph_SIGIS_HUDWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
