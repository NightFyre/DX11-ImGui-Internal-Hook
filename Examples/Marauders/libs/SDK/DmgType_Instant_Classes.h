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
	 * BlueprintGeneratedClass DmgType_Instant.DmgType_Instant_C
	 * Size -> 0x0001 (FullSize[0x0079] - InheritedSize[0x0078])
	 */
	class UDmgType_Instant_C : public URaidDamageType
	{
	public:
		bool                                                       Gib;                                                     // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
