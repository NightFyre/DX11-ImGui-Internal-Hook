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
	 * Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ShowAmmoType
	 */
	struct USIGIS_WeaponAttachmentWindow_C_ShowAmmoType_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EBulletType                                                BulletType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_66GN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.Construct
	 */
	struct USIGIS_WeaponAttachmentWindow_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ExecuteUbergraph_SIGIS_WeaponAttachmentWindow
	 */
	struct USIGIS_WeaponAttachmentWindow_C_ExecuteUbergraph_SIGIS_WeaponAttachmentWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2XG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
