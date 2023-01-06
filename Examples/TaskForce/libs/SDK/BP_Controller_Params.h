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
	 * Function BP_Controller.BP_Controller_C.FindDefaultSkin
	 */
	struct ABP_Controller_C_FindDefaultSkin_Params
	{
	public:
		class FString                                              Skin;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OpenLegacySettings
	 */
	struct ABP_Controller_C_OpenLegacySettings_Params
	{
	public:
		TArray<class FString>                                      WorkshopSkins1;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FString>                                      WorkshopSkins2;                                          // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OpenChat
	 */
	struct ABP_Controller_C_OpenChat_Params
	{
	public:
		bool                                                       TeamOnly;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X8Q2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Controller.BP_Controller_C.FindWorkshopSkins
	 */
	struct ABP_Controller_C_FindWorkshopSkins_Params
	{
	public:
		TArray<class FString>                                      Skins1;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class FString>                                      Skins2;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.FindWorkshop
	 */
	struct ABP_Controller_C_FindWorkshop_Params
	{
	public:
		class ATaskForceSettings_C*                                Workshop;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.PickTeamSound
	 */
	struct ABP_Controller_C_PickTeamSound_Params
	{
	public:
		int32_t                                                    Team;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ANF4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class USoundCue*>                                   Sounds1;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   Sounds2;                                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class USoundCue*                                           Default1;                                                // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           Default2;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           Sound;                                                   // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.PickSound
	 */
	struct ABP_Controller_C_PickSound_Params
	{
	public:
		TArray<class USoundCue*>                                   Sounds;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class USoundCue*                                           Default;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           Sound;                                                   // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.SetHostageSounds
	 */
	struct ABP_Controller_C_SetHostageSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   HostageGrabbedVoice;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   HostageKilledVoice;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   HostageExtractedVoice;                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.SetSkins
	 */
	struct ABP_Controller_C_SetSkins_Params
	{
	public:
		TArray<class FString>                                      Skins1;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FString>                                      Skins2;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.StopMusic
	 */
	struct ABP_Controller_C_StopMusic_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.PlayBombPlantedMusic
	 */
	struct ABP_Controller_C_PlayBombPlantedMusic_Params
	{
	public:
		int32_t                                                    PlantTeam;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.PlayBombPickupMusic
	 */
	struct ABP_Controller_C_PlayBombPickupMusic_Params
	{
	public:
		int32_t                                                    PickupTeam;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.FindRoundWinMusic
	 */
	struct ABP_Controller_C_FindRoundWinMusic_Params
	{
	public:
		int32_t                                                    Team;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGZM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundCue*                                           RoundWin;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeIn;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.FindRoundStartMusic
	 */
	struct ABP_Controller_C_FindRoundStartMusic_Params
	{
	public:
		class USoundCue*                                           RoundStart;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeIn;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeOut;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.SetBombSounds
	 */
	struct ABP_Controller_C_SetBombSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   BombPickupMusic;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombPlantedVoice;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombPlantedMusic;                                        // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombExplodedVoice;                                       // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombDefusedVoice;                                        // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.SetRoundSounds
	 */
	struct ABP_Controller_C_SetRoundSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   RoundStartMusic1;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundStartMusic2;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinVoice1;                                          // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinMusic1;                                          // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinVoice2;                                          // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   RoundWinMusic2;                                          // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.UpdateCameras
	 */
	struct ABP_Controller_C_UpdateCameras_Params
	{
	public:
		TArray<class ATaskForceCharacter*>                         Characters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      AspectRatio;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.PlayRoundEndMusic
	 */
	struct ABP_Controller_C_PlayRoundEndMusic_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WO3R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Controller.BP_Controller_C.PlayRoundStartMusic
	 */
	struct ABP_Controller_C_PlayRoundStartMusic_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.PlayRoundWin
	 */
	struct ABP_Controller_C_PlayRoundWin_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.ReturnEvent
	 */
	struct ABP_Controller_C_ReturnEvent_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.InterfaceEvent
	 */
	struct ABP_Controller_C_InterfaceEvent_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FJsonLibraryValue                                   Data;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		//struct FWebInterfaceCallback                               Callback;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.KickAway
	 */
	struct ABP_Controller_C_KickAway_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnArmoryRender
	 */
	struct ABP_Controller_C_OnArmoryRender_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnArmorySleep
	 */
	struct ABP_Controller_C_OnArmorySleep_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnBombPlanted
	 */
	struct ABP_Controller_C_OnBombPlanted_Params
	{
	public:
		int32_t                                                    PlantTeam;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnBombDefused
	 */
	struct ABP_Controller_C_OnBombDefused_Params
	{
	public:
		int32_t                                                    DefuseTeam;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnBombExploded
	 */
	struct ABP_Controller_C_OnBombExploded_Params
	{
	public:
		int32_t                                                    PlantTeam;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnHostageKilled
	 */
	struct ABP_Controller_C_OnHostageKilled_Params
	{
	public:
		int32_t                                                    AttackerTeam;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WinnerTeam;                                              // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnHostageExtracted
	 */
	struct ABP_Controller_C_OnHostageExtracted_Params
	{
	public:
		int32_t                                                    WinnerTeam;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnRoundStart
	 */
	struct ABP_Controller_C_OnRoundStart_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnRoundEnd
	 */
	struct ABP_Controller_C_OnRoundEnd_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    WinnerTeam;                                              // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnRoundWin
	 */
	struct ABP_Controller_C_OnRoundWin_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    WinnerTeam;                                              // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.ReceiveEndPlay
	 */
	struct ABP_Controller_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.CommandCallback
	 */
	struct ABP_Controller_C_CommandCallback_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.SnapshotCallback
	 */
	struct ABP_Controller_C_SnapshotCallback_Params
	{
	public:
		TArray<struct FProcessInfo>                                Output;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.RenderCallback
	 */
	struct ABP_Controller_C_RenderCallback_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnChatMessage
	 */
	struct ABP_Controller_C_OnChatMessage_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnTeamMessage
	 */
	struct ABP_Controller_C_OnTeamMessage_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.ReceiveTick
	 */
	struct ABP_Controller_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.LoadHUD
	 */
	struct ABP_Controller_C_LoadHUD_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.DebugJavaScript
	 */
	struct ABP_Controller_C_DebugJavaScript_Params
	{
	public:
		bool                                                       bAdvanced;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bExperimental;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.ReceiveBeginPlay
	 */
	struct ABP_Controller_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.OnBombPickup
	 */
	struct ABP_Controller_C_OnBombPickup_Params
	{
	public:
		int32_t                                                    PickupTeam;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller.BP_Controller_C.LegacySettings
	 */
	struct ABP_Controller_C_LegacySettings_Params
	{	};

	/**
	 * Function BP_Controller.BP_Controller_C.ExecuteUbergraph_BP_Controller
	 */
	struct ABP_Controller_C_ExecuteUbergraph_BP_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
