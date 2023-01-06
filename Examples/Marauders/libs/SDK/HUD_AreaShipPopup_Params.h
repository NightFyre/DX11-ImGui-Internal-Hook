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
	 * Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.PreConstruct
	 */
	struct UHUD_AreaShipPopup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.Construct
	 */
	struct UHUD_AreaShipPopup_C_Construct_Params
	{	};

	/**
	 * Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.FinishedAnimSoCloseAll
	 */
	struct UHUD_AreaShipPopup_C_FinishedAnimSoCloseAll_Params
	{	};

	/**
	 * Function HUD_AreaShipPopup.HUD_AreaShipPopup_C.ExecuteUbergraph_HUD_AreaShipPopup
	 */
	struct UHUD_AreaShipPopup_C_ExecuteUbergraph_HUD_AreaShipPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
