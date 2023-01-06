#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * BlueprintGeneratedClass TaskForcePlayer.TaskForcePlayer_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForcePlayer_C : public UInterface
	{
	public:
		void GetSeed(int32_t* Seed);
		void GetTeam(int32_t* Team);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
