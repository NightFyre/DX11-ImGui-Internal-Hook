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
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.GetBrushColor_1
	 */
	struct USIGIS_ShipManagmentRow_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.IsSelectedLook
	 */
	struct USIGIS_ShipManagmentRow_C_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.SetAsActive
	 */
	struct USIGIS_ShipManagmentRow_C_SetAsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ForceUnselectedColour
	 */
	struct USIGIS_ShipManagmentRow_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.FakePress_ShipSelectBtn
	 */
	struct USIGIS_ShipManagmentRow_C_FakePress_ShipSelectBtn_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.Construct
	 */
	struct USIGIS_ShipManagmentRow_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.PreConstruct
	 */
	struct USIGIS_ShipManagmentRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_ShipManagmentRow_C_BndEvt__SIGIS_ShipManagmentRow_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_3_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.YES_ScrapThisShip
	 */
	struct USIGIS_ShipManagmentRow_C_YES_ScrapThisShip_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.CancelSureYouWantToScrapShip
	 */
	struct USIGIS_ShipManagmentRow_C_CancelSureYouWantToScrapShip_Params
	{	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ExecuteUbergraph_SIGIS_ShipManagmentRow
	 */
	struct USIGIS_ShipManagmentRow_C_ExecuteUbergraph_SIGIS_ShipManagmentRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PUNX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ED_ScrapThisShip__DelegateSignature
	 */
	struct USIGIS_ShipManagmentRow_C_ED_ScrapThisShip__DelegateSignature_Params
	{
	public:
		class FName                                                WhichShipDT;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FrigID;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ScrapReward;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipManagmentRow.SIGIS_ShipManagmentRow_C.ShipSelected__DelegateSignature
	 */
	struct USIGIS_ShipManagmentRow_C_ShipSelected__DelegateSignature_Params
	{
	public:
		class ASIGISInventoryItem*                                 ShipObjectRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ShipDTname;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FrigID;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ShipName;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsStarterShip;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
