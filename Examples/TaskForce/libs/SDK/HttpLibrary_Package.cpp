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
	 * 		RVA    -> 0x003F4910
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.SendString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryBinaryRequest::SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.SendString");
		
		UHttpLibraryBinaryRequest_SendString_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4620
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.SendJSON
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Content                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryBinaryRequest::SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.SendJSON");
		
		UHttpLibraryBinaryRequest_SendJSON_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4310
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.SendBinary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryBinaryRequest::SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.SendBinary");
		
		UHttpLibraryBinaryRequest_SendBinary_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F40B0
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.Send
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryBinaryRequest::Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.Send");
		
		UHttpLibraryBinaryRequest_Send_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4080
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryBinaryRequest::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.IsRunning");
		
		UHttpLibraryBinaryRequest_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4020
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.IsComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryBinaryRequest::IsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.IsComplete");
		
		UHttpLibraryBinaryRequest_IsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2C80
	 * 		Name   -> Function HttpLibrary.HttpLibraryBinaryRequest.Cancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHttpLibraryBinaryRequest::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryBinaryRequest.Cancel");
		
		UHttpLibraryBinaryRequest_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryBinaryRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryBinaryRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryBinaryRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F36E0
	 * 		Name   -> Function HttpLibrary.HttpLibraryGetRequestCallbackProxy.CreateProxyObjectForGet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryGetRequestCallbackProxy* UHttpLibraryGetRequestCallbackProxy::STATIC_CreateProxyObjectForGet(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryGetRequestCallbackProxy.CreateProxyObjectForGet");
		
		UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryGetRequestCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryGetRequestCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryGetRequestCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4C00
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.SetHttpTimeout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHttpLibraryHelpers::STATIC_SetHttpTimeout(float Timeout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.SetHttpTimeout");
		
		UHttpLibraryHelpers_SetHttpTimeout_Params params {};
		params.Timeout = Timeout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4050
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.IsHttpEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UHttpLibraryHelpers::STATIC_IsHttpEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.IsHttpEnabled");
		
		UHttpLibraryHelpers_IsHttpEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3FF0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.GetHttpTimeout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UHttpLibraryHelpers::STATIC_GetHttpTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.GetHttpTimeout");
		
		UHttpLibraryHelpers_GetHttpTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3F30
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.GetContentType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHttpLibraryHelpers::STATIC_GetContentType(EHttpLibraryContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.GetContentType");
		
		UHttpLibraryHelpers_GetContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3E90
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.FindContentType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHttpLibraryContentType UHttpLibraryHelpers::STATIC_FindContentType(const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.FindContentType");
		
		UHttpLibraryHelpers_FindContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3600
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConvertStringToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UHttpLibraryHelpers::STATIC_ConvertStringToBytes(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConvertStringToBytes");
		
		UHttpLibraryHelpers_ConvertStringToBytes_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F34F0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConvertJsonToBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FJsonLibraryValue                           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UHttpLibraryHelpers::STATIC_ConvertJsonToBytes(const struct FJsonLibraryValue& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConvertJsonToBytes");
		
		UHttpLibraryHelpers_ConvertJsonToBytes_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3400
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UHttpLibraryHelpers::STATIC_ConvertBytesToString(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToString");
		
		UHttpLibraryHelpers_ConvertBytesToString_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F32E0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToJson
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UHttpLibraryHelpers::STATIC_ConvertBytesToJson(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToJson");
		
		UHttpLibraryHelpers_ConvertBytesToJson_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3190
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequestWithProgress
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Progress                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryRequest* UHttpLibraryHelpers::STATIC_ConstructHttpRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequestWithProgress");
		
		UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Params params {};
		params.Response = Response;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F30D0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryRequest* UHttpLibraryHelpers::STATIC_ConstructHttpRequest(const class FScriptDelegate& Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequest");
		
		UHttpLibraryHelpers_ConstructHttpRequest_Params params {};
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2F80
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequestWithProgress
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Progress                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryJsonRequest* UHttpLibraryHelpers::STATIC_ConstructHttpJsonRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequestWithProgress");
		
		UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Params params {};
		params.Response = Response;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2EC0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryJsonRequest* UHttpLibraryHelpers::STATIC_ConstructHttpJsonRequest(const class FScriptDelegate& Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequest");
		
		UHttpLibraryHelpers_ConstructHttpJsonRequest_Params params {};
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2D70
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequestWithProgress
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Progress                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryBinaryRequest* UHttpLibraryHelpers::STATIC_ConstructHttpBinaryRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequestWithProgress");
		
		UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Params params {};
		params.Response = Response;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2CB0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Response                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryBinaryRequest* UHttpLibraryHelpers::STATIC_ConstructHttpBinaryRequest(const class FScriptDelegate& Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequest");
		
		UHttpLibraryHelpers_ConstructHttpBinaryRequest_Params params {};
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2AF0
	 * 		Name   -> Function HttpLibrary.HttpLibraryHelpers.AppendQueryString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UHttpLibraryHelpers::STATIC_AppendQueryString(const class FString& URL, TMap<class FString, class FString> QueryString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryHelpers.AppendQueryString");
		
		UHttpLibraryHelpers_AppendQueryString_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4910
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.SendString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryJsonRequest::SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.SendString");
		
		UHttpLibraryJsonRequest_SendString_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4620
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.SendJSON
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Content                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryJsonRequest::SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.SendJSON");
		
		UHttpLibraryJsonRequest_SendJSON_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4310
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.SendBinary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryJsonRequest::SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.SendBinary");
		
		UHttpLibraryJsonRequest_SendBinary_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F40B0
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.Send
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryJsonRequest::Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.Send");
		
		UHttpLibraryJsonRequest_Send_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4080
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryJsonRequest::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.IsRunning");
		
		UHttpLibraryJsonRequest_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4020
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.IsComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryJsonRequest::IsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.IsComplete");
		
		UHttpLibraryJsonRequest_IsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2C80
	 * 		Name   -> Function HttpLibrary.HttpLibraryJsonRequest.Cancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHttpLibraryJsonRequest::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryJsonRequest.Cancel");
		
		UHttpLibraryJsonRequest_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryJsonRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryJsonRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryJsonRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F38F0
	 * 		Name   -> Function HttpLibrary.HttpLibraryPostRequestCallbackProxy.CreateProxyObjectForPost
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Content                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryPostRequestCallbackProxy* UHttpLibraryPostRequestCallbackProxy::STATIC_CreateProxyObjectForPost(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryPostRequestCallbackProxy.CreateProxyObjectForPost");
		
		UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryPostRequestCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryPostRequestCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryPostRequestCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4910
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.SendString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryRequest::SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.SendString");
		
		UHttpLibraryRequest_SendString_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4620
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.SendJSON
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FJsonLibraryValue                           Content                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryRequest::SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.SendJSON");
		
		UHttpLibraryRequest_SendJSON_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4310
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.SendBinary
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryRequest::SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.SendBinary");
		
		UHttpLibraryRequest_SendBinary_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F40B0
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.Send
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHttpLibraryRequest::Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.Send");
		
		UHttpLibraryRequest_Send_Params params {};
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4080
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryRequest::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.IsRunning");
		
		UHttpLibraryRequest_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F4020
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.IsComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHttpLibraryRequest::IsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.IsComplete");
		
		UHttpLibraryRequest_IsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F2C80
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequest.Cancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UHttpLibraryRequest::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequest.Cancel");
		
		UHttpLibraryRequest_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryRequest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003F3B80
	 * 		Name   -> Function HttpLibrary.HttpLibraryRequestCallbackProxy.CreateProxyObjectForRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EHttpLibraryRequestMethod                          Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 QueryString                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EHttpLibraryContentType                            ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHttpLibraryRequestCallbackProxy* UHttpLibraryRequestCallbackProxy::STATIC_CreateProxyObjectForRequest(EHttpLibraryRequestMethod Method, const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HttpLibrary.HttpLibraryRequestCallbackProxy.CreateProxyObjectForRequest");
		
		UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Params params {};
		params.Method = Method;
		params.URL = URL;
		params.QueryString = QueryString;
		params.Headers = Headers;
		params.Content = Content;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHttpLibraryRequestCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHttpLibraryRequestCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HttpLibrary.HttpLibraryRequestCallbackProxy");
		return ptr;
	}

}


