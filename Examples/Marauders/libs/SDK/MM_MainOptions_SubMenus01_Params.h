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
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.Set_SelectedVisuals
	 */
	struct UMM_MainOptions_SubMenus01_C_Set_SelectedVisuals_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.PreConstruct
	 */
	struct UMM_MainOptions_SubMenus01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMM_MainOptions_SubMenus01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_MainOptions_SubMenus01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_MainOptions_SubMenus01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.ExecuteUbergraph_MM_MainOptions_SubMenus01
	 */
	struct UMM_MainOptions_SubMenus01_C_ExecuteUbergraph_MM_MainOptions_SubMenus01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_MainOptions_SubMenus01.MM_MainOptions_SubMenus01_C.ED_MainMenu_SubOption_Pressed__DelegateSignature
	 */
	struct UMM_MainOptions_SubMenus01_C_ED_MainMenu_SubOption_Pressed__DelegateSignature_Params
	{
	public:
		E_InvEquipmentStates                                       WhichMenuPressed;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
