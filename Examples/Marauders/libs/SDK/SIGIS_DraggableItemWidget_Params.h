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
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.SortBGItemTypeColour
	 */
	struct USIGIS_DraggableItemWidget_C_SortBGItemTypeColour_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CalculateTheUnlockTimeBasedOnSize
	 */
	struct USIGIS_DraggableItemWidget_C_CalculateTheUnlockTimeBasedOnSize_Params
	{
	public:
		float                                                      CombinedSize;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnPreviewKeyDown
	 */
	struct USIGIS_DraggableItemWidget_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.OnKeyDown
	 */
	struct USIGIS_DraggableItemWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Set_CanSeeBuySellCost
	 */
	struct USIGIS_DraggableItemWidget_C_Set_CanSeeBuySellCost_Params
	{
	public:
		bool                                                       Show_MoneyCost;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_Amount_Text_1
	 */
	struct USIGIS_DraggableItemWidget_C_Get_Amount_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Get_CashValue_Visibility_1
	 */
	struct USIGIS_DraggableItemWidget_C_Get_CashValue_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EquipmentNewSize
	 */
	struct USIGIS_DraggableItemWidget_C_EquipmentNewSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.IsALootWidgetandNeedsLocked
	 */
	struct USIGIS_DraggableItemWidget_C_IsALootWidgetandNeedsLocked_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartWidgetBeingUnLocked
	 */
	struct USIGIS_DraggableItemWidget_C_StartWidgetBeingUnLocked_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnlockAnimFinished
	 */
	struct USIGIS_DraggableItemWidget_C_UnlockAnimFinished_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckDurability
	 */
	struct USIGIS_DraggableItemWidget_C_CheckDurability_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DuribilityChanged
	 */
	struct USIGIS_DraggableItemWidget_C_DuribilityChanged_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckAmmoType
	 */
	struct USIGIS_DraggableItemWidget_C_CheckAmmoType_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckArmourValue
	 */
	struct USIGIS_DraggableItemWidget_C_CheckArmourValue_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.StartDraggingEvent
	 */
	struct USIGIS_DraggableItemWidget_C_StartDraggingEvent_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EndDraggingEvent
	 */
	struct USIGIS_DraggableItemWidget_C_EndDraggingEvent_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.WidgetsNewSize
	 */
	struct USIGIS_DraggableItemWidget_C_WidgetsNewSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.HighLightWidget
	 */
	struct USIGIS_DraggableItemWidget_C_HighLightWidget_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.UnHighLightWidget
	 */
	struct USIGIS_DraggableItemWidget_C_UnHighLightWidget_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.DisableWidget
	 */
	struct USIGIS_DraggableItemWidget_C_DisableWidget_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.EnableWidget
	 */
	struct USIGIS_DraggableItemWidget_C_EnableWidget_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.Construct
	 */
	struct USIGIS_DraggableItemWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.CheckIfHasCustomContainerName
	 */
	struct USIGIS_DraggableItemWidget_C_CheckIfHasCustomContainerName_Params
	{	};

	/**
	 * Function SIGIS_DraggableItemWidget.SIGIS_DraggableItemWidget_C.ExecuteUbergraph_SIGIS_DraggableItemWidget
	 */
	struct USIGIS_DraggableItemWidget_C_ExecuteUbergraph_SIGIS_DraggableItemWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
