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
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.Get_HasPassword_Text_1
	 */
	struct USIGIS_Crews_ListRow_C_Get_HasPassword_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.GetText_2
	 */
	struct USIGIS_Crews_ListRow_C_GetText_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.F_SetInactive
	 */
	struct USIGIS_Crews_ListRow_C_F_SetInactive_Params
	{	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.GetBackground_1
	 */
	struct USIGIS_Crews_ListRow_C_GetBackground_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_ListRow_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.Construct
	 */
	struct USIGIS_Crews_ListRow_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_Crews_ListRow_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.ExecuteUbergraph_SIGIS_Crews_ListRow
	 */
	struct USIGIS_Crews_ListRow_C_ExecuteUbergraph_SIGIS_Crews_ListRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_ListRow.SIGIS_Crews_ListRow_C.TryJoinThisCrew__DelegateSignature
	 */
	struct USIGIS_Crews_ListRow_C_TryJoinThisCrew__DelegateSignature_Params
	{
	public:
		struct FLobbySearchInfo                                    WhichLobby;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FNakamaNGroup                                       NakamaGroup;                                             // 0x0020(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       HasPassword;                                             // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNJE[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              REQpassword;                                             // 0x00A0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                CrewName;                                                // 0x00B0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
