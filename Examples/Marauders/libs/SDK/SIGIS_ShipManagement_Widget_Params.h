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
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Construct
	 */
	struct USIGIS_ShipManagement_Widget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_ShipManagement_Widget_C_BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.DeleteThisShipTriggered
	 */
	struct USIGIS_ShipManagement_Widget_C_DeleteThisShipTriggered_Params
	{
	public:
		class FName                                                WhichDataTableRow;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FrigID;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ScrapReward;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Refresh_List
	 */
	struct USIGIS_ShipManagement_Widget_C_Refresh_List_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Confirm_CloseThePopup
	 */
	struct USIGIS_ShipManagement_Widget_C_Confirm_CloseThePopup_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.Cancel_CloseThePopup
	 */
	struct USIGIS_ShipManagement_Widget_C_Cancel_CloseThePopup_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ExecuteUbergraph_SIGIS_ShipManagement_Widget
	 */
	struct USIGIS_ShipManagement_Widget_C_ExecuteUbergraph_SIGIS_ShipManagement_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCNZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_CloseShipManagementMenu__DelegateSignature
	 */
	struct USIGIS_ShipManagement_Widget_C_ED_CloseShipManagementMenu__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C.ED_RemoveShip__DelegateSignature
	 */
	struct USIGIS_ShipManagement_Widget_C_ED_RemoveShip__DelegateSignature_Params
	{
	public:
		class FName                                                ShipDataTable;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ToDelete_FrigID;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    RewardMoney;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
