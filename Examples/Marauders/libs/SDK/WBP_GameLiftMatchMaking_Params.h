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
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.SetPlayerIds
	 */
	struct UWBP_GameLiftMatchMaking_C_SetPlayerIds_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_TextBlock_RefreshTime_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_TextBlock_RefreshTime_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_TextBlock_Status_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_TextBlock_Status_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_EditableText_PlayerSessionId_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_EditableText_PlayerSessionId_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_EditableText_PlayerId_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_EditableText_PlayerId_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_EditableText_Address_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_EditableText_Address_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_EditableText_EndTime_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_EditableText_EndTime_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Get_EditableText_Start_Text_1
	 */
	struct UWBP_GameLiftMatchMaking_C_Get_EditableText_Start_Text_1_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.SetPlayers
	 */
	struct UWBP_GameLiftMatchMaking_C_SetPlayers_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.Construct
	 */
	struct UWBP_GameLiftMatchMaking_C_Construct_Params
	{	};

	/**
	 * Function WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C.ExecuteUbergraph_WBP_GameLiftMatchMaking
	 */
	struct UWBP_GameLiftMatchMaking_C_ExecuteUbergraph_WBP_GameLiftMatchMaking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N0WA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
