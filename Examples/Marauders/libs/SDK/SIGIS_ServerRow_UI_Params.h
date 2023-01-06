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
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.F_SetInactive
	 */
	struct USIGIS_ServerRow_UI_C_F_SetInactive_Params
	{	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetBackground_1
	 */
	struct USIGIS_ServerRow_UI_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.GetText_1
	 */
	struct USIGIS_ServerRow_UI_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_ServerRow_UI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.OnPing
	 */
	struct USIGIS_ServerRow_UI_C_OnPing_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D5HP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Resolved;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Error;                                                   // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.PreConstruct
	 */
	struct USIGIS_ServerRow_UI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.ExecuteUbergraph_SIGIS_ServerRow_UI
	 */
	struct USIGIS_ServerRow_UI_C_ExecuteUbergraph_SIGIS_ServerRow_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K7HU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ServerRow_UI.SIGIS_ServerRow_UI_C.FoundIP__DelegateSignature
	 */
	struct USIGIS_ServerRow_UI_C_FoundIP__DelegateSignature_Params
	{
	public:
		class FString                                              FoundIPin;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
