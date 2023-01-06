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
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PerShipButtonPressSounds
	 */
	struct USIGIS_ShipWidget_C_PerShipButtonPressSounds_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.IsSelectedLook
	 */
	struct USIGIS_ShipWidget_C_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.SetAsActive
	 */
	struct USIGIS_ShipWidget_C_SetAsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.PreConstruct
	 */
	struct USIGIS_ShipWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.Construct
	 */
	struct USIGIS_ShipWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_ShipWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.FakePress_ShipSelectBtn
	 */
	struct USIGIS_ShipWidget_C_FakePress_ShipSelectBtn_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipWidget_C_BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipWidget_C_BndEvt__Btn_ShipRow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ForceUnselectedColour
	 */
	struct USIGIS_ShipWidget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ExecuteUbergraph_SIGIS_ShipWidget
	 */
	struct USIGIS_ShipWidget_C_ExecuteUbergraph_SIGIS_ShipWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipWidget.SIGIS_ShipWidget_C.ShipSelected__DelegateSignature
	 */
	struct USIGIS_ShipWidget_C_ShipSelected__DelegateSignature_Params
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
