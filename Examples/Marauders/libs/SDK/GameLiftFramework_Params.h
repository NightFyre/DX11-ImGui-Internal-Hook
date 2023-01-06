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
	 * Function GameLiftFramework.GameLiftGameInstance.SetPlayerSessionId
	 */
	struct UGameLiftGameInstance_SetPlayerSessionId_Params
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.ServerTravel
	 */
	struct UGameLiftGameInstance_ServerTravel_Params
	{
	public:
		class FString                                              TravelURL;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.QuitGame
	 */
	struct UGameLiftGameInstance_QuitGame_Params
	{	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.OnUpdateGameSession
	 */
	struct UGameLiftGameInstance_OnUpdateGameSession_Params
	{
	public:
		class FString                                              UpdateGameSession;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.OnStartGameSession
	 */
	struct UGameLiftGameInstance_OnStartGameSession_Params
	{	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.HandleProcessTermination
	 */
	struct UGameLiftGameInstance_HandleProcessTermination_Params
	{	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.HandleGameSessionUpdate
	 */
	struct UGameLiftGameInstance_HandleGameSessionUpdate_Params
	{	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.GetPlayerSessionId
	 */
	struct UGameLiftGameInstance_GetPlayerSessionId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.GetMaxPlayerSessionCount
	 */
	struct UGameLiftGameInstance_GetMaxPlayerSessionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClientCompenent
	 */
	struct UGameLiftGameInstance_GetGameLiftClientCompenent_Params
	{
	public:
		class UGameLiftClientCompenent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer
	 */
	struct AGameLiftPlayerController_ServerRemovePlayer_Params
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer
	 */
	struct AGameLiftPlayerController_ServerAcceptPlayer_Params
	{
	public:
		class FString                                              PlayerSessionId;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.CreateGameSessionAsyncTask.CreateGameSession
	 */
	struct UCreateGameSessionAsyncTask_CreateGameSession_Params
	{
	public:
		class FString                                              roomName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              aliasId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCount;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y6K5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameLiftProperty>                           Properties;                                              // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UCreateGameSessionAsyncTask*                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.CreatePlayerSessionAsyncTask.CreatePlayerSession
	 */
	struct UCreatePlayerSessionAsyncTask_CreatePlayerSession_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCreatePlayerSessionAsyncTask*                       ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty
	 */
	struct UGameLiftBPLibrary_GetGameProperty_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameLiftGameSession                                GameSession;                                             // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                Key;                                                     // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost
	 */
	struct UGameLiftBPLibrary_GetConnectHost_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameLiftGameSession                                GameSession;                                             // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand
	 */
	struct UGameLiftBPLibrary_GetConnectCommand_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Host;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerSessionId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftBPLibrary.Connect
	 */
	struct UGameLiftBPLibrary_Connect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Host;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerSessionId;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraOptions;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.StopMatchmaking
	 */
	struct UGameLiftClientCompenent_StopMatchmaking_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.StartMatchmaking
	 */
	struct UGameLiftClientCompenent_StartMatchmaking_Params
	{
	public:
		TArray<struct FGameLiftPlayer>                             players;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              TicketID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              configurationName;                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.SetUpAwsClient
	 */
	struct UGameLiftClientCompenent_SetUpAwsClient_Params
	{
	public:
		class FString                                              AccessKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              secretKey;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Region;                                                  // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              aliasId;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              fleetId;                                                 // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftScheme                                            GameLiftScheme;                                          // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.SetTestPoint
	 */
	struct UGameLiftClientCompenent_SetTestPoint_Params
	{
	public:
		class FString                                              InTestEndpoint;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.SetLocalTest
	 */
	struct UGameLiftClientCompenent_SetLocalTest_Params
	{
	public:
		bool                                                       IsLocalTest;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.SearchGameSessions
	 */
	struct UGameLiftClientCompenent_SearchGameSessions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.GetGameSessionCount
	 */
	struct UGameLiftClientCompenent_GetGameSessionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.GetGameSession
	 */
	struct UGameLiftClientCompenent_GetGameSession_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3RMI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftGameSession                                GameSession;                                             // 0x0008(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.DescribeMatchmaking
	 */
	struct UGameLiftClientCompenent_DescribeMatchmaking_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatchMakingTicketFrame                             MatchmakingTicket;                                       // 0x0010(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.CreatePlayerSession
	 */
	struct UGameLiftClientCompenent_CreatePlayerSession_Params
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.CreateGameSession
	 */
	struct UGameLiftClientCompenent_CreateGameSession_Params
	{
	public:
		class FString                                              roomName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              aliasId;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCount;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7969[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameLiftProperty>                           Properties;                                              // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.GameLiftClientCompenent.AcceptMatch
	 */
	struct UGameLiftClientCompenent_AcceptMatch_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      playerIds;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EAcceptanceTypeFrame                                       AppceptType;                                             // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLiftFramework.SearchGameSessionAsyncTask.SearchGameSession
	 */
	struct USearchGameSessionAsyncTask_SearchGameSession_Params
	{
	public:
		class USearchGameSessionAsyncTask*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
