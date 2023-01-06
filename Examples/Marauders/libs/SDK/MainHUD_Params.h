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
	 * Function MainHUD.MainHUD_C.HideTheInventoryExtras
	 */
	struct AMainHUD_C_HideTheInventoryExtras_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.Get_MyDiscordNameAndImage
	 */
	struct AMainHUD_C_Get_MyDiscordNameAndImage_Params
	{
	public:
		class FText                                                MyDiscordName;                                           // 0x0000(0x0018)  (Parm, OutParm)
		class UTexture2DDynamic*                                   DiscordIconTexDynamic;                                   // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainHUD.MainHUD_C.MenuStateChanged
	 */
	struct AMainHUD_C_MenuStateChanged_Params
	{
	public:
		EMenuState                                                 NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainHUD.MainHUD_C.BP_NoSpaceForItem
	 */
	struct AMainHUD_C_BP_NoSpaceForItem_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.ReceiveDrawHUD
	 */
	struct AMainHUD_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainHUD.MainHUD_C.PostLoginLoad
	 */
	struct AMainHUD_C_PostLoginLoad_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.ReceiveBeginPlay
	 */
	struct AMainHUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.BP_CantScrapItemsInside
	 */
	struct AMainHUD_C_BP_CantScrapItemsInside_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.BP_CantSellItemsInside
	 */
	struct AMainHUD_C_BP_CantSellItemsInside_Params
	{	};

	/**
	 * Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD
	 */
	struct AMainHUD_C_ExecuteUbergraph_MainHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UPZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
