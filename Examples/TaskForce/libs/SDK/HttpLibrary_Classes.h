#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class HttpLibrary.HttpLibraryBinaryRequest
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UHttpLibraryBinaryRequest : public UObject
	{
	public:
		unsigned char                                              UnknownData_J2AR[0x110];                                 // 0x0028(0x0110) MISSED OFFSET (PADDING)

	public:
		bool SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method);
		bool SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method);
		bool IsRunning();
		bool IsComplete();
		bool Cancel();
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryGetRequestCallbackProxy
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UHttpLibraryGetRequestCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ7R[0xF0];                                  // 0x0048(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UHttpLibraryGetRequestCallbackProxy* STATIC_CreateProxyObjectForGet(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers);
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHttpLibraryHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetHttpTimeout(float Timeout);
		bool STATIC_IsHttpEnabled();
		float STATIC_GetHttpTimeout();
		class FString STATIC_GetContentType(EHttpLibraryContentType ContentType);
		EHttpLibraryContentType STATIC_FindContentType(const class FString& ContentType);
		TArray<unsigned char> STATIC_ConvertStringToBytes(const class FString& Data);
		TArray<unsigned char> STATIC_ConvertJsonToBytes(const struct FJsonLibraryValue& Data);
		class FString STATIC_ConvertBytesToString(TArray<unsigned char> Data);
		struct FJsonLibraryValue STATIC_ConvertBytesToJson(TArray<unsigned char> Data);
		class UHttpLibraryRequest* STATIC_ConstructHttpRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress);
		class UHttpLibraryRequest* STATIC_ConstructHttpRequest(const class FScriptDelegate& Response);
		class UHttpLibraryJsonRequest* STATIC_ConstructHttpJsonRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress);
		class UHttpLibraryJsonRequest* STATIC_ConstructHttpJsonRequest(const class FScriptDelegate& Response);
		class UHttpLibraryBinaryRequest* STATIC_ConstructHttpBinaryRequestWithProgress(const class FScriptDelegate& Response, const class FScriptDelegate& Progress);
		class UHttpLibraryBinaryRequest* STATIC_ConstructHttpBinaryRequest(const class FScriptDelegate& Response);
		class FString STATIC_AppendQueryString(const class FString& URL, TMap<class FString, class FString> QueryString);
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryJsonRequest
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UHttpLibraryJsonRequest : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZHS0[0x110];                                 // 0x0028(0x0110) MISSED OFFSET (PADDING)

	public:
		bool SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method);
		bool SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method);
		bool IsRunning();
		bool IsComplete();
		bool Cancel();
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryPostRequestCallbackProxy
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UHttpLibraryPostRequestCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6H5[0xF0];                                  // 0x0048(0x00F0) MISSED OFFSET (PADDING)

	public:
		class UHttpLibraryPostRequestCallbackProxy* STATIC_CreateProxyObjectForPost(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryRequest
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UHttpLibraryRequest : public UObject
	{
	public:
		unsigned char                                              UnknownData_HOB8[0x110];                                 // 0x0028(0x0110) MISSED OFFSET (PADDING)

	public:
		bool SendString(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const class FString& Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool SendJSON(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, const struct FJsonLibraryValue& Content, EHttpLibraryRequestMethod Method);
		bool SendBinary(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType, EHttpLibraryRequestMethod Method);
		bool Send(const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, EHttpLibraryRequestMethod Method);
		bool IsRunning();
		bool IsComplete();
		bool Cancel();
		static UClass* StaticClass();
	};

	/**
	 * Class HttpLibrary.HttpLibraryRequestCallbackProxy
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UHttpLibraryRequestCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProgress;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MK3A[0xF8];                                  // 0x0058(0x00F8) MISSED OFFSET (PADDING)

	public:
		class UHttpLibraryRequestCallbackProxy* STATIC_CreateProxyObjectForRequest(EHttpLibraryRequestMethod Method, const class FString& URL, TMap<class FString, class FString> QueryString, TMap<class FString, class FString> Headers, TArray<unsigned char> Content, EHttpLibraryContentType ContentType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
