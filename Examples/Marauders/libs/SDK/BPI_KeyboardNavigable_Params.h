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
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetSelectedIndex
	 */
	struct UBPI_KeyboardNavigable_C_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetNavigationAction
	 */
	struct UBPI_KeyboardNavigable_C_GetNavigationAction_Params
	{
	public:
		struct FFNavItemAction                                     Action;                                                  // 0x0000(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.RemoveFocus
	 */
	struct UBPI_KeyboardNavigable_C_RemoveFocus_Params
	{	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetFocusBPIVersion
	 */
	struct UBPI_KeyboardNavigable_C_SetFocusBPIVersion_Params
	{	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetIndex
	 */
	struct UBPI_KeyboardNavigable_C_GetIndex_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetIndex
	 */
	struct UBPI_KeyboardNavigable_C_SetIndex_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.GetEventHandler
	 */
	struct UBPI_KeyboardNavigable_C_GetEventHandler_Params
	{
	public:
		class UBP_navset_event_handler_C*                          Event_Handler;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.SetEventHandler
	 */
	struct UBPI_KeyboardNavigable_C_SetEventHandler_Params
	{
	public:
		class UBP_navset_event_handler_C*                          Event_Handler;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.OnClick
	 */
	struct UBPI_KeyboardNavigable_C_OnClick_Params
	{	};

	/**
	 * Function BPI_KeyboardNavigable.BPI_KeyboardNavigable_C.ChangeValue
	 */
	struct UBPI_KeyboardNavigable_C_ChangeValue_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
