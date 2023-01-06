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
	 * BlueprintGeneratedClass BPI_ShipAnimations.BPI_ShipAnimations_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ShipAnimations_C : public UInterface
	{
	public:
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void Ship_ActorPitchAmount(float PitchAmount);
		void DropPodisBreaching(bool isBreaching);
		void DropPodBoosting(bool IsBoosting);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void PlayerUpDownInputAxis(float Float);
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void Frigate_Damage_Hull(bool isDamaged);
		void Frigate_Damage_HelmGun(bool isDamaged);
		void Frigate_Damage_Turret(bool isDamaged);
		void Frigate_Damage_Engine(bool isDamaged);
		void PlayerLeftRightInputAxis(float Float);
		void Shoot(int32_t TurretID);
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void GearChange(int32_t WhatGear);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
