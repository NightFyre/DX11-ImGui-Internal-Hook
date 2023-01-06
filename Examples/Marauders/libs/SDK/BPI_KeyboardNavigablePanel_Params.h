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
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetParentPanel
	 */
	struct UBPI_KeyboardNavigablePanel_C_SetParentPanel_Params
	{
	public:
		class UUserWidget*                                         ParentWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEscapeBehaviour
	 */
	struct UBPI_KeyboardNavigablePanel_C_GetEscapeBehaviour_Params
	{	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetEventHandler
	 */
	struct UBPI_KeyboardNavigablePanel_C_GetEventHandler_Params
	{
	public:
		class UBP_navset_event_handler_C*                          EventHandler;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetOnEscapeBehaviour
	 */
	struct UBPI_KeyboardNavigablePanel_C_SetOnEscapeBehaviour_Params
	{
	public:
		EEscapeBehaviour                                           EscapeBehaviour;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.OnEscapeInput
	 */
	struct UBPI_KeyboardNavigablePanel_C_OnEscapeInput_Params
	{
	public:
		bool                                                       Handled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetNavManager
	 */
	struct UBPI_KeyboardNavigablePanel_C_SetNavManager_Params
	{
	public:
		class UBP_navigation_manager_C*                            NavManagerRef;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.SetStepIndex
	 */
	struct UBPI_KeyboardNavigablePanel_C_SetStepIndex_Params
	{
	public:
		int32_t                                                    StepIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C.GetStepIndex
	 */
	struct UBPI_KeyboardNavigablePanel_C_GetStepIndex_Params
	{
	public:
		int32_t                                                    StepIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
