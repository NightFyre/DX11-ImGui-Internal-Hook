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
	 * BlueprintGeneratedClass BPI_PlayerAnimations.BPI_PlayerAnimations_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PlayerAnimations_C : public UInterface
	{
	public:
		void WeaponisBroken();
		void SendBlockingDistance(bool isBlocking, float BlockingDistance);
		void Shooting_Shaking(bool TurnOn);
		void IsUsingCameraTurret(bool UsingCameraTurret);
		void JumpHasBeenTriggered();
		void CrouchStateChange(bool isCrouchingNow);
		void DoProxyHitReact(const struct FHitResult& HitResult);
		void PlayHurtAnim();
		void StaminaVars(float StaminaPercent);
		void DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void IsUsingPilotSeat(bool UsingPilotSeat);
		void IsUsingTurret(bool UsingTurret);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
