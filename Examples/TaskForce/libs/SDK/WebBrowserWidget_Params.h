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
	 * DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 */
	struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	 */
	struct UWebBrowser_OnBeforePopup__DelegateSignature_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Frame;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.LoadURL
	 */
	struct UWebBrowser_LoadURL_Params
	{
	public:
		class FString                                              NewURL;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.LoadString
	 */
	struct UWebBrowser_LoadString_Params
	{
	public:
		class FString                                              Contents;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DummyURL;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.GetURL
	 */
	struct UWebBrowser_GetURL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.GetTitleText
	 */
	struct UWebBrowser_GetTitleText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WebBrowserWidget.WebBrowser.ExecuteJavaScript
	 */
	struct UWebBrowser_ExecuteJavaScript_Params
	{
	public:
		class FString                                              ScriptText;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
