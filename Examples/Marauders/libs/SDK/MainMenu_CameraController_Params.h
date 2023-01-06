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
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.ReceiveBeginPlay
	 */
	struct AMainMenu_CameraController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeIn
	 */
	struct AMainMenu_CameraController_C_Music_FadeIn_Params
	{
	public:
		float                                                      FadeInDuration;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.Music_FadeOut
	 */
	struct AMainMenu_CameraController_C_Music_FadeOut_Params
	{
	public:
		float                                                      FadeOutDuration;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.Music_Switch
	 */
	struct AMainMenu_CameraController_C_Music_Switch_Params
	{
	public:
		float                                                      FadeOutDuration;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_596B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          NewMusic;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeInDuration;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCamera
	 */
	struct AMainMenu_CameraController_C_SwitchCamera_Params
	{
	public:
		EMenuState                                                 ToWhichMenuState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraOptions
	 */
	struct AMainMenu_CameraController_C_SwitchCameraOptions_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCameraEndMatch
	 */
	struct AMainMenu_CameraController_C_SwitchCameraEndMatch_Params
	{
	public:
		ERaidResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.MainMenuStartup
	 */
	struct AMainMenu_CameraController_C_MainMenuStartup_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SetNumOfWpnsHaveForWorkbench
	 */
	struct AMainMenu_CameraController_C_SetNumOfWpnsHaveForWorkbench_Params
	{
	public:
		int32_t                                                    AmountOfWpnsForWorkbench;                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.CrewSizeHasChanged
	 */
	struct AMainMenu_CameraController_C_CrewSizeHasChanged_Params
	{
	public:
		int32_t                                                    HowManyOtherCrew;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchGearCustomiseCamera
	 */
	struct AMainMenu_CameraController_C_SwitchGearCustomiseCamera_Params
	{
	public:
		E_InvEquipmentStates                                       InvEquipmentState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECosmeticSlot                                              Current_ApperBodyPart;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.SwitchCosmeticBodyPartCameras
	 */
	struct AMainMenu_CameraController_C_SwitchCosmeticBodyPartCameras_Params
	{
	public:
		ECosmeticSlot                                              Current_ApperBodyPart;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyMemberHasChangedAnAttribute
	 */
	struct AMainMenu_CameraController_C_LobbyMemberHasChangedAnAttribute_Params
	{
	public:
		struct FEOSLobbyMemberUpdateReceivedCallbackInfo           Data;                                                    // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyInfoChanged_JoinedOrCreated
	 */
	struct AMainMenu_CameraController_C_LobbyInfoChanged_JoinedOrCreated_Params
	{
	public:
		bool                                                       CrewUpdate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.UpdateLobby
	 */
	struct AMainMenu_CameraController_C_UpdateLobby_Params
	{
	public:
		struct FEOSLobbyUpdateReceivedCallbackInfo                 Data;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.LobbyStateHasChanged
	 */
	struct AMainMenu_CameraController_C_LobbyStateHasChanged_Params
	{
	public:
		ECrewEvents                                                NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.FORCE_BG_CharRefresh
	 */
	struct AMainMenu_CameraController_C_FORCE_BG_CharRefresh_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.DebugTurnAllBGGuysOn
	 */
	struct AMainMenu_CameraController_C_DebugTurnAllBGGuysOn_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.CrewInfoChange_TriggerBGCharRefresh
	 */
	struct AMainMenu_CameraController_C_CrewInfoChange_TriggerBGCharRefresh_Params
	{	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.ExecuteUbergraph_MainMenu_CameraController
	 */
	struct AMainMenu_CameraController_C_ExecuteUbergraph_MainMenu_CameraController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu_CameraController.MainMenu_CameraController_C.StartMainMenuEvent__DelegateSignature
	 */
	struct AMainMenu_CameraController_C_StartMainMenuEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
