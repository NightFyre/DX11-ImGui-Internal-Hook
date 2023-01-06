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
	 * BlueprintGeneratedClass StationGameMode.StationGameMode_C
	 * Size -> 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
	 */
	class AStationGameMode_C : public ARaidGame_Menu
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
