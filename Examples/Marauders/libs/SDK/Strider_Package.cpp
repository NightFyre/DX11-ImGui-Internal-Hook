/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.WrapAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::WrapAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.WrapAngle");
		
		UStriderMath_WrapAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.MoveTowardVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InStart                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDelta                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStriderMath::MoveTowardVector(struct FVector* InStart, const struct FVector& End, float MaxDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.MoveTowardVector");
		
		UStriderMath_MoveTowardVector_Params params {};
		params.End = End;
		params.MaxDelta = MaxDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStart != nullptr)
			*InStart = params.InStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.MoveTowardAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDelta                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.MoveTowardAngle");
		
		UStriderMath_MoveTowardAngle_Params params {};
		params.StartAngle = StartAngle;
		params.EndAngle = EndAngle;
		params.MaxDelta = MaxDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.MoveToward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDelta                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::MoveToward(float Start, float End, float MaxDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.MoveToward");
		
		UStriderMath_MoveToward_Params params {};
		params.Start = Start;
		params.End = End;
		params.MaxDelta = MaxDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.MoveComponentsToward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InStart                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDelta                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStriderMath::MoveComponentsToward(struct FVector* InStart, const struct FVector& End, float MaxDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.MoveComponentsToward");
		
		UStriderMath_MoveComponentsToward_Params params {};
		params.End = End;
		params.MaxDelta = MaxDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InStart != nullptr)
			*InStart = params.InStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.GetRotationRelativeToVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::GetRotationRelativeToVelocity(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.GetRotationRelativeToVelocity");
		
		UStriderMath_GetRotationRelativeToVelocity_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.GetNextCardinalDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentCardinalDirection                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RelativeDirection                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepDelta                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SkipDelta                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UStriderMath::GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.GetNextCardinalDirection");
		
		UStriderMath_GetNextCardinalDirection_Params params {};
		params.CurrentCardinalDirection = CurrentCardinalDirection;
		params.RelativeDirection = RelativeDirection;
		params.StepDelta = StepDelta;
		params.SkipDelta = SkipDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.GetAngleDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartAngle                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::GetAngleDelta(float StartAngle, float EndAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.GetAngleDelta");
		
		UStriderMath_GetAngleDelta_Params params {};
		params.StartAngle = StartAngle;
		params.EndAngle = EndAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.CalculateStrideScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TotalSpeedScale                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::CalculateStrideScale(float TotalSpeedScale, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.CalculateStrideScale");
		
		UStriderMath_CalculateStrideScale_Params params {};
		params.TotalSpeedScale = TotalSpeedScale;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.CalculatePlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TotalSpeedScale                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackWeight                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinPlayRate                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPlayRate                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.CalculatePlayRate");
		
		UStriderMath_CalculatePlayRate_Params params {};
		params.TotalSpeedScale = TotalSpeedScale;
		params.PlaybackWeight = PlaybackWeight;
		params.MinPlayRate = MinPlayRate;
		params.MaxPlayRate = MaxPlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.CalculateCircleStrafeDirectionDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LastDirection                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.CalculateCircleStrafeDirectionDelta");
		
		UStriderMath_CalculateCircleStrafeDirectionDelta_Params params {};
		params.LastDirection = LastDirection;
		params.Direction = Direction;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Strider.StriderMath.AngleBetween
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStriderMath::AngleBetween(const struct FVector& A, const struct FVector& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Strider.StriderMath.AngleBetween");
		
		UStriderMath_AngleBetween_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStriderMath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStriderMath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Strider.StriderMath");
		return ptr;
	}

}


