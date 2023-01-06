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
	 * BlueprintGeneratedClass BPI_InsideShipTrigger.BPI_InsideShipTrigger_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_InsideShipTrigger_C : public UInterface
	{
	public:
		void TriggerDamageLightFlicker();
		void TriggerCritcialWarningSpinningLights(bool TurnOnCriticalState);
		void TriggerCriticalLightState(bool TurnOnCriticalState);
		void TriggerInsideShipActor_Damage();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
