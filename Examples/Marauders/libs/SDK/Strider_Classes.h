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
	 * Class Strider.StriderMath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStriderMath : public UBlueprintFunctionLibrary
	{
	public:
		float WrapAngle(float Angle);
		void MoveTowardVector(struct FVector* InStart, const struct FVector& End, float MaxDelta);
		float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta);
		float MoveToward(float Start, float End, float MaxDelta);
		void MoveComponentsToward(struct FVector* InStart, const struct FVector& End, float MaxDelta);
		float GetRotationRelativeToVelocity(class AActor* Actor);
		int32_t GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta);
		float GetAngleDelta(float StartAngle, float EndAngle);
		float CalculateStrideScale(float TotalSpeedScale, float PlayRate);
		float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate);
		float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime);
		float AngleBetween(const struct FVector& A, const struct FVector& B);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
