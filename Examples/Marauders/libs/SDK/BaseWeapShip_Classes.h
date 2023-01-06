#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BaseWeapShip.BaseWeapShip_C
	 * Size -> 0x0004 (FullSize[0x0950] - InheritedSize[0x094C])
	 */
	class ABaseWeapShip_C : public ARaidWeapon_Instant
	{
	public:
		unsigned char                                              UnknownData_V4WK[0x4];                                   // 0x094C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
