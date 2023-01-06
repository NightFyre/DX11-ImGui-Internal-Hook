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
	 * Function WB_Progress.WB_Progress_C.DecreaseSliderValue
	 */
	struct UWB_Progress_C_DecreaseSliderValue_Params
	{
	public:
		float                                                      StepSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.IncreaseSliderValue
	 */
	struct UWB_Progress_C_IncreaseSliderValue_Params
	{
	public:
		float                                                      StepSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.SetProgressTextValue
	 */
	struct UWB_Progress_C_SetProgressTextValue_Params
	{
	public:
		float                                                      ProgressValue;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2CU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Definition;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.SetProgressFont
	 */
	struct UWB_Progress_C_SetProgressFont_Params
	{
	public:
		class UObject*                                             Font;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UFontFace*                                           FontFace;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FontSize;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TXXJ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Progress.WB_Progress_C.SetSliderColor
	 */
	struct UWB_Progress_C_SetSliderColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.SetButtonsEnabled
	 */
	struct UWB_Progress_C_SetButtonsEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U2XT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Progress.WB_Progress_C.ConvertOpacityToNormal
	 */
	struct UWB_Progress_C_ConvertOpacityToNormal_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.Set_FontInfoHovered
	 */
	struct UWB_Progress_C_Set_FontInfoHovered_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.Set_FontInfoNormal
	 */
	struct UWB_Progress_C_Set_FontInfoNormal_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.HasAnyFocus
	 */
	struct UWB_Progress_C_HasAnyFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0P7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Progress.WB_Progress_C.OnKeyDown
	 */
	struct UWB_Progress_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.GetButtonRight
	 */
	struct UWB_Progress_C_GetButtonRight_Params
	{
	public:
		class UButton*                                             Native_Button;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.GetButtonLeft
	 */
	struct UWB_Progress_C_GetButtonLeft_Params
	{
	public:
		class UButton*                                             Native_Button;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.CheckFocus
	 */
	struct UWB_Progress_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UWB_Progress_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	 */
	struct UWB_Progress_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bNativeHovered;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.Construct
	 */
	struct UWB_Progress_C_Construct_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWB_Progress_C_BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.UpdateSliderText
	 */
	struct UWB_Progress_C_UpdateSliderText_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.SliderClickLeft
	 */
	struct UWB_Progress_C_SliderClickLeft_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.SliderClickRight
	 */
	struct UWB_Progress_C_SliderClickRight_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.CheckSliderHovered
	 */
	struct UWB_Progress_C_CheckSliderHovered_Params
	{	};

	/**
	 * Function WB_Progress.WB_Progress_C.OnValueChanged
	 */
	struct UWB_Progress_C_OnValueChanged_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.IsFullIntOnly
	 */
	struct UWB_Progress_C_IsFullIntOnly_Params
	{
	public:
		bool                                                       UseFullInt;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.UseRangeForValue
	 */
	struct UWB_Progress_C_UseRangeForValue_Params
	{
	public:
		bool                                                       ShouldUseCustomRange;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIUH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Min;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.PreConstruct
	 */
	struct UWB_Progress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.ExecuteUbergraph_WB_Progress
	 */
	struct UWB_Progress_C_ExecuteUbergraph_WB_Progress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.OnProgressChanged__DelegateSignature
	 */
	struct UWB_Progress_C_OnProgressChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Progress.WB_Progress_C.OnHovered__DelegateSignature
	 */
	struct UWB_Progress_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
