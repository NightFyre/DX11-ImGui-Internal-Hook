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
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ShowHide_ReadyOrNotSection
	 */
	struct USIGIS_Crews_RowSmall_C_ShowHide_ReadyOrNotSection_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnFail_966A71F24D32FD12AF04C5AC35A1975B
	 */
	struct USIGIS_Crews_RowSmall_C_OnFail_966A71F24D32FD12AF04C5AC35A1975B_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.OnSuccess_966A71F24D32FD12AF04C5AC35A1975B
	 */
	struct USIGIS_Crews_RowSmall_C_OnSuccess_966A71F24D32FD12AF04C5AC35A1975B_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.Construct
	 */
	struct USIGIS_Crews_RowSmall_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.RefreshSlot_Info
	 */
	struct USIGIS_Crews_RowSmall_C_RefreshSlot_Info_Params
	{
	public:
		struct FEOSProductUserId                                   ThisPlayerEOS_ID;                                        // 0x0000(0x0021)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O283[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNakamaNGroupUser                                   NakamaMember;                                            // 0x0028(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       is_captainView;                                          // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isEmptySlot;                                             // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQ8Y[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x009C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_RowSmall_C_BndEvt__MM_Crew_KickPlayer_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_Crews_RowSmall_C_BndEvt__MM_SecondaryOptionsBtn_PlayersInfo_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		E_MM_SecondaryOptions                                      WhichButtonPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_Crews_RowSmall_C_BndEvt__SIGIS_Crews_RowSmall_MM_Crew_AddFriend_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.IsSearchingForAMatch
	 */
	struct USIGIS_Crews_RowSmall_C_IsSearchingForAMatch_Params
	{
	public:
		bool                                                       IsSearchingForAMatch;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ExecuteUbergraph_SIGIS_Crews_RowSmall
	 */
	struct USIGIS_Crews_RowSmall_C_ExecuteUbergraph_SIGIS_Crews_RowSmall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.ED_AddFriendToEmptyRow__DelegateSignature
	 */
	struct USIGIS_Crews_RowSmall_C_ED_AddFriendToEmptyRow__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Crews_RowSmall.SIGIS_Crews_RowSmall_C.CptWantToKickPlayer__DelegateSignature
	 */
	struct USIGIS_Crews_RowSmall_C_CptWantToKickPlayer__DelegateSignature_Params
	{
	public:
		struct FEOSProductUserId                                   EOS_ID;                                                  // 0x0000(0x0021)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34UJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNakamaNGroupUser                                   NakamaMemberInfo;                                        // 0x0028(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
