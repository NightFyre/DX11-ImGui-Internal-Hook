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
	 * Function WB_Options_Video.WB_Options_Video_C.SetMotionBlur
	 */
	struct UWB_Options_Video_C_SetMotionBlur_Params
	{
	public:
		int32_t                                                    MotionBlurSetting;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer
	 */
	struct UWB_Options_Video_C_OnScalabilitySettingsDiffer_Params
	{
	public:
		bool                                                       bDiffer;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TXNP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark
	 */
	struct UWB_Options_Video_C_RunAndApplyHardwareBenchmark_Params
	{
	public:
		int32_t                                                    WorkScale;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JCJJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.IsCustom
	 */
	struct UWB_Options_Video_C_IsCustom_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsCustom;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons
	 */
	struct UWB_Options_Video_C_GetScalabilityButtons_Params
	{
	public:
		TArray<class UWB_StateButton_C*>                           Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality
	 */
	struct UWB_Options_Video_C_SetPostProcessQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N8JR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality
	 */
	struct UWB_Options_Video_C_GetPostProcessQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VXR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality
	 */
	struct UWB_Options_Video_C_SetViewDistanceQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YB6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality
	 */
	struct UWB_Options_Video_C_GetViewDistanceQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V5BV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality
	 */
	struct UWB_Options_Video_C_SetFoliageQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FY6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality
	 */
	struct UWB_Options_Video_C_GetFoliageQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGU5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetAAQuality
	 */
	struct UWB_Options_Video_C_SetAAQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTSS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetAAQuality
	 */
	struct UWB_Options_Video_C_GetAAQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XJIJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality
	 */
	struct UWB_Options_Video_C_SetVisualEffectsQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TI6R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality
	 */
	struct UWB_Options_Video_C_GetVisualEffectsQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V056[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality
	 */
	struct UWB_Options_Video_C_SetShadowQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0UMY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality
	 */
	struct UWB_Options_Video_C_GetShadowQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LA8O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality
	 */
	struct UWB_Options_Video_C_SetTextureQuality_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6MYO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality
	 */
	struct UWB_Options_Video_C_GetTextureQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2A6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetVsync
	 */
	struct UWB_Options_Video_C_GetVsync_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I0M2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetVSync
	 */
	struct UWB_Options_Video_C_SetVSync_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XR5H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit
	 */
	struct UWB_Options_Video_C_GetFrameRateLimit_Params
	{
	public:
		float                                                      limit;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IK7A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit
	 */
	struct UWB_Options_Video_C_SetFrameRateLimit_Params
	{
	public:
		float                                                      NewLimit;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUHH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized
	 */
	struct UWB_Options_Video_C_SetResolutionScaleNormalized_Params
	{
	public:
		float                                                      NewScaleNormalized;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H6ZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale
	 */
	struct UWB_Options_Video_C_SetResolutionScale_Params
	{
	public:
		float                                                      NewScaleValue;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UXIZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale
	 */
	struct UWB_Options_Video_C_GetResolutionScale_Params
	{
	public:
		float                                                      CurrentScaleNormalized;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentScaleValue;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SaveSettings
	 */
	struct UWB_Options_Video_C_SaveSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings
	 */
	struct UWB_Options_Video_C_ApplyAllSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ApplySettings
	 */
	struct UWB_Options_Video_C_ApplySettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings
	 */
	struct UWB_Options_Video_C_ApplyNonResolutionSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty
	 */
	struct UWB_Options_Video_C_IsScreenResolutionDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FKXQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty
	 */
	struct UWB_Options_Video_C_IsFulllscreenModeDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y4ER[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetWindowMode
	 */
	struct UWB_Options_Video_C_SetWindowMode_Params
	{
	public:
		EWindowMode                                                InFullscreenMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KXSE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetWindowMode
	 */
	struct UWB_Options_Video_C_GetWindowMode_Params
	{
	public:
		EWindowMode                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QC65[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState
	 */
	struct UWB_Options_Video_C_FindButtonResolutionState_Params
	{
	public:
		struct FIntPoint                                           Resolution;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5VEX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FoundIndex;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton
	 */
	struct UWB_Options_Video_C_TranslateResolutionFromButton_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntPoint                                           IntPoint;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName
	 */
	struct UWB_Options_Video_C_GetScreenResolutionName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.HasState
	 */
	struct UWB_Options_Video_C_HasState_Params
	{
	public:
		class UWB_StateButton_C*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasState;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings
	 */
	struct UWB_Options_Video_C_ApplyResolutionSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled
	 */
	struct UWB_Options_Video_C_SetDynamicResolutionEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S6CN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled
	 */
	struct UWB_Options_Video_C_IsDynamicResolutionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8E3I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty
	 */
	struct UWB_Options_Video_C_IsDynamicResolutionDirty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_858L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution
	 */
	struct UWB_Options_Video_C_GetLastConfirmedScreenResolution_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution
	 */
	struct UWB_Options_Video_C_SetScreenResolution_Params
	{
	public:
		struct FIntPoint                                           Resolution;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution
	 */
	struct UWB_Options_Video_C_GetDesktopResolution_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution
	 */
	struct UWB_Options_Video_C_GetScreenResolution_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetUserSettings
	 */
	struct UWB_Options_Video_C_GetUserSettings_Params
	{
	public:
		class UGameUserSettings*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad
	 */
	struct UWB_Options_Video_C_GetIsGamepad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget
	 */
	struct UWB_Options_Video_C_ScrollToCurrentlyFocusedWidget_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.NavToBackButton
	 */
	struct UWB_Options_Video_C_NavToBackButton_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons
	 */
	struct UWB_Options_Video_C_NavToOptionsButtons_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons
	 */
	struct UWB_Options_Video_C_NavToTextButtons_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown
	 */
	struct UWB_Options_Video_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ActivateWidget
	 */
	struct UWB_Options_Video_C_ActivateWidget_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched
	 */
	struct UWB_Options_Video_C_OnInputSwitched_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.CheckFocus
	 */
	struct UWB_Options_Video_C_CheckFocus_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ClickBack
	 */
	struct UWB_Options_Video_C_ClickBack_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance
	 */
	struct UWB_Options_Video_C_SetGamepadAppearance_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget
	 */
	struct UWB_Options_Video_C_HandleRemoveWidget_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset
	 */
	struct UWB_Options_Video_C_OnConfirmReset_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues
	 */
	struct UWB_Options_Video_C_SetDefaultValues_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings
	 */
	struct UWB_Options_Video_C_InitializeVideoSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetupButtons
	 */
	struct UWB_Options_Video_C_SetupButtons_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.CheckSettings
	 */
	struct UWB_Options_Video_C_CheckSettings_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.SetSavedValues
	 */
	struct UWB_Options_Video_C_SetSavedValues_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest
	 */
	struct UWB_Options_Video_C_OnCancelRequest_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature_Params
	{
	public:
		class FName                                                StateName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UWB_Options_Video_C_BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video
	 */
	struct UWB_Options_Video_C_ExecuteUbergraph_WB_Options_Video_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature
	 */
	struct UWB_Options_Video_C_OnClicked_Back__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
