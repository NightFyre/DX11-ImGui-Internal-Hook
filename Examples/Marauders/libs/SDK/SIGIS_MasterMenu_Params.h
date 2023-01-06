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
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToMatchmaking
	 */
	struct USIGIS_MasterMenu_C_SwitchToMatchmaking_Params
	{
	public:
		bool                                                       GoBackToMM;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToInventory
	 */
	struct USIGIS_MasterMenu_C_SwitchToInventory_Params
	{
	public:
		EInventoryState                                            OpenWhichInvMenu;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GoBackToMM;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I312[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.TriggerInventoryRefresh
	 */
	struct USIGIS_MasterMenu_C_TriggerInventoryRefresh_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToEndMatchScreen
	 */
	struct USIGIS_MasterMenu_C_SwitchToEndMatchScreen_Params
	{
	public:
		bool                                                       GoBackToMM;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ERaidResult                                                RaidResult;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToOptions
	 */
	struct USIGIS_MasterMenu_C_SwitchToOptions_Params
	{
	public:
		bool                                                       GoBackToMM;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.SwitchToWidget
	 */
	struct USIGIS_MasterMenu_C_SwitchToWidget_Params
	{
	public:
		EMenuState                                                 WhichState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8KSL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.StartMainMenu
	 */
	struct USIGIS_MasterMenu_C_StartMainMenu_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.LogInSuccess
	 */
	struct USIGIS_MasterMenu_C_LogInSuccess_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.OptionsPressed
	 */
	struct USIGIS_MasterMenu_C_OptionsPressed_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Construct
	 */
	struct USIGIS_MasterMenu_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.EscapePressed
	 */
	struct USIGIS_MasterMenu_C_EscapePressed_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.Tick
	 */
	struct USIGIS_MasterMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.CustomEvent_1
	 */
	struct USIGIS_MasterMenu_C_CustomEvent_1_Params
	{	};

	/**
	 * Function SIGIS_MasterMenu.SIGIS_MasterMenu_C.ExecuteUbergraph_SIGIS_MasterMenu
	 */
	struct USIGIS_MasterMenu_C_ExecuteUbergraph_SIGIS_MasterMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJCN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
