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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_ShopkeeperUI_Info.S_ShopkeeperUI_Info
	 * Size -> 0x0031
	 */
	struct FS_ShopkeeperUI_Info
	{
	public:
		class FText                                                Name_3_5D3664FE43E6C30D9D6400BFC1A577DE;                 // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Backstory_5_9A585F3042FDAD1C471F2B90C6BD676A;            // 0x0018(0x0018) Edit, BlueprintVisible
		EFactionType                                               FactionType_8_1F881F704257B819135B809967C8C09A;          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
