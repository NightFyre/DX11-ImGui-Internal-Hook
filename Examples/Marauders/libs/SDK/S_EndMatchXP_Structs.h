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
	 * UserDefinedStruct S_EndMatchXP.S_EndMatchXP
	 * Size -> 0x0018
	 */
	struct FS_EndMatchXP
	{
	public:
		class FString                                              StatName_4_93A5A8424FEE76531503F5ABB7BDC1B1;             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    AmountOfXP_7_7FC8233342FFB1F9D3094EAA41F3898C;           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MultiplierValue_10_06A72D0E459AB17B825071A76398D3E7;     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
