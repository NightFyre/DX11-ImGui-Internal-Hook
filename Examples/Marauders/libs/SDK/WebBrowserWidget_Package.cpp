/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");
		
		UWebBrowser_OnUrlChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");
		
		UWebBrowser_OnBeforePopup__DelegateSignature_Params params {};
		params.URL = URL;
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::LoadURL(const class FString& NewURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");
		
		UWebBrowser_LoadURL_Params params {};
		params.NewURL = NewURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Contents                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DummyURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");
		
		UWebBrowser_LoadString_Params params {};
		params.Contents = Contents;
		params.DummyURL = DummyURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetUrl
	 * 		Flags  -> ()
	 */
	class FString UWebBrowser::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");
		
		UWebBrowser_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetTitleText
	 * 		Flags  -> ()
	 */
	class FText UWebBrowser::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");
		
		UWebBrowser_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.ExecuteJavascript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ScriptText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::ExecuteJavascript(const class FString& ScriptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");
		
		UWebBrowser_ExecuteJavascript_Params params {};
		params.ScriptText = ScriptText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebBrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebBrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWebBrowserAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebBrowserAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowserAssetManager");
		return ptr;
	}

}


