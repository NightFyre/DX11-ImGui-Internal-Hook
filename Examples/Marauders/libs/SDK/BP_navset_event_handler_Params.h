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
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnValueChange__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnValueChange__DelegateSignature_Params
	{
	public:
		bool                                                       Decrease;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnBackClick__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnBackClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnEscapeCall__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnEscapeCall__DelegateSignature_Params
	{
	public:
		EEscapeBehaviour                                           Behaviour;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseUnhover__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnMouseUnhover__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnMouseHover__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnMouseHover__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navset_event_handler.BP_navset_event_handler_C.OnClick__DelegateSignature
	 */
	struct UBP_navset_event_handler_C_OnClick__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
