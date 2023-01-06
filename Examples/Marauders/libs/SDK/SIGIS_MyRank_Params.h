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
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.Bind_GetPlayersCurrentLevel
	 */
	struct USIGIS_MyRank_C_Bind_GetPlayersCurrentLevel_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.OnFail_82ED5564492C36B069FB4990D4DEE82E
	 */
	struct USIGIS_MyRank_C_OnFail_82ED5564492C36B069FB4990D4DEE82E_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.OnSuccess_82ED5564492C36B069FB4990D4DEE82E
	 */
	struct USIGIS_MyRank_C_OnSuccess_82ED5564492C36B069FB4990D4DEE82E_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.Construct
	 */
	struct USIGIS_MyRank_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.UpdateRank
	 */
	struct USIGIS_MyRank_C_UpdateRank_Params
	{	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_MyRank_C_BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		E_MM_SecondaryOptions                                      WhichButtonPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.GotInfo
	 */
	struct USIGIS_MyRank_C_GotInfo_Params
	{
	public:
		class FString                                              GamerTag;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ProfilePicUrl;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.Full_RankInfoRefresh
	 */
	struct USIGIS_MyRank_C_Full_RankInfoRefresh_Params
	{	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.ExecuteUbergraph_SIGIS_MyRank
	 */
	struct USIGIS_MyRank_C_ExecuteUbergraph_SIGIS_MyRank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B10L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_MyRank.SIGIS_MyRank_C.ED_MyPlayerProfilePressed__DelegateSignature
	 */
	struct USIGIS_MyRank_C_ED_MyPlayerProfilePressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
