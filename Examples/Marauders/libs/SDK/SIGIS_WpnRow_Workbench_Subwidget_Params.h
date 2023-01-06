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
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsEquipped
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_WpnRow_IsEquipped_Params
	{
	public:
		bool                                                       isEquipped;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WorkbenchWpnRow_SetupInfo
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_WorkbenchWpnRow_SetupInfo_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WpnRow_IsSelectedLook
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_WpnRow_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.SetAsActive
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_SetAsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.FakePress_WpnWorkbenchBtn
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_FakePress_WpnWorkbenchBtn_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ForceUnselectedColour
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.PreConstruct
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.Construct
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__SIGIS_WpnRow_Workbench_Subwidget_Btn_WeaponRow_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.RightClickIfMeFakePress
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_RightClickIfMeFakePress_Params
	{
	public:
		class FString                                              WpnUIIDLookingFor;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_ExecuteUbergraph_SIGIS_WpnRow_Workbench_Subwidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7YEC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_WpnRow_Workbench_Subwidget.SIGIS_WpnRow_Workbench_Subwidget_C.WeaponSelected__DelegateSignature
	 */
	struct USIGIS_WpnRow_Workbench_Subwidget_C_WeaponSelected__DelegateSignature_Params
	{
	public:
		class ASIGISInventoryItem*                                 WpnObjectRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemDTrowName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WhichINT;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
