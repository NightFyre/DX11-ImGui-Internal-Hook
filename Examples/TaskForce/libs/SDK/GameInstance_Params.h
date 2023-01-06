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
	 * Function GameInstance.GameInstance_C.StartBackgroundMusic
	 */
	struct UGameInstance_C_StartBackgroundMusic_Params
	{
	public:
		class FScriptDelegate                                      Replay;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		float                                                      Volume;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.ReplayBackgroundMusic
	 */
	struct UGameInstance_C_ReplayBackgroundMusic_Params
	{
	public:
		class FScriptDelegate                                      Replay;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameInstance.GameInstance_C.PlayLogoAnimation
	 */
	struct UGameInstance_C_PlayLogoAnimation_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.StringArrayToInt64Array
	 */
	struct UGameInstance_C_StringArrayToInt64Array_Params
	{
	public:
		struct FJsonLibraryList                                    Users;                                                   // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int64_t>                                            SteamIDs;                                                // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function GameInstance.GameInstance_C.LoadMenu
	 */
	struct UGameInstance_C_LoadMenu_Params
	{
	public:
		class UWebInterface*                                       Menu;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.LoadHUD
	 */
	struct UGameInstance_C_LoadHUD_Params
	{
	public:
		class UWebInterface*                                       HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.CreateInterface
	 */
	struct UGameInstance_C_CreateInterface_Params
	{
	public:
		class UWebInterface*                                       Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWebInterface*                                       HUD;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.CreateDiscord
	 */
	struct UGameInstance_C_CreateDiscord_Params
	{
	public:
		class FScriptDelegate                                      OnJoin;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      OnJoinRequest;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_2E881757433C96B2B6C0889453997A7E
	 */
	struct UGameInstance_C_OnFailure_2E881757433C96B2B6C0889453997A7E_Params
	{
	public:
		TArray<unsigned char>                                      Response;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EHttpLibraryContentType                                    ContentType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_65HP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    StatusCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesSent;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesReceived;                                           // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnProgress_2E881757433C96B2B6C0889453997A7E
	 */
	struct UGameInstance_C_OnProgress_2E881757433C96B2B6C0889453997A7E_Params
	{
	public:
		TArray<unsigned char>                                      Response;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EHttpLibraryContentType                                    ContentType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52GV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    StatusCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesSent;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesReceived;                                           // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_2E881757433C96B2B6C0889453997A7E
	 */
	struct UGameInstance_C_OnSuccess_2E881757433C96B2B6C0889453997A7E_Params
	{
	public:
		TArray<unsigned char>                                      Response;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		EHttpLibraryContentType                                    ContentType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9NMC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    StatusCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesSent;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BytesReceived;                                           // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_274D3B3547CA4840B66A16BA981AAE01
	 */
	struct UGameInstance_C_OnFailure_274D3B3547CA4840B66A16BA981AAE01_Params
	{
	public:
		struct FJsonLibraryObject                                  Leaderboard;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_274D3B3547CA4840B66A16BA981AAE01
	 */
	struct UGameInstance_C_OnSuccess_274D3B3547CA4840B66A16BA981AAE01_Params
	{
	public:
		struct FJsonLibraryObject                                  Leaderboard;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_569004EB42568F4A3DF9E6B9B1347237
	 */
	struct UGameInstance_C_OnFailure_569004EB42568F4A3DF9E6B9B1347237_Params
	{
	public:
		struct FJsonLibraryObject                                  Leaderboard;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_569004EB42568F4A3DF9E6B9B1347237
	 */
	struct UGameInstance_C_OnSuccess_569004EB42568F4A3DF9E6B9B1347237_Params
	{
	public:
		struct FJsonLibraryObject                                  Leaderboard;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_586FE2974B4246A54F3D0682A8E17CA3
	 */
	struct UGameInstance_C_OnFailure_586FE2974B4246A54F3D0682A8E17CA3_Params
	{
	public:
		int32_t                                                    CurrentPlayers;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_586FE2974B4246A54F3D0682A8E17CA3
	 */
	struct UGameInstance_C_OnSuccess_586FE2974B4246A54F3D0682A8E17CA3_Params
	{
	public:
		int32_t                                                    CurrentPlayers;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_E01D25D4437511AE1B409FAD0579C20B
	 */
	struct UGameInstance_C_OnFailure_E01D25D4437511AE1B409FAD0579C20B_Params
	{
	public:
		struct FJsonLibraryObject                                  Stats;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_E01D25D4437511AE1B409FAD0579C20B
	 */
	struct UGameInstance_C_OnSuccess_E01D25D4437511AE1B409FAD0579C20B_Params
	{
	public:
		struct FJsonLibraryObject                                  Stats;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515
	 */
	struct UGameInstance_C_OnFailure_24492C2A4A0BB3EEF1280B8C4EEF2515_Params
	{
	public:
		struct FJsonLibraryObject                                  Stats;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515
	 */
	struct UGameInstance_C_OnSuccess_24492C2A4A0BB3EEF1280B8C4EEF2515_Params
	{
	public:
		struct FJsonLibraryObject                                  Stats;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnFailure_F41B63974E2B94C3188FD7998AB5C7A8
	 */
	struct UGameInstance_C_OnFailure_F41B63974E2B94C3188FD7998AB5C7A8_Params
	{
	public:
		TArray<struct FWorkshopItem>                               Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    Page;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Matches;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCached;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWorkshopResult                                            Result;                                                  // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8
	 */
	struct UGameInstance_C_OnSuccess_F41B63974E2B94C3188FD7998AB5C7A8_Params
	{
	public:
		TArray<struct FWorkshopItem>                               Items;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    Page;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Matches;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCached;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWorkshopResult                                            Result;                                                  // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.ReceiveOnStart
	 */
	struct UGameInstance_C_ReceiveOnStart_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.OnBroadcast
	 */
	struct UGameInstance_C_OnBroadcast_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FJsonLibraryValue                                   Data;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		//struct FWebInterfaceCallback                               Callback;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordInit
	 */
	struct UGameInstance_C_OnDiscordInit_Params
	{
	public:
		class FString                                              DiscordAppID;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SteamAppID;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordShutdown
	 */
	struct UGameInstance_C_OnDiscordShutdown_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordCallbacks
	 */
	struct UGameInstance_C_OnDiscordCallbacks_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordPresence
	 */
	struct UGameInstance_C_OnDiscordPresence_Params
	{
	public:
		struct FDiscordRichPresence                                Presence;                                                // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordJoinRequest
	 */
	struct UGameInstance_C_OnDiscordJoinRequest_Params
	{
	public:
		struct FDiscordJoinRequestData                             joinRequest;                                             // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordRespond
	 */
	struct UGameInstance_C_OnDiscordRespond_Params
	{
	public:
		class FString                                              DiscordUserID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bAccept;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnDiscordJoin
	 */
	struct UGameInstance_C_OnDiscordJoin_Params
	{
	public:
		class FString                                              joinSecret;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnBroadcastHUD
	 */
	struct UGameInstance_C_OnBroadcastHUD_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FJsonLibraryValue                                   Data;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		//struct FWebInterfaceCallback                               Callback;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnBroadcastShared
	 */
	struct UGameInstance_C_OnBroadcastShared_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FJsonLibraryValue                                   Data;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		//struct FWebInterfaceCallback                               Callback;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GameInstance.GameInstance_C.OnMenu
	 */
	struct UGameInstance_C_OnMenu_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.ReceiveOnBackgroundMusic
	 */
	struct UGameInstance_C_ReceiveOnBackgroundMusic_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.OnReplay
	 */
	struct UGameInstance_C_OnReplay_Params
	{	};

	/**
	 * Function GameInstance.GameInstance_C.ExecuteUbergraph_GameInstance
	 */
	struct UGameInstance_C_ExecuteUbergraph_GameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D63D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
