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
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.Set_isSelectedLook
	 */
	struct UClothingElement_Widget_C_Set_isSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.SetupLook
	 */
	struct UClothingElement_Widget_C_SetupLook_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Whats_In_ThisSlot;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.ISLockedLook
	 */
	struct UClothingElement_Widget_C_ISLockedLook_Params
	{
	public:
		bool                                                       isUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.GetBackground_1
	 */
	struct UClothingElement_Widget_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.Construct
	 */
	struct UClothingElement_Widget_C_Construct_Params
	{	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.PreConstruct
	 */
	struct UClothingElement_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UClothingElement_Widget_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.Recipe_ForceUnselectedColour
	 */
	struct UClothingElement_Widget_C_Recipe_ForceUnselectedColour_Params
	{	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.ExecuteUbergraph_ClothingElement_Widget
	 */
	struct UClothingElement_Widget_C_ExecuteUbergraph_ClothingElement_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClothingElement_Widget.ClothingElement_Widget_C.ED_ClothingElementPressed__DelegateSignature
	 */
	struct UClothingElement_Widget_C_ED_ClothingElementPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
