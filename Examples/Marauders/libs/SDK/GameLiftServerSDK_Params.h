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
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.UpdatePlayerSessionCreationPolicy
	 */
	struct UGameLiftServerFunctionLibrary_UpdatePlayerSessionCreationPolicy_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4CYY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerSessionCreationPolicyServer                         policy;                                                  // 0x0018(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StopMatchBackfill
	 */
	struct UGameLiftServerFunctionLibrary_StopMatchBackfill_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AMWZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStopMatchBackfillRequest                           StopMatchBackfillRequest;                                // 0x0018(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.StartMatchBackfill
	 */
	struct UGameLiftServerFunctionLibrary_StartMatchBackfill_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SW4C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStartMatchBackfillRequestServer                    StartMatchBackfillRequestServer;                         // 0x0018(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FStartMatchBackfillResultServer                     ReturnValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.RemovePlayerSession
	 */
	struct UGameLiftServerFunctionLibrary_RemovePlayerSession_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RP2C[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerSessionId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessReady
	 */
	struct UGameLiftServerFunctionLibrary_ProcessReady_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N5AC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProcessParameters*                                  ProcessParameters;                                       // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ProcessEnding
	 */
	struct UGameLiftServerFunctionLibrary_ProcessEnding_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HKXW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.InitSDK
	 */
	struct UGameLiftServerFunctionLibrary_InitSDK_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U47X[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetTerminationTime
	 */
	struct UGameLiftServerFunctionLibrary_GetTerminationTime_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y7MC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                                           ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetSdkVersion
	 */
	struct UGameLiftServerFunctionLibrary_GetSdkVersion_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VGT7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetInstanceCertificate
	 */
	struct UGameLiftServerFunctionLibrary_GetInstanceCertificate_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OON7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGetInstanceCertificateResult                       ReturnValue;                                             // 0x0018(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.GetGameSessionId
	 */
	struct UGameLiftServerFunctionLibrary_GetGameSessionId_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FWF9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.Destroy
	 */
	struct UGameLiftServerFunctionLibrary_Destroy_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6EX9[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.DescribePlayerSessions
	 */
	struct UGameLiftServerFunctionLibrary_DescribePlayerSessions_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XF9P[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDescribePlayerSessionsRequestServer                DescribePlayerSessionsRequest;                           // 0x0018(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDescribePlayerSessionsResultServer                 ReturnValue;                                             // 0x0070(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.ActivateGameSession
	 */
	struct UGameLiftServerFunctionLibrary_ActivateGameSession_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XMPE[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.GameLiftServerFunctionLibrary.AcceptPlayerSession
	 */
	struct UGameLiftServerFunctionLibrary_AcceptPlayerSession_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftServerError                                       errorType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G7K5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerSessionId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ProcessParameters.UpdateGameSession
	 */
	struct UProcessParameters_UpdateGameSession_Params
	{
	public:
		struct FUpdateGameSessionServer                            UpdateGameSession;                                       // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ProcessParameters.StartGameSession
	 */
	struct UProcessParameters_StartGameSession_Params
	{
	public:
		struct FAWSGameSessionServer                               GameSession;                                             // 0x0000(0x0090)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ProcessParameters.ProcessTerminate
	 */
	struct UProcessParameters_ProcessTerminate_Params
	{	};

	/**
	 * Function GameLiftServerSDK.ProcessParameters.HealthCheck
	 */
	struct UProcessParameters_HealthCheck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ServerHelper.ServerIPAndPort
	 */
	struct UServerHelper_ServerIPAndPort_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ip;                                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ServerHelper.QuitServer
	 */
	struct UServerHelper_QuitServer_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftServerSDK.ServerHelper.LogFilePath
	 */
	struct UServerHelper_LogFilePath_Params
	{
	public:
		class FString                                              LogFilePath;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
