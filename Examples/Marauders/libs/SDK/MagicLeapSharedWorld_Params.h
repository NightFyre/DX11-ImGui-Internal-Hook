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
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	 */
	struct AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	 */
	struct AMagicLeapSharedWorldGameMode_SelectChosenOne_Params
	{	};

	/**
	 * DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	 */
	struct AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params
	{	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	 */
	struct AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params
	{
	public:
		struct FMagicLeapSharedWorldSharedData                     NewSharedWorldData;                                      // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	 */
	struct AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params
	{	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	 */
	struct AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params
	{	};

	/**
	 * DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	 */
	struct AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	 */
	struct AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	 */
	struct AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params
	{
	public:
		struct FMagicLeapSharedWorldLocalData                      LocalWorldReplicationData;                               // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	 */
	struct AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params
	{
	public:
		struct FMagicLeapSharedWorldAlignmentTransforms            InAlignmentTransforms;                                   // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	 */
	struct AMagicLeapSharedWorldPlayerController_IsChosenOne_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	 */
	struct AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params
	{
	public:
		bool                                                       bChosenOne;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	 */
	struct AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params
	{	};

	/**
	 * Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	 */
	struct AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
