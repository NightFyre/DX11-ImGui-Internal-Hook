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
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.OnFail_CB6F8CAA470A05112E66DBA80F7C65D7
	 */
	struct USIGIS_Stats_Widget_C_OnFail_CB6F8CAA470A05112E66DBA80F7C65D7_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.OnSuccess_CB6F8CAA470A05112E66DBA80F7C65D7
	 */
	struct USIGIS_Stats_Widget_C_OnSuccess_CB6F8CAA470A05112E66DBA80F7C65D7_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.Construct
	 */
	struct USIGIS_Stats_Widget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.Refresh_Stats
	 */
	struct USIGIS_Stats_Widget_C_Refresh_Stats_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.BndEvt__MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Stats_Widget_C_BndEvt__MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.GetStatInfoReturn
	 */
	struct USIGIS_Stats_Widget_C_GetStatInfoReturn_Params
	{
	public:
		bool                                                       validstats;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.StatsInfo_Valid
	 */
	struct USIGIS_Stats_Widget_C_StatsInfo_Valid_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.StatsInfo_FAILED
	 */
	struct USIGIS_Stats_Widget_C_StatsInfo_FAILED_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.GotInfo
	 */
	struct USIGIS_Stats_Widget_C_GotInfo_Params
	{
	public:
		class FString                                              GamerTag;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProfilePicUrl;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.BndEvt__SIGIS_Stats_Widget_Button_12_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_Stats_Widget_C_BndEvt__SIGIS_Stats_Widget_Button_12_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.ExecuteUbergraph_SIGIS_Stats_Widget
	 */
	struct USIGIS_Stats_Widget_C_ExecuteUbergraph_SIGIS_Stats_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Stats_Widget.SIGIS_Stats_Widget_C.ED_StatsMenu_Close__DelegateSignature
	 */
	struct USIGIS_Stats_Widget_C_ED_StatsMenu_Close__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
