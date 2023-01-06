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
	 * Function RecipeListElemet.RecipeListElemet_C.Set_isSelectedLook
	 */
	struct URecipeListElemet_C_Set_isSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.SetupLook
	 */
	struct URecipeListElemet_C_SetupLook_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.ISLockedLook
	 */
	struct URecipeListElemet_C_ISLockedLook_Params
	{
	public:
		bool                                                       isUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.GetBackground_1
	 */
	struct URecipeListElemet_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.UnlockedRecipe
	 */
	struct URecipeListElemet_C_UnlockedRecipe_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.DeActiveRecipe
	 */
	struct URecipeListElemet_C_DeActiveRecipe_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.RefreshLook
	 */
	struct URecipeListElemet_C_RefreshLook_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn
	 */
	struct URecipeListElemet_C_FakePress_RecipeListBtn_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.ActiveRecipe
	 */
	struct URecipeListElemet_C_ActiveRecipe_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.Construct
	 */
	struct URecipeListElemet_C_Construct_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.PreConstruct
	 */
	struct URecipeListElemet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct URecipeListElemet_C_BndEvt__ActiveButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.Recipe_ForceUnselectedColour
	 */
	struct URecipeListElemet_C_Recipe_ForceUnselectedColour_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.FakePress_RecipeListBtn_WithDelay
	 */
	struct URecipeListElemet_C_FakePress_RecipeListBtn_WithDelay_Params
	{	};

	/**
	 * Function RecipeListElemet.RecipeListElemet_C.ExecuteUbergraph_RecipeListElemet
	 */
	struct URecipeListElemet_C_ExecuteUbergraph_RecipeListElemet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
