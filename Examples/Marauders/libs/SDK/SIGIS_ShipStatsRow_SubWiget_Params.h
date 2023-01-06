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
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Show Hide Ship Attachment Stat Change
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_Show_Hide_Ship_Attachment_Stat_Change_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnShip_AttachmentStat
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_RefreshWpnShip_AttachmentStat_Params
	{
	public:
		struct FFrigateStats                                       BaseShipStats;                                           // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFrigateStats                                       Ship_AllAttachedStats;                                   // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FFrigateStats                                       Ship_SelectedAttachment;                                 // 0x0050(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnWB_BaseStat NotInUseAnymore
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_RefreshWpnWB_BaseStat_NotInUseAnymore_Params
	{
	public:
		float                                                      BaseValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AllEquippedAttachmentValue;                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreSetup
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreConstruct
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Construct
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget
	 */
	struct USIGIS_ShipStatsRow_SubWiget_C_ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
