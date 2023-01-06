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
	 * Function HttpLibrary.HttpLibraryBinaryRequest.SendString
	 */
	struct UHttpLibraryBinaryRequest_SendString_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Content;                                                 // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.SendJSON
	 */
	struct UHttpLibraryBinaryRequest_SendJSON_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.SendBinary
	 */
	struct UHttpLibraryBinaryRequest_SendBinary_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.Send
	 */
	struct UHttpLibraryBinaryRequest_Send_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.IsRunning
	 */
	struct UHttpLibraryBinaryRequest_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.IsComplete
	 */
	struct UHttpLibraryBinaryRequest_IsComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryBinaryRequest.Cancel
	 */
	struct UHttpLibraryBinaryRequest_Cancel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryGetRequestCallbackProxy.CreateProxyObjectForGet
	 */
	struct UHttpLibraryGetRequestCallbackProxy_CreateProxyObjectForGet_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class UHttpLibraryGetRequestCallbackProxy*                 ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.SetHttpTimeout
	 */
	struct UHttpLibraryHelpers_SetHttpTimeout_Params
	{
	public:
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.IsHttpEnabled
	 */
	struct UHttpLibraryHelpers_IsHttpEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.GetHttpTimeout
	 */
	struct UHttpLibraryHelpers_GetHttpTimeout_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.GetContentType
	 */
	struct UHttpLibraryHelpers_GetContentType_Params
	{
	public:
		EHttpLibraryContentType                                    ContentType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8XV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.FindContentType
	 */
	struct UHttpLibraryHelpers_FindContentType_Params
	{
	public:
		class FString                                              ContentType;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConvertStringToBytes
	 */
	struct UHttpLibraryHelpers_ConvertStringToBytes_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConvertJsonToBytes
	 */
	struct UHttpLibraryHelpers_ConvertJsonToBytes_Params
	{
	public:
		struct FJsonLibraryValue                                   Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToString
	 */
	struct UHttpLibraryHelpers_ConvertBytesToString_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConvertBytesToJson
	 */
	struct UHttpLibraryHelpers_ConvertBytesToJson_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequestWithProgress
	 */
	struct UHttpLibraryHelpers_ConstructHttpRequestWithProgress_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Progress;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryRequest*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpRequest
	 */
	struct UHttpLibraryHelpers_ConstructHttpRequest_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryRequest*                                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequestWithProgress
	 */
	struct UHttpLibraryHelpers_ConstructHttpJsonRequestWithProgress_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Progress;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryJsonRequest*                             ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpJsonRequest
	 */
	struct UHttpLibraryHelpers_ConstructHttpJsonRequest_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryJsonRequest*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequestWithProgress
	 */
	struct UHttpLibraryHelpers_ConstructHttpBinaryRequestWithProgress_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Progress;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryBinaryRequest*                           ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.ConstructHttpBinaryRequest
	 */
	struct UHttpLibraryHelpers_ConstructHttpBinaryRequest_Params
	{
	public:
		class FScriptDelegate                                      Response;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UHttpLibraryBinaryRequest*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryHelpers.AppendQueryString
	 */
	struct UHttpLibraryHelpers_AppendQueryString_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.SendString
	 */
	struct UHttpLibraryJsonRequest_SendString_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Content;                                                 // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.SendJSON
	 */
	struct UHttpLibraryJsonRequest_SendJSON_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.SendBinary
	 */
	struct UHttpLibraryJsonRequest_SendBinary_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.Send
	 */
	struct UHttpLibraryJsonRequest_Send_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.IsRunning
	 */
	struct UHttpLibraryJsonRequest_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.IsComplete
	 */
	struct UHttpLibraryJsonRequest_IsComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryJsonRequest.Cancel
	 */
	struct UHttpLibraryJsonRequest_Cancel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryPostRequestCallbackProxy.CreateProxyObjectForPost
	 */
	struct UHttpLibraryPostRequestCallbackProxy_CreateProxyObjectForPost_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UHttpLibraryPostRequestCallbackProxy*                ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.SendString
	 */
	struct UHttpLibraryRequest_SendString_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Content;                                                 // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.SendJSON
	 */
	struct UHttpLibraryRequest_SendJSON_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.SendBinary
	 */
	struct UHttpLibraryRequest_SendBinary_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Content;                                                 // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00C1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.Send
	 */
	struct UHttpLibraryRequest_Send_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0060(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.IsRunning
	 */
	struct UHttpLibraryRequest_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.IsComplete
	 */
	struct UHttpLibraryRequest_IsComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequest.Cancel
	 */
	struct UHttpLibraryRequest_Cancel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HttpLibrary.HttpLibraryRequestCallbackProxy.CreateProxyObjectForRequest
	 */
	struct UHttpLibraryRequestCallbackProxy_CreateProxyObjectForRequest_Params
	{
	public:
		EHttpLibraryRequestMethod                                  Method;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4CJX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              URL;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         QueryString;                                             // 0x0018(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         Headers;                                                 // 0x0068(0x0050)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      Content;                                                 // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		EHttpLibraryContentType                                    ContentType;                                             // 0x00C8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0H51[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHttpLibraryRequestCallbackProxy*                    ReturnValue;                                             // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
