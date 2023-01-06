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
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.PreConstruct
	 */
	struct USkillGenericIcon_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Construct
	 */
	struct USkillGenericIcon_Widget_C_Construct_Params
	{	};

	/**
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Set_RecipeReqIcon
	 */
	struct USkillGenericIcon_Widget_C_Set_RecipeReqIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature
	 */
	struct USkillGenericIcon_Widget_C_BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		E_MM_SecondaryOptions                                      WhichButtonPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.ExecuteUbergraph_SkillGenericIcon_Widget
	 */
	struct USkillGenericIcon_Widget_C_ExecuteUbergraph_SkillGenericIcon_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillGenericIcon_Widget.SkillGenericIcon_Widget_C.Pressed_SkillsRequiredForUnlock__DelegateSignature
	 */
	struct USkillGenericIcon_Widget_C_Pressed_SkillsRequiredForUnlock__DelegateSignature_Params
	{
	public:
		class FString                                              CraftType;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Craft_ID;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
