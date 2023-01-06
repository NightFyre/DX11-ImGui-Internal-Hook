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
	 * Function WB_State.WB_State_C.SetButtonsEnabled
	 */
	struct UWB_State_C_SetButtonsEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7KTM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_State.WB_State_C.SetButtonIcon
	 */
	struct UWB_State_C_SetButtonIcon_Params
	{
	public:
		class UObject*                                             Icon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.ConvertOpacityToNormal
	 */
	struct UWB_State_C_ConvertOpacityToNormal_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.GetNavStateKeys
	 */
	struct UWB_State_C_GetNavStateKeys_Params
	{
	public:
		TArray<class FName>                                        keys;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WB_State.WB_State_C.GetNavStateValues
	 */
	struct UWB_State_C_GetNavStateValues_Params
	{
	public:
		TArray<class UWB_NavState_C*>                              Values;                                                  // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_State.WB_State_C.Set_FontInfoHovered
	 */
	struct UWB_State_C_Set_FontInfoHovered_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.Set_FontInfoNormal
	 */
	struct UWB_State_C_Set_FontInfoNormal_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.HandleFontInfo
	 */
	struct UWB_State_C_HandleFontInfo_Params
	{
	public:
		class UObject*                                             Font;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           FontFace;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FontSize;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X062[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_State.WB_State_C.HasAnyFocus
	 */
	struct UWB_State_C_HasAnyFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJH0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_State.WB_State_C.OnKeyDown
	 */
	struct UWB_State_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_State.WB_State_C.GetCurrentStateByName
	 */
	struct UWB_State_C_GetCurrentStateByName_Params
	{
	public:
		class FName                                                State;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.GetCurrentStateByIndex
	 */
	struct UWB_State_C_GetCurrentStateByIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AA45[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_State.WB_State_C.SetAllButtonIconColor
	 */
	struct UWB_State_C_SetAllButtonIconColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.GetButtonRight
	 */
	struct UWB_State_C_GetButtonRight_Params
	{
	public:
		class UButton*                                             Native_Button;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.GetButtonLeft
	 */
	struct UWB_State_C_GetButtonLeft_Params
	{
	public:
		class UButton*                                             Native_Button;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.CheckFocus
	 */
	struct UWB_State_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.Construct
	 */
	struct UWB_State_C_Construct_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.InitStates
	 */
	struct UWB_State_C_InitStates_Params
	{
	public:
		TArray<class FName>                                        States;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_State.WB_State_C.SetNewStateText
	 */
	struct UWB_State_C_SetNewStateText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bIncrease;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.SetStateByIndex
	 */
	struct UWB_State_C_SetStateByIndex_Params
	{
	public:
		int32_t                                                    State_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExecute;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.SetStateByName
	 */
	struct UWB_State_C_SetStateByName_Params
	{
	public:
		class FName                                                State_Name;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExecute;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.ClickLeft
	 */
	struct UWB_State_C_ClickLeft_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.ClickRight
	 */
	struct UWB_State_C_ClickRight_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.HandleNavigationOverview
	 */
	struct UWB_State_C_HandleNavigationOverview_Params
	{
	public:
		bool                                                       bUseNavOverview;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NavOverviewRoom;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NavStateColor_Normal_Active;                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NavStateColor_Hovered_Active;                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.CheckNavStateColor
	 */
	struct UWB_State_C_CheckNavStateColor_Params
	{	};

	/**
	 * Function WB_State.WB_State_C.PreConstruct
	 */
	struct UWB_State_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_State.WB_State_C.ExecuteUbergraph_WB_State
	 */
	struct UWB_State_C_ExecuteUbergraph_WB_State_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ENLW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_State.WB_State_C.OnStateChanged__DelegateSignature
	 */
	struct UWB_State_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                State_Name;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    State_Index;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_State.WB_State_C.OnHovered__DelegateSignature
	 */
	struct UWB_State_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
