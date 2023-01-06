#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function WebUI.WebUI_C.IsInLoadingScreen
	 */
	struct UWebUI_C_IsInLoadingScreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.IsBrowserVisible
	 */
	struct UWebUI_C_IsBrowserVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.Refresh
	 */
	struct UWebUI_C_Refresh_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.Percent
	 */
	struct UWebUI_C_Percent_Params
	{
	public:
		float                                                      Fraction;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WebUI.WebUI_C.Default
	 */
	struct UWebUI_C_Default_Params
	{
	public:
		struct FSlateBrush                                         Image;                                                   // 0x0000(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WebUI.WebUI_C.ExecuteScript
	 */
	struct UWebUI_C_ExecuteScript_Params
	{
	public:
		class FString                                              Script;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bHUD;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.ShowRenderTarget
	 */
	struct UWebUI_C_ShowRenderTarget_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WebUI.WebUI_C.HideRenderTarget
	 */
	struct UWebUI_C_HideRenderTarget_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.ShowBrowser
	 */
	struct UWebUI_C_ShowBrowser_Params
	{
	public:
		bool                                                       bHUD;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.HideBrowser
	 */
	struct UWebUI_C_HideBrowser_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.LoadScript
	 */
	struct UWebUI_C_LoadScript_Params
	{
	public:
		class FString                                              File;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bHUD;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.ShowLoadingScreen
	 */
	struct UWebUI_C_ShowLoadingScreen_Params
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Image;                                                   // 0x0010(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WebUI.WebUI_C.HideLoadingScreen
	 */
	struct UWebUI_C_HideLoadingScreen_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.FadeLoadingScreen
	 */
	struct UWebUI_C_FadeLoadingScreen_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WebUI.WebUI_C.FocusBrowser
	 */
	struct UWebUI_C_FocusBrowser_Params
	{
	public:
		bool                                                       bHUD;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResetMousePosition;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WebUI.WebUI_C.UnfocusBrowser
	 */
	struct UWebUI_C_UnfocusBrowser_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.RefreshBrowser
	 */
	struct UWebUI_C_RefreshBrowser_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.Construct
	 */
	struct UWebUI_C_Construct_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.Tick
	 */
	struct UWebUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WebUI.WebUI_C.SetOverlayOpacity
	 */
	struct UWebUI_C_SetOverlayOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WebUI.WebUI_C.ActivateLogo
	 */
	struct UWebUI_C_ActivateLogo_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.ActivateMenu
	 */
	struct UWebUI_C_ActivateMenu_Params
	{	};

	/**
	 * Function WebUI.WebUI_C.ExecuteUbergraph_WebUI
	 */
	struct UWebUI_C_ExecuteUbergraph_WebUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0LT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
