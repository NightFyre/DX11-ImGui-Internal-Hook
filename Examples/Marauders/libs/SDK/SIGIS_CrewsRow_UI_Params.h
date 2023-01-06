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
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.Get_HasPassword_Text_1
	 */
	struct USIGIS_CrewsRow_UI_C_Get_HasPassword_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.GetText_2
	 */
	struct USIGIS_CrewsRow_UI_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.GetText_1
	 */
	struct USIGIS_CrewsRow_UI_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.F_SetInactive
	 */
	struct USIGIS_CrewsRow_UI_C_F_SetInactive_Params
	{	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.GetBackground_1
	 */
	struct USIGIS_CrewsRow_UI_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_CrewsRow_UI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.Construct
	 */
	struct USIGIS_CrewsRow_UI_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.BndEvt__Btn_JoinCrew_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_CrewsRow_UI_C_BndEvt__Btn_JoinCrew_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.ExecuteUbergraph_SIGIS_CrewsRow_UI
	 */
	struct USIGIS_CrewsRow_UI_C_ExecuteUbergraph_SIGIS_CrewsRow_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4RL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_CrewsRow_UI.SIGIS_CrewsRow_UI_C.JoinCrew__DelegateSignature
	 */
	struct USIGIS_CrewsRow_UI_C_JoinCrew__DelegateSignature_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasPassword;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T89H[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                CrewNiceName;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
