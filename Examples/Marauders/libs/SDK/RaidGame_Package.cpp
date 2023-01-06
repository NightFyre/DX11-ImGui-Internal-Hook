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
	 * 		Name   -> Function RaidGame.AsyncTaskGameplayTagAddedRemoved.ListenForGameplayTagAddedOrRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAbilitySystemComponent*                     AbilitySystemComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       Tags                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	class UAsyncTaskGameplayTagAddedRemoved* UAsyncTaskGameplayTagAddedRemoved::ListenForGameplayTagAddedOrRemoved(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.AsyncTaskGameplayTagAddedRemoved.ListenForGameplayTagAddedOrRemoved");
		
		UAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Params params {};
		params.AbilitySystemComponent = AbilitySystemComponent;
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.AsyncTaskGameplayTagAddedRemoved.EndTask
	 * 		Flags  -> ()
	 */
	void UAsyncTaskGameplayTagAddedRemoved::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.AsyncTaskGameplayTagAddedRemoved.EndTask");
		
		UAsyncTaskGameplayTagAddedRemoved_EndTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncTaskGameplayTagAddedRemoved.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncTaskGameplayTagAddedRemoved::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.AsyncTaskGameplayTagAddedRemoved");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackPositionGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackPositionGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.AttackPositionGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_HasLoSTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_HasLoSTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.BTDecorator_HasLoSTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_FindPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FindPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.BTTask_FindPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_FindPointNearEnemy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_FindPointNearEnemy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.BTTask_FindPointNearEnemy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnemyLocationContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnemyLocationContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.EnemyLocationContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGamepadCursorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadCursorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GamepadCursorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.TryLean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Back                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::TryLean(bool Left, bool Right, bool Back)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.TryLean");
		
		UGOAPAction_TryLean_Params params {};
		params.Left = Left;
		params.Right = Right;
		params.Back = Back;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.TimeOutFinish
	 * 		Flags  -> ()
	 */
	void UGOAPAction::TimeOutFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.TimeOutFinish");
		
		UGOAPAction_TimeOutFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.StopMovementRequest
	 * 		Flags  -> ()
	 */
	void UGOAPAction::StopMovementRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.StopMovementRequest");
		
		UGOAPAction_StopMovementRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.StopLookRequest
	 * 		Flags  -> ()
	 */
	void UGOAPAction::StopLookRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.StopLookRequest");
		
		UGOAPAction_StopLookRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.StopIntervalShooting
	 * 		Flags  -> ()
	 */
	void UGOAPAction::StopIntervalShooting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.StopIntervalShooting");
		
		UGOAPAction_StopIntervalShooting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.StartIntervalShooting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              IntervalRangeMin                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              IntervalRangeMax                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CooldownRangeMin                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CooldownRangeMax                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FireRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::StartIntervalShooting(float MissRate, float IntervalRangeMin, float IntervalRangeMax, float CooldownRangeMin, float CooldownRangeMax, float FireRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.StartIntervalShooting");
		
		UGOAPAction_StartIntervalShooting_Params params {};
		params.MissRate = MissRate;
		params.IntervalRangeMin = IntervalRangeMin;
		params.IntervalRangeMax = IntervalRangeMax;
		params.CooldownRangeMin = CooldownRangeMin;
		params.CooldownRangeMax = CooldownRangeMax;
		params.FireRate = FireRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.StartAction
	 * 		Flags  -> ()
	 */
	void UGOAPAction::StartAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.StartAction");
		
		UGOAPAction_StartAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ShootAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LoctoShoot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::ShootAtLocation(const struct FVector& LoctoShoot, float MissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ShootAtLocation");
		
		UGOAPAction_ShootAtLocation_Params params {};
		params.LoctoShoot = LoctoShoot;
		params.MissRate = MissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ShootAtCurrentEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::ShootAtCurrentEnemy(float MissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ShootAtCurrentEnemy");
		
		UGOAPAction_ShootAtCurrentEnemy_Params params {};
		params.MissRate = MissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ShootAimedAtCurrentEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BonedAimedAt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::ShootAimedAtCurrentEnemy(float MissRate, const class FName& BonedAimedAt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ShootAimedAtCurrentEnemy");
		
		UGOAPAction_ShootAimedAtCurrentEnemy_Params params {};
		params.MissRate = MissRate;
		params.BonedAimedAt = BonedAimedAt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetTargetEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              TEnemy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetTargetEnemy(class ARaidCharacter* TEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetTargetEnemy");
		
		UGOAPAction_SetTargetEnemy_Params params {};
		params.TEnemy = TEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetShuffleOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShuffleAmountLeftRight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetShuffleOnce(float ShuffleAmountLeftRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetShuffleOnce");
		
		UGOAPAction_SetShuffleOnce_Params params {};
		params.ShuffleAmountLeftRight = ShuffleAmountLeftRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetMoveShuffle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeBetween                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ShuffleAmountLeftRight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetMoveShuffle(float TimeBetween, float CancelOUt, float ShuffleAmountLeftRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetMoveShuffle");
		
		UGOAPAction_SetMoveShuffle_Params params {};
		params.TimeBetween = TimeBetween;
		params.CancelOUt = CancelOUt;
		params.ShuffleAmountLeftRight = ShuffleAmountLeftRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetLookAtTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocatLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetLookAtTargetLocation(const struct FVector& LocatLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetLookAtTargetLocation");
		
		UGOAPAction_SetLookAtTargetLocation_Params params {};
		params.LocatLocation = LocatLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetLookAroundWiggleOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WiggleAmountLeftRight                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountUpDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetLookAroundWiggleOnce(float WiggleAmountLeftRight, float WiggleAmountUpDown, float CancelOUt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetLookAroundWiggleOnce");
		
		UGOAPAction_SetLookAroundWiggleOnce_Params params {};
		params.WiggleAmountLeftRight = WiggleAmountLeftRight;
		params.WiggleAmountUpDown = WiggleAmountUpDown;
		params.CancelOUt = CancelOUt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetLookAroundWiggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeBetween                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountLeftRight                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountUpDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetLookAroundWiggle(float TimeBetween, float CancelOUt, float WiggleAmountLeftRight, float WiggleAmountUpDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetLookAroundWiggle");
		
		UGOAPAction_SetLookAroundWiggle_Params params {};
		params.TimeBetween = TimeBetween;
		params.CancelOUt = CancelOUt;
		params.WiggleAmountLeftRight = WiggleAmountLeftRight;
		params.WiggleAmountUpDown = WiggleAmountUpDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetBotRotationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetBotRotationSpeed(float RotationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetBotRotationSpeed");
		
		UGOAPAction_SetBotRotationSpeed_Params params {};
		params.RotationSpeed = RotationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.SetActionTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InbLoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFirstDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::SetActionTimer(const class FString& FunctionName, float InRate, bool InbLoop, float InFirstDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.SetActionTimer");
		
		UGOAPAction_SetActionTimer_Params params {};
		params.FunctionName = FunctionName;
		params.InRate = InRate;
		params.InbLoop = InbLoop;
		params.InFirstDelay = InFirstDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ReloadAIWeapon
	 * 		Flags  -> ()
	 */
	void UGOAPAction::ReloadAIWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ReloadAIWeapon");
		
		UGOAPAction_ReloadAIWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.MoveInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     atLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMoveRequest                                       Branches                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::MoveInfo(const struct FVector& atLocation, EMoveRequest Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.MoveInfo");
		
		UGOAPAction_MoveInfo_Params params {};
		params.atLocation = atLocation;
		params.Branches = Branches;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.LookAtPawnDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::LookAtPawnDirection(bool CancelOUt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.LookAtPawnDirection");
		
		UGOAPAction_LookAtPawnDirection_Params params {};
		params.CancelOUt = CancelOUt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ImIMoving
	 * 		Flags  -> ()
	 */
	bool UGOAPAction::ImIMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ImIMoving");
		
		UGOAPAction_ImIMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.HasLostEnemy
	 * 		Flags  -> ()
	 */
	bool UGOAPAction::HasLostEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.HasLostEnemy");
		
		UGOAPAction_HasLostEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.HasEnemy
	 * 		Flags  -> ()
	 */
	bool UGOAPAction::HasEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.HasEnemy");
		
		UGOAPAction_HasEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.HasArrivedAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Allowance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DontRestartMoveQuery                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RequestORMoveHasFailed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::HasArrivedAtLocation(float Allowance, bool DontRestartMoveQuery, bool* RequestORMoveHasFailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.HasArrivedAtLocation");
		
		UGOAPAction_HasArrivedAtLocation_Params params {};
		params.Allowance = Allowance;
		params.DontRestartMoveQuery = DontRestartMoveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestORMoveHasFailed != nullptr)
			*RequestORMoveHasFailed = params.RequestORMoveHasFailed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GOAPSetFocalPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERaidFocusPri                                      InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::GOAPSetFocalPoint(const struct FVector& NewFocus, ERaidFocusPri InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GOAPSetFocalPoint");
		
		UGOAPAction_GOAPSetFocalPoint_Params params {};
		params.NewFocus = NewFocus;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetTimeSinceLostEnemy
	 * 		Flags  -> ()
	 */
	float UGOAPAction::GetTimeSinceLostEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetTimeSinceLostEnemy");
		
		UGOAPAction_GetTimeSinceLostEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetSensedPlayerThatCantSeeMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* UGOAPAction::GetSensedPlayerThatCantSeeMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetSensedPlayerThatCantSeeMe");
		
		UGOAPAction_GetSensedPlayerThatCantSeeMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetSensedPlayerClosetToMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* UGOAPAction::GetSensedPlayerClosetToMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetSensedPlayerClosetToMe");
		
		UGOAPAction_GetSensedPlayerClosetToMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetSensedPlayerAimingAtMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* UGOAPAction::GetSensedPlayerAimingAtMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetSensedPlayerAimingAtMe");
		
		UGOAPAction_GetSensedPlayerAimingAtMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetMyBot
	 * 		Flags  -> ()
	 */
	class ARaidNodeBot* UGOAPAction::GetMyBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetMyBot");
		
		UGOAPAction_GetMyBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetMovingTowardLocation
	 * 		Flags  -> ()
	 */
	struct FVector UGOAPAction::GetMovingTowardLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetMovingTowardLocation");
		
		UGOAPAction_GetMovingTowardLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetLookAtTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector UGOAPAction::GetLookAtTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetLookAtTargetLocation");
		
		UGOAPAction_GetLookAtTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetCurrentTarget
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* UGOAPAction::GetCurrentTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetCurrentTarget");
		
		UGOAPAction_GetCurrentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetCurrentSensedTargets
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UGOAPAction::GetCurrentSensedTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetCurrentSensedTargets");
		
		UGOAPAction_GetCurrentSensedTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetCurrentAmmoInClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            maxclipsize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGOAPAction::GetCurrentAmmoInClip(int32_t maxclipsize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetCurrentAmmoInClip");
		
		UGOAPAction_GetCurrentAmmoInClip_Params params {};
		params.maxclipsize = maxclipsize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetCoverPointInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShootOver                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LeftLean                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RightLean                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DirectionToWall                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::GetCoverPointInfo(bool* CrouchPoint, bool* ShootOver, bool* LeftLean, bool* RightLean, struct FVector* DirectionToWall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetCoverPointInfo");
		
		UGOAPAction_GetCoverPointInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchPoint != nullptr)
			*CrouchPoint = params.CrouchPoint;
		if (ShootOver != nullptr)
			*ShootOver = params.ShootOver;
		if (LeftLean != nullptr)
			*LeftLean = params.LeftLean;
		if (RightLean != nullptr)
			*RightLean = params.RightLean;
		if (DirectionToWall != nullptr)
			*DirectionToWall = params.DirectionToWall;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetController
	 * 		Flags  -> ()
	 */
	class ARaidGOAPController* UGOAPAction::GetController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetController");
		
		UGOAPAction_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.GetActionTimeInSeconds
	 * 		Flags  -> ()
	 */
	float UGOAPAction::GetActionTimeInSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.GetActionTimeInSeconds");
		
		UGOAPAction_GetActionTimeInSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.EQSQueryLookToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeactiveTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EQSQueryLookToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, float DeactiveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.EQSQueryLookToLocation");
		
		UGOAPAction_EQSQueryLookToLocation_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		params.DeactiveTime = DeactiveTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.EQSQueryLookToDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LookToVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeactiveTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EQSQueryLookToDirection(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, const struct FVector& LookToVector, float DeactiveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.EQSQueryLookToDirection");
		
		UGOAPAction_EQSQueryLookToDirection_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		params.LookToVector = LookToVector;
		params.DeactiveTime = DeactiveTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.EQSQueryandMoveToLocationVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationVector                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EQSQueryandMoveToLocationVector(const struct FVector& LocationVector, class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.EQSQueryandMoveToLocationVector");
		
		UGOAPAction_EQSQueryandMoveToLocationVector_Params params {};
		params.LocationVector = LocationVector;
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.EQSQueryandMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EQSQueryandMoveToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.EQSQueryandMoveToLocation");
		
		UGOAPAction_EQSQueryandMoveToLocation_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.EQSQueryandMoveToCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::EQSQueryandMoveToCover(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.EQSQueryandMoveToCover");
		
		UGOAPAction_EQSQueryandMoveToCover_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.DoOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TagIntForBranch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPassEnum                                          Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::DoOnce(int32_t TagIntForBranch, EPassEnum* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.DoOnce");
		
		UGOAPAction_DoOnce_Params params {};
		params.TagIntForBranch = TagIntForBranch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.CleanupAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::CleanupAction(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.CleanupAction");
		
		UGOAPAction_CleanupAction_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.checkProceduralPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         P                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPAction::checkProceduralPrecondition(class ARaidGOAPController* P)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.checkProceduralPrecondition");
		
		UGOAPAction_checkProceduralPrecondition_Params params {};
		params.P = P;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.CheckLOSToTarget
	 * 		Flags  -> ()
	 */
	bool UGOAPAction::CheckLOSToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.CheckLOSToTarget");
		
		UGOAPAction_CheckLOSToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.CancelMoveShuffle
	 * 		Flags  -> ()
	 */
	void UGOAPAction::CancelMoveShuffle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.CancelMoveShuffle");
		
		UGOAPAction_CancelMoveShuffle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.CancelLookAroundWiggle
	 * 		Flags  -> ()
	 */
	void UGOAPAction::CancelLookAroundWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.CancelLookAroundWiggle");
		
		UGOAPAction_CancelLookAroundWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.BranchAtTickTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SecondsIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETimeEnum                                          Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPAction::BranchAtTickTime(float SecondsIn, ETimeEnum* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.BranchAtTickTime");
		
		UGOAPAction_BranchAtTickTime_Params params {};
		params.SecondsIn = SecondsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.AddFrequencyCost
	 * 		Flags  -> ()
	 */
	void UGOAPAction::AddFrequencyCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.AddFrequencyCost");
		
		UGOAPAction_AddFrequencyCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPAction.ActionComplete
	 * 		Flags  -> ()
	 */
	void UGOAPAction::ActionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPAction.ActionComplete");
		
		UGOAPAction_ActionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.GetController
	 * 		Flags  -> ()
	 */
	class ARaidGOAPController* UGOAPBrain::GetController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.GetController");
		
		UGOAPBrain_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.FinishedChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewGoal                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPBrain::FinishedChoice(const class FString& NewGoal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.FinishedChoice");
		
		UGOAPBrain_FinishedChoice_Params params {};
		params.NewGoal = NewGoal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_StartGoalChoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       StateCompleted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGOAPBrain::Brain_StartGoalChoice(ERaidAIState StateCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_StartGoalChoice");
		
		UGOAPBrain_Brain_StartGoalChoice_Params params {};
		params.StateCompleted = StateCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsRunning(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsRunning");
		
		UGOAPBrain_Brain_IsRunning_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsNearCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoundsIn                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsNearCover(class UGOAPBrain* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsNearCover");
		
		UGOAPBrain_Brain_IsNearCover_Params params {};
		params.MyControl = MyControl;
		params.BoundsIn = BoundsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberNear != nullptr)
			*NumberNear = params.NumberNear;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsHealthLow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              healthAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsHealthLow(class UGOAPBrain* MyControl, float healthAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsHealthLow");
		
		UGOAPBrain_Brain_IsHealthLow_Params params {};
		params.MyControl = MyControl;
		params.healthAmount = healthAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsEnemyNearCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoundsIn                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsEnemyNearCover(class UGOAPBrain* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsEnemyNearCover");
		
		UGOAPBrain_Brain_IsEnemyNearCover_Params params {};
		params.MyControl = MyControl;
		params.BoundsIn = BoundsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberNear != nullptr)
			*NumberNear = params.NumberNear;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsEnemyAimingAtme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsEnemyAimingAtme(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsEnemyAimingAtme");
		
		UGOAPBrain_Brain_IsEnemyAimingAtme_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsCrouched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsCrouched(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsCrouched");
		
		UGOAPBrain_Brain_IsCrouched_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_IsAnotherPlayerCloserThenTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_IsAnotherPlayerCloserThenTarget(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_IsAnotherPlayerCloserThenTarget");
		
		UGOAPBrain_Brain_IsAnotherPlayerCloserThenTarget_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_ImIMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_ImIMoving(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_ImIMoving");
		
		UGOAPBrain_Brain_ImIMoving_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasToReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bullletLowAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasToReload(class UGOAPBrain* MyControl, int32_t bullletLowAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasToReload");
		
		UGOAPBrain_Brain_HasToReload_Params params {};
		params.MyControl = MyControl;
		params.bullletLowAmount = bullletLowAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlySeenSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlySeenSomeone(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlySeenSomeone");
		
		UGOAPBrain_Brain_HasRecentlySeenSomeone_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyPoppedSomeshotsOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyPoppedSomeshotsOff(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyPoppedSomeshotsOff");
		
		UGOAPBrain_Brain_HasRecentlyPoppedSomeshotsOff_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyLooted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeSinceLastloot                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyLooted(class UGOAPBrain* MyControl, float timeSinceLastloot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyLooted");
		
		UGOAPBrain_Brain_HasRecentlyLooted_Params params {};
		params.MyControl = MyControl;
		params.timeSinceLastloot = timeSinceLastloot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyHeardSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyHeardSomeone(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyHeardSomeone");
		
		UGOAPBrain_Brain_HasRecentlyHeardSomeone_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenSearching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyBeenSearching(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenSearching");
		
		UGOAPBrain_Brain_HasRecentlyBeenSearching_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenPatrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyBeenPatrolling(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenPatrolling");
		
		UGOAPBrain_Brain_HasRecentlyBeenPatrolling_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyBeenDamaged(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenDamaged");
		
		UGOAPBrain_Brain_HasRecentlyBeenDamaged_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenAttacking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasRecentlyBeenAttacking(class UGOAPBrain* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenAttacking");
		
		UGOAPBrain_Brain_HasRecentlyBeenAttacking_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasPerceptionPeopleNear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Allies                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              distanceamount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasPerceptionPeopleNear(class UGOAPBrain* MyControl, bool Allies, float distanceamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasPerceptionPeopleNear");
		
		UGOAPBrain_Brain_HasPerceptionPeopleNear_Params params {};
		params.MyControl = MyControl;
		params.Allies = Allies;
		params.distanceamount = distanceamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasLostEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeAmountforLost                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasLostEnemy(class UGOAPBrain* MyControl, float timeAmountforLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasLostEnemy");
		
		UGOAPBrain_Brain_HasLostEnemy_Params params {};
		params.MyControl = MyControl;
		params.timeAmountforLost = timeAmountforLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasEnemyLowHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amountlow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasEnemyLowHealth(class UGOAPBrain* MyControl, float amountlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasEnemyLowHealth");
		
		UGOAPBrain_Brain_HasEnemyLowHealth_Params params {};
		params.MyControl = MyControl;
		params.amountlow = amountlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasEnemyLowAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percentlow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasEnemyLowAmmo(class UGOAPBrain* MyControl, float Percentlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasEnemyLowAmmo");
		
		UGOAPBrain_Brain_HasEnemyLowAmmo_Params params {};
		params.MyControl = MyControl;
		params.Percentlow = Percentlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_HasEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_HasEnemy(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_HasEnemy");
		
		UGOAPBrain_Brain_HasEnemy_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_EnemyFar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceforFar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_EnemyFar(class UGOAPBrain* MyControl, float DistanceforFar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_EnemyFar");
		
		UGOAPBrain_Brain_EnemyFar_Params params {};
		params.MyControl = MyControl;
		params.DistanceforFar = DistanceforFar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GOAPBrain.Brain_CheckLOSToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPBrain*                                  MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGOAPBrain::Brain_CheckLOSToTarget(class UGOAPBrain* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GOAPBrain.Brain_CheckLOSToTarget");
		
		UGOAPBrain_Brain_CheckLOSToTarget_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPBrain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPBrain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPBrain");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPEnemyContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPEnemyContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPEnemyContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPLocationQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPLocationQueryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPLocationQueryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPLookDirectionQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPLookDirectionQueryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPLookDirectionQueryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGOAPSearchDirectionQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGOAPSearchDirectionQueryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GOAPSearchDirectionQueryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAbilitySystemGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAbilitySystemGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAbilitySystemGlobals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAbilityTask_RotateToFace.RotateToFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRestrictSpeedToExpected                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAbilityTask_RotateToFace* UGSAbilityTask_RotateToFace::RotateToFace(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FRotator& TargetRotation, float Duration, bool bRestrictSpeedToExpected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAbilityTask_RotateToFace.RotateToFace");
		
		UGSAbilityTask_RotateToFace_RotateToFace_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.TargetRotation = TargetRotation;
		params.Duration = Duration;
		params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAbilityTask_RotateToFace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAbilityTask_RotateToFace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAbilityTask_RotateToFace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_MoveSceneCompRelLocation.MoveSceneComponentRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 OptionalInterpolationCurve                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveVector*                                OptionalVectorInterpolationCurve                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_MoveSceneCompRelLocation* UGSAT_MoveSceneCompRelLocation::MoveSceneComponentRelativeLocation(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USceneComponent* SceneComponent, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_MoveSceneCompRelLocation.MoveSceneComponentRelativeLocation");
		
		UGSAT_MoveSceneCompRelLocation_MoveSceneComponentRelativeLocation_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.SceneComponent = SceneComponent;
		params.Location = Location;
		params.Duration = Duration;
		params.OptionalInterpolationCurve = OptionalInterpolationCurve;
		params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_MoveSceneCompRelLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_MoveSceneCompRelLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_MoveSceneCompRelLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_PlayMontageAndWaitForEvent* UGSAT_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent");
		
		UGSAT_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.MontageToPlay = MontageToPlay;
		params.EventTags = EventTags;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_PlayMontageAndWaitForEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_PlayMontageAndWaitForEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_PlayMontageAndWaitForEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplicateMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideBlendOutTimeForCancelAbility                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideBlendOutTimeForStopWhenEndAbility                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_PlayMontageForMeshAndWaitForEvent* UGSAT_PlayMontageForMeshAndWaitForEvent::PlayMontageForMeshAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent");
		
		UGSAT_PlayMontageForMeshAndWaitForEvent_PlayMontageForMeshAndWaitForEvent_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.Mesh = Mesh;
		params.MontageToPlay = MontageToPlay;
		params.EventTags = EventTags;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		params.bReplicateMontage = bReplicateMontage;
		params.OverrideBlendOutTimeForCancelAbility = OverrideBlendOutTimeForCancelAbility;
		params.OverrideBlendOutTimeForStopWhenEndAbility = OverrideBlendOutTimeForStopWhenEndAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_PlayMontageForMeshAndWaitForEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_PlayMontageForMeshAndWaitForEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_PlayMontageForMeshAndWaitForEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_PlayMontageMulti.PlayMontageMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_PlayMontageMulti* UGSAT_PlayMontageMulti::PlayMontageMulti(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_PlayMontageMulti.PlayMontageMulti");
		
		UGSAT_PlayMontageMulti_PlayMontageMulti_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.Mesh = Mesh;
		params.MontageToPlay = MontageToPlay;
		params.EventTags = EventTags;
		params.Rate = Rate;
		params.StartSection = StartSection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_PlayMontageMulti.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_PlayMontageMulti::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_PlayMontageMulti");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_ServerWaitForClientTargetData.ServerWaitForClientTargetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_ServerWaitForClientTargetData* UGSAT_ServerWaitForClientTargetData::ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, bool TriggerOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_ServerWaitForClientTargetData.ServerWaitForClientTargetData");
		
		UGSAT_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.TriggerOnce = TriggerOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActivationTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSAT_ServerWaitForClientTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback");
		
		UGSAT_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params params {};
		params.Data = Data;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_ServerWaitForClientTargetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_ServerWaitForClientTargetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_ServerWaitForClientTargetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitChangeFOV.WaitChangeFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            CameraComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TargetFOV                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 OptionalInterpolationCurve                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitChangeFOV* UGSAT_WaitChangeFOV::WaitChangeFOV(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UCameraComponent* CameraComponent, float TargetFOV, float Duration, class UCurveFloat* OptionalInterpolationCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitChangeFOV.WaitChangeFOV");
		
		UGSAT_WaitChangeFOV_WaitChangeFOV_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.CameraComponent = CameraComponent;
		params.TargetFOV = TargetFOV;
		params.Duration = Duration;
		params.OptionalInterpolationCurve = OptionalInterpolationCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitChangeFOV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitChangeFOV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitChangeFOV");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitClimbableTarget.WaitForClimbableTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCollisionProfileName                       TraceProfile                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimerPeriod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowDebug                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitClimbableTarget* UGSAT_WaitClimbableTarget::WaitForClimbableTarget(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FCollisionProfileName& TraceProfile, float MaxRange, float TimerPeriod, bool bShowDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitClimbableTarget.WaitForClimbableTarget");
		
		UGSAT_WaitClimbableTarget_WaitForClimbableTarget_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.TraceProfile = TraceProfile;
		params.MaxRange = MaxRange;
		params.TimerPeriod = TimerPeriod;
		params.bShowDebug = bShowDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitClimbableTarget.PerformTrace
	 * 		Flags  -> ()
	 */
	void UGSAT_WaitClimbableTarget::PerformTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitClimbableTarget.PerformTrace");
		
		UGSAT_WaitClimbableTarget_PerformTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitClimbableTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitClimbableTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitClimbableTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitDelayOneFrame.WaitDelayOneFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitDelayOneFrame* UGSAT_WaitDelayOneFrame::WaitDelayOneFrame(class UGameplayAbility* OwningAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitDelayOneFrame.WaitDelayOneFrame");
		
		UGSAT_WaitDelayOneFrame_WaitDelayOneFrame_Params params {};
		params.OwningAbility = OwningAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitDelayOneFrame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitDelayOneFrame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitDelayOneFrame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitInputPressWithTags.WaitInputPressWithTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       RequiredTags                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       IgnoredTags                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestAlreadyPressed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitInputPressWithTags* UGSAT_WaitInputPressWithTags::WaitInputPressWithTags(class UGameplayAbility* OwningAbility, const struct FGameplayTagContainer& RequiredTags, const struct FGameplayTagContainer& IgnoredTags, bool bTestAlreadyPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitInputPressWithTags.WaitInputPressWithTags");
		
		UGSAT_WaitInputPressWithTags_WaitInputPressWithTags_Params params {};
		params.OwningAbility = OwningAbility;
		params.RequiredTags = RequiredTags;
		params.IgnoredTags = IgnoredTags;
		params.bTestAlreadyPressed = bTestAlreadyPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitInputPressWithTags.OnPressCallback
	 * 		Flags  -> ()
	 */
	void UGSAT_WaitInputPressWithTags::OnPressCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitInputPressWithTags.OnPressCallback");
		
		UGSAT_WaitInputPressWithTags_OnPressCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitInputPressWithTags.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitInputPressWithTags::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitInputPressWithTags");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitInteractableTarget.WaitForInteractableTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCollisionProfileName                       TraceProfile                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimerPeriod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowDebug                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitInteractableTarget* UGSAT_WaitInteractableTarget::WaitForInteractableTarget(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FCollisionProfileName& TraceProfile, float MaxRange, float TimerPeriod, bool bShowDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitInteractableTarget.WaitForInteractableTarget");
		
		UGSAT_WaitInteractableTarget_WaitForInteractableTarget_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.TraceProfile = TraceProfile;
		params.MaxRange = MaxRange;
		params.TimerPeriod = TimerPeriod;
		params.bShowDebug = bShowDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitInteractableTarget.PerformTrace
	 * 		Flags  -> ()
	 */
	void UGSAT_WaitInteractableTarget::PerformTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitInteractableTarget.PerformTrace");
		
		UGSAT_WaitInteractableTarget_PerformTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitInteractableTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitInteractableTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitInteractableTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitTargetDataUsingActor.WaitTargetDataWithReusableActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameplayTargetingConfirmation                     ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGameplayAbilityTargetActor*                 InTargetActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateKeyIfNotValidForMorePredicting                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGSAT_WaitTargetDataUsingActor* UGSAT_WaitTargetDataUsingActor::WaitTargetDataWithReusableActor(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* InTargetActor, bool bCreateKeyIfNotValidForMorePredicting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitTargetDataUsingActor.WaitTargetDataWithReusableActor");
		
		UGSAT_WaitTargetDataUsingActor_WaitTargetDataWithReusableActor_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.ConfirmationType = ConfirmationType;
		params.InTargetActor = InTargetActor;
		params.bCreateKeyIfNotValidForMorePredicting = bCreateKeyIfNotValidForMorePredicting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCancelledCallback
	 * 		Flags  -> ()
	 */
	void UGSAT_WaitTargetDataUsingActor::OnTargetDataReplicatedCancelledCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCancelledCallback");
		
		UGSAT_WaitTargetDataUsingActor_OnTargetDataReplicatedCancelledCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ActivationTag                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSAT_WaitTargetDataUsingActor::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCallback");
		
		UGSAT_WaitTargetDataUsingActor_OnTargetDataReplicatedCallback_Params params {};
		params.Data = Data;
		params.ActivationTag = ActivationTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReadyCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGSAT_WaitTargetDataUsingActor::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReadyCallback");
		
		UGSAT_WaitTargetDataUsingActor_OnTargetDataReadyCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataCancelledCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGSAT_WaitTargetDataUsingActor::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataCancelledCallback");
		
		UGSAT_WaitTargetDataUsingActor_OnTargetDataCancelledCallback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSAT_WaitTargetDataUsingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSAT_WaitTargetDataUsingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSAT_WaitTargetDataUsingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSGameplayCueManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSGameplayCueManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSGameplayCueManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.UnregisterInteracter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::UnregisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.UnregisterInteracter");
		
		UGSInteractable_UnregisterInteracter_Params params {};
		params.InteractionComponent = InteractionComponent;
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.RegisterInteracter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::RegisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.RegisterInteracter");
		
		UGSInteractable_RegisterInteracter_Params params {};
		params.InteractionComponent = InteractionComponent;
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.PreInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::PreInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.PreInteract");
		
		UGSInteractable_PreInteract_Params params {};
		params.InteractingActor = InteractingActor;
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.PostInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::PostInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.PostInteract");
		
		UGSInteractable_PostInteract_Params params {};
		params.InteractingActor = InteractingActor;
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.IsAvailableForInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGSInteractable::IsAvailableForInteraction(class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.IsAvailableForInteraction");
		
		UGSInteractable_IsAvailableForInteraction_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.InteractableCancelInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::InteractableCancelInteraction(class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.InteractableCancelInteraction");
		
		UGSInteractable_InteractableCancelInteraction_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.GetPreInteractSyncType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldSync                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAbilityTaskNetSyncType                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::GetPreInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.GetPreInteractSyncType");
		
		UGSInteractable_GetPreInteractSyncType_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldSync != nullptr)
			*bShouldSync = params.bShouldSync;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.GetPostInteractSyncType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldSync                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAbilityTaskNetSyncType                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::GetPostInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.GetPostInteractSyncType");
		
		UGSInteractable_GetPostInteractSyncType_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldSync != nullptr)
			*bShouldSync = params.bShouldSync;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.GetInteractionDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGSInteractable::GetInteractionDuration(class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.GetInteractionDuration");
		
		UGSInteractable_GetInteractionDuration_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.GSInteractable.CancelInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InteractionComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGSInteractable::CancelInteraction(class UPrimitiveComponent* InteractionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.GSInteractable.CancelInteraction");
		
		UGSInteractable_CancelInteraction_Params params {};
		params.InteractionComponent = InteractionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGSInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGSInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.GSInteractable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiCollisionCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiCollisionCapsuleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.MultiCollisionCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiCollisionMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiCollisionMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.MultiCollisionMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_CoverHigh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_CoverHigh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.NavArea_CoverHigh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_CoverLow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_CoverLow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.NavArea_CoverLow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Door.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Door::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.NavArea_Door");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNavArea_Vault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavArea_Vault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.NavArea_Vault");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APoolActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoolActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.PoolActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolActorInterface.OnPoolEnd
	 * 		Flags  -> ()
	 */
	void UPoolActorInterface::OnPoolEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolActorInterface.OnPoolEnd");
		
		UPoolActorInterface_OnPoolEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolActorInterface.OnPoolBegin
	 * 		Flags  -> ()
	 */
	void UPoolActorInterface::OnPoolBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolActorInterface.OnPoolBegin");
		
		UPoolActorInterface_OnPoolBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoolActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoolActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.PoolActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.WarmUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPoolManagerBPLibrary::WarmUp(class UObject* WorldContextObject, class UClass* ActorClass, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.WarmUp");
		
		UPoolManagerBPLibrary_WarmUp_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.SpawnActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionHandling                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UPoolManagerBPLibrary::SpawnActor(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandling, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.SpawnActor");
		
		UPoolManagerBPLibrary_SpawnActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Transform = Transform;
		params.CollisionHandling = CollisionHandling;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.ReleaseActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPoolManagerBPLibrary::ReleaseActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.ReleaseActor");
		
		UPoolManagerBPLibrary_ReleaseActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.FetchActorCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UPoolManagerBPLibrary::FetchActorCollection(class UClass* ActorClass, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.FetchActorCollection");
		
		UPoolManagerBPLibrary_FetchActorCollection_Params params {};
		params.ActorClass = ActorClass;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.FetchActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UPoolManagerBPLibrary::FetchActor(class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.FetchActor");
		
		UPoolManagerBPLibrary_FetchActor_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.EmptyByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPoolManagerBPLibrary::EmptyByClass(class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.EmptyByClass");
		
		UPoolManagerBPLibrary_EmptyByClass_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.PoolManagerBPLibrary.Empty
	 * 		Flags  -> ()
	 */
	void UPoolManagerBPLibrary::Empty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.PoolManagerBPLibrary.Empty");
		
		UPoolManagerBPLibrary_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoolManagerBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoolManagerBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.PoolManagerBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetPlayRateForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::ServerCurrentMontageSetPlayRateForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, float InPlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetPlayRateForMesh");
		
		URaidAbilitySystemComponent_ServerCurrentMontageSetPlayRateForMesh_Params params {};
		params.InMesh = InMesh;
		params.ClientAnimMontage = ClientAnimMontage;
		params.InPlayRate = InPlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetNextSectionNameForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClientPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NextSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::ServerCurrentMontageSetNextSectionNameForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, float ClientPosition, const class FName& SectionName, const class FName& NextSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetNextSectionNameForMesh");
		
		URaidAbilitySystemComponent_ServerCurrentMontageSetNextSectionNameForMesh_Params params {};
		params.InMesh = InMesh;
		params.ClientAnimMontage = ClientAnimMontage;
		params.ClientPosition = ClientPosition;
		params.SectionName = SectionName;
		params.NextSectionName = NextSectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageJumpToSectionNameForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::ServerCurrentMontageJumpToSectionNameForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageJumpToSectionNameForMesh");
		
		URaidAbilitySystemComponent_ServerCurrentMontageJumpToSectionNameForMesh_Params params {};
		params.InMesh = InMesh;
		params.ClientAnimMontage = ClientAnimMontage;
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.RemoveGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.RemoveGameplayCueLocal");
		
		URaidAbilitySystemComponent_RemoveGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.OnRep_ReplicatedAnimMontageForMesh
	 * 		Flags  -> ()
	 */
	void URaidAbilitySystemComponent::OnRep_ReplicatedAnimMontageForMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.OnRep_ReplicatedAnimMontageForMesh");
		
		URaidAbilitySystemComponent_OnRep_ReplicatedAnimMontageForMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.NetPlayMultiMontageForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::NetPlayMultiMontageForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* Montage, const class FName& StartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.NetPlayMultiMontageForMesh");
		
		URaidAbilitySystemComponent_NetPlayMultiMontageForMesh_Params params {};
		params.InMesh = InMesh;
		params.Montage = Montage;
		params.StartSectionName = StartSectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTags                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::K2_RemoveLooseGameplayTags(const struct FGameplayTagContainer& GameplayTags, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTags");
		
		URaidAbilitySystemComponent_K2_RemoveLooseGameplayTags_Params params {};
		params.GameplayTags = GameplayTags;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::K2_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTag");
		
		URaidAbilitySystemComponent_K2_RemoveLooseGameplayTag_Params params {};
		params.GameplayTag = GameplayTag;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.K2_GetTagCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TagToCheck                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URaidAbilitySystemComponent::K2_GetTagCount(const struct FGameplayTag& TagToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.K2_GetTagCount");
		
		URaidAbilitySystemComponent_K2_GetTagCount_Params params {};
		params.TagToCheck = TagToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTags                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::K2_AddLooseGameplayTags(const struct FGameplayTagContainer& GameplayTags, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTags");
		
		URaidAbilitySystemComponent_K2_AddLooseGameplayTags_Params params {};
		params.GameplayTags = GameplayTags;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::K2_AddLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTag");
		
		URaidAbilitySystemComponent_K2_AddLooseGameplayTag_Params params {};
		params.GameplayTag = GameplayTag;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.GetCurrentPredictionKeyStatus
	 * 		Flags  -> ()
	 */
	class FString URaidAbilitySystemComponent::GetCurrentPredictionKeyStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.GetCurrentPredictionKeyStatus");
		
		URaidAbilitySystemComponent_GetCurrentPredictionKeyStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.FindAbilitySpecHandleForClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AbilityClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     OptionalSourceObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilitySpecHandle URaidAbilitySystemComponent::FindAbilitySpecHandleForClass(class UClass* AbilityClass, class UObject* OptionalSourceObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.FindAbilitySpecHandleForClass");
		
		URaidAbilitySystemComponent_FindAbilitySpecHandleForClass_Params params {};
		params.AbilityClass = AbilityClass;
		params.OptionalSourceObject = OptionalSourceObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.ExecuteGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.ExecuteGameplayCueLocal");
		
		URaidAbilitySystemComponent_ExecuteGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToTargetWithPrediction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle URaidAbilitySystemComponent::BP_ApplyGameplayEffectToTargetWithPrediction(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToTargetWithPrediction");
		
		URaidAbilitySystemComponent_BP_ApplyGameplayEffectToTargetWithPrediction_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Target = Target;
		params.Level = Level;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToSelfWithPrediction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEffectContextHandle                EffectContext                                              (Parm, NativeAccessSpecifierPublic)
	 */
	struct FActiveGameplayEffectHandle URaidAbilitySystemComponent::BP_ApplyGameplayEffectToSelfWithPrediction(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToSelfWithPrediction");
		
		URaidAbilitySystemComponent_BP_ApplyGameplayEffectToSelfWithPrediction_Params params {};
		params.GameplayEffectClass = GameplayEffectClass;
		params.Level = Level;
		params.EffectContext = EffectContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.BatchRPCTryActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  InAbilityHandle                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EndAbilityImmediately                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URaidAbilitySystemComponent::BatchRPCTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityHandle, bool EndAbilityImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.BatchRPCTryActivateAbility");
		
		URaidAbilitySystemComponent_BatchRPCTryActivateAbility_Params params {};
		params.InAbilityHandle = InAbilityHandle;
		params.EndAbilityImmediately = EndAbilityImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAbilitySystemComponent.AddGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URaidAbilitySystemComponent::AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAbilitySystemComponent.AddGameplayCueLocal");
		
		URaidAbilitySystemComponent_AddGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidAbilitySystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidAbilitySystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidAbilitySystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.ShootEnemy
	 * 		Flags  -> ()
	 */
	void ARaidAIController::ShootEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.ShootEnemy");
		
		ARaidAIController_ShootEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.SetDebugState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidBotDebugState                                 StateIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidAIController::SetDebugState(ERaidBotDebugState StateIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.SetDebugState");
		
		ARaidAIController_SetDebugState_Params params {};
		params.StateIn = StateIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.ReloadAIWeapon
	 * 		Flags  -> ()
	 */
	void ARaidAIController::ReloadAIWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.ReloadAIWeapon");
		
		ARaidAIController_ReloadAIWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.OnTargetPerceptionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ARaidAIController::OnTargetPerceptionUpdate(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.OnTargetPerceptionUpdate");
		
		ARaidAIController_OnTargetPerceptionUpdate_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.GetCurrentAmmoInClip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            maxclipsize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ARaidAIController::GetCurrentAmmoInClip(int32_t maxclipsize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.GetCurrentAmmoInClip");
		
		ARaidAIController_GetCurrentAmmoInClip_Params params {};
		params.maxclipsize = maxclipsize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.FindClosestEnemyWithLOS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              ExcludeEnemy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidAIController::FindClosestEnemyWithLOS(class ARaidCharacter* ExcludeEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.FindClosestEnemyWithLOS");
		
		ARaidAIController_FindClosestEnemyWithLOS_Params params {};
		params.ExcludeEnemy = ExcludeEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.FindClosestEnemyCommando
	 * 		Flags  -> ()
	 */
	void ARaidAIController::FindClosestEnemyCommando()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.FindClosestEnemyCommando");
		
		ARaidAIController_FindClosestEnemyCommando_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIController.FindClosestEnemy
	 * 		Flags  -> ()
	 */
	void ARaidAIController::FindClosestEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIController.FindClosestEnemy");
		
		ARaidAIController_FindClosestEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidAINodeStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidAINodeStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidAINodeStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIShipController.ShootEnemy
	 * 		Flags  -> ()
	 */
	void ARaidAIShipController::ShootEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIShipController.ShootEnemy");
		
		ARaidAIShipController_ShootEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIShipController.GetNextLocationToMoveTo
	 * 		Flags  -> ()
	 */
	struct FVector ARaidAIShipController::GetNextLocationToMoveTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIShipController.GetNextLocationToMoveTo");
		
		ARaidAIShipController_GetNextLocationToMoveTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIShipController.FindShipToAttack
	 * 		Flags  -> ()
	 */
	void ARaidAIShipController::FindShipToAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIShipController.FindShipToAttack");
		
		ARaidAIShipController_FindShipToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIShipController.FindClosestEnemyWithLOS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              ExcludeEnemy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidAIShipController::FindClosestEnemyWithLOS(class ARaidCharacter* ExcludeEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIShipController.FindClosestEnemyWithLOS");
		
		ARaidAIShipController_FindClosestEnemyWithLOS_Params params {};
		params.ExcludeEnemy = ExcludeEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidAIShipController.FindClosestEnemy
	 * 		Flags  -> ()
	 */
	void ARaidAIShipController::FindClosestEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidAIShipController.FindClosestEnemy");
		
		ARaidAIShipController_FindClosestEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidAIShipController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidAIShipController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidAIShipController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidArmourActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidArmourActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidArmourActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.WeaponObstructedDistance
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::WeaponObstructedDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.WeaponObstructedDistance");
		
		ARaidCharacter_WeaponObstructedDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.VaultEnd
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::VaultEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.VaultEnd");
		
		ARaidCharacter_VaultEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.UsedMine
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::UsedMine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.UsedMine");
		
		ARaidCharacter_UsedMine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.UpDateCharacterStat
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::UpDateCharacterStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.UpDateCharacterStat");
		
		ARaidCharacter_UpDateCharacterStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.TryStand
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::TryStand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.TryStand");
		
		ARaidCharacter_TryStand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.TryCrouch
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::TryCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.TryCrouch");
		
		ARaidCharacter_TryCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ToggleFireMode
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ToggleFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ToggleFireMode");
		
		ARaidCharacter_ToggleFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SwapToNewWeaponMesh
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::SwapToNewWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SwapToNewWeaponMesh");
		
		ARaidCharacter_SwapToNewWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Stun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::Stun(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Stun");
		
		ARaidCharacter_Stun_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.StopSprint
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::StopSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.StopSprint");
		
		ARaidCharacter_StopSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.StartSprint
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::StartSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.StartSprint");
		
		ARaidCharacter_StartSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.StaminaChargeStart
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::StaminaChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.StaminaChargeStart");
		
		ARaidCharacter_StaminaChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.StaminaChargeEnd
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::StaminaChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.StaminaChargeEnd");
		
		ARaidCharacter_StaminaChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ShowIfWeapon
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ShowIfWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ShowIfWeapon");
		
		ARaidCharacter_ShowIfWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SetIsEquippingFalse
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::SetIsEquippingFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SetIsEquippingFalse");
		
		ARaidCharacter_SetIsEquippingFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SetFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentFrigate                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SetFrigate(const class FString& CurrentFrigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SetFrigate");
		
		ARaidCharacter_SetFrigate_Params params {};
		params.CurrentFrigate = CurrentFrigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SetCamerRotationPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SetCamerRotationPitch(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SetCamerRotationPitch");
		
		ARaidCharacter_SetCamerRotationPitch_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SetCamerRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SetCamerRotation(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SetCamerRotation");
		
		ARaidCharacter_SetCamerRotation_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerUse
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerUse");
		
		ARaidCharacter_ServerUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerUpDateCharacterStat
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerUpDateCharacterStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerUpDateCharacterStat");
		
		ARaidCharacter_ServerUpDateCharacterStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerStopSprint
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerStopSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerStopSprint");
		
		ARaidCharacter_ServerStopSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerStopAim
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerStopAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerStopAim");
		
		ARaidCharacter_ServerStopAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerStartSprint
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerStartSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerStartSprint");
		
		ARaidCharacter_ServerStartSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerStartMantle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         MLoc                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerStartMantle(class AActor* MActor, const struct FVector_NetQuantize& MLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerStartMantle");
		
		ARaidCharacter_ServerStartMantle_Params params {};
		params.MActor = MActor;
		params.MLoc = MLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetTargeting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewTargeting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetTargeting(bool bNewTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetTargeting");
		
		ARaidCharacter_ServerSetTargeting_Params params {};
		params.bNewTargeting = bNewTargeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewRunning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetRunning(bool bNewRunning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetRunning");
		
		ARaidCharacter_ServerSetRunning_Params params {};
		params.bNewRunning = bNewRunning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewHead                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetHead(class USkeletalMesh* NewHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetHead");
		
		ARaidCharacter_ServerSetHead_Params params {};
		params.NewHead = NewHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentFrigate                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetFrigate(const class FString& CurrentFrigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetFrigate");
		
		ARaidCharacter_ServerSetFrigate_Params params {};
		params.CurrentFrigate = CurrentFrigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetChest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewLegs                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetChest(class USkeletalMesh* NewLegs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetChest");
		
		ARaidCharacter_ServerSetChest_Params params {};
		params.NewLegs = NewLegs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSetBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewBag                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSetBag(class USkeletalMesh* NewBag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSetBag");
		
		ARaidCharacter_ServerSetBag_Params params {};
		params.NewBag = NewBag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSellFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Frigate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerSellFrigate(const class FName& Frigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSellFrigate");
		
		ARaidCharacter_ServerSellFrigate_Params params {};
		params.Frigate = Frigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerSaveItemInventory
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerSaveItemInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerSaveItemInventory");
		
		ARaidCharacter_ServerSaveItemInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerReloadTurret
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::ServerReloadTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerReloadTurret");
		
		ARaidCharacter_ServerReloadTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerPlayVoiceSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceRowName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoiceType                                         VoiceType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerPlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerPlayVoiceSound");
		
		ARaidCharacter_ServerPlayVoiceSound_Params params {};
		params.VoiceRowName = VoiceRowName;
		params.VoiceType = VoiceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerMoveItemInInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InvName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceSLot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DestinationSlot                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerMoveItemInInventory(const class FString& InvName, int32_t SourceSLot, int32_t DestinationSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerMoveItemInInventory");
		
		ARaidCharacter_ServerMoveItemInInventory_Params params {};
		params.InvName = InvName;
		params.SourceSLot = SourceSLot;
		params.DestinationSlot = DestinationSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerLean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uint32_t                                           LeanangleIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerLean(uint32_t LeanangleIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerLean");
		
		ARaidCharacter_ServerLean_Params params {};
		params.LeanangleIn = LeanangleIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerHeadY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeadYangle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BendC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerHeadY(float HeadYangle, float BendC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerHeadY");
		
		ARaidCharacter_ServerHeadY_Params params {};
		params.HeadYangle = HeadYangle;
		params.BendC = BendC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerHeadX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HeadXangle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerHeadX(float HeadXangle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerHeadX");
		
		ARaidCharacter_ServerHeadX_Params params {};
		params.HeadXangle = HeadXangle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerFireProjectile");
		
		ARaidCharacter_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.ArrayNum = ArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerEquipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidWeapon*                                 NewWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerEquipWeapon(class ARaidWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerEquipWeapon");
		
		ARaidCharacter_ServerEquipWeapon_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerBuyShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ship                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerBuyShip(const class FName& ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerBuyShip");
		
		ARaidCharacter_ServerBuyShip_Params params {};
		params.ship = ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerBuyFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Frigate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerBuyFrigate(const class FName& Frigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerBuyFrigate");
		
		ARaidCharacter_ServerBuyFrigate_Params params {};
		params.Frigate = Frigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.ServerAddRemoveShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ShipToUse                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RemoveShip                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::ServerAddRemoveShip(const class FString& ShipToUse, bool RemoveShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.ServerAddRemoveShip");
		
		ARaidCharacter_ServerAddRemoveShip_Params params {};
		params.ShipToUse = ShipToUse;
		params.RemoveShip = RemoveShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Server_CancelHealing
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::Server_CancelHealing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Server_CancelHealing");
		
		ARaidCharacter_Server_CancelHealing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SendHelmOnRep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableFrigateHelmComponent*            Helm                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SendHelmOnRep(class URaidUseableFrigateHelmComponent* Helm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SendHelmOnRep");
		
		ARaidCharacter_SendHelmOnRep_Params params {};
		params.Helm = Helm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SendGunnerSeatOnRep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableTurretConrtrolComponent*         GunnerTurret                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SendGunnerSeatOnRep(class URaidUseableTurretConrtrolComponent* GunnerTurret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SendGunnerSeatOnRep");
		
		ARaidCharacter_SendGunnerSeatOnRep_Params params {};
		params.GunnerTurret = GunnerTurret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SellFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Frigate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::SellFrigate(const class FName& Frigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SellFrigate");
		
		ARaidCharacter_SellFrigate_Params params {};
		params.Frigate = Frigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.SaveItemInventory
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::SaveItemInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.SaveItemInventory");
		
		ARaidCharacter_SaveItemInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.RefreshInventoryEvent
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::RefreshInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.RefreshInventoryEvent");
		
		ARaidCharacter_RefreshInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.PlayVoiceSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceRowName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoiceType                                         VoiceType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::PlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.PlayVoiceSound");
		
		ARaidCharacter_PlayVoiceSound_Params params {};
		params.VoiceRowName = VoiceRowName;
		params.VoiceType = VoiceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.PlayVaultAnimations
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::PlayVaultAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.PlayVaultAnimations");
		
		ARaidCharacter_PlayVaultAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.PlayClimbAnimations
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::PlayClimbAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.PlayClimbAnimations");
		
		ARaidCharacter_PlayClimbAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.PawnTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.PawnTakenDamage");
		
		ARaidCharacter_PawnTakenDamage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_SetHead
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_SetHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_SetHead");
		
		ARaidCharacter_OnRep_SetHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_SetGunning
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_SetGunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_SetGunning");
		
		ARaidCharacter_OnRep_SetGunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_SetDriving
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_SetDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_SetDriving");
		
		ARaidCharacter_OnRep_SetDriving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_SetBag
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_SetBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_SetBag");
		
		ARaidCharacter_OnRep_SetBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_ServerSetChest
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_ServerSetChest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_ServerSetChest");
		
		ARaidCharacter_OnRep_ServerSetChest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_LastTakeHitInfo
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_LastTakeHitInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_LastTakeHitInfo");
		
		ARaidCharacter_OnRep_LastTakeHitInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_InventoryChanged
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnRep_InventoryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_InventoryChanged");
		
		ARaidCharacter_OnRep_InventoryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnRep_CurrentWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidWeapon*                                 LastWeapon                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::OnRep_CurrentWeapon(class ARaidWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnRep_CurrentWeapon");
		
		ARaidCharacter_OnRep_CurrentWeapon_Params params {};
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::OnProxyHitReact(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnProxyHitReact");
		
		ARaidCharacter_OnProxyHitReact_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnLowHealthBloodStart
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnLowHealthBloodStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnLowHealthBloodStart");
		
		ARaidCharacter_OnLowHealthBloodStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.OnLowHealthBloodEnd
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::OnLowHealthBloodEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.OnLowHealthBloodEnd");
		
		ARaidCharacter_OnLowHealthBloodEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.NetPlayVoiceSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceRowName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVoiceType                                         VoiceType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::NetPlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.NetPlayVoiceSound");
		
		ARaidCharacter_NetPlayVoiceSound_Params params {};
		params.VoiceRowName = VoiceRowName;
		params.VoiceType = VoiceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.NetMultiVault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClimb                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::NetMultiVault(bool bClimb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.NetMultiVault");
		
		ARaidCharacter_NetMultiVault_Params params {};
		params.bClimb = bClimb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.NetMulti_PerformHitReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      MontageIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StunTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::NetMulti_PerformHitReaction(unsigned char MontageIdx, float StunTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.NetMulti_PerformHitReaction");
		
		ARaidCharacter_NetMulti_PerformHitReaction_Params params {};
		params.MontageIdx = MontageIdx;
		params.StunTime = StunTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.MultiStopAllMontages
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::MultiStopAllMontages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.MultiStopAllMontages");
		
		ARaidCharacter_MultiStopAllMontages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Multi_Deathevent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::Multi_Deathevent(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Multi_Deathevent");
		
		ARaidCharacter_Multi_Deathevent_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Mulit_StopMontage
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::Mulit_StopMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Mulit_StopMontage");
		
		ARaidCharacter_Mulit_StopMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Mulit_Dismember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::Mulit_Dismember(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Mulit_Dismember");
		
		ARaidCharacter_Mulit_Dismember_Params params {};
		params.BoneHit = BoneHit;
		params.ImpactNorm = ImpactNorm;
		params.DamageTypeClass = DamageTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.MoveItemInInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InvName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SourceSLot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DestinationSlot                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::MoveItemInInventory(const class FString& InvName, int32_t SourceSLot, int32_t DestinationSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.MoveItemInInventory");
		
		ARaidCharacter_MoveItemInInventory_Params params {};
		params.InvName = InvName;
		params.SourceSLot = SourceSLot;
		params.DestinationSlot = DestinationSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsWeaponObstructed
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsWeaponObstructed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsWeaponObstructed");
		
		ARaidCharacter_IsWeaponObstructed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsVaulting
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsVaulting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsVaulting");
		
		ARaidCharacter_IsVaulting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsThrowingGrenade
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsThrowingGrenade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsThrowingGrenade");
		
		ARaidCharacter_IsThrowingGrenade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsTargeting
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsTargeting");
		
		ARaidCharacter_IsTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsRunning
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsRunning");
		
		ARaidCharacter_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsPlayerFlyingShip
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsPlayerFlyingShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsPlayerFlyingShip");
		
		ARaidCharacter_IsPlayerFlyingShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsPlayerAimingTurret
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsPlayerAimingTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsPlayerAimingTurret");
		
		ARaidCharacter_IsPlayerAimingTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsHealing
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsHealing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsHealing");
		
		ARaidCharacter_IsHealing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsFirstPerson
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsFirstPerson");
		
		ARaidCharacter_IsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsFiring
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsFiring");
		
		ARaidCharacter_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsAlive
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsAlive");
		
		ARaidCharacter_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsAiming
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsAiming");
		
		ARaidCharacter_IsAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.IsAIControlled
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::IsAIControlled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.IsAIControlled");
		
		ARaidCharacter_IsAIControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.HumanPlayerDied
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::HumanPlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.HumanPlayerDied");
		
		ARaidCharacter_HumanPlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.HideIfWeapon
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::HideIfWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.HideIfWeapon");
		
		ARaidCharacter_HideIfWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.HasWeaponGotFireModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EFireMode>                                  AllowedFireModes                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EFireMode                                          CurrentFireMode                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidCharacter::HasWeaponGotFireModes(TArray<EFireMode>* AllowedFireModes, EFireMode* CurrentFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.HasWeaponGotFireModes");
		
		ARaidCharacter_HasWeaponGotFireModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedFireModes != nullptr)
			*AllowedFireModes = params.AllowedFireModes;
		if (CurrentFireMode != nullptr)
			*CurrentFireMode = params.CurrentFireMode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetWiggle
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidCharacter::GetWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetWiggle");
		
		ARaidCharacter_GetWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetWeapon
	 * 		Flags  -> ()
	 */
	class ARaidWeapon* ARaidCharacter::GetWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetWeapon");
		
		ARaidCharacter_GetWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetThrustModifier
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetThrustModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetThrustModifier");
		
		ARaidCharacter_GetThrustModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetTargetingSpeedModifier
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetTargetingSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetTargetingSpeedModifier");
		
		ARaidCharacter_GetTargetingSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetStance
	 * 		Flags  -> ()
	 */
	ERaidStance ARaidCharacter::GetStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetStance");
		
		ARaidCharacter_GetStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetStamina
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetStamina");
		
		ARaidCharacter_GetStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetRunningSpeedModifier
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetRunningSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetRunningSpeedModifier");
		
		ARaidCharacter_GetRunningSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetOwnedShips
	 * 		Flags  -> ()
	 */
	TArray<class FString> ARaidCharacter::GetOwnedShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetOwnedShips");
		
		ARaidCharacter_GetOwnedShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetOwnedFrigates
	 * 		Flags  -> ()
	 */
	TArray<class FString> ARaidCharacter::GetOwnedFrigates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetOwnedFrigates");
		
		ARaidCharacter_GetOwnedFrigates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetMaxStamina
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetMaxStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetMaxStamina");
		
		ARaidCharacter_GetMaxStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetMaxHealth
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetMaxHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetMaxHealth");
		
		ARaidCharacter_GetMaxHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetMantledPosition
	 * 		Flags  -> ()
	 */
	struct FVector ARaidCharacter::GetMantledPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetMantledPosition");
		
		ARaidCharacter_GetMantledPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetMantledActor
	 * 		Flags  -> ()
	 */
	class AActor* ARaidCharacter::GetMantledActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetMantledActor");
		
		ARaidCharacter_GetMantledActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetLeanAmount
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetLeanAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetLeanAmount");
		
		ARaidCharacter_GetLeanAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetIsEquippingWeapon
	 * 		Flags  -> ()
	 */
	bool ARaidCharacter::GetIsEquippingWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetIsEquippingWeapon");
		
		ARaidCharacter_GetIsEquippingWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetHealth
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetHealth");
		
		ARaidCharacter_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetHeadYAmount
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetHeadYAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetHeadYAmount");
		
		ARaidCharacter_GetHeadYAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetHeadXAmount
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetHeadXAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetHeadXAmount");
		
		ARaidCharacter_GetHeadXAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetCurrentShips
	 * 		Flags  -> ()
	 */
	TArray<class FString> ARaidCharacter::GetCurrentShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetCurrentShips");
		
		ARaidCharacter_GetCurrentShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetCurrentFrigates
	 * 		Flags  -> ()
	 */
	class FString ARaidCharacter::GetCurrentFrigates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetCurrentFrigates");
		
		ARaidCharacter_GetCurrentFrigates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetCharacterVoiceType
	 * 		Flags  -> ()
	 */
	EVoiceType ARaidCharacter::GetCharacterVoiceType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetCharacterVoiceType");
		
		ARaidCharacter_GetCharacterVoiceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetBendAmount
	 * 		Flags  -> ()
	 */
	float ARaidCharacter::GetBendAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetBendAmount");
		
		ARaidCharacter_GetBendAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.GetAimOffsets
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidCharacter::GetAimOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.GetAimOffsets");
		
		ARaidCharacter_GetAimOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.DrivingTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableTurretConrtrolComponent*         TurretOut                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::DrivingTurret(class URaidUseableTurretConrtrolComponent* TurretOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.DrivingTurret");
		
		ARaidCharacter_DrivingTurret_Params params {};
		params.TurretOut = TurretOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.DrivingFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableFrigateHelmComponent*            HelmOut                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::DrivingFrigate(class URaidUseableFrigateHelmComponent* HelmOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.DrivingFrigate");
		
		ARaidCharacter_DrivingFrigate_Params params {};
		params.HelmOut = HelmOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.DismemberEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneHit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize                         ImpactNorm                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      DamageTypeClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.DismemberEvent");
		
		ARaidCharacter_DismemberEvent_Params params {};
		params.BoneHit = BoneHit;
		params.ImpactNorm = ImpactNorm;
		params.DamageTypeClass = DamageTypeClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.CrouchPressed
	 * 		Flags  -> ()
	 */
	void ARaidCharacter::CrouchPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.CrouchPressed");
		
		ARaidCharacter_CrouchPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Client_WeaponHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            directionInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DamageType                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::Client_WeaponHit(float Damage, int32_t directionInt, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Client_WeaponHit");
		
		ARaidCharacter_Client_WeaponHit_Params params {};
		params.Damage = Damage;
		params.directionInt = directionInt;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.Client_HealStaminaBurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::Client_HealStaminaBurn(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.Client_HealStaminaBurn");
		
		ARaidCharacter_Client_HealStaminaBurn_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.BuyShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ship                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::BuyShip(const class FName& ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.BuyShip");
		
		ARaidCharacter_BuyShip_Params params {};
		params.ship = ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.BuyFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Frigate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::BuyFrigate(const class FName& Frigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.BuyFrigate");
		
		ARaidCharacter_BuyFrigate_Params params {};
		params.Frigate = Frigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacter.AddRemoveShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentShip                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RemoveShip                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacter::AddRemoveShip(const class FString& CurrentShip, bool RemoveShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacter.AddRemoveShip");
		
		ARaidCharacter_AddRemoveShip_Params params {};
		params.CurrentShip = CurrentShip;
		params.RemoveShip = RemoveShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.StartDeactiveEvent
	 * 		Flags  -> ()
	 */
	void ARaidBot::StartDeactiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.StartDeactiveEvent");
		
		ARaidBot_StartDeactiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.StartActiveEvent
	 * 		Flags  -> ()
	 */
	void ARaidBot::StartActiveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.StartActiveEvent");
		
		ARaidBot_StartActiveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.SetDebugState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidBotDebugState                                 Statin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidBot::SetDebugState(ERaidBotDebugState Statin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.SetDebugState");
		
		ARaidBot_SetDebugState_Params params {};
		params.Statin = Statin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.HasTarget
	 * 		Flags  -> ()
	 */
	bool ARaidBot::HasTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.HasTarget");
		
		ARaidBot_HasTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.GetMyBucket
	 * 		Flags  -> ()
	 */
	ESignifManagerBuckets ARaidBot::GetMyBucket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.GetMyBucket");
		
		ARaidBot_GetMyBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidBot.GetDebugState
	 * 		Flags  -> ()
	 */
	ERaidBotDebugState ARaidBot::GetDebugState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidBot.GetDebugState");
		
		ARaidBot_GetDebugState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidBot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidBot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidBot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterAnimInstance.PlayVaultAnimation
	 * 		Flags  -> ()
	 */
	void URaidCharacterAnimInstance::PlayVaultAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterAnimInstance.PlayVaultAnimation");
		
		URaidCharacterAnimInstance_PlayVaultAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterAnimInstance.PlayClimbAnimation
	 * 		Flags  -> ()
	 */
	void URaidCharacterAnimInstance::PlayClimbAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterAnimInstance.PlayClimbAnimation");
		
		URaidCharacterAnimInstance_PlayClimbAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterAnimInstance.IsMoving
	 * 		Flags  -> ()
	 */
	bool URaidCharacterAnimInstance::IsMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterAnimInstance.IsMoving");
		
		URaidCharacterAnimInstance_IsMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterAnimInstance.GetGunShake
	 * 		Flags  -> ()
	 */
	struct FVector URaidCharacterAnimInstance::GetGunShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterAnimInstance.GetGunShake");
		
		URaidCharacterAnimInstance_GetGunShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterAnimInstance.CalculateGunLag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidCharacterAnimInstance::CalculateGunLag(float DeltaTime, struct FVector* Translation, struct FVector* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterAnimInstance.CalculateGunLag");
		
		URaidCharacterAnimInstance_CalculateGunLag_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidCharacterAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidCharacterAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCharacterAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.WantsToSprint
	 * 		Flags  -> ()
	 */
	bool URaidCharacterMovement::WantsToSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.WantsToSprint");
		
		URaidCharacterMovement_WantsToSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.IsSprinting
	 * 		Flags  -> ()
	 */
	bool URaidCharacterMovement::IsSprinting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.IsSprinting");
		
		URaidCharacterMovement_IsSprinting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.IsChangingStance
	 * 		Flags  -> ()
	 */
	bool URaidCharacterMovement::IsChangingStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.IsChangingStance");
		
		URaidCharacterMovement_IsChangingStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.GetDesiredStance
	 * 		Flags  -> ()
	 */
	ERaidStance URaidCharacterMovement::GetDesiredStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.GetDesiredStance");
		
		URaidCharacterMovement_GetDesiredStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.GetCurrentStance
	 * 		Flags  -> ()
	 */
	ERaidStance URaidCharacterMovement::GetCurrentStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.GetCurrentStance");
		
		URaidCharacterMovement_GetCurrentStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterMovement.CanSprint
	 * 		Flags  -> ()
	 */
	bool URaidCharacterMovement::CanSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterMovement.CanSprint");
		
		URaidCharacterMovement_CanSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidCharacterMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidCharacterMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCharacterMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.ServerUse
	 * 		Flags  -> ()
	 */
	void ARaidCharacterTurrent::ServerUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.ServerUse");
		
		ARaidCharacterTurrent_ServerUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.ServerFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacterTurrent::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.ServerFireProjectile");
		
		ARaidCharacterTurrent_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.ArrayNum = ArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.PlayerUnPressedZoom
	 * 		Flags  -> ()
	 */
	void ARaidCharacterTurrent::PlayerUnPressedZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.PlayerUnPressedZoom");
		
		ARaidCharacterTurrent_PlayerUnPressedZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.PlayerPressedZoom
	 * 		Flags  -> ()
	 */
	void ARaidCharacterTurrent::PlayerPressedZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.PlayerPressedZoom");
		
		ARaidCharacterTurrent_PlayerPressedZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.NetMultiFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacterTurrent::NetMultiFire(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.NetMultiFire");
		
		ARaidCharacterTurrent_NetMultiFire_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.MultiFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacterTurrent::MultiFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.MultiFireProjectile");
		
		ARaidCharacterTurrent_MultiFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.ArrayNum = ArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.GetTheRequiredrotation
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidCharacterTurrent::GetTheRequiredrotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.GetTheRequiredrotation");
		
		ARaidCharacterTurrent_GetTheRequiredrotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.GetController
	 * 		Flags  -> ()
	 */
	class APlayerController* ARaidCharacterTurrent::GetController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.GetController");
		
		ARaidCharacterTurrent_GetController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCharacterTurrent.FiredTurrentEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCharacterTurrent::FiredTurrentEvent(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCharacterTurrent.FiredTurrentEvent");
		
		ARaidCharacterTurrent_FiredTurrentEvent_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidCharacterTurrent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidCharacterTurrent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCharacterTurrent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidChatWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidChatWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidChatWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.UsedInLevelDroppod
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::UsedInLevelDroppod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.UsedInLevelDroppod");
		
		ARaidPlayerController_UsedInLevelDroppod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.TriggerMouseRMBUp
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::TriggerMouseRMBUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.TriggerMouseRMBUp");
		
		ARaidPlayerController_TriggerMouseRMBUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.TriggerMouseRMBDown
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::TriggerMouseRMBDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.TriggerMouseRMBDown");
		
		ARaidPlayerController_TriggerMouseRMBDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.TriggerMouseLMBUp
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::TriggerMouseLMBUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.TriggerMouseLMBUp");
		
		ARaidPlayerController_TriggerMouseLMBUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.TriggerMouseLMBDown
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::TriggerMouseLMBDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.TriggerMouseLMBDown");
		
		ARaidPlayerController_TriggerMouseLMBDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.TransitionStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTranisitionState                            From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPlayerTranisitionState                            To                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::TransitionStateChange(EPlayerTranisitionState From, EPlayerTranisitionState To)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.TransitionStateChange");
		
		ARaidPlayerController_TransitionStateChange_Params params {};
		params.From = From;
		params.To = To;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ToggleMouseCursorUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CursorOn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ToggleMouseCursorUse(bool CursorOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ToggleMouseCursorUse");
		
		ARaidPlayerController_ToggleMouseCursorUse_Params params {};
		params.CursorOn = CursorOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ToggleMouseControlDebug
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ToggleMouseControlDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ToggleMouseControlDebug");
		
		ARaidPlayerController_ToggleMouseControlDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ToggleInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ToggleInventory(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ToggleInventory");
		
		ARaidPlayerController_ToggleInventory_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ToggleControllerLerp
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ToggleControllerLerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ToggleControllerLerp");
		
		ARaidPlayerController_ToggleControllerLerp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.teststeamUI
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::teststeamUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.teststeamUI");
		
		ARaidPlayerController_teststeamUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_WipeMySelf
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::T17_WipeMySelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_WipeMySelf");
		
		ARaidPlayerController_T17_WipeMySelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_Teleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationToGoTo                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_Teleport(const struct FVector& LocationToGoTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_Teleport");
		
		ARaidPlayerController_T17_Teleport_Params params {};
		params.LocationToGoTo = LocationToGoTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_SpawnMapNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_SpawnMapNode(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_SpawnMapNode");
		
		ARaidPlayerController_T17_SpawnMapNode_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_SetSpeed(int32_t NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_SetSpeed");
		
		ARaidPlayerController_T17_SetSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_PauseToggleRaidTimer
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::T17_PauseToggleRaidTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_PauseToggleRaidTimer");
		
		ARaidPlayerController_T17_PauseToggleRaidTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_InfiniteAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_InfiniteAmmo(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_InfiniteAmmo");
		
		ARaidPlayerController_T17_InfiniteAmmo_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_GodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_GodMode(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_GodMode");
		
		ARaidPlayerController_T17_GodMode_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_GhostMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_GhostMode(bool Activate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_GhostMode");
		
		ARaidPlayerController_T17_GhostMode_Params params {};
		params.Activate = Activate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.T17_ChangeShopKeeper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewShop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::T17_ChangeShopKeeper(int32_t NewShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.T17_ChangeShopKeeper");
		
		ARaidPlayerController_T17_ChangeShopKeeper_Params params {};
		params.NewShop = NewShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SwitchVIPStatus
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::SwitchVIPStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SwitchVIPStatus");
		
		ARaidPlayerController_SwitchVIPStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Suicide
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::Suicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Suicide");
		
		ARaidPlayerController_Suicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SimulateInputKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SimulateInputKey");
		
		ARaidPlayerController_SimulateInputKey_Params params {};
		params.Key = Key;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ShowHangerKeyPad
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ShowHangerKeyPad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ShowHangerKeyPad");
		
		ARaidPlayerController_ShowHangerKeyPad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ShipDockingToStation
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ShipDockingToStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ShipDockingToStation");
		
		ARaidPlayerController_ShipDockingToStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ShipBreaching
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ShipBreaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ShipBreaching");
		
		ARaidPlayerController_ShipBreaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SetPreviousComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableComponent*                       CompTo                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::SetPreviousComp(class URaidUseableComponent* CompTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SetPreviousComp");
		
		ARaidPlayerController_SetPreviousComp_Params params {};
		params.CompTo = CompTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SetGodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::SetGodMode(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SetGodMode");
		
		ARaidPlayerController_SetGodMode_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerToggleControllerLerp
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerToggleControllerLerp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerToggleControllerLerp");
		
		ARaidPlayerController_ServerToggleControllerLerp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerSuicide
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerSuicide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerSuicide");
		
		ARaidPlayerController_ServerSuicide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerSendPlayerInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerSendPlayerInvite(const class FString& CrewNameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerSendPlayerInvite");
		
		ARaidPlayerController_ServerSendPlayerInvite_Params params {};
		params.CrewNameName = CrewNameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerSay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerSay(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerSay");
		
		ARaidPlayerController_ServerSay_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerLeaveGroup
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerLeaveGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerLeaveGroup");
		
		ARaidPlayerController_ServerLeaveGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerLandFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceshipInside*                        ShipInside                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerLandFrigate(class ARaidSpaceshipInside* ShipInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerLandFrigate");
		
		ARaidPlayerController_ServerLandFrigate_Params params {};
		params.ShipInside = ShipInside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerKickCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerKickCrewMember(const class FString& CrewNameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerKickCrewMember");
		
		ARaidPlayerController_ServerKickCrewMember_Params params {};
		params.CrewNameName = CrewNameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerEnterSpaceRaidVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceDeploy*                            VolumeIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerEnterSpaceRaidVolume(class ARaidSpaceDeploy* VolumeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerEnterSpaceRaidVolume");
		
		ARaidPlayerController_ServerEnterSpaceRaidVolume_Params params {};
		params.VolumeIn = VolumeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerEnterLandRaidVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidPlanetDeploy*                           VolumeIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerEnterLandRaidVolume(class ARaidPlanetDeploy* VolumeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerEnterLandRaidVolume");
		
		ARaidPlayerController_ServerEnterLandRaidVolume_Params params {};
		params.VolumeIn = VolumeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerDeploySpaceRaid
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerDeploySpaceRaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerDeploySpaceRaid");
		
		ARaidPlayerController_ServerDeploySpaceRaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerDeployShipFromHanger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ShipToUse                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerDeployShipFromHanger(const class FString& ShipToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerDeployShipFromHanger");
		
		ARaidPlayerController_ServerDeployShipFromHanger_Params params {};
		params.ShipToUse = ShipToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerDeployLandRaid
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerDeployLandRaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerDeployLandRaid");
		
		ARaidPlayerController_ServerDeployLandRaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerCreateGroup
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ServerCreateGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerCreateGroup");
		
		ARaidPlayerController_ServerCreateGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerCheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerCheat(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerCheat");
		
		ARaidPlayerController_ServerCheat_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerchangeCameraMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerchangeCameraMode(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerchangeCameraMode");
		
		ARaidPlayerController_ServerchangeCameraMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ServerAcceptCrewInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ServerAcceptCrewInvite(const class FString& CrewNameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ServerAcceptCrewInvite");
		
		ARaidPlayerController_ServerAcceptCrewInvite_Params params {};
		params.CrewNameName = CrewNameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_T17_Teleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationToGoTo                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_T17_Teleport(const struct FVector& LocationToGoTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_T17_Teleport");
		
		ARaidPlayerController_Server_T17_Teleport_Params params {};
		params.LocationToGoTo = LocationToGoTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_T17_SpawnMapNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_T17_SpawnMapNode(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_T17_SpawnMapNode");
		
		ARaidPlayerController_Server_T17_SpawnMapNode_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_T17_SetSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_T17_SetSpeed(int32_t NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_T17_SetSpeed");
		
		ARaidPlayerController_Server_T17_SetSpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_SetGodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_SetGodMode(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_SetGodMode");
		
		ARaidPlayerController_Server_SetGodMode_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_PushExecCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_PushExecCommand(const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_PushExecCommand");
		
		ARaidPlayerController_Server_PushExecCommand_Params params {};
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Server_KeySend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableAirLockComponent*                Keypad                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyNumber                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Server_KeySend(class URaidUseableAirLockComponent* Keypad, const class FString& KeyNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Server_KeySend");
		
		ARaidPlayerController_Server_KeySend_Params params {};
		params.Keypad = Keypad;
		params.KeyNumber = KeyNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SendPlayerInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::SendPlayerInvite(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SendPlayerInvite");
		
		ARaidPlayerController_SendPlayerInvite_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.SendKeyCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyNumber                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::SendKeyCheck(const class FString& KeyNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.SendKeyCheck");
		
		ARaidPlayerController_SendKeyCheck_Params params {};
		params.KeyNumber = KeyNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Say
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Say(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Say");
		
		ARaidPlayerController_Say_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.RegisterAsCaptain
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::RegisterAsCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.RegisterAsCaptain");
		
		ARaidPlayerController_RegisterAsCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ReceivedCrewInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ReceivedCrewInvite(const class FString& CrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ReceivedCrewInvite");
		
		ARaidPlayerController_ReceivedCrewInvite_Params params {};
		params.CrewName = CrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.PlayerTakenDamageEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            directionInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DamageType                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::PlayerTakenDamageEvent(float DamageAmount, int32_t directionInt, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.PlayerTakenDamageEvent");
		
		ARaidPlayerController_PlayerTakenDamageEvent_Params params {};
		params.DamageAmount = DamageAmount;
		params.directionInt = directionInt;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.PlayBreachMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FrigType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      BreachedActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::PlayBreachMovie(const class FName& FrigType, class AActor* BreachedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.PlayBreachMovie");
		
		ARaidPlayerController_PlayBreachMovie_Params params {};
		params.FrigType = FrigType;
		params.BreachedActor = BreachedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.PickShipFromHanger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ShipToUse                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::PickShipFromHanger(const class FString& ShipToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.PickShipFromHanger");
		
		ARaidPlayerController_PickShipFromHanger_Params params {};
		params.ShipToUse = ShipToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.OnLeaderboardReadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::OnLeaderboardReadComplete(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.OnLeaderboardReadComplete");
		
		ARaidPlayerController_OnLeaderboardReadComplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.OnFrigatesBeenHitAndInside
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::OnFrigatesBeenHitAndInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.OnFrigatesBeenHitAndInside");
		
		ARaidPlayerController_OnFrigatesBeenHitAndInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.OnClientNoAmmoForTuret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReloadTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::OnClientNoAmmoForTuret(float ReloadTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.OnClientNoAmmoForTuret");
		
		ARaidPlayerController_OnClientNoAmmoForTuret_Params params {};
		params.ReloadTime = ReloadTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.OnClientFiredTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeforReload                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::OnClientFiredTurret(float TimeforReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.OnClientFiredTurret");
		
		ARaidPlayerController_OnClientFiredTurret_Params params {};
		params.TimeforReload = TimeforReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.NotTheCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustCrew                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::NotTheCaptain(bool JustCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.NotTheCaptain");
		
		ARaidPlayerController_NotTheCaptain_Params params {};
		params.JustCrew = JustCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.NotifiyBreached
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::NotifiyBreached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.NotifiyBreached");
		
		ARaidPlayerController_NotifiyBreached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LeaveSpaceRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LeaveSpaceRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LeaveSpaceRaidVolume");
		
		ARaidPlayerController_LeaveSpaceRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LeavelandRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LeavelandRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LeavelandRaidVolume");
		
		ARaidPlayerController_LeavelandRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LeaveGroup
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LeaveGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LeaveGroup");
		
		ARaidPlayerController_LeaveGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LeaveEvacRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LeaveEvacRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LeaveEvacRaidVolume");
		
		ARaidPlayerController_LeaveEvacRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LeaveEnterSpaceAtmosVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LeaveEnterSpaceAtmosVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LeaveEnterSpaceAtmosVolume");
		
		ARaidPlayerController_LeaveEnterSpaceAtmosVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LaunchSpaceRaid
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LaunchSpaceRaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LaunchSpaceRaid");
		
		ARaidPlayerController_LaunchSpaceRaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.LaunchLandTeamRaid
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::LaunchLandTeamRaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.LaunchLandTeamRaid");
		
		ARaidPlayerController_LaunchLandTeamRaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.KickCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::KickCrewMember(const class FString& CrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.KickCrewMember");
		
		ARaidPlayerController_KickCrewMember_Params params {};
		params.CrewName = CrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.KeyEnterCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::KeyEnterCheck(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.KeyEnterCheck");
		
		ARaidPlayerController_KeyEnterCheck_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.IsPlayerTheCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidPlayerController::IsPlayerTheCaptain(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.IsPlayerTheCaptain");
		
		ARaidPlayerController_IsPlayerTheCaptain_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Headshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Headshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Headshot");
		
		ARaidPlayerController_Headshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.HangerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHangerEvent                                       HEvent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::HangerEvent(EHangerEvent HEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.HangerEvent");
		
		ARaidPlayerController_HangerEvent_Params params {};
		params.HEvent = HEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetPreviousComp
	 * 		Flags  -> ()
	 */
	class URaidUseableComponent* ARaidPlayerController::GetPreviousComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetPreviousComp");
		
		ARaidPlayerController_GetPreviousComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetPoolForVFX
	 * 		Flags  -> ()
	 */
	int32_t ARaidPlayerController::GetPoolForVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetPoolForVFX");
		
		ARaidPlayerController_GetPoolForVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetPoolForProj
	 * 		Flags  -> ()
	 */
	int32_t ARaidPlayerController::GetPoolForProj()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetPoolForProj");
		
		ARaidPlayerController_GetPoolForProj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetMouseCursorUP
	 * 		Flags  -> ()
	 */
	bool ARaidPlayerController::GetMouseCursorUP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetMouseCursorUP");
		
		ARaidPlayerController_GetMouseCursorUP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetIsPlayerACaptain
	 * 		Flags  -> ()
	 */
	bool ARaidPlayerController::GetIsPlayerACaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetIsPlayerACaptain");
		
		ARaidPlayerController_GetIsPlayerACaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetGroup
	 * 		Flags  -> ()
	 */
	class FString ARaidPlayerController::GetGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetGroup");
		
		ARaidPlayerController_GetGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetCurrentTurretDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        FrigateName                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        FrigateDesc                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmmoLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxAmmo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::GetCurrentTurretDetails(class FText* FrigateName, class FText* FrigateDesc, int32_t* AmmoLeft, int32_t* MaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetCurrentTurretDetails");
		
		ARaidPlayerController_GetCurrentTurretDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrigateName != nullptr)
			*FrigateName = params.FrigateName;
		if (FrigateDesc != nullptr)
			*FrigateDesc = params.FrigateDesc;
		if (AmmoLeft != nullptr)
			*AmmoLeft = params.AmmoLeft;
		if (MaxAmmo != nullptr)
			*MaxAmmo = params.MaxAmmo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetCurrentTransState
	 * 		Flags  -> ()
	 */
	EPlayerTranisitionState ARaidPlayerController::GetCurrentTransState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetCurrentTransState");
		
		ARaidPlayerController_GetCurrentTransState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetCurrentDockingVolume
	 * 		Flags  -> ()
	 */
	class URaidDockingComponent* ARaidPlayerController::GetCurrentDockingVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetCurrentDockingVolume");
		
		ARaidPlayerController_GetCurrentDockingVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.GetallCrewNames
	 * 		Flags  -> ()
	 */
	TArray<class FString> ARaidPlayerController::GetallCrewNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.GetallCrewNames");
		
		ARaidPlayerController_GetallCrewNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.FrigatesBeenHitandInside
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::FrigatesBeenHitandInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.FrigatesBeenHitandInside");
		
		ARaidPlayerController_FrigatesBeenHitandInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.FrigateDockingToStation
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::FrigateDockingToStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.FrigateDockingToStation");
		
		ARaidPlayerController_FrigateDockingToStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ForceStopSequnce
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ForceStopSequnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ForceStopSequnce");
		
		ARaidPlayerController_ForceStopSequnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.FirstStartComic
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::FirstStartComic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.FirstStartComic");
		
		ARaidPlayerController_FirstStartComic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EventShowMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::EventShowMouse(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EventShowMouse");
		
		ARaidPlayerController_EventShowMouse_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Event_UsingHangerConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ShipsIN                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Event_UsingHangerConsole(TArray<class FString> ShipsIN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Event_UsingHangerConsole");
		
		ARaidPlayerController_Event_UsingHangerConsole_Params params {};
		params.ShipsIN = ShipsIN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Event_ShowLoading
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::Event_ShowLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Event_ShowLoading");
		
		ARaidPlayerController_Event_ShowLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Event_OpenShipVendorMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShipShop                                   StockInShop                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Event_OpenShipVendorMenu(const struct FShipShop& StockInShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Event_OpenShipVendorMenu");
		
		ARaidPlayerController_Event_OpenShipVendorMenu_Params params {};
		params.StockInShop = StockInShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Event_OpenCaptainWidget
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::Event_OpenCaptainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Event_OpenCaptainWidget");
		
		ARaidPlayerController_Event_OpenCaptainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Event_HideLoading
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::Event_HideLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Event_HideLoading");
		
		ARaidPlayerController_Event_HideLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EvacRaid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Frigate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FrigNameIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::EvacRaid(bool Frigate, const class FName& FrigNameIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EvacRaid");
		
		ARaidPlayerController_EvacRaid_Params params {};
		params.Frigate = Frigate;
		params.FrigNameIn = FrigNameIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EnteringPlanetSpaceVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Boarded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::EnteringPlanetSpaceVolume(bool Boarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EnteringPlanetSpaceVolume");
		
		ARaidPlayerController_EnteringPlanetSpaceVolume_Params params {};
		params.Boarded = Boarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EnteringPlanetRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::EnteringPlanetRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EnteringPlanetRaidVolume");
		
		ARaidPlayerController_EnteringPlanetRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EnteringLandRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::EnteringLandRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EnteringLandRaidVolume");
		
		ARaidPlayerController_EnteringLandRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EnterEvacRaidVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidPlanetEvac*                             VolumeIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::EnterEvacRaidVolume(class ARaidPlanetEvac* VolumeIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EnterEvacRaidVolume");
		
		ARaidPlayerController_EnterEvacRaidVolume_Params params {};
		params.VolumeIn = VolumeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.EnteredPlanetAtmos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceshipInside*                        ShipInside                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::EnteredPlanetAtmos(class ARaidSpaceshipInside* ShipInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.EnteredPlanetAtmos");
		
		ARaidPlayerController_EnteredPlanetAtmos_Params params {};
		params.ShipInside = ShipInside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.DeathToMainMenu
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::DeathToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.DeathToMainMenu");
		
		ARaidPlayerController_DeathToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.CreateGroup
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::CreateGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.CreateGroup");
		
		ARaidPlayerController_CreateGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientUsingHangerConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ShipsIN                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientUsingHangerConsole(TArray<class FString> ShipsIN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientUsingHangerConsole");
		
		ARaidPlayerController_ClientUsingHangerConsole_Params params {};
		params.ShipsIN = ShipsIN;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientTransChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerTranisitionState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               breached                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientTransChange(EPlayerTranisitionState NewState, bool breached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientTransChange");
		
		ARaidPlayerController_ClientTransChange_Params params {};
		params.NewState = NewState;
		params.breached = breached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientToggleInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientToggleInventory(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientToggleInventory");
		
		ARaidPlayerController_ClientToggleInventory_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientStartOnlineGame
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientStartOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientStartOnlineGame");
		
		ARaidPlayerController_ClientStartOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientStarthangerKeyPad
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientStarthangerKeyPad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientStarthangerKeyPad");
		
		ARaidPlayerController_ClientStarthangerKeyPad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientStartAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionAbilityTypes                           AbTypeToCause                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientStartAbility(EInteractionAbilityTypes AbTypeToCause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientStartAbility");
		
		ARaidPlayerController_ClientStartAbility_Params params {};
		params.AbTypeToCause = AbTypeToCause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientShowShopInventory
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientShowShopInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientShowShopInventory");
		
		ARaidPlayerController_ClientShowShopInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientShowPlayerStorage
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientShowPlayerStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientShowPlayerStorage");
		
		ARaidPlayerController_ClientShowPlayerStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientShowLoading
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientShowLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientShowLoading");
		
		ARaidPlayerController_ClientShowLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientShowDebugSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationTo                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientShowDebugSphere(const struct FVector& LocationTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientShowDebugSphere");
		
		ARaidPlayerController_ClientShowDebugSphere_Params params {};
		params.LocationTo = LocationTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientShowDebugLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationFrom                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocationTo                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientShowDebugLine(const struct FVector& LocationFrom, const struct FVector& LocationTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientShowDebugLine");
		
		ARaidPlayerController_ClientShowDebugLine_Params params {};
		params.LocationFrom = LocationFrom;
		params.LocationTo = LocationTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientSetSpectatorCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientSetSpectatorCamera");
		
		ARaidPlayerController_ClientSetSpectatorCamera_Params params {};
		params.CameraLocation = CameraLocation;
		params.CameraRotation = CameraRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientSendRoundEndEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsWinner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ExpendedTimeInSeconds                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientSendRoundEndEvent(bool bIsWinner, int32_t ExpendedTimeInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientSendRoundEndEvent");
		
		ARaidPlayerController_ClientSendRoundEndEvent_Params params {};
		params.bIsWinner = bIsWinner;
		params.ExpendedTimeInSeconds = ExpendedTimeInSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientReceivedCrewInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientReceivedCrewInvite(const class FString& CrewNameName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientReceivedCrewInvite");
		
		ARaidPlayerController_ClientReceivedCrewInvite_Params params {};
		params.CrewNameName = CrewNameName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientPlayerHasDied
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientPlayerHasDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientPlayerHasDied");
		
		ARaidPlayerController_ClientPlayerHasDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientOpenShipVendorMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShipShop                                   StockInShop                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientOpenShipVendorMenu(const struct FShipShop& StockInShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientOpenShipVendorMenu");
		
		ARaidPlayerController_ClientOpenShipVendorMenu_Params params {};
		params.StockInShop = StockInShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientOpenCaptainWidget
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientOpenCaptainWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientOpenCaptainWidget");
		
		ARaidPlayerController_ClientOpenCaptainWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientNotTheCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustCrew                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientNotTheCaptain(bool JustCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientNotTheCaptain");
		
		ARaidPlayerController_ClientNotTheCaptain_Params params {};
		params.JustCrew = JustCrew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientNoAmmoForTuret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReloadTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientNoAmmoForTuret(float ReloadTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientNoAmmoForTuret");
		
		ARaidPlayerController_ClientNoAmmoForTuret_Params params {};
		params.ReloadTime = ReloadTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientKeyEnterCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientKeyEnterCheck(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientKeyEnterCheck");
		
		ARaidPlayerController_ClientKeyEnterCheck_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientHideLoading
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientHideLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientHideLoading");
		
		ARaidPlayerController_ClientHideLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientHeadshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientHeadshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientHeadshot");
		
		ARaidPlayerController_ClientHeadshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientHangerEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHangerEvent                                       HEvent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientHangerEvent(EHangerEvent HEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientHangerEvent");
		
		ARaidPlayerController_ClientHangerEvent_Params params {};
		params.HEvent = HEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientGameStarted
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientGameStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientGameStarted");
		
		ARaidPlayerController_ClientGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientFrigateDockingToStation
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientFrigateDockingToStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientFrigateDockingToStation");
		
		ARaidPlayerController_ClientFrigateDockingToStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientFiredTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeforReload                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientFiredTurret(float TimeforReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientFiredTurret");
		
		ARaidPlayerController_ClientFiredTurret_Params params {};
		params.TimeforReload = TimeforReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientEnteringPlanetSpaceVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Boarded                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientEnteringPlanetSpaceVolume(bool Boarded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientEnteringPlanetSpaceVolume");
		
		ARaidPlayerController_ClientEnteringPlanetSpaceVolume_Params params {};
		params.Boarded = Boarded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientEnteringPlanetRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientEnteringPlanetRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientEnteringPlanetRaidVolume");
		
		ARaidPlayerController_ClientEnteringPlanetRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientEnteringLandRaidVolume
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientEnteringLandRaidVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientEnteringLandRaidVolume");
		
		ARaidPlayerController_ClientEnteringLandRaidVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientEndOnlineGame
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientEndOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientEndOnlineGame");
		
		ARaidPlayerController_ClientEndOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientDissconnectedFromServer
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientDissconnectedFromServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientDissconnectedFromServer");
		
		ARaidPlayerController_ClientDissconnectedFromServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientCantLandEmemyOnBoard
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientCantLandEmemyOnBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientCantLandEmemyOnBoard");
		
		ARaidPlayerController_ClientCantLandEmemyOnBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientBulletWizzPastHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBulletType                                        BulletType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientBulletWizzPastHead(EBulletType BulletType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientBulletWizzPastHead");
		
		ARaidPlayerController_ClientBulletWizzPastHead_Params params {};
		params.BulletType = BulletType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientBodyshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::ClientBodyshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientBodyshot");
		
		ARaidPlayerController_ClientBodyshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClientBeenBreached
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClientBeenBreached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClientBeenBreached");
		
		ARaidPlayerController_ClientBeenBreached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Client_EvacRaidTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        FrigNameIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Client_EvacRaidTurret(const class FName& FrigNameIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Client_EvacRaidTurret");
		
		ARaidPlayerController_Client_EvacRaidTurret_Params params {};
		params.FrigNameIn = FrigNameIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.ClearPreviousComp
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::ClearPreviousComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.ClearPreviousComp");
		
		ARaidPlayerController_ClearPreviousComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.changecameraweightingRot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              maxdist                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minamount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxamount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::changecameraweightingRot(float maxdist, float minamount, float maxamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.changecameraweightingRot");
		
		ARaidPlayerController_changecameraweightingRot_Params params {};
		params.maxdist = maxdist;
		params.minamount = minamount;
		params.maxamount = maxamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.changecameraweightingloc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              maxdist                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minamount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxamount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::changecameraweightingloc(float maxdist, float minamount, float maxamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.changecameraweightingloc");
		
		ARaidPlayerController_changecameraweightingloc_Params params {};
		params.maxdist = maxdist;
		params.minamount = minamount;
		params.maxamount = maxamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.changeCameraMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::changeCameraMode(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.changeCameraMode");
		
		ARaidPlayerController_changeCameraMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.CantLandEmemyOnBoard
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::CantLandEmemyOnBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.CantLandEmemyOnBoard");
		
		ARaidPlayerController_CantLandEmemyOnBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.CantFireWeaponBroken
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::CantFireWeaponBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.CantFireWeaponBroken");
		
		ARaidPlayerController_CantFireWeaponBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.BulletWizzPastHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBulletType                                        BulletType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::BulletWizzPastHead(EBulletType BulletType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.BulletWizzPastHead");
		
		ARaidPlayerController_BulletWizzPastHead_Params params {};
		params.BulletType = BulletType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.Bodyshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ArmourHit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::Bodyshot(bool ArmourHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.Bodyshot");
		
		ARaidPlayerController_Bodyshot_Params params {};
		params.ArmourHit = ArmourHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.BeenBreached
	 * 		Flags  -> ()
	 */
	void ARaidPlayerController::BeenBreached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.BeenBreached");
		
		ARaidPlayerController_BeenBreached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerController.AcceptCrewInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerController::AcceptCrewInvite(const class FString& CrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerController.AcceptCrewInvite");
		
		ARaidPlayerController_AcceptCrewInvite_Params params {};
		params.CrewName = CrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.ToggleMatchTimer
	 * 		Flags  -> ()
	 */
	void URaidCheatManager::ToggleMatchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.ToggleMatchTimer");
		
		URaidCheatManager_ToggleMatchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.ToggleInfiniteClip
	 * 		Flags  -> ()
	 */
	void URaidCheatManager::ToggleInfiniteClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.ToggleInfiniteClip");
		
		URaidCheatManager_ToggleInfiniteClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.ToggleInfiniteAmmo
	 * 		Flags  -> ()
	 */
	void URaidCheatManager::ToggleInfiniteAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.ToggleInfiniteAmmo");
		
		URaidCheatManager_ToggleInfiniteAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.SpawnBot
	 * 		Flags  -> ()
	 */
	void URaidCheatManager::SpawnBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.SpawnBot");
		
		URaidCheatManager_SpawnBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.ForceMatchStart
	 * 		Flags  -> ()
	 */
	void URaidCheatManager::ForceMatchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.ForceMatchStart");
		
		URaidCheatManager_ForceMatchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.Cheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidCheatManager::Cheat(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.Cheat");
		
		URaidCheatManager_Cheat_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCheatManager.ChangeTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTeamNumber                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidCheatManager::ChangeTeam(int32_t NewTeamNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCheatManager.ChangeTeam");
		
		URaidCheatManager_ChangeTeam_Params params {};
		params.NewTeamNumber = NewTeamNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidCoverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidCoverComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCoverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCoverMarker.ReserveCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ReservingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidCoverMarker::ReserveCover(class AActor* ReservingActor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCoverMarker.ReserveCover");
		
		ARaidCoverMarker_ReserveCover_Params params {};
		params.ReservingActor = ReservingActor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCoverMarker.IsCoverLocationFreeConst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ReservingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidCoverMarker::IsCoverLocationFreeConst(class AActor* ReservingActor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCoverMarker.IsCoverLocationFreeConst");
		
		ARaidCoverMarker_IsCoverLocationFreeConst_Params params {};
		params.ReservingActor = ReservingActor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCoverMarker.IsCoverLocationFree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ReservingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidCoverMarker::IsCoverLocationFree(class AActor* ReservingActor, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCoverMarker.IsCoverLocationFree");
		
		ARaidCoverMarker_IsCoverLocationFree_Params params {};
		params.ReservingActor = ReservingActor;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCoverMarker.GetDesiredRotation
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidCoverMarker::GetDesiredRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCoverMarker.GetDesiredRotation");
		
		ARaidCoverMarker_GetDesiredRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidCoverMarker.CancelReservation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidCoverMarker::CancelReservation(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidCoverMarker.CancelReservation");
		
		ARaidCoverMarker_CancelReservation_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidCoverMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidCoverMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidCoverMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidDebugAIGymSpawner.TimedSpawning
	 * 		Flags  -> ()
	 */
	void ARaidDebugAIGymSpawner::TimedSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidDebugAIGymSpawner.TimedSpawning");
		
		ARaidDebugAIGymSpawner_TimedSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidDebugAIGymSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidDebugAIGymSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDebugAIGymSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidDemoSpectator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidDemoSpectator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDemoSpectator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidDockingComponent.ShipDocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceship*                              DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidDockingComponent::ShipDocking(class ARaidSpaceship* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidDockingComponent.ShipDocking");
		
		URaidDockingComponent_ShipDocking_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidDockingComponent.FrigateExiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidFrigate*                                DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidDockingComponent::FrigateExiting(class ARaidFrigate* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidDockingComponent.FrigateExiting");
		
		URaidDockingComponent_FrigateExiting_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidDockingComponent.FrigateDocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidFrigate*                                DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidDockingComponent::FrigateDocking(class ARaidFrigate* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidDockingComponent.FrigateDocking");
		
		URaidDockingComponent_FrigateDocking_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidDockingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidDockingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDockingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseable.OnUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InstigatorPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidUseable::OnUsed(class APawn* InstigatorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseable.OnUsed");
		
		ARaidUseable_OnUsed_Params params {};
		params.InstigatorPawn = InstigatorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseable.GetInteractionInfo
	 * 		Flags  -> ()
	 */
	struct FInteractionInfo ARaidUseable::GetInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseable.GetInteractionInfo");
		
		ARaidUseable_GetInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidUseable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidUseable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidDropPodControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidDropPodControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidDropPodControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidExplosionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidExplosionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidExplosionEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.ShipDocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceship*                              DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DockNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigate::ShipDocking(class ARaidSpaceship* DockingShip, int32_t DockNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.ShipDocking");
		
		ARaidFrigate_ShipDocking_Params params {};
		params.DockingShip = DockingShip;
		params.DockNumber = DockNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.ServerReloadFrigate
	 * 		Flags  -> ()
	 */
	void ARaidFrigate::ServerReloadFrigate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.ServerReloadFrigate");
		
		ARaidFrigate_ServerReloadFrigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.ServerFireFrigate
	 * 		Flags  -> ()
	 */
	void ARaidFrigate::ServerFireFrigate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.ServerFireFrigate");
		
		ARaidFrigate_ServerFireFrigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.ServerDockingToPlanet
	 * 		Flags  -> ()
	 */
	void ARaidFrigate::ServerDockingToPlanet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.ServerDockingToPlanet");
		
		ARaidFrigate_ServerDockingToPlanet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.ServerDockingToNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidDockingComponent*                       DockingComp                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigate::ServerDockingToNode(class URaidDockingComponent* DockingComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.ServerDockingToNode");
		
		ARaidFrigate_ServerDockingToNode_Params params {};
		params.DockingComp = DockingComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.Server_ChangeUpByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NewByte                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigate::Server_ChangeUpByte(unsigned char NewByte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.Server_ChangeUpByte");
		
		ARaidFrigate_Server_ChangeUpByte_Params params {};
		params.NewByte = NewByte;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.Server_ChangeTurnByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NewByte                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigate::Server_ChangeTurnByte(unsigned char NewByte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.Server_ChangeTurnByte");
		
		ARaidFrigate_Server_ChangeTurnByte_Params params {};
		params.NewByte = NewByte;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.OnFaceRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigate::OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.OnFaceRotation");
		
		ARaidFrigate_OnFaceRotation_Params params {};
		params.NewRotation = NewRotation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetUpByte
	 * 		Flags  -> ()
	 */
	float ARaidFrigate::GetUpByte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetUpByte");
		
		ARaidFrigate_GetUpByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetTurretDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidFrigate::GetTurretDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetTurretDestroyed");
		
		ARaidFrigate_GetTurretDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetTurnByte
	 * 		Flags  -> ()
	 */
	float ARaidFrigate::GetTurnByte()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetTurnByte");
		
		ARaidFrigate_GetTurnByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetSystemsHealth
	 * 		Flags  -> ()
	 */
	TArray<struct FSystemHealth> ARaidFrigate::GetSystemsHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetSystemsHealth");
		
		ARaidFrigate_GetSystemsHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetShipName
	 * 		Flags  -> ()
	 */
	class FString ARaidFrigate::GetShipName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetShipName");
		
		ARaidFrigate_GetShipName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetLifeSupportDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidFrigate::GetLifeSupportDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetLifeSupportDestroyed");
		
		ARaidFrigate_GetLifeSupportDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetHullHealth
	 * 		Flags  -> ()
	 */
	float ARaidFrigate::GetHullHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetHullHealth");
		
		ARaidFrigate_GetHullHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetFrigateID
	 * 		Flags  -> ()
	 */
	class FName ARaidFrigate::GetFrigateID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetFrigateID");
		
		ARaidFrigate_GetFrigateID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.GetEngineDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidFrigate::GetEngineDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.GetEngineDestroyed");
		
		ARaidFrigate_GetEngineDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.FrigateSunk
	 * 		Flags  -> ()
	 */
	void ARaidFrigate::FrigateSunk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.FrigateSunk");
		
		ARaidFrigate_FrigateSunk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigate.DockingCheck
	 * 		Flags  -> ()
	 */
	class URaidDockingComponent* ARaidFrigate::DockingCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigate.DockingCheck");
		
		ARaidFrigate_DockingCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidFrigate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidFrigate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateDockingHangerComponent.OpenMainDoor
	 * 		Flags  -> ()
	 */
	void URaidFrigateDockingHangerComponent::OpenMainDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateDockingHangerComponent.OpenMainDoor");
		
		URaidFrigateDockingHangerComponent_OpenMainDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateDockingHangerComponent.CloseMainDoor
	 * 		Flags  -> ()
	 */
	void URaidFrigateDockingHangerComponent::CloseMainDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateDockingHangerComponent.CloseMainDoor");
		
		URaidFrigateDockingHangerComponent_CloseMainDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidFrigateDockingHangerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidFrigateDockingHangerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateDockingHangerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidFrigateHitVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidFrigateHitVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateHitVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidFrigateIntSpawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidFrigateIntSpawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateIntSpawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUseState                                          NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::SetState(EUseState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.SetState");
		
		URaidUseableComponent_SetState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.ServerSetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUseState                                          NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::ServerSetState(EUseState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.ServerSetState");
		
		URaidUseableComponent_ServerSetState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.PlayMontageOnTaggedSkelComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TagLookingFor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::PlayMontageOnTaggedSkelComp(const class FName& TagLookingFor, class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.PlayMontageOnTaggedSkelComp");
		
		URaidUseableComponent_PlayMontageOnTaggedSkelComp_Params params {};
		params.TagLookingFor = TagLookingFor;
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.PlayMontageOnSkelComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::PlayMontageOnSkelComp(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.PlayMontageOnSkelComp");
		
		URaidUseableComponent_PlayMontageOnSkelComp_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.PlayLocalAndRepMontageOnTaggedSkelComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           LocalController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TagLookingFor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                ServerAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::PlayLocalAndRepMontageOnTaggedSkelComp(class APlayerController* LocalController, const class FName& TagLookingFor, class UAnimMontage* ClientAnimMontage, class UAnimMontage* ServerAnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.PlayLocalAndRepMontageOnTaggedSkelComp");
		
		URaidUseableComponent_PlayLocalAndRepMontageOnTaggedSkelComp_Params params {};
		params.LocalController = LocalController;
		params.TagLookingFor = TagLookingFor;
		params.ClientAnimMontage = ClientAnimMontage;
		params.ServerAnimMontage = ServerAnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.OnRep_CurrentState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUseState                                          PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::OnRep_CurrentState(EUseState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.OnRep_CurrentState");
		
		URaidUseableComponent_OnRep_CurrentState_Params params {};
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.OnBPCompUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       InstigatorPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::OnBPCompUsed(class APawn* InstigatorPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.OnBPCompUsed");
		
		URaidUseableComponent_OnBPCompUsed_Params params {};
		params.InstigatorPawn = InstigatorPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidUseableComponent::Interact(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.Interact");
		
		URaidUseableComponent_Interact_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetState
	 * 		Flags  -> ()
	 */
	EUseState URaidUseableComponent::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetState");
		
		URaidUseableComponent_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetInteractionMeshByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TagLookingFor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* URaidUseableComponent::GetInteractionMeshByTag(const class FName& TagLookingFor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetInteractionMeshByTag");
		
		URaidUseableComponent_GetInteractionMeshByTag_Params params {};
		params.TagLookingFor = TagLookingFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetInteractionMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* URaidUseableComponent::GetInteractionMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetInteractionMesh");
		
		URaidUseableComponent_GetInteractionMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetInteractionLookAtRotation
	 * 		Flags  -> ()
	 */
	struct FRotator URaidUseableComponent::GetInteractionLookAtRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetInteractionLookAtRotation");
		
		URaidUseableComponent_GetInteractionLookAtRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetInteractionLocation
	 * 		Flags  -> ()
	 */
	struct FVector URaidUseableComponent::GetInteractionLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetInteractionLocation");
		
		URaidUseableComponent_GetInteractionLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.GetInteractionInfo
	 * 		Flags  -> ()
	 */
	struct FInteractionInfo URaidUseableComponent::GetInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.GetInteractionInfo");
		
		URaidUseableComponent_GetInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableComponent.CanUseComp
	 * 		Flags  -> ()
	 */
	bool URaidUseableComponent::CanUseComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableComponent.CanUseComp");
		
		URaidUseableComponent_CanUseComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidFrigateLandingConsole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidFrigateLandingConsole::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateLandingConsole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidFrigateLevelStreamActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidFrigateLevelStreamActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateLevelStreamActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateShuttleControl.PlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateShuttleControl::PlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateShuttleControl.PlayCompAnimNotify");
		
		ARaidFrigateShuttleControl_PlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateShuttleControl.OnPlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateShuttleControl::OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateShuttleControl.OnPlayCompAnimNotify");
		
		ARaidFrigateShuttleControl_OnPlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateShuttleControl.GetInteractionMesh
	 * 		Flags  -> ()
	 */
	class USkeletalMeshComponent* ARaidFrigateShuttleControl::GetInteractionMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateShuttleControl.GetInteractionMesh");
		
		ARaidFrigateShuttleControl_GetInteractionMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateShuttleControl.GetInteractionLookAtRotation
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidFrigateShuttleControl::GetInteractionLookAtRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateShuttleControl.GetInteractionLookAtRotation");
		
		ARaidFrigateShuttleControl_GetInteractionLookAtRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateShuttleControl.GetInteractionLocation
	 * 		Flags  -> ()
	 */
	struct FVector ARaidFrigateShuttleControl::GetInteractionLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateShuttleControl.GetInteractionLocation");
		
		ARaidFrigateShuttleControl_GetInteractionLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidFrigateShuttleControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidFrigateShuttleControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateShuttleControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidFrigateStashComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidFrigateStashComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateStashComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.StartDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OpenDoor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::StartDoorEvent(bool OpenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.StartDoorEvent");
		
		ARaidFrigateStationDock_StartDoorEvent_Params params {};
		params.OpenDoor = OpenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponentNotLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::PlayMontageOnComponentNotLocal(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponentNotLocal");
		
		ARaidFrigateStationDock_PlayMontageOnComponentNotLocal_Params params {};
		params.AnimMontage = AnimMontage;
		params.CompToPlayOn = CompToPlayOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::PlayMontageOnComponent(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponent");
		
		ARaidFrigateStationDock_PlayMontageOnComponent_Params params {};
		params.AnimMontage = AnimMontage;
		params.CompToPlayOn = CompToPlayOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.OnRep_IsOpen
	 * 		Flags  -> ()
	 */
	void ARaidFrigateStationDock::OnRep_IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.OnRep_IsOpen");
		
		ARaidFrigateStationDock_OnRep_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.OnRep_HangerInUse
	 * 		Flags  -> ()
	 */
	void ARaidFrigateStationDock::OnRep_HangerInUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.OnRep_HangerInUse");
		
		ARaidFrigateStationDock_OnRep_HangerInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.OnRep_EnableColiision
	 * 		Flags  -> ()
	 */
	void ARaidFrigateStationDock::OnRep_EnableColiision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.OnRep_EnableColiision");
		
		ARaidFrigateStationDock_OnRep_EnableColiision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.HangerUseStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               hangerchange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::HangerUseStateChange(bool hangerchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.HangerUseStateChange");
		
		ARaidFrigateStationDock_HangerUseStateChange_Params params {};
		params.hangerchange = hangerchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.EnableCollisionOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableCollision                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::EnableCollisionOnDoor(bool EnableCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.EnableCollisionOnDoor");
		
		ARaidFrigateStationDock_EnableCollisionOnDoor_Params params {};
		params.EnableCollision = EnableCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidFrigateStationDock.DoorOpenEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BopenDoor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidFrigateStationDock::DoorOpenEvent(bool BopenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidFrigateStationDock.DoorOpenEvent");
		
		ARaidFrigateStationDock_DoorOpenEvent_Params params {};
		params.BopenDoor = BopenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidFrigateStationDock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidFrigateStationDock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidFrigateStationDock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameMode.SetAllowBots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowBots                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMaxBots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGameMode::SetAllowBots(bool bInAllowBots, int32_t InMaxBots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameMode.SetAllowBots");
		
		ARaidGameMode_SetAllowBots_Params params {};
		params.bInAllowBots = bInAllowBots;
		params.InMaxBots = InMaxBots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameMode.GetPoolForProj
	 * 		Flags  -> ()
	 */
	int32_t ARaidGameMode::GetPoolForProj()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameMode.GetPoolForProj");
		
		ARaidGameMode_GetPoolForProj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameMode.FinishMatch
	 * 		Flags  -> ()
	 */
	void ARaidGameMode::FinishMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameMode.FinishMatch");
		
		ARaidGameMode_FinishMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGame_FreeForAll.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGame_FreeForAll::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGame_FreeForAll");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGame_Menu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGame_Menu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGame_Menu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGame_Space.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGame_Space::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGame_Space");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGame_TeamDeathMatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGame_TeamDeathMatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGame_TeamDeathMatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGameInventoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGameInventoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameInventoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.SendTargetDataToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::SendTargetDataToServer(const struct FGameplayAbilityTargetDataHandle& TargetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.SendTargetDataToServer");
		
		URaidGameplayAbility_SendTargetDataToServer_Params params {};
		params.TargetData = TargetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MontageStopForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverrideBlendOutTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::MontageStopForMesh(class USkeletalMeshComponent* InMesh, float OverrideBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MontageStopForMesh");
		
		URaidGameplayAbility_MontageStopForMesh_Params params {};
		params.InMesh = InMesh;
		params.OverrideBlendOutTime = OverrideBlendOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MontageStopForAllMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OverrideBlendOutTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::MontageStopForAllMeshes(float OverrideBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MontageStopForAllMeshes");
		
		URaidGameplayAbility_MontageStopForAllMeshes_Params params {};
		params.OverrideBlendOutTime = OverrideBlendOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MontageSetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::MontageSetPlayRate(class USkeletalMeshComponent* InMesh, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MontageSetPlayRate");
		
		URaidGameplayAbility_MontageSetPlayRate_Params params {};
		params.InMesh = InMesh;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MontageSetNextSectionNameForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FromSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ToSectionName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::MontageSetNextSectionNameForMesh(class USkeletalMeshComponent* InMesh, const class FName& FromSectionName, const class FName& ToSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MontageSetNextSectionNameForMesh");
		
		URaidGameplayAbility_MontageSetNextSectionNameForMesh_Params params {};
		params.InMesh = InMesh;
		params.FromSectionName = FromSectionName;
		params.ToSectionName = ToSectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MontageJumpToSectionForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::MontageJumpToSectionForMesh(class USkeletalMeshComponent* InMesh, const class FName& SectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MontageJumpToSectionForMesh");
		
		URaidGameplayAbility_MontageJumpToSectionForMesh_Params params {};
		params.InMesh = InMesh;
		params.SectionName = SectionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromHitResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitResults                                                 (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle URaidGameplayAbility::MakeGameplayAbilityTargetDataHandleFromHitResults(TArray<struct FHitResult> HitResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromHitResults");
		
		URaidGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Params params {};
		params.HitResults = HitResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromActorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              TargetActors                                               (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FGameplayAbilityTargetDataHandle URaidGameplayAbility::MakeGameplayAbilityTargetDataHandleFromActorArray(TArray<class AActor*> TargetActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromActorArray");
		
		URaidGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Params params {};
		params.TargetActors = TargetActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpecFromContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGSGameplayEffectContainer                  Container                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OverrideGameplayLevel                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGSGameplayEffectContainerSpec URaidGameplayAbility::MakeEffectContainerSpecFromContainer(const struct FGSGameplayEffectContainer& Container, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpecFromContainer");
		
		URaidGameplayAbility_MakeEffectContainerSpecFromContainer_Params params {};
		params.Container = Container;
		params.EventData = EventData;
		params.OverrideGameplayLevel = OverrideGameplayLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ContainerTag                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OverrideGameplayLevel                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGSGameplayEffectContainerSpec URaidGameplayAbility::MakeEffectContainerSpec(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpec");
		
		URaidGameplayAbility_MakeEffectContainerSpec_Params params {};
		params.ContainerTag = ContainerTag;
		params.EventData = EventData;
		params.OverrideGameplayLevel = OverrideGameplayLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.K2_GetSourceObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UObject* URaidGameplayAbility::K2_GetSourceObject(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.K2_GetSourceObject");
		
		URaidGameplayAbility_K2_GetSourceObject_Params params {};
		params.Handle = Handle;
		params.ActorInfo = ActorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.IsPredictionKeyValidForMorePrediction
	 * 		Flags  -> ()
	 */
	bool URaidGameplayAbility::IsPredictionKeyValidForMorePrediction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.IsPredictionKeyValidForMorePrediction");
		
		URaidGameplayAbility_IsPredictionKeyValidForMorePrediction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.IsInputPressed
	 * 		Flags  -> ()
	 */
	bool URaidGameplayAbility::IsInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.IsInputPressed");
		
		URaidGameplayAbility_IsInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.GSCheckCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool URaidGameplayAbility::GSCheckCost(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.GSCheckCost");
		
		URaidGameplayAbility_GSCheckCost_Params params {};
		params.Handle = Handle;
		params.ActorInfo = ActorInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.GSApplyCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  Handle                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URaidGameplayAbility::GSApplyCost(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilityActivationInfo& ActivationInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.GSApplyCost");
		
		URaidGameplayAbility_GSApplyCost_Params params {};
		params.Handle = Handle;
		params.ActorInfo = ActorInfo;
		params.ActivationInfo = ActivationInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.GetCurrentPredictionKeyStatus
	 * 		Flags  -> ()
	 */
	class FString URaidGameplayAbility::GetCurrentPredictionKeyStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.GetCurrentPredictionKeyStatus");
		
		URaidGameplayAbility_GetCurrentPredictionKeyStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.GetCurrentMontageForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimMontage* URaidGameplayAbility::GetCurrentMontageForMesh(class USkeletalMeshComponent* InMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.GetCurrentMontageForMesh");
		
		URaidGameplayAbility_GetCurrentMontageForMesh_Params params {};
		params.InMesh = InMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.BatchRPCTryActivateAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAbilitySpecHandle                  InAbilityHandle                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EndAbilityImmediately                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URaidGameplayAbility::BatchRPCTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityHandle, bool EndAbilityImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.BatchRPCTryActivateAbility");
		
		URaidGameplayAbility_BatchRPCTryActivateAbility_Params params {};
		params.InAbilityHandle = InAbilityHandle;
		params.EndAbilityImmediately = EndAbilityImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGameplayAbility.ApplyEffectContainerSpec
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGSGameplayEffectContainerSpec              ContainerSpec                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FActiveGameplayEffectHandle> URaidGameplayAbility::ApplyEffectContainerSpec(const struct FGSGameplayEffectContainerSpec& ContainerSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGameplayAbility.ApplyEffectContainerSpec");
		
		URaidGameplayAbility_ApplyEffectContainerSpec_Params params {};
		params.ContainerSpec = ContainerSpec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGameplayAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGameplayAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameplayAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidGenericUseableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidGenericUseableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGenericUseableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.updateGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAtom>                               atoms                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::updateGoal(TArray<struct FAtom> atoms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.updateGoal");
		
		ARaidGOAPController_updateGoal_Params params {};
		params.atoms = atoms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.updateCurrentWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAtom>                               atoms                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::updateCurrentWorld(TArray<struct FAtom> atoms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.updateCurrentWorld");
		
		ARaidGOAPController_updateCurrentWorld_Params params {};
		params.atoms = atoms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.TryLean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Back                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::TryLean(bool Left, bool Right, bool Back)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.TryLean");
		
		ARaidGOAPController_TryLean_Params params {};
		params.Left = Left;
		params.Right = Right;
		params.Back = Back;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StopMovementRequest
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::StopMovementRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StopMovementRequest");
		
		ARaidGOAPController_StopMovementRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StopLookRequest
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::StopLookRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StopLookRequest");
		
		ARaidGOAPController_StopLookRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StopGOAPEvent
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::StopGOAPEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StopGOAPEvent");
		
		ARaidGOAPController_StopGOAPEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StartWorkoutGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       StateCompleted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::StartWorkoutGoal(ERaidAIState StateCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StartWorkoutGoal");
		
		ARaidGOAPController_StartWorkoutGoal_Params params {};
		params.StateCompleted = StateCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StartsettingKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::StartsettingKeys(ERaidAIState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StartsettingKeys");
		
		ARaidGOAPController_StartsettingKeys_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.StartGOAPEvent
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::StartGOAPEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.StartGOAPEvent");
		
		ARaidGOAPController_StartGOAPEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.Sprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RunWalk                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::Sprint(bool RunWalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.Sprint");
		
		ARaidGOAPController_Sprint_Params params {};
		params.RunWalk = RunWalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ShootAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LoctoShoot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::ShootAtLocation(const struct FVector& LoctoShoot, float MissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ShootAtLocation");
		
		ARaidGOAPController_ShootAtLocation_Params params {};
		params.LoctoShoot = LoctoShoot;
		params.MissRate = MissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ShootAtCurrentEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::ShootAtCurrentEnemy(float MissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ShootAtCurrentEnemy");
		
		ARaidGOAPController_ShootAtCurrentEnemy_Params params {};
		params.MissRate = MissRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ShootAimedAtCurrentEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MissRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BonedAimedAt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::ShootAimedAtCurrentEnemy(float MissRate, const class FName& BonedAimedAt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ShootAimedAtCurrentEnemy");
		
		ARaidGOAPController_ShootAimedAtCurrentEnemy_Params params {};
		params.MissRate = MissRate;
		params.BonedAimedAt = BonedAimedAt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetWaiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetWaiting(bool bForceChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetWaiting");
		
		ARaidGOAPController_SetWaiting_Params params {};
		params.bForceChange = bForceChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetTargetEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              TEnemy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetTargetEnemy(class ARaidCharacter* TEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetTargetEnemy");
		
		ARaidGOAPController_SetTargetEnemy_Params params {};
		params.TEnemy = TEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetStartingKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAtom>                               StartingWorldState                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetStartingKey(TArray<struct FAtom> StartingWorldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetStartingKey");
		
		ARaidGOAPController_SetStartingKey_Params params {};
		params.StartingWorldState = StartingWorldState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetShuffleOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShuffleAmountLeftRight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetShuffleOnce(float ShuffleAmountLeftRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetShuffleOnce");
		
		ARaidGOAPController_SetShuffleOnce_Params params {};
		params.ShuffleAmountLeftRight = ShuffleAmountLeftRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetPatrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetPatrolling(bool bForceChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetPatrolling");
		
		ARaidGOAPController_SetPatrolling_Params params {};
		params.bForceChange = bForceChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetMoveShuffle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeBetween                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ShuffleAmountLeftRight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetMoveShuffle(float TimeBetween, float CancelOUt, float ShuffleAmountLeftRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetMoveShuffle");
		
		ARaidGOAPController_SetMoveShuffle_Params params {};
		params.TimeBetween = TimeBetween;
		params.CancelOUt = CancelOUt;
		params.ShuffleAmountLeftRight = ShuffleAmountLeftRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetLookAtTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocatLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetLookAtTargetLocation(const struct FVector& LocatLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetLookAtTargetLocation");
		
		ARaidGOAPController_SetLookAtTargetLocation_Params params {};
		params.LocatLocation = LocatLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetLookAroundWiggleOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              WiggleAmountLeftRight                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountUpDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetLookAroundWiggleOnce(float WiggleAmountLeftRight, float WiggleAmountUpDown, float CancelOUt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetLookAroundWiggleOnce");
		
		ARaidGOAPController_SetLookAroundWiggleOnce_Params params {};
		params.WiggleAmountLeftRight = WiggleAmountLeftRight;
		params.WiggleAmountUpDown = WiggleAmountUpDown;
		params.CancelOUt = CancelOUt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetLookAroundWiggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeBetween                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountLeftRight                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WiggleAmountUpDown                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetLookAroundWiggle(float TimeBetween, float CancelOUt, float WiggleAmountLeftRight, float WiggleAmountUpDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetLookAroundWiggle");
		
		ARaidGOAPController_SetLookAroundWiggle_Params params {};
		params.TimeBetween = TimeBetween;
		params.CancelOUt = CancelOUt;
		params.WiggleAmountLeftRight = WiggleAmountLeftRight;
		params.WiggleAmountUpDown = WiggleAmountUpDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.setGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAtom>                               NewGoal                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::setGoal(TArray<struct FAtom> NewGoal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.setGoal");
		
		ARaidGOAPController_setGoal_Params params {};
		params.NewGoal = NewGoal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.setCurrentWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAtom>                               newCurrentWorld                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::setCurrentWorld(TArray<struct FAtom> newCurrentWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.setCurrentWorld");
		
		ARaidGOAPController_setCurrentWorld_Params params {};
		params.newCurrentWorld = newCurrentWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetBotRotationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetBotRotationSpeed(float RotationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetBotRotationSpeed");
		
		ARaidGOAPController_SetBotRotationSpeed_Params params {};
		params.RotationSpeed = RotationSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.SetAttacking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForceChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::SetAttacking(bool bForceChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.SetAttacking");
		
		ARaidGOAPController_SetAttacking_Params params {};
		params.bForceChange = bForceChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ResetWorldStateKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GOAPKEY                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::ResetWorldStateKey(const class FString& GOAPKEY, bool NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ResetWorldStateKey");
		
		ARaidGOAPController_ResetWorldStateKey_Params params {};
		params.GOAPKEY = GOAPKEY;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ResetWorldState
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::ResetWorldState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ResetWorldState");
		
		ARaidGOAPController_ResetWorldState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.QueryForLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidEQS                                           TypeToCheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::QueryForLocation(ERaidEQS TypeToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.QueryForLocation");
		
		ARaidGOAPController_QueryForLocation_Params params {};
		params.TypeToCheck = TypeToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ProcessFunctionTimerCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGOAPAction*                                 ActionIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::ProcessFunctionTimerCall(class UGOAPAction* ActionIn, const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ProcessFunctionTimerCall");
		
		ARaidGOAPController_ProcessFunctionTimerCall_Params params {};
		params.ActionIn = ActionIn;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.PlanIsNowInvalid
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::PlanIsNowInvalid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.PlanIsNowInvalid");
		
		ARaidGOAPController_PlanIsNowInvalid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.OnGOAPTaskCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskFinsihed                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GoalComplete                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::OnGOAPTaskCompleted(const class FString& TaskFinsihed, const class FString& GoalComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.OnGOAPTaskCompleted");
		
		ARaidGOAPController_OnGOAPTaskCompleted_Params params {};
		params.TaskFinsihed = TaskFinsihed;
		params.GoalComplete = GoalComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.OnGOAPEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidGOAPEvent                                     NewGOAPEvent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARaidCharacter*                              SeenChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::OnGOAPEvent(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.OnGOAPEvent");
		
		ARaidGOAPController_OnGOAPEvent_Params params {};
		params.NewGOAPEvent = NewGOAPEvent;
		params.SeenChar = SeenChar;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.OnGoalCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERaidAIState                                       StateCompleted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::OnGoalCompleted(ERaidAIState StateCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.OnGoalCompleted");
		
		ARaidGOAPController_OnGoalCompleted_Params params {};
		params.StateCompleted = StateCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.LootedAnItem
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::LootedAnItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.LootedAnItem");
		
		ARaidGOAPController_LootedAnItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.LookAtPawnDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CancelOUt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::LookAtPawnDirection(bool CancelOUt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.LookAtPawnDirection");
		
		ARaidGOAPController_LookAtPawnDirection_Params params {};
		params.CancelOUt = CancelOUt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsRunning(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsRunning");
		
		ARaidGOAPController_IsRunning_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsNearCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoundsIn                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsNearCover(class ARaidGOAPController* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsNearCover");
		
		ARaidGOAPController_IsNearCover_Params params {};
		params.MyControl = MyControl;
		params.BoundsIn = BoundsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberNear != nullptr)
			*NumberNear = params.NumberNear;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsHealthLow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              healthAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsHealthLow(class ARaidGOAPController* MyControl, float healthAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsHealthLow");
		
		ARaidGOAPController_IsHealthLow_Params params {};
		params.MyControl = MyControl;
		params.healthAmount = healthAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsEnemyNearCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoundsIn                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsEnemyNearCover(class ARaidGOAPController* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsEnemyNearCover");
		
		ARaidGOAPController_IsEnemyNearCover_Params params {};
		params.MyControl = MyControl;
		params.BoundsIn = BoundsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberNear != nullptr)
			*NumberNear = params.NumberNear;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsEnemyAimingAtme
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsEnemyAimingAtme(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsEnemyAimingAtme");
		
		ARaidGOAPController_IsEnemyAimingAtme_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsCrouched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsCrouched(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsCrouched");
		
		ARaidGOAPController_IsCrouched_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsCharacterOnSeenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              SeenChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsCharacterOnSeenList(class ARaidCharacter* SeenChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsCharacterOnSeenList");
		
		ARaidGOAPController_IsCharacterOnSeenList_Params params {};
		params.SeenChar = SeenChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsCharacterOnHearingList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              SeenChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsCharacterOnHearingList(class ARaidCharacter* SeenChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsCharacterOnHearingList");
		
		ARaidGOAPController_IsCharacterOnHearingList_Params params {};
		params.SeenChar = SeenChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsAnotherPlayerCloserThenTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::IsAnotherPlayerCloserThenTarget(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsAnotherPlayerCloserThenTarget");
		
		ARaidGOAPController_IsAnotherPlayerCloserThenTarget_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsAGroupAI
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::IsAGroupAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsAGroupAI");
		
		ARaidGOAPController_IsAGroupAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.IsACaptain
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::IsACaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.IsACaptain");
		
		ARaidGOAPController_IsACaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.ImIMoving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::ImIMoving(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.ImIMoving");
		
		ARaidGOAPController_ImIMoving_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasToReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bullletLowAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasToReload(class ARaidGOAPController* MyControl, int32_t bullletLowAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasToReload");
		
		ARaidGOAPController_HasToReload_Params params {};
		params.MyControl = MyControl;
		params.bullletLowAmount = bullletLowAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlySeenSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlySeenSomeone(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlySeenSomeone");
		
		ARaidGOAPController_HasRecentlySeenSomeone_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyPoppedSomeshotsOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyPoppedSomeshotsOff(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyPoppedSomeshotsOff");
		
		ARaidGOAPController_HasRecentlyPoppedSomeshotsOff_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyLooted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeSinceLastloot                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyLooted(class ARaidGOAPController* MyControl, float timeSinceLastloot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyLooted");
		
		ARaidGOAPController_HasRecentlyLooted_Params params {};
		params.MyControl = MyControl;
		params.timeSinceLastloot = timeSinceLastloot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyHeardSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyHeardSomeone(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyHeardSomeone");
		
		ARaidGOAPController_HasRecentlyHeardSomeone_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyBeenSearching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyBeenSearching(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyBeenSearching");
		
		ARaidGOAPController_HasRecentlyBeenSearching_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyBeenPatrolling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyBeenPatrolling(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyBeenPatrolling");
		
		ARaidGOAPController_HasRecentlyBeenPatrolling_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyBeenDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyBeenDamaged(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyBeenDamaged");
		
		ARaidGOAPController_HasRecentlyBeenDamaged_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasRecentlyBeenAttacking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recentamount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasRecentlyBeenAttacking(class ARaidGOAPController* MyControl, float recentamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasRecentlyBeenAttacking");
		
		ARaidGOAPController_HasRecentlyBeenAttacking_Params params {};
		params.MyControl = MyControl;
		params.recentamount = recentamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasPerceptionPeopleNear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Allies                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              distanceamount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasPerceptionPeopleNear(class ARaidGOAPController* MyControl, bool Allies, float distanceamount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasPerceptionPeopleNear");
		
		ARaidGOAPController_HasPerceptionPeopleNear_Params params {};
		params.MyControl = MyControl;
		params.Allies = Allies;
		params.distanceamount = distanceamount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasLostEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeAmountforLost                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasLostEnemy(class ARaidGOAPController* MyControl, float timeAmountforLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasLostEnemy");
		
		ARaidGOAPController_HasLostEnemy_Params params {};
		params.MyControl = MyControl;
		params.timeAmountforLost = timeAmountforLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasGotAnyTargetActors
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::HasGotAnyTargetActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasGotAnyTargetActors");
		
		ARaidGOAPController_HasGotAnyTargetActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasEnemyLowHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amountlow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasEnemyLowHealth(class ARaidGOAPController* MyControl, float amountlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasEnemyLowHealth");
		
		ARaidGOAPController_HasEnemyLowHealth_Params params {};
		params.MyControl = MyControl;
		params.amountlow = amountlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasEnemyLowAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Percentlow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasEnemyLowAmmo(class ARaidGOAPController* MyControl, float Percentlow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasEnemyLowAmmo");
		
		ARaidGOAPController_HasEnemyLowAmmo_Params params {};
		params.MyControl = MyControl;
		params.Percentlow = Percentlow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasEnemy(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasEnemy");
		
		ARaidGOAPController_HasEnemy_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.HasArrivedAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Allowance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DontRestartMoveQuery                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RequestORMoveHasFailed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::HasArrivedAtLocation(float Allowance, bool DontRestartMoveQuery, bool* RequestORMoveHasFailed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.HasArrivedAtLocation");
		
		ARaidGOAPController_HasArrivedAtLocation_Params params {};
		params.Allowance = Allowance;
		params.DontRestartMoveQuery = DontRestartMoveQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestORMoveHasFailed != nullptr)
			*RequestORMoveHasFailed = params.RequestORMoveHasFailed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GOAPSetFocalPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERaidFocusPri                                      InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::GOAPSetFocalPoint(const struct FVector& NewFocus, ERaidFocusPri InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GOAPSetFocalPoint");
		
		ARaidGOAPController_GOAPSetFocalPoint_Params params {};
		params.NewFocus = NewFocus;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetTimeSinceLostEnemy
	 * 		Flags  -> ()
	 */
	float ARaidGOAPController::GetTimeSinceLostEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetTimeSinceLostEnemy");
		
		ARaidGOAPController_GetTimeSinceLostEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetSensedPlayerThatCantSeeMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidGOAPController::GetSensedPlayerThatCantSeeMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetSensedPlayerThatCantSeeMe");
		
		ARaidGOAPController_GetSensedPlayerThatCantSeeMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetSensedPlayerClosetToMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidGOAPController::GetSensedPlayerClosetToMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetSensedPlayerClosetToMe");
		
		ARaidGOAPController_GetSensedPlayerClosetToMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetSensedPlayerAimingAtMe
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidGOAPController::GetSensedPlayerAimingAtMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetSensedPlayerAimingAtMe");
		
		ARaidGOAPController_GetSensedPlayerAimingAtMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetRandSeed
	 * 		Flags  -> ()
	 */
	int32_t ARaidGOAPController::GetRandSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetRandSeed");
		
		ARaidGOAPController_GetRandSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.getPlan
	 * 		Flags  -> ()
	 */
	TArray<class UGOAPAction*> ARaidGOAPController::getPlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.getPlan");
		
		ARaidGOAPController_getPlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetMyBot
	 * 		Flags  -> ()
	 */
	class ARaidNodeBot* ARaidGOAPController::GetMyBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetMyBot");
		
		ARaidGOAPController_GetMyBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetMovingTowardLocation
	 * 		Flags  -> ()
	 */
	struct FVector ARaidGOAPController::GetMovingTowardLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetMovingTowardLocation");
		
		ARaidGOAPController_GetMovingTowardLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetLootableNearMe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* ARaidGOAPController::GetLootableNearMe(float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetLootableNearMe");
		
		ARaidGOAPController_GetLootableNearMe_Params params {};
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetLookAtTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector ARaidGOAPController::GetLookAtTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetLookAtTargetLocation");
		
		ARaidGOAPController_GetLookAtTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetLocationToUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocToUse                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::GetLocationToUse(struct FVector* LocToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetLocationToUse");
		
		ARaidGOAPController_GetLocationToUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocToUse != nullptr)
			*LocToUse = params.LocToUse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.getDesiredWorldStateAtoms
	 * 		Flags  -> ()
	 */
	TArray<struct FAtom> ARaidGOAPController::getDesiredWorldStateAtoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.getDesiredWorldStateAtoms");
		
		ARaidGOAPController_getDesiredWorldStateAtoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.getCurrentWorldStateAtoms
	 * 		Flags  -> ()
	 */
	TArray<struct FAtom> ARaidGOAPController::getCurrentWorldStateAtoms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.getCurrentWorldStateAtoms");
		
		ARaidGOAPController_getCurrentWorldStateAtoms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCurrentTarget
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidGOAPController::GetCurrentTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCurrentTarget");
		
		ARaidGOAPController_GetCurrentTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCurrentSensedTargets
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ARaidGOAPController::GetCurrentSensedTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCurrentSensedTargets");
		
		ARaidGOAPController_GetCurrentSensedTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCurrentAIState
	 * 		Flags  -> ()
	 */
	ERaidAIState ARaidGOAPController::GetCurrentAIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCurrentAIState");
		
		ARaidGOAPController_GetCurrentAIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCoverPointInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShootOver                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LeftLean                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RightLean                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DirectionToWall                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::GetCoverPointInfo(bool* CrouchPoint, bool* ShootOver, bool* LeftLean, bool* RightLean, struct FVector* DirectionToWall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCoverPointInfo");
		
		ARaidGOAPController_GetCoverPointInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchPoint != nullptr)
			*CrouchPoint = params.CrouchPoint;
		if (ShootOver != nullptr)
			*ShootOver = params.ShootOver;
		if (LeftLean != nullptr)
			*LeftLean = params.LeftLean;
		if (RightLean != nullptr)
			*RightLean = params.RightLean;
		if (DirectionToWall != nullptr)
			*DirectionToWall = params.DirectionToWall;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCaptainsTarget
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidGOAPController::GetCaptainsTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCaptainsTarget");
		
		ARaidGOAPController_GetCaptainsTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCaptainsMoveLocation
	 * 		Flags  -> ()
	 */
	struct FVector ARaidGOAPController::GetCaptainsMoveLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCaptainsMoveLocation");
		
		ARaidGOAPController_GetCaptainsMoveLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCaptainsLookLocation
	 * 		Flags  -> ()
	 */
	struct FVector ARaidGOAPController::GetCaptainsLookLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCaptainsLookLocation");
		
		ARaidGOAPController_GetCaptainsLookLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCaptainsGoapState
	 * 		Flags  -> ()
	 */
	ERaidAIState ARaidGOAPController::GetCaptainsGoapState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCaptainsGoapState");
		
		ARaidGOAPController_GetCaptainsGoapState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetCaptain
	 * 		Flags  -> ()
	 */
	class ARaidGOAPController* ARaidGOAPController::GetCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetCaptain");
		
		ARaidGOAPController_GetCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GetActionTimeInSeconds
	 * 		Flags  -> ()
	 */
	float ARaidGOAPController::GetActionTimeInSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GetActionTimeInSeconds");
		
		ARaidGOAPController_GetActionTimeInSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.GenerateRandSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxInt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::GenerateRandSeed(int32_t MaxInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.GenerateRandSeed");
		
		ARaidGOAPController_GenerateRandSeed_Params params {};
		params.MaxInt = MaxInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.generatePlan
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::generatePlan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.generatePlan");
		
		ARaidGOAPController_generatePlan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.FindCaptian
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::FindCaptian()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.FindCaptian");
		
		ARaidGOAPController_FindCaptian_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.executeGOAP
	 * 		Flags  -> ()
	 */
	bool ARaidGOAPController::executeGOAP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.executeGOAP");
		
		ARaidGOAPController_executeGOAP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSQueryLookToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeactiveTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSQueryLookToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, float DeactiveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSQueryLookToLocation");
		
		ARaidGOAPController_EQSQueryLookToLocation_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		params.DeactiveTime = DeactiveTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSQueryLookToDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LookToVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeactiveTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSQueryLookToDirection(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, const struct FVector& LookToVector, float DeactiveTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSQueryLookToDirection");
		
		ARaidGOAPController_EQSQueryLookToDirection_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		params.LookToVector = LookToVector;
		params.DeactiveTime = DeactiveTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocationVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocationVector                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSQueryandMoveToLocationVector(const struct FVector& LocationVector, class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocationVector");
		
		ARaidGOAPController_EQSQueryandMoveToLocationVector_Params params {};
		params.LocationVector = LocationVector;
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSQueryandMoveToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocation");
		
		ARaidGOAPController_EQSQueryandMoveToLocation_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSQueryandMoveToCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   MyQuery                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSQueryandMoveToCover(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSQueryandMoveToCover");
		
		ARaidGOAPController_EQSQueryandMoveToCover_Params params {};
		params.MyQuery = MyQuery;
		params.RunMode = RunMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EQSCoverNodeReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LocToGo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::EQSCoverNodeReturn(const struct FVector& LocToGo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EQSCoverNodeReturn");
		
		ARaidGOAPController_EQSCoverNodeReturn_Params params {};
		params.LocToGo = LocToGo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.EnemyFar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceforFar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::EnemyFar(class ARaidGOAPController* MyControl, float DistanceforFar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.EnemyFar");
		
		ARaidGOAPController_EnemyFar_Params params {};
		params.MyControl = MyControl;
		params.DistanceforFar = DistanceforFar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.DebugStimulusEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERaidGOAPEvent                                     NormalEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::DebugStimulusEvent(class AActor* Actor, const struct FAIStimulus& Stimulus, ERaidGOAPEvent NormalEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.DebugStimulusEvent");
		
		ARaidGOAPController_DebugStimulusEvent_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		params.NormalEvent = NormalEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CrouchStand                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidGOAPController::Crouch(bool CrouchStand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.Crouch");
		
		ARaidGOAPController_Crouch_Params params {};
		params.CrouchStand = CrouchStand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.CheckLOSToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidGOAPController*                         MyControl                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ARaidGOAPController::CheckLOSToTarget(class ARaidGOAPController* MyControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.CheckLOSToTarget");
		
		ARaidGOAPController_CheckLOSToTarget_Params params {};
		params.MyControl = MyControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.CancelMoveShuffle
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::CancelMoveShuffle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.CancelMoveShuffle");
		
		ARaidGOAPController_CancelMoveShuffle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidGOAPController.CancelLookAroundWiggle
	 * 		Flags  -> ()
	 */
	void ARaidGOAPController::CancelLookAroundWiggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidGOAPController.CancelLookAroundWiggle");
		
		ARaidGOAPController_CancelLookAroundWiggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidGOAPController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidGOAPController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidGOAPController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.HudTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidHUD::HudTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, int32_t Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.HudTakenDamage");
		
		ARaidHUD_HudTakenDamage_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.HudGivenDamage
	 * 		Flags  -> ()
	 */
	void ARaidHUD::HudGivenDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.HudGivenDamage");
		
		ARaidHUD_HudGivenDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetVersionInformation
	 * 		Flags  -> ()
	 */
	class FString ARaidHUD::GetVersionInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetVersionInformation");
		
		ARaidHUD_GetVersionInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetTimeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ARaidHUD::GetTimeString(float TimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetTimeString");
		
		ARaidHUD_GetTimeString_Params params {};
		params.TimeSeconds = TimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetMatchTimefloat
	 * 		Flags  -> ()
	 */
	float ARaidHUD::GetMatchTimefloat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetMatchTimefloat");
		
		ARaidHUD_GetMatchTimefloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetMatchTime
	 * 		Flags  -> ()
	 */
	class FString ARaidHUD::GetMatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetMatchTime");
		
		ARaidHUD_GetMatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetCurrentAmmo
	 * 		Flags  -> ()
	 */
	int32_t ARaidHUD::GetCurrentAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetCurrentAmmo");
		
		ARaidHUD_GetCurrentAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidHUD.GetAmmoPerClip
	 * 		Flags  -> ()
	 */
	int32_t ARaidHUD::GetAmmoPerClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidHUD.GetAmmoPerClip");
		
		ARaidHUD_GetAmmoPerClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidImpactEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidImpactEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidImpactEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidImpactFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidImpactFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidImpactFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidInventoryScreenWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidInventoryScreenWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidInventoryScreenWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.TriedToOpenDoor
	 * 		Flags  -> ()
	 */
	void ARaidLockedDoor::TriedToOpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.TriedToOpenDoor");
		
		ARaidLockedDoor_TriedToOpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.OnUnlocked
	 * 		Flags  -> ()
	 */
	void ARaidLockedDoor::OnUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.OnUnlocked");
		
		ARaidLockedDoor_OnUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.OnTriedToOpenButLocked
	 * 		Flags  -> ()
	 */
	void ARaidLockedDoor::OnTriedToOpenButLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.OnTriedToOpenButLocked");
		
		ARaidLockedDoor_OnTriedToOpenButLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.OnRep_IsUnlocked
	 * 		Flags  -> ()
	 */
	void ARaidLockedDoor::OnRep_IsUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.OnRep_IsUnlocked");
		
		ARaidLockedDoor_OnRep_IsUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.MultiLockDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LockName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealthPercent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidLockedDoor::MultiLockDamaged(const class FName& LockName, float HealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.MultiLockDamaged");
		
		ARaidLockedDoor_MultiLockDamaged_Params params {};
		params.LockName = LockName;
		params.HealthPercent = HealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.LockDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LockName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealthPercent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidLockedDoor::LockDamaged(const class FName& LockName, float HealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.LockDamaged");
		
		ARaidLockedDoor_LockDamaged_Params params {};
		params.LockName = LockName;
		params.HealthPercent = HealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidLockedDoor.GetPartCompByUniqueName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        UniName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URaidLockVolumeComponent* ARaidLockedDoor::GetPartCompByUniqueName(const class FName& UniName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidLockedDoor.GetPartCompByUniqueName");
		
		ARaidLockedDoor_GetPartCompByUniqueName_Params params {};
		params.UniName = UniName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidLockedDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidLockedDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidLockedDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidLockVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidLockVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidLockVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidLootable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidLootable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidLootable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidLootableStatic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidLootableStatic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidLootableStatic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidMeleeAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidMeleeAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidMeleeAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidMenuItemWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidMenuItemWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidMenuItemWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidMenuSoundsWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidMenuSoundsWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidMenuSoundsWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidMenuWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidMenuWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidMenuWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeActor.GetNodeSequenceTypeID
	 * 		Flags  -> ()
	 */
	class FName ARaidNodeActor::GetNodeSequenceTypeID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeActor.GetNodeSequenceTypeID");
		
		ARaidNodeActor_GetNodeSequenceTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidNodeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidNodeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidNodeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeBot.ServerSetFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewHead                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidNodeBot::ServerSetFace(class USkeletalMesh* NewHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeBot.ServerSetFace");
		
		ARaidNodeBot_ServerSetFace_Params params {};
		params.NewHead = NewHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeBot.ServerSetBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewBody                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidNodeBot::ServerSetBody(class USkeletalMesh* NewBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeBot.ServerSetBody");
		
		ARaidNodeBot_ServerSetBody_Params params {};
		params.NewBody = NewBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeBot.OnRep_SetFace
	 * 		Flags  -> ()
	 */
	void ARaidNodeBot::OnRep_SetFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeBot.OnRep_SetFace");
		
		ARaidNodeBot_OnRep_SetFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeBot.OnRep_SetBody
	 * 		Flags  -> ()
	 */
	void ARaidNodeBot::OnRep_SetBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeBot.OnRep_SetBody");
		
		ARaidNodeBot_OnRep_SetBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidNodeBot.OnGOAPDEBUGplan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CurrentPlan                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidNodeBot::OnGOAPDEBUGplan(const class FString& CurrentPlan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidNodeBot.OnGOAPDEBUGplan");
		
		ARaidNodeBot_OnGOAPDEBUGplan_Params params {};
		params.CurrentPlan = CurrentPlan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidNodeBot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidNodeBot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidNodeBot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidOnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidOptionsWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidOptionsWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidOptionsWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidPersistentUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidPersistentUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPersistentUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidPhysicalMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidPhysicalMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPhysicalMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPickup.OnRespawnEvent
	 * 		Flags  -> ()
	 */
	void ARaidPickup::OnRespawnEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPickup.OnRespawnEvent");
		
		ARaidPickup_OnRespawnEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPickup.OnRep_IsActive
	 * 		Flags  -> ()
	 */
	void ARaidPickup::OnRep_IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPickup.OnRep_IsActive");
		
		ARaidPickup_OnRep_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPickup.OnPickedUpEvent
	 * 		Flags  -> ()
	 */
	void ARaidPickup::OnPickedUpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPickup.OnPickedUpEvent");
		
		ARaidPickup_OnPickedUpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPickup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPickup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPickup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPickup_Ammo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPickup_Ammo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPickup_Ammo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPickup_Health.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPickup_Health::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPickup_Health");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlanetDeploy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlanetDeploy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlanetDeploy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlanetEvac.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlanetEvac::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlanetEvac");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerCameraManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.WizzVolumeOverlapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidProjectile*                             BulltActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerCharacter::WizzVolumeOverlapped(class ARaidProjectile* BulltActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.WizzVolumeOverlapped");
		
		ARaidPlayerCharacter_WizzVolumeOverlapped_Params params {};
		params.BulltActor = BulltActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.ServerSetFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewHead                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerCharacter::ServerSetFace(class USkeletalMesh* NewHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.ServerSetFace");
		
		ARaidPlayerCharacter_ServerSetFace_Params params {};
		params.NewHead = NewHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.ServerSetBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewBody                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerCharacter::ServerSetBody(class USkeletalMesh* NewBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.ServerSetBody");
		
		ARaidPlayerCharacter_ServerSetBody_Params params {};
		params.NewBody = NewBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.Server_TakeStaminaBurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BurnAmoun                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerCharacter::Server_TakeStaminaBurn(float BurnAmoun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.Server_TakeStaminaBurn");
		
		ARaidPlayerCharacter_Server_TakeStaminaBurn_Params params {};
		params.BurnAmoun = BurnAmoun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.OnRep_SetFace
	 * 		Flags  -> ()
	 */
	void ARaidPlayerCharacter::OnRep_SetFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.OnRep_SetFace");
		
		ARaidPlayerCharacter_OnRep_SetFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.OnRep_SetBody
	 * 		Flags  -> ()
	 */
	void ARaidPlayerCharacter::OnRep_SetBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.OnRep_SetBody");
		
		ARaidPlayerCharacter_OnRep_SetBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.GetStaminaBurn
	 * 		Flags  -> ()
	 */
	float ARaidPlayerCharacter::GetStaminaBurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.GetStaminaBurn");
		
		ARaidPlayerCharacter_GetStaminaBurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerCharacter.GetHealthBurn
	 * 		Flags  -> ()
	 */
	float ARaidPlayerCharacter::GetHealthBurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerCharacter.GetHealthBurn");
		
		ARaidPlayerCharacter_GetHealthBurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerController_Menu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerController_Menu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerController_Menu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidPlayerInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidPlayerInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerState.SetCharacterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerState::SetCharacterName(const class FString& CharacterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerState.SetCharacterName");
		
		ARaidPlayerState_SetCharacterName_Params params {};
		params.CharacterName = CharacterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerState.OnRep_TeamColor
	 * 		Flags  -> ()
	 */
	void ARaidPlayerState::OnRep_TeamColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerState.OnRep_TeamColor");
		
		ARaidPlayerState_OnRep_TeamColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerState.InformAboutKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidPlayerState*                            KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARaidPlayerState*                            KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerState::InformAboutKill(class ARaidPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ARaidPlayerState* KilledPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerState.InformAboutKill");
		
		ARaidPlayerState_InformAboutKill_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPlayerState.BroadcastDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidPlayerState*                            KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARaidPlayerState*                            KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidPlayerState::BroadcastDeath(class ARaidPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ARaidPlayerState* KilledPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPlayerState.BroadcastDeath");
		
		ARaidPlayerState_BroadcastDeath_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPlayerStorageControl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPlayerStorageControl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPlayerStorageControl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPoolImpactEffect.OnPoolDeactive
	 * 		Flags  -> ()
	 */
	void ARaidPoolImpactEffect::OnPoolDeactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPoolImpactEffect.OnPoolDeactive");
		
		ARaidPoolImpactEffect_OnPoolDeactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPoolImpactEffect.OnPoolActive
	 * 		Flags  -> ()
	 */
	void ARaidPoolImpactEffect::OnPoolActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPoolImpactEffect.OnPoolActive");
		
		ARaidPoolImpactEffect_OnPoolActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidPoolImpactEffect.IsNotInUse
	 * 		Flags  -> ()
	 */
	bool ARaidPoolImpactEffect::IsNotInUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidPoolImpactEffect.IsNotInUse");
		
		ARaidPoolImpactEffect_IsNotInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidPoolImpactEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidPoolImpactEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidPoolImpactEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.SelfExplode
	 * 		Flags  -> ()
	 */
	void ARaidProjectile::SelfExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.SelfExplode");
		
		ARaidProjectile_SelfExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.PysDamageDel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADestructibleActor*                          ActorOnHit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitlOC                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitNorm                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseAmount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::PysDamageDel(class ADestructibleActor* ActorOnHit, const struct FVector& HitlOC, const struct FVector& HitNorm, float ImpulseAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.PysDamageDel");
		
		ARaidProjectile_PysDamageDel_Params params {};
		params.ActorOnHit = ActorOnHit;
		params.HitlOC = HitlOC;
		params.HitNorm = HitNorm;
		params.ImpulseAmount = ImpulseAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnRep_Exploded
	 * 		Flags  -> ()
	 */
	void ARaidProjectile::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnRep_Exploded");
		
		ARaidProjectile_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnRep_BulletHit
	 * 		Flags  -> ()
	 */
	void ARaidProjectile::OnRep_BulletHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnRep_BulletHit");
		
		ARaidProjectile_OnRep_BulletHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnRealImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrajectoryNum                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSinceSpawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnRealImpact(const struct FHitResult& HitResult, int32_t TrajectoryNum, float TimeSinceSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnRealImpact");
		
		ARaidProjectile_OnRealImpact_Params params {};
		params.HitResult = HitResult;
		params.TrajectoryNum = TrajectoryNum;
		params.TimeSinceSpawn = TimeSinceSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnRealExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ExitHit                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ExitVelocity                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnRealExit(const struct FHitResult& ExitHit, const struct FVector& ExitVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnRealExit");
		
		ARaidProjectile_OnRealExit_Params params {};
		params.ExitHit = ExitHit;
		params.ExitVelocity = ExitVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnRealAnyHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitDetails                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnRealAnyHit(const struct FHitResult& HitDetails, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnRealAnyHit");
		
		ARaidProjectile_OnRealAnyHit_Params params {};
		params.HitDetails = HitDetails;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnProjStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnProjStop(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnProjStop");
		
		ARaidProjectile_OnProjStop_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnPoolDeactive
	 * 		Flags  -> ()
	 */
	void ARaidProjectile::OnPoolDeactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnPoolDeactive");
		
		ARaidProjectile_OnPoolDeactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnPoolActive
	 * 		Flags  -> ()
	 */
	void ARaidProjectile::OnPoolActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnPoolActive");
		
		ARaidProjectile_OnPoolActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnImpact");
		
		ARaidProjectile_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.OnBulletHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::OnBulletHit(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.OnBulletHit");
		
		ARaidProjectile_OnBulletHit_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.MultiCast_ImpactEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidProjectile::MultiCast_ImpactEffect(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.MultiCast_ImpactEffect");
		
		ARaidProjectile_MultiCast_ImpactEffect_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidProjectile.IsNotInUse
	 * 		Flags  -> ()
	 */
	bool ARaidProjectile::IsNotInUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidProjectile.IsNotInUse");
		
		ARaidProjectile_IsNotInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidReplicateDestructionComponent.On_RepHide
	 * 		Flags  -> ()
	 */
	void ARaidReplicateDestructionComponent::On_RepHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidReplicateDestructionComponent.On_RepHide");
		
		ARaidReplicateDestructionComponent_On_RepHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidReplicateDestructionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidReplicateDestructionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicateDestructionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidReplicationGraphNode_SpaceActors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidReplicationGraphNode_SpaceActors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicationGraphNode_SpaceActors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidReplicationGraphNode_RaidRegions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidReplicationGraphNode_RaidRegions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicationGraphNode_RaidRegions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidReplicationGraphNode_AlwaysRelevant_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidReplicationGraphNode_PlayerStateFrequencyLimiter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidReplicationGraphNode_PlayerStateFrequencyLimiter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidReplicationGraphNode_PlayerStateFrequencyLimiter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidScoreboardWidgetStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidScoreboardWidgetStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidScoreboardWidgetStyle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidShipConsoleUseable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidShipConsoleUseable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidShipConsoleUseable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidShipModActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidShipModActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidShipModActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.SelfExplode
	 * 		Flags  -> ()
	 */
	void ARaidShipProjectile::SelfExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.SelfExplode");
		
		ARaidShipProjectile_SelfExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.OnRep_Exploded
	 * 		Flags  -> ()
	 */
	void ARaidShipProjectile::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.OnRep_Exploded");
		
		ARaidShipProjectile_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.OnRep_BulletHit
	 * 		Flags  -> ()
	 */
	void ARaidShipProjectile::OnRep_BulletHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.OnRep_BulletHit");
		
		ARaidShipProjectile_OnRep_BulletHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.OnImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidShipProjectile::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.OnImpact");
		
		ARaidShipProjectile_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.OnBulletHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidShipProjectile::OnBulletHit(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.OnBulletHit");
		
		ARaidShipProjectile_OnBulletHit_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidShipProjectile.MultiCast_ImpactEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidShipProjectile::MultiCast_ImpactEffect(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidShipProjectile.MultiCast_ImpactEffect");
		
		ARaidShipProjectile_MultiCast_ImpactEffect_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidShipProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidShipProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidShipProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidShipUseable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidShipUseable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidShipUseable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidShipVendor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidShipVendor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidShipVendor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceDeploy.ShipDocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidSpaceship*                              DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceDeploy::ShipDocking(class ARaidSpaceship* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceDeploy.ShipDocking");
		
		ARaidSpaceDeploy_ShipDocking_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceDeploy.FrigateExiting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidFrigate*                                DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceDeploy::FrigateExiting(class ARaidFrigate* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceDeploy.FrigateExiting");
		
		ARaidSpaceDeploy_FrigateExiting_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceDeploy.FrigateDocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidFrigate*                                DockingShip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceDeploy::FrigateDocking(class ARaidFrigate* DockingShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceDeploy.FrigateDocking");
		
		ARaidSpaceDeploy_FrigateDocking_Params params {};
		params.DockingShip = DockingShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSpaceDeploy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSpaceDeploy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSpaceDeploy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.ServerSetFrigateBreaching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ShipBreach                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketTo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::ServerSetFrigateBreaching(class AActor* ShipBreach, const class FName& SocketTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.ServerSetFrigateBreaching");
		
		ARaidSpaceship_ServerSetFrigateBreaching_Params params {};
		params.ShipBreach = ShipBreach;
		params.SocketTo = SocketTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.ServerBoost
	 * 		Flags  -> ()
	 */
	void ARaidSpaceship::ServerBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.ServerBoost");
		
		ARaidSpaceship_ServerBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.OnShipHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::OnShipHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.OnShipHit");
		
		ARaidSpaceship_OnShipHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.OnLootBodyOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            hitindex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::OnLootBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t hitindex, bool bSweep, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.OnLootBodyOverlap");
		
		ARaidSpaceship_OnLootBodyOverlap_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.hitindex = hitindex;
		params.bSweep = bSweep;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.OnLootBodyEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            hitindex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::OnLootBodyEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t hitindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.OnLootBodyEndOverlap");
		
		ARaidSpaceship_OnLootBodyEndOverlap_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.hitindex = hitindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.OnFaceRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.OnFaceRotation");
		
		ARaidSpaceship_OnFaceRotation_Params params {};
		params.NewRotation = NewRotation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.NetMultiBoost
	 * 		Flags  -> ()
	 */
	void ARaidSpaceship::NetMultiBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.NetMultiBoost");
		
		ARaidSpaceship_NetMultiBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.GetSocketToAttachTo
	 * 		Flags  -> ()
	 */
	class FName ARaidSpaceship::GetSocketToAttachTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.GetSocketToAttachTo");
		
		ARaidSpaceship_GetSocketToAttachTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.GetCurrentGear
	 * 		Flags  -> ()
	 */
	int32_t ARaidSpaceship::GetCurrentGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.GetCurrentGear");
		
		ARaidSpaceship_GetCurrentGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.GetCurentBoostTimerLeft
	 * 		Flags  -> ()
	 */
	float ARaidSpaceship::GetCurentBoostTimerLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.GetCurentBoostTimerLeft");
		
		ARaidSpaceship_GetCurentBoostTimerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.GetCurentBoostCooldownTimerLeft
	 * 		Flags  -> ()
	 */
	float ARaidSpaceship::GetCurentBoostCooldownTimerLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.GetCurentBoostCooldownTimerLeft");
		
		ARaidSpaceship_GetCurentBoostCooldownTimerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.GetBreacingToAttachingTo
	 * 		Flags  -> ()
	 */
	class AActor* ARaidSpaceship::GetBreacingToAttachingTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.GetBreacingToAttachingTo");
		
		ARaidSpaceship_GetBreacingToAttachingTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.ChangedGear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceship::ChangedGear(int32_t NewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.ChangedGear");
		
		ARaidSpaceship_ChangedGear_Params params {};
		params.NewGear = NewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.BreachCheck
	 * 		Flags  -> ()
	 */
	bool ARaidSpaceship::BreachCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.BreachCheck");
		
		ARaidSpaceship_BreachCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceship.BoostEffectEvent
	 * 		Flags  -> ()
	 */
	void ARaidSpaceship::BoostEffectEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceship.BoostEffectEvent");
		
		ARaidSpaceship_BoostEffectEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSpaceship.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSpaceship::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSpaceship");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.UnDocked
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::UnDocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.UnDocked");
		
		ARaidSpaceshipInside_UnDocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.StartDoorEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OpenDoor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::StartDoorEvent(bool OpenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.StartDoorEvent");
		
		ARaidSpaceshipInside_StartDoorEvent_Params params {};
		params.OpenDoor = OpenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.ShipHullHealthChangeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OldAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::ShipHullHealthChangeEvent(float OldAmount, float NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.ShipHullHealthChangeEvent");
		
		ARaidSpaceshipInside_ShipHullHealthChangeEvent_Params params {};
		params.OldAmount = OldAmount;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.SealLock
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::SealLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.SealLock");
		
		ARaidSpaceshipInside_SealLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.SealAirLock
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::SealAirLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.SealAirLock");
		
		ARaidSpaceshipInside_SealAirLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.ReadyToDock
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::ReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.ReadyToDock");
		
		ARaidSpaceshipInside_ReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponentNotLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::PlayMontageOnComponentNotLocal(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponentNotLocal");
		
		ARaidSpaceshipInside_PlayMontageOnComponentNotLocal_Params params {};
		params.AnimMontage = AnimMontage;
		params.CompToPlayOn = CompToPlayOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::PlayMontageOnComponent(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponent");
		
		ARaidSpaceshipInside_PlayMontageOnComponent_Params params {};
		params.AnimMontage = AnimMontage;
		params.CompToPlayOn = CompToPlayOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.PlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::PlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.PlayCompAnimNotify");
		
		ARaidSpaceshipInside_PlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnTurretDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnTurretDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnTurretDestroyed");
		
		ARaidSpaceshipInside_OnTurretDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_TurretDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldBool                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_TurretDestroyed(bool OldBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_TurretDestroyed");
		
		ARaidSpaceshipInside_OnRep_TurretDestroyed_Params params {};
		params.OldBool = OldBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_ShipHullHealthChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OldAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_ShipHullHealthChange(float OldAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_ShipHullHealthChange");
		
		ARaidSpaceshipInside_OnRep_ShipHullHealthChange_Params params {};
		params.OldAmount = OldAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_LifeSupportDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldBool                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_LifeSupportDestroyed(bool OldBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_LifeSupportDestroyed");
		
		ARaidSpaceshipInside_OnRep_LifeSupportDestroyed_Params params {};
		params.OldBool = OldBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_IsOpen
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::OnRep_IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_IsOpen");
		
		ARaidSpaceshipInside_OnRep_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_HelmGunDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldBool                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_HelmGunDestroyed(bool OldBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_HelmGunDestroyed");
		
		ARaidSpaceshipInside_OnRep_HelmGunDestroyed_Params params {};
		params.OldBool = OldBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_HangerInUse
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::OnRep_HangerInUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_HangerInUse");
		
		ARaidSpaceshipInside_OnRep_HangerInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_HangerDocked
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::OnRep_HangerDocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_HangerDocked");
		
		ARaidSpaceshipInside_OnRep_HangerDocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_EngineDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldBool                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_EngineDestroyed(bool OldBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_EngineDestroyed");
		
		ARaidSpaceshipInside_OnRep_EngineDestroyed_Params params {};
		params.OldBool = OldBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_EnableColiision
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::OnRep_EnableColiision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_EnableColiision");
		
		ARaidSpaceshipInside_OnRep_EnableColiision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnRep_CurrentShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldShip                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnRep_CurrentShip(bool OldShip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnRep_CurrentShip");
		
		ARaidSpaceshipInside_OnRep_CurrentShip_Params params {};
		params.OldShip = OldShip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnPlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnPlayCompAnimNotify");
		
		ARaidSpaceshipInside_OnPlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnLifeSupportDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnLifeSupportDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnLifeSupportDestroyed");
		
		ARaidSpaceshipInside_OnLifeSupportDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnHelmGunDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnHelmGunDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnHelmGunDestroyed");
		
		ARaidSpaceshipInside_OnHelmGunDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.OnEngineDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::OnEngineDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.OnEngineDestroyed");
		
		ARaidSpaceshipInside_OnEngineDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.NotReadyToDock
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::NotReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.NotReadyToDock");
		
		ARaidSpaceshipInside_NotReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.LevelShown
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::LevelShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.LevelShown");
		
		ARaidSpaceshipInside_LevelShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.HangerUseStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               hangerchange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::HangerUseStateChange(bool hangerchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.HangerUseStateChange");
		
		ARaidSpaceshipInside_HangerUseStateChange_Params params {};
		params.hangerchange = hangerchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetTurretDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidSpaceshipInside::GetTurretDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetTurretDestroyed");
		
		ARaidSpaceshipInside_GetTurretDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetShipName
	 * 		Flags  -> ()
	 */
	class FString ARaidSpaceshipInside::GetShipName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetShipName");
		
		ARaidSpaceshipInside_GetShipName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetLifeSupportDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidSpaceshipInside::GetLifeSupportDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetLifeSupportDestroyed");
		
		ARaidSpaceshipInside_GetLifeSupportDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetHullHealth
	 * 		Flags  -> ()
	 */
	float ARaidSpaceshipInside::GetHullHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetHullHealth");
		
		ARaidSpaceshipInside_GetHullHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetHelmGunDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidSpaceshipInside::GetHelmGunDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetHelmGunDestroyed");
		
		ARaidSpaceshipInside_GetHelmGunDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetHangerID
	 * 		Flags  -> ()
	 */
	class FString ARaidSpaceshipInside::GetHangerID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetHangerID");
		
		ARaidSpaceshipInside_GetHangerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.GetEngineDestroyed
	 * 		Flags  -> ()
	 */
	bool ARaidSpaceshipInside::GetEngineDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.GetEngineDestroyed");
		
		ARaidSpaceshipInside_GetEngineDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.EnableCollisionOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableCollision                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::EnableCollisionOnDoor(bool EnableCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.EnableCollisionOnDoor");
		
		ARaidSpaceshipInside_EnableCollisionOnDoor_Params params {};
		params.EnableCollision = EnableCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.DoorOpenEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BopenDoor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSpaceshipInside::DoorOpenEvent(bool BopenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.DoorOpenEvent");
		
		ARaidSpaceshipInside_DoorOpenEvent_Params params {};
		params.BopenDoor = BopenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSpaceshipInside.Docked
	 * 		Flags  -> ()
	 */
	void ARaidSpaceshipInside::Docked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSpaceshipInside.Docked");
		
		ARaidSpaceshipInside_Docked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSpaceshipInside.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSpaceshipInside::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSpaceshipInside");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSpaceToDropPod.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSpaceToDropPod::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSpaceToDropPod");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSpectatorPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSpectatorPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSpectatorPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor.CheckMissionActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      KillingActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor::CheckMissionActor(class AActor* KillingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor.CheckMissionActor");
		
		ARaidSubNodeActor_CheckMissionActor_Params params {};
		params.KillingActor = KillingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSubNodeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSubNodeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSubNodeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.ServerMultiFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::ServerMultiFireProjectile(const struct FVector& Origin, const struct FVector& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.ServerMultiFireProjectile");
		
		ARaidSubNodeActor_Turret_ServerMultiFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.ServerFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.ServerFireProjectile");
		
		ARaidSubNodeActor_Turret_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.ArrayNum = ArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.OnRep_Health
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OldHealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::OnRep_Health(float OldHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.OnRep_Health");
		
		ARaidSubNodeActor_Turret_OnRep_Health_Params params {};
		params.OldHealth = OldHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.OnDeathEvent
	 * 		Flags  -> ()
	 */
	void ARaidSubNodeActor_Turret::OnDeathEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.OnDeathEvent");
		
		ARaidSubNodeActor_Turret_OnDeathEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.NetOnDeathEvent
	 * 		Flags  -> ()
	 */
	void ARaidSubNodeActor_Turret::NetOnDeathEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.NetOnDeathEvent");
		
		ARaidSubNodeActor_Turret_NetOnDeathEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.NetMultiFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::NetMultiFire(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.NetMultiFire");
		
		ARaidSubNodeActor_Turret_NetMultiFire_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.HealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentNewHealth                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentOldHealth                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::HealthChanged(float PercentNewHealth, float PercentOldHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.HealthChanged");
		
		ARaidSubNodeActor_Turret_HealthChanged_Params params {};
		params.PercentNewHealth = PercentNewHealth;
		params.PercentOldHealth = PercentOldHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.GetTheRequiredrotation
	 * 		Flags  -> ()
	 */
	struct FRotator ARaidSubNodeActor_Turret::GetTheRequiredrotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.GetTheRequiredrotation");
		
		ARaidSubNodeActor_Turret_GetTheRequiredrotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidSubNodeActor_Turret.FiredTurrentEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidSubNodeActor_Turret::FiredTurrentEvent(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidSubNodeActor_Turret.FiredTurrentEvent");
		
		ARaidSubNodeActor_Turret_FiredTurrentEvent_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidSubNodeActor_Turret.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidSubNodeActor_Turret::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidSubNodeActor_Turret");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidTargetType.GetTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARaidCharacter*                              TargetingCharacter                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TargetingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayEventData                          EventData                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHitResults                                              (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URaidTargetType::GetTargets(class ARaidCharacter* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidTargetType.GetTargets");
		
		URaidTargetType_GetTargets_Params params {};
		params.TargetingCharacter = TargetingCharacter;
		params.TargetingActor = TargetingActor;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitResults != nullptr)
			*OutHitResults = params.OutHitResults;
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidTargetType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidTargetType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTargetType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidTargetType_UseOwner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidTargetType_UseOwner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTargetType_UseOwner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidTargetType_UseEventData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidTargetType_UseEventData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTargetType_UseEventData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidTask_AnimMontage_WaitEvent.PlayMontageAndWaitForEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       EventTags                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAbilityEnds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AnimRootMotionTranslationScale                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URaidTask_AnimMontage_WaitEvent* URaidTask_AnimMontage_WaitEvent::PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidTask_AnimMontage_WaitEvent.PlayMontageAndWaitForEvent");
		
		URaidTask_AnimMontage_WaitEvent_PlayMontageAndWaitForEvent_Params params {};
		params.OwningAbility = OwningAbility;
		params.TaskInstanceName = TaskInstanceName;
		params.MontageToPlay = MontageToPlay;
		params.EventTags = EventTags;
		params.Rate = Rate;
		params.StartSection = StartSection;
		params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
		params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidTask_AnimMontage_WaitEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidTask_AnimMontage_WaitEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTask_AnimMontage_WaitEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidTeamStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidTeamStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTeamStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidTextRenderActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidTextRenderActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTextRenderActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidTextRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidTextRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidTextRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableAirLockComponent.StartTransferProcess
	 * 		Flags  -> ()
	 */
	void URaidUseableAirLockComponent::StartTransferProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableAirLockComponent.StartTransferProcess");
		
		URaidUseableAirLockComponent_StartTransferProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableAirLockComponent.HangerDoTransfer
	 * 		Flags  -> ()
	 */
	void URaidUseableAirLockComponent::HangerDoTransfer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableAirLockComponent.HangerDoTransfer");
		
		URaidUseableAirLockComponent_HangerDoTransfer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableAirLockComponent.CanHangerBeUsed
	 * 		Flags  -> ()
	 */
	bool URaidUseableAirLockComponent::CanHangerBeUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableAirLockComponent.CanHangerBeUsed");
		
		URaidUseableAirLockComponent_CanHangerBeUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableAirLockComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableAirLockComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableAirLockComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableFrigateHelmComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableFrigateHelmComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableFrigateHelmComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableFrigatePartComponent.Onrep_HealthChange
	 * 		Flags  -> ()
	 */
	void URaidUseableFrigatePartComponent::Onrep_HealthChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableFrigatePartComponent.Onrep_HealthChange");
		
		URaidUseableFrigatePartComponent_Onrep_HealthChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidUseableFrigatePartComponent.GetPipeNumberDamagePercent
	 * 		Flags  -> ()
	 */
	float URaidUseableFrigatePartComponent::GetPipeNumberDamagePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidUseableFrigatePartComponent.GetPipeNumberDamagePercent");
		
		URaidUseableFrigatePartComponent_GetPipeNumberDamagePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableFrigatePartComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableFrigatePartComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableFrigatePartComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableFrigatePodDockComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableFrigatePodDockComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableFrigatePodDockComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableHangerConsoleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableHangerConsoleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableHangerConsoleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableInsideAirLockConsole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableInsideAirLockConsole::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableInsideAirLockConsole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidUseableTurretConrtrolComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidUseableTurretConrtrolComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidUseableTurretConrtrolComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidVaultMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidVaultMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidVaultMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidVendor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidVendor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidVendor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.TTrace_ServerNotifyMiss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::TTrace_ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.TTrace_ServerNotifyMiss");
		
		ARaidWeapon_TTrace_ServerNotifyMiss_Params params {};
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.TTrace_ServerNotifyHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::TTrace_ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.TTrace_ServerNotifyHit");
		
		ARaidWeapon_TTrace_ServerNotifyHit_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.StopDamageTrace
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::StopDamageTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.StopDamageTrace");
		
		ARaidWeapon_StopDamageTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.StartDamageTrace
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::StartDamageTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.StartDamageTrace");
		
		ARaidWeapon_StartDamageTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.SetMeleeStopDamage
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::SetMeleeStopDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.SetMeleeStopDamage");
		
		ARaidWeapon_SetMeleeStopDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.SetMeleeCanDamage
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::SetMeleeCanDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.SetMeleeCanDamage");
		
		ARaidWeapon_SetMeleeCanDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerToggleFireMode
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerToggleFireMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerToggleFireMode");
		
		ARaidWeapon_ServerToggleFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerStopReload
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerStopReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerStopReload");
		
		ARaidWeapon_ServerStopReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerStopFire
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerStopFire");
		
		ARaidWeapon_ServerStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerStartReload
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerStartReload");
		
		ARaidWeapon_ServerStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerStartFire
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerStartFire");
		
		ARaidWeapon_ServerStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerSimulateWeaponFire
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerSimulateWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerSimulateWeaponFire");
		
		ARaidWeapon_ServerSimulateWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerMultiSimulateWeaponFire
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerMultiSimulateWeaponFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerMultiSimulateWeaponFire");
		
		ARaidWeapon_ServerMultiSimulateWeaponFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerMultiFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize10                       Origin                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::ServerMultiFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerMultiFireProjectile");
		
		ARaidWeapon_ServerMultiFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerHandleFiring
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ServerHandleFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerHandleFiring");
		
		ARaidWeapon_ServerHandleFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize10                       Origin                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::ServerFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerFireProjectile");
		
		ARaidWeapon_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ServerAIMultiFireProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantize10                       Origin                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::ServerAIMultiFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ServerAIMultiFireProjectile");
		
		ARaidWeapon_ServerAIMultiFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_WeaponHasBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasOk                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::OnRep_WeaponHasBroken(bool WasOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_WeaponHasBroken");
		
		ARaidWeapon_OnRep_WeaponHasBroken_Params params {};
		params.WasOk = WasOk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_TTrace_HitLocation
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_TTrace_HitLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_TTrace_HitLocation");
		
		ARaidWeapon_OnRep_TTrace_HitLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_Reload
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_Reload");
		
		ARaidWeapon_OnRep_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_MyPawn
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_MyPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_MyPawn");
		
		ARaidWeapon_OnRep_MyPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentUpperRailSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentUpperRailSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentUpperRailSlot");
		
		ARaidWeapon_OnRep_CurrentUpperRailSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentStockSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentStockSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentStockSlot");
		
		ARaidWeapon_OnRep_CurrentStockSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentSpecialSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentSpecialSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentSpecialSlot");
		
		ARaidWeapon_OnRep_CurrentSpecialSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentSightSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentSightSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentSightSlot");
		
		ARaidWeapon_OnRep_CurrentSightSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentMuzzleSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentMuzzleSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentMuzzleSlot");
		
		ARaidWeapon_OnRep_CurrentMuzzleSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentMagSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentMagSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentMagSlot");
		
		ARaidWeapon_OnRep_CurrentMagSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_CurrentLowerRailSlot
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_CurrentLowerRailSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_CurrentLowerRailSlot");
		
		ARaidWeapon_OnRep_CurrentLowerRailSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.OnRep_BurstCounter
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::OnRep_BurstCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.OnRep_BurstCounter");
		
		ARaidWeapon_OnRep_BurstCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.IsReloading
	 * 		Flags  -> ()
	 */
	bool ARaidWeapon::IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.IsReloading");
		
		ARaidWeapon_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.HitPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::HitPlayer(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.HitPlayer");
		
		ARaidWeapon_HitPlayer_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetWeaponType
	 * 		Flags  -> ()
	 */
	EWeaponType ARaidWeapon::GetWeaponType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetWeaponType");
		
		ARaidWeapon_GetWeaponType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetWeaponHasBroke
	 * 		Flags  -> ()
	 */
	bool ARaidWeapon::GetWeaponHasBroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetWeaponHasBroke");
		
		ARaidWeapon_GetWeaponHasBroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetWeaponConfig
	 * 		Flags  -> ()
	 */
	struct FWeaponData ARaidWeapon::GetWeaponConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetWeaponConfig");
		
		ARaidWeapon_GetWeaponConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetRunningSpeedModifier
	 * 		Flags  -> ()
	 */
	float ARaidWeapon::GetRunningSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetRunningSpeedModifier");
		
		ARaidWeapon_GetRunningSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetPawnOwner
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidWeapon::GetPawnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetPawnOwner");
		
		ARaidWeapon_GetPawnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetObstructionSweepDistance
	 * 		Flags  -> ()
	 */
	float ARaidWeapon::GetObstructionSweepDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetObstructionSweepDistance");
		
		ARaidWeapon_GetObstructionSweepDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.GetCarrySpeedModifier
	 * 		Flags  -> ()
	 */
	float ARaidWeapon::GetCarrySpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.GetCarrySpeedModifier");
		
		ARaidWeapon_GetCarrySpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.ClientStartReload
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::ClientStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.ClientStartReload");
		
		ARaidWeapon_ClientStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.BurstStopedFireEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::BurstStopedFireEvent(bool HasAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.BurstStopedFireEvent");
		
		ARaidWeapon_BurstStopedFireEvent_Params params {};
		params.HasAmmo = HasAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.BurstStartFireEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon::BurstStartFireEvent(bool HasAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.BurstStartFireEvent");
		
		ARaidWeapon_BurstStartFireEvent_Params params {};
		params.HasAmmo = HasAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon.BrokenWeaponEvent
	 * 		Flags  -> ()
	 */
	void ARaidWeapon::BrokenWeaponEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon.BrokenWeaponEvent");
		
		ARaidWeapon_BrokenWeaponEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Instant.ServerNotifyMiss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandomSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReticleSpread                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon_Instant::ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Instant.ServerNotifyMiss");
		
		ARaidWeapon_Instant_ServerNotifyMiss_Params params {};
		params.ShootDir = ShootDir;
		params.RandomSeed = RandomSeed;
		params.ReticleSpread = ReticleSpread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Instant.ServerNotifyMeleeHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon_Instant::ServerNotifyMeleeHit(const struct FHitResult& Impact, const struct FVector& Origin, const struct FVector& EndLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Instant.ServerNotifyMeleeHit");
		
		ARaidWeapon_Instant_ServerNotifyMeleeHit_Params params {};
		params.Impact = Impact;
		params.Origin = Origin;
		params.EndLocation = EndLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Instant.ServerNotifyHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandomSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReticleSpread                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon_Instant::ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Instant.ServerNotifyHit");
		
		ARaidWeapon_Instant_ServerNotifyHit_Params params {};
		params.Impact = Impact;
		params.ShootDir = ShootDir;
		params.RandomSeed = RandomSeed;
		params.ReticleSpread = ReticleSpread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Instant.OnRep_HitNotify
	 * 		Flags  -> ()
	 */
	void ARaidWeapon_Instant::OnRep_HitNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Instant.OnRep_HitNotify");
		
		ARaidWeapon_Instant_OnRep_HitNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Instant.OnRep_HitNotifMeleey
	 * 		Flags  -> ()
	 */
	void ARaidWeapon_Instant::OnRep_HitNotifMeleey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Instant.OnRep_HitNotifMeleey");
		
		ARaidWeapon_Instant_OnRep_HitNotifMeleey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeapon_Instant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeapon_Instant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeapon_Instant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeapon_Projectile.ServerFireProjectilFe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeapon_Projectile::ServerFireProjectilFe(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeapon_Projectile.ServerFireProjectilFe");
		
		ARaidWeapon_Projectile_ServerFireProjectilFe_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeapon_Projectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeapon_Projectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeapon_Projectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeapon_Tool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeapon_Tool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeapon_Tool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeapon_Turrent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeapon_Turrent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeapon_Turrent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.OnTurnOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeaponAttachment::OnTurnOn(bool bIsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.OnTurnOn");
		
		ARaidWeaponAttachment_OnTurnOn_Params params {};
		params.bIsOn = bIsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.OnApplyOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Options                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARaidWeaponAttachment::OnApplyOptions(const class FString& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.OnApplyOptions");
		
		ARaidWeaponAttachment_OnApplyOptions_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.ModifySpread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OriginalSpread                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ARaidWeaponAttachment::ModifySpread(float OriginalSpread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.ModifySpread");
		
		ARaidWeaponAttachment_ModifySpread_Params params {};
		params.OriginalSpread = OriginalSpread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.ModifyRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OriginalRecoil                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ARaidWeaponAttachment::ModifyRecoil(float OriginalRecoil)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.ModifyRecoil");
		
		ARaidWeaponAttachment_ModifyRecoil_Params params {};
		params.OriginalRecoil = OriginalRecoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.ModifyRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OriginalRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ARaidWeaponAttachment::ModifyRange(float OriginalRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.ModifyRange");
		
		ARaidWeaponAttachment_ModifyRange_Params params {};
		params.OriginalRange = OriginalRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.ModifyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OriginalDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ARaidWeaponAttachment::ModifyDamage(float OriginalDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.ModifyDamage");
		
		ARaidWeaponAttachment_ModifyDamage_Params params {};
		params.OriginalDamage = OriginalDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.ModifyAimSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OriginalSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ARaidWeaponAttachment::ModifyAimSpeed(float OriginalSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.ModifyAimSpeed");
		
		ARaidWeaponAttachment_ModifyAimSpeed_Params params {};
		params.OriginalSpeed = OriginalSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.GetWeaponOwner
	 * 		Flags  -> ()
	 */
	class ARaidWeapon* ARaidWeaponAttachment::GetWeaponOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.GetWeaponOwner");
		
		ARaidWeaponAttachment_GetWeaponOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.GetCharacterOwner
	 * 		Flags  -> ()
	 */
	class ARaidCharacter* ARaidWeaponAttachment::GetCharacterOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.GetCharacterOwner");
		
		ARaidWeaponAttachment_GetCharacterOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.GetAttachmentName
	 * 		Flags  -> ()
	 */
	class FText ARaidWeaponAttachment::GetAttachmentName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.GetAttachmentName");
		
		ARaidWeaponAttachment_GetAttachmentName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.BP_OnThirdPerson
	 * 		Flags  -> ()
	 */
	void ARaidWeaponAttachment::BP_OnThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.BP_OnThirdPerson");
		
		ARaidWeaponAttachment_BP_OnThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.BP_OnStopAiming
	 * 		Flags  -> ()
	 */
	void ARaidWeaponAttachment::BP_OnStopAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.BP_OnStopAiming");
		
		ARaidWeaponAttachment_BP_OnStopAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.BP_OnStartAiming
	 * 		Flags  -> ()
	 */
	void ARaidWeaponAttachment::BP_OnStartAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.BP_OnStartAiming");
		
		ARaidWeaponAttachment_BP_OnStartAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment.BP_OnFirstPerson
	 * 		Flags  -> ()
	 */
	void ARaidWeaponAttachment::BP_OnFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment.BP_OnFirstPerson");
		
		ARaidWeaponAttachment_BP_OnFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Muzzle.LocalSimulateFire
	 * 		Flags  -> ()
	 */
	void ARaidWeaponAttachment_Muzzle::LocalSimulateFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Muzzle.LocalSimulateFire");
		
		ARaidWeaponAttachment_Muzzle_LocalSimulateFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Muzzle.GetMuzzleFlashPSC
	 * 		Flags  -> ()
	 */
	class UParticleSystemComponent* ARaidWeaponAttachment_Muzzle::GetMuzzleFlashPSC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Muzzle.GetMuzzleFlashPSC");
		
		ARaidWeaponAttachment_Muzzle_GetMuzzleFlashPSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment_Muzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment_Muzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment_Muzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Sight.ModifyAimOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     DefaultOffset                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ARaidWeaponAttachment_Sight::ModifyAimOffset(const struct FVector& DefaultOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Sight.ModifyAimOffset");
		
		ARaidWeaponAttachment_Sight_ModifyAimOffset_Params params {};
		params.DefaultOffset = DefaultOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Sight.GetSceneCapture
	 * 		Flags  -> ()
	 */
	class USceneCaptureComponent2D* ARaidWeaponAttachment_Sight::GetSceneCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Sight.GetSceneCapture");
		
		ARaidWeaponAttachment_Sight_GetSceneCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedRenderTargetResolution
	 * 		Flags  -> ()
	 */
	float ARaidWeaponAttachment_Sight::GetRecommendedRenderTargetResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedRenderTargetResolution");
		
		ARaidWeaponAttachment_Sight_GetRecommendedRenderTargetResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedFieldOfView
	 * 		Flags  -> ()
	 */
	float ARaidWeaponAttachment_Sight::GetRecommendedFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedFieldOfView");
		
		ARaidWeaponAttachment_Sight_GetRecommendedFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Special.GetLeftHandTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ARaidWeaponAttachment_Special::GetLeftHandTransform(struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Special.GetLeftHandTransform");
		
		ARaidWeaponAttachment_Special_GetLeftHandTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Right
	 * 		Flags  -> ()
	 */
	class UAnimSequence* ARaidWeaponAttachment_Special::GetFPHandAnimation_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Right");
		
		ARaidWeaponAttachment_Special_GetFPHandAnimation_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Left
	 * 		Flags  -> ()
	 */
	class UAnimSequence* ARaidWeaponAttachment_Special::GetFPHandAnimation_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Left");
		
		ARaidWeaponAttachment_Special_GetFPHandAnimation_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment_Special.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment_Special::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment_Special");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment_Magazine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment_Magazine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment_Magazine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponAttachment_Weapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponAttachment_Weapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachment_Weapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.OnRepGadgetOnOff
	 * 		Flags  -> ()
	 */
	void URaidWeaponAttachmentPoint::OnRepGadgetOnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.OnRepGadgetOnOff");
		
		URaidWeaponAttachmentPoint_OnRepGadgetOnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.OnRepAttachmentClass
	 * 		Flags  -> ()
	 */
	void URaidWeaponAttachmentPoint::OnRepAttachmentClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.OnRepAttachmentClass");
		
		URaidWeaponAttachmentPoint_OnRepAttachmentClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.GetCurrentAttachment
	 * 		Flags  -> ()
	 */
	class ARaidWeaponAttachment* URaidWeaponAttachmentPoint::GetCurrentAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.GetCurrentAttachment");
		
		URaidWeaponAttachmentPoint_GetCurrentAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.GetAttachPointName
	 * 		Flags  -> ()
	 */
	class FText URaidWeaponAttachmentPoint::GetAttachPointName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.GetAttachPointName");
		
		URaidWeaponAttachmentPoint_GetAttachPointName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              AttachmentList                                             (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void URaidWeaponAttachmentPoint::GetAttachmentList(TArray<class UClass*>* AttachmentList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentList");
		
		URaidWeaponAttachmentPoint_GetAttachmentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachmentList != nullptr)
			*AttachmentList = params.AttachmentList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentIdx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AttachmentClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URaidWeaponAttachmentPoint::GetAttachmentIdx(class UClass* AttachmentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentIdx");
		
		URaidWeaponAttachmentPoint_GetAttachmentIdx_Params params {};
		params.AttachmentClass = AttachmentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidWeaponAttachmentPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidWeaponAttachmentPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachmentPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidWeaponAttachmentPoint_Muzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidWeaponAttachmentPoint_Muzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachmentPoint_Muzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidWeaponAttachmentPoint_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidWeaponAttachmentPoint_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachmentPoint_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaidWeaponAttachmentPoint_Special.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaidWeaponAttachmentPoint_Special::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponAttachmentPoint_Special");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWeaponCarryContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWeaponCarryContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWeaponCarryContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWorldNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWorldNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWorldNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWorldProcManager.TimedSpawning
	 * 		Flags  -> ()
	 */
	void ARaidWorldProcManager::TimedSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWorldProcManager.TimedSpawning");
		
		ARaidWorldProcManager_TimedSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RaidWorldProcManager.OnRep_Seed
	 * 		Flags  -> ()
	 */
	void ARaidWorldProcManager::OnRep_Seed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RaidWorldProcManager.OnRep_Seed");
		
		ARaidWorldProcManager_OnRep_Seed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWorldProcManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWorldProcManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWorldProcManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWorldReplicationBounds.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWorldReplicationBounds::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWorldReplicationBounds");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWPNAList_Magazine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWPNAList_Magazine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWPNAList_Magazine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWPNAList_Muzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWPNAList_Muzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWPNAList_Muzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWPNAList_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWPNAList_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWPNAList_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARaidWPNAList_Special.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARaidWPNAList_Special::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RaidWPNAList_Special");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.VelocityAtTime_LinearDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTrajectoryInitialConditions                TIC                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              K                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vinf                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSinceLaunch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URealisticProjectileComponent::VelocityAtTime_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, float TimeSinceLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.VelocityAtTime_LinearDrag");
		
		URealisticProjectileComponent_VelocityAtTime_LinearDrag_Params params {};
		params.TIC = TIC;
		params.K = K;
		params.Vinf = Vinf;
		params.TimeSinceLaunch = TimeSinceLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.TimeOfFlight_Sliding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTrajectoryInitialConditions                TIC                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurrentVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URealisticProjectileComponent::TimeOfFlight_Sliding(const struct FTrajectoryInitialConditions& TIC, const struct FVector& EndLocation, const struct FVector& CurrentVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.TimeOfFlight_Sliding");
		
		URealisticProjectileComponent_TimeOfFlight_Sliding_Params params {};
		params.TIC = TIC;
		params.EndLocation = EndLocation;
		params.CurrentVelocity = CurrentVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.TimeOfFlight_LinearDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTrajectoryInitialConditions                TIC                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              K                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vinf                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurrentVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URealisticProjectileComponent::TimeOfFlight_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, const struct FVector& EndLocation, const struct FVector& CurrentVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.TimeOfFlight_LinearDrag");
		
		URealisticProjectileComponent_TimeOfFlight_LinearDrag_Params params {};
		params.TIC = TIC;
		params.K = K;
		params.Vinf = Vinf;
		params.EndLocation = EndLocation;
		params.CurrentVelocity = CurrentVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.StopSimulating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               PredictOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::StopSimulating(const struct FHitResult& HitResult, bool PredictOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.StopSimulating");
		
		URealisticProjectileComponent_StopSimulating_Params params {};
		params.HitResult = HitResult;
		params.PredictOnly = PredictOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ShouldBounce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URealisticProjectileComponent::ShouldBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ShouldBounce");
		
		URealisticProjectileComponent_ShouldBounce_Params params {};
		params.Hit = Hit;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.SetVelocityInLocalSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::SetVelocityInLocalSpace(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.SetVelocityInLocalSpace");
		
		URealisticProjectileComponent_SetVelocityInLocalSpace_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.SetInitialConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTrajectoryInitialConditions                Trajectory                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::SetInitialConditions(const struct FTrajectoryInitialConditions& Trajectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.SetInitialConditions");
		
		URealisticProjectileComponent_SetInitialConditions_Params params {};
		params.Trajectory = Trajectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ServerCheckClientHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActiveProjectiles                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSinceShot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BulletRandSeed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Epsilon                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawHit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideGravity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGravity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URealisticProjectileComponent::ServerCheckClientHit(class UObject* WorldContextObject, struct FVector* ImpactVelocity, TArray<class AActor*> ActiveProjectiles, const struct FHitResult& Hit, float TimeSinceShot, int32_t BulletRandSeed, float Epsilon, float StepTime, bool DrawHit, bool bOverrideGravity, const struct FVector& NewGravity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ServerCheckClientHit");
		
		URealisticProjectileComponent_ServerCheckClientHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActiveProjectiles = ActiveProjectiles;
		params.Hit = Hit;
		params.TimeSinceShot = TimeSinceShot;
		params.BulletRandSeed = BulletRandSeed;
		params.Epsilon = Epsilon;
		params.StepTime = StepTime;
		params.DrawHit = DrawHit;
		params.bOverrideGravity = bOverrideGravity;
		params.NewGravity = NewGravity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImpactVelocity != nullptr)
			*ImpactVelocity = params.ImpactVelocity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ScaleVisualEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CameraLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::ScaleVisualEffect(class UStaticMeshComponent* Mesh, const struct FVector& WorldLocation, const struct FVector& Direction, const struct FVector& CameraLocation, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ScaleVisualEffect");
		
		URealisticProjectileComponent_ScaleVisualEffect_Params params {};
		params.Mesh = Mesh;
		params.WorldLocation = WorldLocation;
		params.Direction = Direction;
		params.CameraLocation = CameraLocation;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ScaleTracerMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URealisticProjectileComponent*               ProjectileComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CameraLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LengthFactor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::ScaleTracerMesh(class UStaticMeshComponent* Mesh, class URealisticProjectileComponent* ProjectileComponent, const struct FVector& WorldLocation, const struct FVector& CameraLocation, float Thickness, float LengthFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ScaleTracerMesh");
		
		URealisticProjectileComponent_ScaleTracerMesh_Params params {};
		params.Mesh = Mesh;
		params.ProjectileComponent = ProjectileComponent;
		params.WorldLocation = WorldLocation;
		params.CameraLocation = CameraLocation;
		params.Thickness = Thickness;
		params.LengthFactor = LengthFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.PositionAtTime_LinearDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTrajectoryInitialConditions                TIC                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              K                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vinf                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSinceLaunch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URealisticProjectileComponent::PositionAtTime_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, float TimeSinceLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.PositionAtTime_LinearDrag");
		
		URealisticProjectileComponent_PositionAtTime_LinearDrag_Params params {};
		params.TIC = TIC;
		params.K = K;
		params.Vinf = Vinf;
		params.TimeSinceLaunch = TimeSinceLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileStopDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectilePenetrateDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnProjectilePenetrateDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectilePenetrateDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnProjectilePenetrateDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileEmbedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              ImpactVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnProjectileEmbedDelegate__DelegateSignature(const struct FHitResult& HitResult, float ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileEmbedDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnProjectileEmbedDelegate__DelegateSignature_Params params {};
		params.HitResult = HitResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileBounceDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileBounceDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnProjectileBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileAnyHitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitDetails                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnProjectileAnyHitDelegate__DelegateSignature(const struct FHitResult& HitDetails, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileAnyHitDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnProjectileAnyHitDelegate__DelegateSignature_Params params {};
		params.HitDetails = HitDetails;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnPenetrationExitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ExitHit                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ExitVelocity                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnPenetrationExitDelegate__DelegateSignature(const struct FHitResult& ExitHit, const struct FVector& ExitVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnPenetrationExitDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnPenetrationExitDelegate__DelegateSignature_Params params {};
		params.ExitHit = ExitHit;
		params.ExitVelocity = ExitVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction RaidGame.RealisticProjectileComponent.OnComponentBeginOverlapDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrajectoryNum                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeSinceSpawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::OnComponentBeginOverlapDelegate__DelegateSignature(const struct FHitResult& HitResult, int32_t TrajectoryNum, float TimeSinceSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction RaidGame.RealisticProjectileComponent.OnComponentBeginOverlapDelegate__DelegateSignature");
		
		URealisticProjectileComponent_OnComponentBeginOverlapDelegate__DelegateSignature_Params params {};
		params.HitResult = HitResult;
		params.TrajectoryNum = TrajectoryNum;
		params.TimeSinceSpawn = TimeSinceSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.HasStoppedSimulation
	 * 		Flags  -> ()
	 */
	bool URealisticProjectileComponent::HasStoppedSimulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.HasStoppedSimulation");
		
		URealisticProjectileComponent_HasStoppedSimulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             WorldLocations                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRotator>                            Rotations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Velocities                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    StartRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Properties                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandSeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToSimulate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideGravity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GravityAccel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::GetPredictedTrajectoryFull(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, TArray<struct FRotator>* Rotations, TArray<struct FVector>* Velocities, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryFull");
		
		URealisticProjectileComponent_GetPredictedTrajectoryFull_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.StartRotation = StartRotation;
		params.Properties = Properties;
		params.RandSeed = RandSeed;
		params.TimeToSimulate = TimeToSimulate;
		params.StepTime = StepTime;
		params.MaxPoints = MaxPoints;
		params.bOverrideGravity = bOverrideGravity;
		params.GravityAccel = GravityAccel;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocations != nullptr)
			*WorldLocations = params.WorldLocations;
		if (Rotations != nullptr)
			*Rotations = params.Rotations;
		if (Velocities != nullptr)
			*Velocities = params.Velocities;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryForSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             WorldLocations                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    StartRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Properties                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRealisticProjectileBehavior                NewSettings                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandSeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToSimulate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideGravity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GravityAccel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::GetPredictedTrajectoryForSettings(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, const struct FRealisticProjectileBehavior& NewSettings, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryForSettings");
		
		URealisticProjectileComponent_GetPredictedTrajectoryForSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.StartRotation = StartRotation;
		params.Properties = Properties;
		params.NewSettings = NewSettings;
		params.RandSeed = RandSeed;
		params.TimeToSimulate = TimeToSimulate;
		params.StepTime = StepTime;
		params.MaxPoints = MaxPoints;
		params.bOverrideGravity = bOverrideGravity;
		params.GravityAccel = GravityAccel;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocations != nullptr)
			*WorldLocations = params.WorldLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             WorldLocations                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LastVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    StartRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Properties                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandSeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToSimulate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideGravity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GravityAccel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::GetPredictedTrajectory(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, struct FVector* LastVelocity, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectory");
		
		URealisticProjectileComponent_GetPredictedTrajectory_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StartLocation = StartLocation;
		params.StartRotation = StartRotation;
		params.Properties = Properties;
		params.RandSeed = RandSeed;
		params.TimeToSimulate = TimeToSimulate;
		params.StepTime = StepTime;
		params.MaxPoints = MaxPoints;
		params.bOverrideGravity = bOverrideGravity;
		params.GravityAccel = GravityAccel;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocations != nullptr)
			*WorldLocations = params.WorldLocations;
		if (LastVelocity != nullptr)
			*LastVelocity = params.LastVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.GetInitialConditions
	 * 		Flags  -> ()
	 */
	struct FTrajectoryInitialConditions URealisticProjectileComponent::GetInitialConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.GetInitialConditions");
		
		URealisticProjectileComponent_GetInitialConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.GetExitHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URealisticProjectileComponent::GetExitHit(struct FHitResult* OutHit, const struct FVector& NewLocation, const struct FRotator& Rotation, class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.GetExitHit");
		
		URealisticProjectileComponent_GetExitHit_Params params {};
		params.NewLocation = NewLocation;
		params.Rotation = Rotation;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.FastForwardWithHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRewindHit>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRewindHistory>                      PlayerLocations                                            (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::FastForwardWithHistory(TArray<struct FRewindHit>* OutHits, float Timestamp, TArray<struct FRewindHistory> PlayerLocations, float StepTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.FastForwardWithHistory");
		
		URealisticProjectileComponent_FastForwardWithHistory_Params params {};
		params.Timestamp = Timestamp;
		params.PlayerLocations = PlayerLocations;
		params.StepTime = StepTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.FastForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::FastForward(float Timestamp, float StepTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.FastForward");
		
		URealisticProjectileComponent_FastForward_Params params {};
		params.Timestamp = Timestamp;
		params.StepTime = StepTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.DrawPredictedPathFromPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UStaticMeshComponent*>                Meshes                                                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Path                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::DrawPredictedPathFromPoints(class UObject* WorldContextObject, TArray<class UStaticMeshComponent*> Meshes, TArray<struct FVector> Path, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.DrawPredictedPathFromPoints");
		
		URealisticProjectileComponent_DrawPredictedPathFromPoints_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Meshes = Meshes;
		params.Path = Path;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.DrawPredictedPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UStaticMeshComponent*>                Meshes                                                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    StartRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ProjectileClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RandSeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToSimulate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StepTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideGravity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GravityAccel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::DrawPredictedPath(class UObject* WorldContextObject, TArray<class UStaticMeshComponent*> Meshes, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* ProjectileClass, int32_t RandSeed, float TimeToSimulate, float StepTime, bool bOverrideGravity, const struct FVector& GravityAccel, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.DrawPredictedPath");
		
		URealisticProjectileComponent_DrawPredictedPath_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Meshes = Meshes;
		params.StartLocation = StartLocation;
		params.StartRotation = StartRotation;
		params.ProjectileClass = ProjectileClass;
		params.RandSeed = RandSeed;
		params.TimeToSimulate = TimeToSimulate;
		params.StepTime = StepTime;
		params.bOverrideGravity = bOverrideGravity;
		params.GravityAccel = GravityAccel;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ComputeNewVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSinceLaunch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URealisticProjectileComponent::ComputeNewVelocity(float TimeSinceLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ComputeNewVelocity");
		
		URealisticProjectileComponent_ComputeNewVelocity_Params params {};
		params.TimeSinceLaunch = TimeSinceLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ComputeNewRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSinceLaunch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator URealisticProjectileComponent::ComputeNewRotation(float TimeSinceLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ComputeNewRotation");
		
		URealisticProjectileComponent_ComputeNewRotation_Params params {};
		params.TimeSinceLaunch = TimeSinceLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ComputeNewLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeSinceLaunch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URealisticProjectileComponent::ComputeNewLocation(float TimeSinceLaunch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ComputeNewLocation");
		
		URealisticProjectileComponent_ComputeNewLocation_Params params {};
		params.TimeSinceLaunch = TimeSinceLaunch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.ApplyImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactVelocity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URealisticProjectileComponent::ApplyImpulse(struct FHitResult* Hit, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.ApplyImpulse");
		
		URealisticProjectileComponent_ApplyImpulse_Params params {};
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RealisticProjectileComponent.AdjustDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVelocity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URealisticProjectileComponent::AdjustDirection(const struct FVector& InVelocity, const struct FVector& ImpactNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RealisticProjectileComponent.AdjustDirection");
		
		URealisticProjectileComponent_AdjustDirection_Params params {};
		params.InVelocity = InVelocity;
		params.ImpactNormal = ImpactNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URealisticProjectileComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URealisticProjectileComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RealisticProjectileComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RewindUtilities.TestCollisionForFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRewindHit>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              GameTimeStart                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GameTimeEnd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocationStart                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocationEnd                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRewindHistory>                      HitboxHistories                                            (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Projectile                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URewindUtilities::TestCollisionForFrame(TArray<struct FRewindHit>* OutHits, float GameTimeStart, float GameTimeEnd, const struct FVector& LocationStart, const struct FVector& LocationEnd, TArray<struct FRewindHistory> HitboxHistories, class UPrimitiveComponent* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RewindUtilities.TestCollisionForFrame");
		
		URewindUtilities_TestCollisionForFrame_Params params {};
		params.GameTimeStart = GameTimeStart;
		params.GameTimeEnd = GameTimeEnd;
		params.LocationStart = LocationStart;
		params.LocationEnd = LocationEnd;
		params.HitboxHistories = HitboxHistories;
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.RewindUtilities.AddFrameToRewindHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewindHistory                              InRewindHistory                                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      RecordActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MatchComponentsWithTag                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gametime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClearOlderThan                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URewindUtilities::AddFrameToRewindHistory(struct FRewindHistory* InRewindHistory, class AActor* RecordActor, const class FName& MatchComponentsWithTag, float Gametime, float ClearOlderThan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.RewindUtilities.AddFrameToRewindHistory");
		
		URewindUtilities_AddFrameToRewindHistory_Params params {};
		params.RecordActor = RecordActor;
		params.MatchComponentsWithTag = MatchComponentsWithTag;
		params.Gametime = Gametime;
		params.ClearOlderThan = ClearOlderThan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewindHistory != nullptr)
			*InRewindHistory = params.InRewindHistory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewindUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewindUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.RewindUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundNodeLocalDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundNodeLocalDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.SoundNodeLocalDistance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundNodeLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundNodeLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.SoundNodeLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.VirtualCursorFunctionLibrary.IsJoypadCursorUp
	 * 		Flags  -> ()
	 */
	bool UVirtualCursorFunctionLibrary::IsJoypadCursorUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.VirtualCursorFunctionLibrary.IsJoypadCursorUp");
		
		UVirtualCursorFunctionLibrary_IsJoypadCursorUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	 * 		Flags  -> ()
	 */
	bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget");
		
		UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.VirtualCursorFunctionLibrary.EnableVirtualCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.VirtualCursorFunctionLibrary.EnableVirtualCursor");
		
		UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RaidGame.VirtualCursorFunctionLibrary.DisableVirtualCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RaidGame.VirtualCursorFunctionLibrary.DisableVirtualCursor");
		
		UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVirtualCursorFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirtualCursorFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RaidGame.VirtualCursorFunctionLibrary");
		return ptr;
	}

}


