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
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.CheckIfisA_VIP_Player
	 */
	struct USIGIS_SkillTree_Widget_C_CheckIfisA_VIP_Player_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.RefreshAllSkillSubwidgets
	 */
	struct USIGIS_SkillTree_Widget_C_RefreshAllSkillSubwidgets_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.GetSkillRequiredIcons
	 */
	struct USIGIS_SkillTree_Widget_C_GetSkillRequiredIcons_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddSkillIncreaseUnlocks
	 */
	struct USIGIS_SkillTree_Widget_C_AddSkillIncreaseUnlocks_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.AddRecipeUnlocks
	 */
	struct USIGIS_SkillTree_Widget_C_AddRecipeUnlocks_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.UnlockTheCurrentSkill
	 */
	struct USIGIS_SkillTree_Widget_C_UnlockTheCurrentSkill_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.SkillInfoArea_BuyState
	 */
	struct USIGIS_SkillTree_Widget_C_SkillInfoArea_BuyState_Params
	{
	public:
		E_SkillTreeBuySkillStates                                  CurrentSkillBuyState;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.FillSelectedSkill_Info
	 */
	struct USIGIS_SkillTree_Widget_C_FillSelectedSkill_Info_Params
	{
	public:
		class USkillTree_Skill_Widget_C*                           Selected_SkillRef;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Current_Skill_Unique_ID;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Current_Skill_Cost;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Current_Skill_Name;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Current_Skill_Desc;                                      // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          Current_Skill_Icon;                                      // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<unsigned char>                                      RequiresSkills;                                          // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Current_Skill_RecipeUnlock;                              // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Current_Stat_Unlock;                                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Set_SelectedSkill
	 */
	struct USIGIS_SkillTree_Widget_C_Set_SelectedSkill_Params
	{
	public:
		int32_t                                                    SetSelectedSkill;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Get_AllSkillWidgets
	 */
	struct USIGIS_SkillTree_Widget_C_Get_AllSkillWidgets_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Construct
	 */
	struct USIGIS_SkillTree_Widget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.Refresh_SkillTree
	 */
	struct USIGIS_SkillTree_Widget_C_Refresh_SkillTree_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_SkillTree_Widget_C_BndEvt__Btn_BuySkill_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_SkillTree_Widget.SIGIS_SkillTree_Widget_C.ExecuteUbergraph_SIGIS_SkillTree_Widget
	 */
	struct USIGIS_SkillTree_Widget_C_ExecuteUbergraph_SIGIS_SkillTree_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
