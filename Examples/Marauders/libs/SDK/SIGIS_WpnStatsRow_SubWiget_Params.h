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
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Show Hide Attachment Stat Change
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_Show_Hide_Attachment_Stat_Change_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_AttachmentStat
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_RefreshWpnWB_AttachmentStat_Params
	{
	public:
		struct FWeaponStats                                        WeaponStats_Base;                                        // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FWeaponStats                                        AllModule_AttachStats;                                   // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FWeaponStats                                        CurrentSelect_Attachment;                                // 0x0040(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_BaseStat
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_RefreshWpnWB_BaseStat_Params
	{
	public:
		float                                                      BaseValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AllEquippedAttachmentValue;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreSetup
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Construct
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreConstruct
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget
	 */
	struct USIGIS_WpnStatsRow_SubWiget_C_ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
