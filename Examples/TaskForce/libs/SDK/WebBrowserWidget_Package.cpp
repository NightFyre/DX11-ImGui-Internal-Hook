/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
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
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
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
	 * 		RVA    -> 0x00403160
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00402FF0
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.LoadString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00402F70
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UWebBrowser::GetURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetURL");
		
		UWebBrowser_GetURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00402ED0
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.GetTitleText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UWebBrowser::GetTitleText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");
		
		UWebBrowser_GetTitleText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00402E30
	 * 		Name   -> Function WebBrowserWidget.WebBrowser.ExecuteJavaScript
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ScriptText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWebBrowser::ExecuteJavaScript(const class FString& ScriptText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavaScript");
		
		UWebBrowser_ExecuteJavaScript_Params params {};
		params.ScriptText = ScriptText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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


