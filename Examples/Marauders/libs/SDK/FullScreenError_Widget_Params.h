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
	 * Function FullScreenError_Widget.FullScreenError_Widget_C.BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UFullScreenError_Widget_C_BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function FullScreenError_Widget.FullScreenError_Widget_C.RunPopup
	 */
	struct UFullScreenError_Widget_C_RunPopup_Params
	{
	public:
		class FText                                                Popup_Title;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Popup_Desc;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                RightButtonText;                                         // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       OnlyShowOneButton;                                       // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FullScreenError_Widget.FullScreenError_Widget_C.Construct
	 */
	struct UFullScreenError_Widget_C_Construct_Params
	{	};

	/**
	 * Function FullScreenError_Widget.FullScreenError_Widget_C.ExecuteUbergraph_FullScreenError_Widget
	 */
	struct UFullScreenError_Widget_C_ExecuteUbergraph_FullScreenError_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATAT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
