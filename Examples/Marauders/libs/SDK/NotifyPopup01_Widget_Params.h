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
	 * Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.Construct
	 */
	struct UNotifyPopup01_Widget_C_Construct_Params
	{	};

	/**
	 * Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.RunPopup
	 */
	struct UNotifyPopup01_Widget_C_RunPopup_Params
	{
	public:
		class FText                                                Popup_Title;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Popup_Desc;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TimeUpFor;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.CloseAnimHasFinished
	 */
	struct UNotifyPopup01_Widget_C_CloseAnimHasFinished_Params
	{	};

	/**
	 * Function NotifyPopup01_Widget.NotifyPopup01_Widget_C.ExecuteUbergraph_NotifyPopup01_Widget
	 */
	struct UNotifyPopup01_Widget_C_ExecuteUbergraph_NotifyPopup01_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
