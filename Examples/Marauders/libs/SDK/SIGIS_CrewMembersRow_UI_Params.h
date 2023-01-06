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
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Set_PlayerIsFillingSlot
	 */
	struct USIGIS_CrewMembersRow_UI_C_Set_PlayerIsFillingSlot_Params
	{
	public:
		E_CrewMemeberSlotStates                                    IsPlayerFillingSlot;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.RefreshCrewmemberSlot
	 */
	struct USIGIS_CrewMembersRow_UI_C_RefreshCrewmemberSlot_Params
	{
	public:
		class FString                                              ElementUserID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsACaptainViewingMe;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7CUG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerName;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CaptainsName;                                            // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_CrewMembersRow_UI_C_BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.Construct
	 */
	struct USIGIS_CrewMembersRow_UI_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_CrewMembersRow_UI_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.SetupCrewMemberWidget
	 */
	struct USIGIS_CrewMembersRow_UI_C_SetupCrewMemberWidget_Params
	{
	public:
		class UTexture2DDynamic*                                   CrewMember_Icon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CrewMember_Name;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsAdminView;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPersonsOwnWidge;                                       // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.ExecuteUbergraph_SIGIS_CrewMembersRow_UI
	 */
	struct USIGIS_CrewMembersRow_UI_C_ExecuteUbergraph_SIGIS_CrewMembersRow_UI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CD50[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_CrewMembersRow_UI.SIGIS_CrewMembersRow_UI_C.KickPlayer__DelegateSignature
	 */
	struct USIGIS_CrewMembersRow_UI_C_KickPlayer__DelegateSignature_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
