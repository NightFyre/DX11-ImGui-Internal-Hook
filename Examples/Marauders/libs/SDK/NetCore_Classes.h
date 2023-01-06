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
	 * Class NetCore.NetAnalyticsAggregatorConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNetAnalyticsAggregatorConfig : public UObject
	{
	public:
		TArray<struct FNetAnalyticsDataConfig>                     NetAnalyticsData;                                        // 0x0028(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
