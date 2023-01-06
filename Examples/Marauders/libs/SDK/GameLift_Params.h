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
	 * Function GameLift.GameLiftClientObject.ValidateMatchmakingRuleSet
	 */
	struct UGameLiftClientObject_ValidateMatchmakingRuleSet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ETM3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FValidateMatchmakingRuleSetRequest                  ValidateMatchmakingRuleSetRequest;                       // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FValidateMatchmakingRuleSetResult                   ValidateMatchmakingRuleSetResult;                        // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IN16[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateScript
	 */
	struct UGameLiftClientObject_UpdateScript_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U2KR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateScriptRequest                                UpdateScriptRequest;                                     // 0x0010(0x0080)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateScriptResult                                 UpdateScriptResult;                                      // 0x0090(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DZR1[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0128(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0138(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateRuntimeConfiguration
	 */
	struct UGameLiftClientObject_UpdateRuntimeConfiguration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P588[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateRuntimeConfigurationRequest                  UpdateRuntimeConfigurationRequest;                       // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateRuntimeConfigurationResult                   UpdateRuntimeConfigurationResult;                        // 0x0038(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_01HU[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0068(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateMatchmakingConfiguration
	 */
	struct UGameLiftClientObject_UpdateMatchmakingConfiguration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7R00[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateMatchmakingConfigurationRequest              UpdateMatchmakingConfigurationRequest;                   // 0x0010(0x00A0)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateMatchmakingConfigurationResult               UpdateMatchmakingConfigurationResult;                    // 0x00B0(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0178(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UXM5[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0180(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0190(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateGameSessionQueue
	 */
	struct UGameLiftClientObject_UpdateGameSessionQueue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IMZ1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateGameSessionQueueRequest                      UpdateGameSessionQueueRequest;                           // 0x0010(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateGameSessionQueueResult                       UpdateGameSessionQueueResult;                            // 0x0098(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0GTK[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0138(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0148(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateGameSession
	 */
	struct UGameLiftClientObject_UpdateGameSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QPMP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateGameSessionRequest                           UpdateGameSessionRequest;                                // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateGameSessionResult                            UpdateGameSessionResult;                                 // 0x0040(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D5C4[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0120(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0130(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateGameServerGroup
	 */
	struct UGameLiftClientObject_UpdateGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YJT2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateGameServerGroupRequest                       UpdateGameServerGroupRequest;                            // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateGameServerGroupResult                        UpdateGameServerGroupResult;                             // 0x0048(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V50O[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00E0(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00F0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateGameServer
	 */
	struct UGameLiftClientObject_UpdateGameServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FCES[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateGameServerRequest                            UpdateGameServerRequest;                                 // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateGameServerResult                             UpdateGameServerResult;                                  // 0x0048(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BJ3V[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00D0(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00E0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateFleetPortSettings
	 */
	struct UGameLiftClientObject_UpdateFleetPortSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_668O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateFleetPortSettingsRequest                     UpdateFleetPortSettingsRequest;                          // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateFleetPortSettingsResult                      UpdateFleetPortSettingsResult;                           // 0x0040(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TJ2D[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0068(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateFleetCapacity
	 */
	struct UGameLiftClientObject_UpdateFleetCapacity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YRX9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateFleetCapacityRequest                         UpdateFleetCapacityRequest;                              // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateFleetCapacityResult                          UpdateFleetCapacityResult;                               // 0x0040(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8O29[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0088(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateFleetAttributes
	 */
	struct UGameLiftClientObject_UpdateFleetAttributes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0B5T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateFleetAttributesRequest                       UpdateFleetAttributesRequest;                            // 0x0010(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateFleetAttributesResult                        UpdateFleetAttributesResult;                             // 0x0060(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PGO5[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0088(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateBuild
	 */
	struct UGameLiftClientObject_UpdateBuild_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKVK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateBuildRequest                                 UpdateBuildRequest;                                      // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FUpdateBuildResult                                  UpdateBuildResult;                                       // 0x0040(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TLX3[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00A8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00B8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UpdateAlias
	 */
	struct UGameLiftClientObject_UpdateAlias_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4DKC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftUpdateAliasRequest                         updateAliasRequest;                                      // 0x0010(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FGameLiftUpdateAliasResult                          updateAliasResult;                                       // 0x0068(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TKKO[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00E8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00F8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.UntagResource
	 */
	struct UGameLiftClientObject_UntagResource_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VL4D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftUntagResourceRequest                       untagResourceRequest;                                    // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FUntagResourceResult                                UntagResourceResult;                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SO7L[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.TagResource
	 */
	struct UGameLiftClientObject_TagResource_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_412U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftTagResourceRequest                         tagResourceRequest;                                      // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameLiftTagResourceResult                          tagResourceResult;                                       // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IX2X[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.SuspendGameServerGroup
	 */
	struct UGameLiftClientObject_SuspendGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QCXU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSuspendGameServerGroupRequest                      SuspendGameServerGroupRequest;                           // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FSuspendGameServerGroupResult                       SuspendGameServerGroupResult;                            // 0x0030(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KADG[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00D8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StopMatchmaking
	 */
	struct UGameLiftClientObject_StopMatchmaking_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2M14[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStopMatchmakingRequest                             StopMatchmakingRequest;                                  // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FStopMatchmakingResult                              StopMatchmakingResult;                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q4RU[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StopGameSessionPlacement
	 */
	struct UGameLiftClientObject_StopGameSessionPlacement_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T0SX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStopGameSessionPlacementRequest                    StopGameSessionPlacementRequest;                         // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FStopGameSessionPlacementResult                     StopGameSessionPlacementResult;                          // 0x0020(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HMSQ[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0120(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0130(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StopFleetActions
	 */
	struct UGameLiftClientObject_StopFleetActions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GD7J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStopFleetActionsRequest                            StopFleetActionsRequest;                                 // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FStopFleetActionsResult                             StopFleetActionsResult;                                  // 0x0040(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KEVG[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StartMatchmaking
	 */
	struct UGameLiftClientObject_StartMatchmaking_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VXAY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStartMatchmakingRequest                            StartMatchmakingRequest;                                 // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FStartMatchmakingResult                             StartMatchmakingResult;                                  // 0x0040(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_19AW[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0110(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0120(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StartMatchBackfill
	 */
	struct UGameLiftClientObject_StartMatchBackfill_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GGKJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStartMatchBackfillRequest                          StartMatchBackfillRequest;                               // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FStartMatchBackfillResult                           StartMatchBackfillResult;                                // 0x0050(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUXM[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0120(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0130(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StartGameSessionPlacement
	 */
	struct UGameLiftClientObject_StartGameSessionPlacement_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LZF3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStartGameSessionPlacementRequest                   StartGameSessionPlacementRequest;                        // 0x0010(0x0078)  (Parm, NativeAccessSpecifierPublic)
		struct FStartGameSessionPlacementResult                    StartGameSessionPlacementResult;                         // 0x0088(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0180(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_37KF[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0188(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0198(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.StartFleetActions
	 */
	struct UGameLiftClientObject_StartFleetActions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZH2I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStartFleetActionsRequest                           StartFleetActionsRequest;                                // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FStartFleetActionsResult                            StartFleetActionsResult;                                 // 0x0040(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YAKY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.SearchGameSessions
	 */
	struct UGameLiftClientObject_SearchGameSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RKBK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSearchGameSessionsRequest                          SearchGameSessionsRequest;                               // 0x0010(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FSearchGameSessionsResult                           SearchGameSessionsResult;                                // 0x0068(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KF4R[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ResumeGameServerGroup
	 */
	struct UGameLiftClientObject_ResumeGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MEU4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FResumeGameServerGroupRequest                       ResumeGameServerGroupRequest;                            // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FResumeGameServerGroupResult                        ResumeGameServerGroupResult;                             // 0x0030(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UFV4[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00D8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ResolveAlias
	 */
	struct UGameLiftClientObject_ResolveAlias_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A9AT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FResolveAliasRequest                                ResolveAliasRequest;                                     // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FResolveAliasResult                                 ResolveAliasResult;                                      // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1M9R[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0058(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.RequestUploadCredentials
	 */
	struct UGameLiftClientObject_RequestUploadCredentials_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZDAV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRequestUploadCredentialsRequest                    RequestUploadCredentialsRequest;                         // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FRequestUploadCredentialsResult                     RequestUploadCredentialsResult;                          // 0x0020(0x0070)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R77J[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0098(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.RegisterGameServer
	 */
	struct UGameLiftClientObject_RegisterGameServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ADWP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRegisterGameServerRequest                          RegisterGameServerRequest;                               // 0x0010(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FRegisterGameServerResult                           RegisterGameServerResult;                                // 0x0060(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UROA[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00E8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00F8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.PutScalingPolicy
	 */
	struct UGameLiftClientObject_PutScalingPolicy_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FPC6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPutScalingPolicyRequest                            PutScalingPolicyRequest;                                 // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
		struct FPutScalingPolicyResult                             PutScalingPolicyResult;                                  // 0x0050(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z9FN[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListTagsForResource
	 */
	struct UGameLiftClientObject_ListTagsForResource_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R4QP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftListTagsForResourceRequest                 listTagsForResourceRequest;                              // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGameLiftListTagsForResourceResult                  listTagsForResourceResult;                               // 0x0020(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1YRX[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListScripts
	 */
	struct UGameLiftClientObject_ListScripts_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7PTV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FListScriptsRequest                                 ListScriptsRequest;                                      // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FListScriptsResult                                  ListScriptsResult;                                       // 0x0028(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CEGT[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0060(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListGameServers
	 */
	struct UGameLiftClientObject_ListGameServers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_82Q9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FListGameServersRequest                             ListGameServersRequest;                                  // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FListGameServersResult                              ListGameServersResult;                                   // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25EP[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListGameServerGroups
	 */
	struct UGameLiftClientObject_ListGameServerGroups_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SI95[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FListGameServerGroupsRequest                        ListGameServerGroupsRequest;                             // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FListGameServerGroupsResult                         ListGameServerGroupsResult;                              // 0x0028(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZH85[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0060(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListFleets
	 */
	struct UGameLiftClientObject_ListFleets_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2ZS2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FListFleetsRequest                                  ListFleetsRequest;                                       // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FListFleetsResult                                   ListFleetsResult;                                        // 0x0048(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ELYV[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0080(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListBuilds
	 */
	struct UGameLiftClientObject_ListBuilds_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CNZK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FListBuildsRequest                                  ListBuildsRequest;                                       // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FListBuildsResult                                   ListBuildsResult;                                        // 0x0028(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DTWY[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0060(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ListAliases
	 */
	struct UGameLiftClientObject_ListAliases_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C37A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftListAliasesRequest                         listAliasesRequest;                                      // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FGameLiftListAliasesResult                          listAliasesResult;                                       // 0x0040(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FDQ6[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.GetInstanceAccess
	 */
	struct UGameLiftClientObject_GetInstanceAccess_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RMM6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetInstanceAccessRequest                           GetInstanceAccessRequest;                                // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGetInstanceAccessResult                            GetInstanceAccessResult;                                 // 0x0030(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_644O[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.GetGameSessionLogUrl
	 */
	struct UGameLiftClientObject_GetGameSessionLogUrl_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LIGG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetGameSessionLogUrlRequest                        GetGameSessionLogUrlRequest;                             // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FGetGameSessionLogUrlResult                         GetGameSessionLogUrlResult;                              // 0x0020(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ECHV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeVpcPeeringConnections
	 */
	struct UGameLiftClientObject_DescribeVpcPeeringConnections_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4VW8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeVpcPeeringConnectionsRequest               DescribeVpcPeeringConnectionsRequest;                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeVpcPeeringConnectionsResult                DescribeVpcPeeringConnectionsResult;                     // 0x0020(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0FGM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeVpcPeeringAuthorizations
	 */
	struct UGameLiftClientObject_DescribeVpcPeeringAuthorizations_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDescribeVpcPeeringAuthorizationsRequest            DescribeVpcPeeringAuthorizationsRequest;                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SNMS[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeVpcPeeringAuthorizationsResult             DescribeVpcPeeringAuthorizationsResult;                  // 0x0010(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OE6W[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeScript
	 */
	struct UGameLiftClientObject_DescribeScript_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QG4Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeScriptRequest                              DescribeScriptRequest;                                   // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeScriptResult                               DescribeScriptResult;                                    // 0x0020(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E5Z4[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00C8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeScalingPolicies
	 */
	struct UGameLiftClientObject_DescribeScalingPolicies_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LCC9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeScalingPoliciesRequest                     DescribeScalingPoliciesRequest;                          // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeScalingPoliciesResult                      DescribeScalingPoliciesResult;                           // 0x0048(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BM9Q[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0080(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeRuntimeConfiguration
	 */
	struct UGameLiftClientObject_DescribeRuntimeConfiguration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_07MW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeRuntimeConfigurationRequest                DescribeRuntimeConfigurationRequest;                     // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeRuntimeConfigurationResult                 DescribeRuntimeConfigurationResult;                      // 0x0020(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7UNH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0050(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribePlayerSessions
	 */
	struct UGameLiftClientObject_DescribePlayerSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7D30[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribePlayerSessionsRequest                      DescribePlayerSessionsRequest;                           // 0x0010(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribePlayerSessionsResult                       DescribePlayerSessionsResult;                            // 0x0068(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ABF[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeMatchmakingRuleSets
	 */
	struct UGameLiftClientObject_DescribeMatchmakingRuleSets_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WPVR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeMatchmakingRuleSetsRequest                 DescribeMatchmakingRuleSetsRequest;                      // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeMatchmakingRuleSetsResult                  DescribeMatchmakingRuleSetsResult;                       // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5QZY[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeMatchmakingConfigurations
	 */
	struct UGameLiftClientObject_DescribeMatchmakingConfigurations_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3WTT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeMatchmakingConfigurationsRequest           DescribeMatchmakingConfigurationsRequest;                // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeMatchmakingConfigurationsResult            DescribeMatchmakingConfigurationsResult;                 // 0x0048(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NB3[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0080(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeMatchmaking
	 */
	struct UGameLiftClientObject_DescribeMatchmaking_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_19X1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeMatchmakingRequest                         DescribeMatchmakingRequest;                              // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeMatchmakingResult                          DescribeMatchmakingResult;                               // 0x0020(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6D0F[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeInstances
	 */
	struct UGameLiftClientObject_DescribeInstances_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2U84[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeInstancesRequest                           DescribeInstancesRequest;                                // 0x0010(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeInstancesResult                            DescribeInstancesResult;                                 // 0x0058(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8BHQ[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0090(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameSessions
	 */
	struct UGameLiftClientObject_DescribeGameSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1PTO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameSessionsRequest                        DescribeGameSessionsRequest;                             // 0x0010(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameSessionsResult                         DescribeGameSessionsResult;                              // 0x0058(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KWHR[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0090(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameSessionQueues
	 */
	struct UGameLiftClientObject_DescribeGameSessionQueues_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9DCC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameSessionQueuesRequest                   DescribeGameSessionQueuesRequest;                        // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameSessionQueuesResult                    DescribeGameSessionQueuesResult;                         // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OAIG[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameSessionPlacement
	 */
	struct UGameLiftClientObject_DescribeGameSessionPlacement_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YACK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameSessionPlacementRequest                DescribeGameSessionPlacementRequest;                     // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameSessionPlacementResult                 DescribeGameSessionPlacementResult;                      // 0x0020(0x00F8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3EF4[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0120(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0130(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameSessionDetails
	 */
	struct UGameLiftClientObject_DescribeGameSessionDetails_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJNB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameSessionDetailsRequest                  DescribeGameSessionDetailsRequest;                       // 0x0010(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameSessionDetailsResult                   DescribeGameSessionDetailsResult;                        // 0x0058(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NDS8[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0090(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameServerInstances
	 */
	struct UGameLiftClientObject_DescribeGameServerInstances_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OYPQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameServerInstancesRequest                 DescribeGameServerInstancesRequest;                      // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameServerInstancesResult                  DescribeGameServerInstancesResult;                       // 0x0048(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QJJ2[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0080(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameServerGroup
	 */
	struct UGameLiftClientObject_DescribeGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8YKV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameServerGroupRequest                     DescribeGameServerGroupRequest;                          // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameServerGroupResult                      DescribeGameServerGroupResult;                           // 0x0020(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KUBY[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00C8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeGameServer
	 */
	struct UGameLiftClientObject_DescribeGameServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_716U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeGameServerRequest                          DescribeGameServerRequest;                               // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeGameServerResult                           DescribeGameServerResult;                                // 0x0030(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XTGH[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00C8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetUtilization
	 */
	struct UGameLiftClientObject_DescribeFleetUtilization_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OV68[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeFleetUtilizationRequest                    DescribeFleetUtilizationRequest;                         // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeFleetUtilizationResult                     DescribeFleetUtilizationResult;                          // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2JT6[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetPortSettings
	 */
	struct UGameLiftClientObject_DescribeFleetPortSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FX0N[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeFleetPortSettingsRequest                   DescribeFleetPortSettingsRequest;                        // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeFleetPortSettingsResult                    DescribeFleetPortSettingsResult;                         // 0x0030(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HDWC[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0090(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetLocationUtilization
	 */
	struct UGameLiftClientObject_DescribeFleetLocationUtilization_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKDE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAWSGameLiftDescribeFleetLocationUtilizationRequest describeFleetLocationUtilizationRequest;                 // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FAWSGameLiftDescribeFleetLocationUtilizationResult  describeFleetLocationUtilizationResult;                  // 0x0030(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SAAB[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0088(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetLocationCapacity
	 */
	struct UGameLiftClientObject_DescribeFleetLocationCapacity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MJD9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAWSGameLiftDescribeFleetLocationCapacityRequest    describeFleetLocationCapacityRequest;                    // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FAWSGameLiftDescribeFleetLocationCapacityResult     describeFleetLocationCapacityResult;                     // 0x0030(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KDQC[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0088(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0098(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetLocationAttributes
	 */
	struct UGameLiftClientObject_DescribeFleetLocationAttributes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QBY5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAWSGameLiftDescribeFleetLocationAttributesRequest  describeFleetLocationAttributesRequest;                  // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FAWSGameLiftDescribeFleetLocationAttributesResult   describeFleetLocationAttributesResult;                   // 0x0048(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MTWD[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0090(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetEvents
	 */
	struct UGameLiftClientObject_DescribeFleetEvents_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_295S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeFleetEventsRequest                         DescribeFleetEventsRequest;                              // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeFleetEventsResult                          DescribeFleetEventsResult;                               // 0x0048(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JUXD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0080(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetCapacity
	 */
	struct UGameLiftClientObject_DescribeFleetCapacity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JW9I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeFleetCapacityRequest                       DescribeFleetCapacityRequest;                            // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeFleetCapacityResult                        DescribeFleetCapacityResult;                             // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_52F8[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeFleetAttributes
	 */
	struct UGameLiftClientObject_DescribeFleetAttributes_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XEQH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeFleetAttributesRequest                     DescribeFleetAttributesRequest;                          // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeFleetAttributesResult                      DescribeFleetAttributesResult;                           // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z98B[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0070(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeEC2InstanceLimits
	 */
	struct UGameLiftClientObject_DescribeEC2InstanceLimits_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1306[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeEC2InstanceLimitsRequest                   DescribeEC2InstanceLimitsRequest;                        // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeEC2InstanceLimitsResult                    DescribeEC2InstanceLimitsResult;                         // 0x0028(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2A0N[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0050(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeBuild
	 */
	struct UGameLiftClientObject_DescribeBuild_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6SI8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeBuildRequest                               DescribeBuildRequest;                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeBuildResult                                DescribeBuildResult;                                     // 0x0020(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E3GY[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0088(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0098(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DescribeAlias
	 */
	struct UGameLiftClientObject_DescribeAlias_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1SMB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDescribeAliasRequest                               DescribeAliasRequest;                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDescribeAliasResult                                DescribeAliasResult;                                     // 0x0020(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HA5K[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00A0(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00B0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeregisterGameServer
	 */
	struct UGameLiftClientObject_DeregisterGameServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_055B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeregisterGameServerRequest                        DeregisterGameServerRequest;                             // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2ZGY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteVpcPeeringConnection
	 */
	struct UGameLiftClientObject_DeleteVpcPeeringConnection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CGP2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteVpcPeeringConnectionRequest                  DeleteVpcPeeringConnectionRequest;                       // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteVpcPeeringConnectionResult                   DeleteVpcPeeringConnectionResult;                        // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LYAF[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteVpcPeeringAuthorization
	 */
	struct UGameLiftClientObject_DeleteVpcPeeringAuthorization_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8Q6L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteVpcPeeringAuthorizationRequest               DeleteVpcPeeringAuthorizationRequest;                    // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteVpcPeeringAuthorizationResult                DeleteVpcPeeringAuthorizationResult;                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9U6Z[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteScript
	 */
	struct UGameLiftClientObject_DeleteScript_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_63OT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteScriptRequest                                DeleteScriptRequest;                                     // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BCKE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteScalingPolicy
	 */
	struct UGameLiftClientObject_DeleteScalingPolicy_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CUWW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteScalingPolicyRequest                         DeleteScalingPolicyRequest;                              // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GF79[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0048(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteMatchmakingRuleSet
	 */
	struct UGameLiftClientObject_DeleteMatchmakingRuleSet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3K7P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteMatchmakingRuleSetRequest                    DeleteMatchmakingRuleSetRequest;                         // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteMatchmakingRuleSetResult                     DeleteMatchmakingRuleSetResult;                          // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MN66[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteMatchmakingConfiguration
	 */
	struct UGameLiftClientObject_DeleteMatchmakingConfiguration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I414[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteMatchmakingConfigurationRequest              DeleteMatchmakingConfigurationRequest;                   // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteMatchmakingConfigurationResult               DeleteMatchmakingConfigurationResult;                    // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_65AA[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteGameSessionQueue
	 */
	struct UGameLiftClientObject_DeleteGameSessionQueue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LXUJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteGameSessionQueueRequest                      DeleteGameSessionQueueRequest;                           // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteGameSessionQueueResult                       DeleteGameSessionQueueResult;                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WQ3U[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteGameServerGroup
	 */
	struct UGameLiftClientObject_DeleteGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XPJR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteGameServerGroupRequest                       DeleteGameServerGroupRequest;                            // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FDeleteGameServerGroupResult                        DeleteGameServerGroupResult;                             // 0x0028(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KJ3I[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00D0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteFleetLocations
	 */
	struct UGameLiftClientObject_DeleteFleetLocations_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IIJY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAWSGameLiftDeleteFleetLocationsRequest             deleteFleetLocationsRequest;                             // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FAWSGameLiftDeleteFleetLocationsResult              deleteFleetLocationsResult;                              // 0x0030(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7D90[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteFleet
	 */
	struct UGameLiftClientObject_DeleteFleet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GJ33[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteFleetRequest                                 DeleteFleetRequest;                                      // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T1H1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteBuild
	 */
	struct UGameLiftClientObject_DeleteBuild_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCWZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeleteBuildRequest                                 DeleteBuildRequest;                                      // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_43Z6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.DeleteAlias
	 */
	struct UGameLiftClientObject_DeleteAlias_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q37L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftDeleteAliasRequest                         deleteAliasRequest;                                      // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JHM7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0038(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateVpcPeeringConnection
	 */
	struct UGameLiftClientObject_CreateVpcPeeringConnection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FBQK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateVpcPeeringConnectionRequest                  CreateVpcPeeringConnectionRequest;                       // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateVpcPeeringConnectionResult                   CreateVpcPeeringConnectionResult;                        // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FJ97[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0058(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateVpcPeeringAuthorization
	 */
	struct UGameLiftClientObject_CreateVpcPeeringAuthorization_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XIRQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateVpcPeeringAuthorizationRequest               CreateVpcPeeringAuthorizationRequest;                    // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateVpcPeeringAuthorizationResult                CreateVpcPeeringAuthorizationResult;                     // 0x0030(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8UUD[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0088(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateScript
	 */
	struct UGameLiftClientObject_CreateScript_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCKD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateScriptRequest                                CreateScriptRequest;                                     // 0x0010(0x0080)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateScriptResult                                 CreateScriptResult;                                      // 0x0090(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0120(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0VVQ[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0128(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0138(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreatePlayerSessions
	 */
	struct UGameLiftClientObject_CreatePlayerSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KMEL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreatePlayerSessionsRequest                        CreatePlayerSessionsRequest;                             // 0x0010(0x0070)  (Parm, NativeAccessSpecifierPublic)
		struct FCreatePlayerSessionsResult                         CreatePlayerSessionsResult;                              // 0x0080(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AV1X[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0098(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00A8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreatePlayerSession
	 */
	struct UGameLiftClientObject_CreatePlayerSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LR82[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreatePlayerSessionRequest                         CreatePlayerSessionRequest;                              // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FCreatePlayerSessionResult                          CreatePlayerSessionResult;                               // 0x0040(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KYOS[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00E8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00F8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateMatchmakingRuleSet
	 */
	struct UGameLiftClientObject_CreateMatchmakingRuleSet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PZA9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateMatchmakingRuleSetRequest                    CreateMatchmakingRuleSetRequest;                         // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateMatchmakingRuleSetResult                     CreateMatchmakingRuleSetResult;                          // 0x0040(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B8XO[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0090(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateMatchmakingConfiguration
	 */
	struct UGameLiftClientObject_CreateMatchmakingConfiguration_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5DKM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateMatchmakingConfigurationRequest              CreateMatchmakingConfigurationRequest;                   // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateMatchmakingConfigurationResult               CreateMatchmakingConfigurationResult;                    // 0x00C0(0x00C8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0188(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JBPX[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0190(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x01A0(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateGameSessionQueue
	 */
	struct UGameLiftClientObject_CreateGameSessionQueue_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OLE8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateGameSessionQueueRequest                      CreateGameSessionQueueRequest;                           // 0x0010(0x0098)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateGameSessionQueueResult                       CreateGameSessionQueueResult;                            // 0x00A8(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0140(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JQ99[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0148(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0158(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateGameSession
	 */
	struct UGameLiftClientObject_CreateGameSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RW1Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateGameSessionRequest                           CreateGameSessionRequest;                                // 0x0010(0x0088)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateGameSessionResult                            CreateGameSessionResult;                                 // 0x0098(0x00D8)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0170(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2LA[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0178(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0188(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateGameServerGroup
	 */
	struct UGameLiftClientObject_CreateGameServerGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KP9R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateGameServerGroupRequest                       CreateGameServerGroupRequest;                            // 0x0010(0x0098)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateGameServerGroupResult                        CreateGameServerGroupResult;                             // 0x00A8(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0138(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EK1[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0140(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0150(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateGameLiftObject
	 */
	struct UGameLiftClientObject_CreateGameLiftObject_Params
	{
	public:
		struct FAWSCredentials                                     credentials;                                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAWSClientConfiguration                             clientConfiguration;                                     // 0x0038(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGameLiftClientObject*                               ReturnValue;                                             // 0x0198(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateFleetLocations
	 */
	struct UGameLiftClientObject_CreateFleetLocations_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OEHM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAWSGameLiftCreateFleetLocationsRequest             createFleetLocationsRequest;                             // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FAWSGameLiftCreateFleetLocationsResult              createFleetLocationsResult;                              // 0x0030(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MVMW[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0078(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateFleet
	 */
	struct UGameLiftClientObject_CreateFleet_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ZZF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateFleetRequest                                 CreateFleetRequest;                                      // 0x0010(0x0120)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateFleetResult                                  CreateFleetResult;                                       // 0x0130(0x0118)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0248(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQT8[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0250(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0260(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateBuild
	 */
	struct UGameLiftClientObject_CreateBuild_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NVHG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateBuildRequest                                 CreateBuildRequest;                                      // 0x0010(0x0078)  (Parm, NativeAccessSpecifierPublic)
		struct FCreateBuildResult                                  CreateBuildResult;                                       // 0x0088(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0158(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SOHW[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0160(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0170(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.CreateAlias
	 */
	struct UGameLiftClientObject_CreateAlias_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9JZ2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameLiftCreateAliasRequest                         createAliasRequest;                                      // 0x0010(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FGameLiftCreateAliasResult                          createAliasResult;                                       // 0x0068(0x0078)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9FQM[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00E8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00F8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.ClaimGameServer
	 */
	struct UGameLiftClientObject_ClaimGameServer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1TI9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FClaimGameServerRequest                             ClaimGameServerRequest;                                  // 0x0010(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FClaimGameServerResult                              ClaimGameServerResult;                                   // 0x0040(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UKM7[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x00C8(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x00D8(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftClientObject.AcceptMatch
	 */
	struct UGameLiftClientObject_AcceptMatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FHFA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAcceptMatchRequest                                 AcceptMatchRequest;                                      // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FAcceptMatchResult                                  AcceptMatchResult;                                       // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EGameLiftError                                             errorType;                                               // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X6TW[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessage;                                            // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0050(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameLift.GameLiftUtils.IdentifyGameLiftARNType
	 */
	struct UGameLiftUtils_IdentifyGameLiftARNType_Params
	{
	public:
		class FString                                              awsResourceName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameLiftARNType                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
