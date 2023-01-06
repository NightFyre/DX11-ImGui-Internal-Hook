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
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.PreConstruct
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.SetBarPercentValue
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_SetBarPercentValue_Params
	{
	public:
		float                                                      PercentAmount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.IsPartDisabled
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_IsPartDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.Delayed_ShipHealthChange
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_Delayed_ShipHealthChange_Params
	{
	public:
		float                                                      TargetHealth;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay_Duration;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.OverrideWithCorrectShipImage
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_OverrideWithCorrectShipImage_Params
	{
	public:
		class UTexture2D*                                          FrontImage_ToUse;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          BackgroundImage_ToUse;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_FrigatePartsHealthBars_SubWidget.HUD_FrigatePartsHealthBars_SubWidget_C.ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget
	 */
	struct UHUD_FrigatePartsHealthBars_SubWidget_C_ExecuteUbergraph_HUD_FrigatePartsHealthBars_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
