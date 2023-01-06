/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetDefaultSkins
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETaskForceRegions                                  Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ColdWeather                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTaskForceGameMode_C::SetDefaultSkins(int32_t TeamID, ETaskForceRegions Region, bool ColdWeather)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetDefaultSkins");
		
		UTaskForceGameMode_C_SetDefaultSkins_Params params {};
		params.TeamID = TeamID;
		params.Region = Region;
		params.ColdWeather = ColdWeather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddSkin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTaskForceSkin                              Skin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddSkin(int32_t TeamID, const class FString& Name, const struct FTaskForceSkin& Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddSkin");
		
		UTaskForceGameMode_C_AddSkin_Params params {};
		params.TeamID = TeamID;
		params.Name = Name;
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.GetMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ETaskForceModes                                    Mode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::GetMode(ETaskForceModes* Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.GetMode");
		
		UTaskForceGameMode_C_GetMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mode != nullptr)
			*Mode = params.Mode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddBreach
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 ExplodedMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extents                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddBreach(const struct FTransform& Transform, class UStaticMesh* Mesh, class UStaticMesh* ExplodedMesh, const struct FVector& Offset, const struct FVector& Extents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddBreach");
		
		UTaskForceGameMode_C_AddBreach_Params params {};
		params.Transform = Transform;
		params.Mesh = Mesh;
		params.ExplodedMesh = ExplodedMesh;
		params.Offset = Offset;
		params.Extents = Extents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extents                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   PressedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   ReleasedSound                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddButton(class AActor* Target, const struct FVector& Extents, const class FString& Text, class USoundCue* PressedSound, class USoundCue* ReleasedSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddButton");
		
		UTaskForceGameMode_C_AddButton_Params params {};
		params.Target = Target;
		params.Extents = Extents;
		params.Text = Text;
		params.PressedSound = PressedSound;
		params.ReleasedSound = ReleasedSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddWeapon(const struct FTransform& Transform, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddWeapon");
		
		UTaskForceGameMode_C_AddWeapon_Params params {};
		params.Transform = Transform;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddDoor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTaskForceGameMode_C::AddDoor(const struct FTransform& Transform, class UStaticMesh* Mesh, const struct FVector& Offset, float Rotation, float Angle, bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddDoor");
		
		UTaskForceGameMode_C_AddDoor_Params params {};
		params.Transform = Transform;
		params.Mesh = Mesh;
		params.Offset = Offset;
		params.Rotation = Rotation;
		params.Angle = Angle;
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddLadder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddLadder(const struct FTransform& Transform, float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddLadder");
		
		UTaskForceGameMode_C_AddLadder_Params params {};
		params.Transform = Transform;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.RemoveSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerStart*                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::RemoveSpawn(class APlayerStart* Spawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.RemoveSpawn");
		
		UTaskForceGameMode_C_RemoveSpawn_Params params {};
		params.Spawn = Spawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.ClearSpawns
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTaskForceGameMode_C::ClearSpawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.ClearSpawns");
		
		UTaskForceGameMode_C_ClearSpawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerStart*                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::AddSpawn(class APlayerStart* Spawn, int32_t TeamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddSpawn");
		
		UTaskForceGameMode_C_AddSpawn_Params params {};
		params.Spawn = Spawn;
		params.TeamID = TeamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetRoundMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       RoundStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       RoundWin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       RoundDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UTaskForceGameMode_C::SetRoundMessages(TMap<int32_t, class FString> RoundStart, TMap<int32_t, class FString> RoundWin, TMap<int32_t, class FString> RoundDraw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetRoundMessages");
		
		UTaskForceGameMode_C_SetRoundMessages_Params params {};
		params.RoundStart = RoundStart;
		params.RoundWin = RoundWin;
		params.RoundDraw = RoundDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetRoundSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           RoundStartMusic1                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundStartMusic2                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinVoice1                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinMusic1                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinVoice2                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           RoundWinMusic2                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UTaskForceGameMode_C::SetRoundSounds(TArray<class USoundCue*> RoundStartMusic1, TArray<class USoundCue*> RoundStartMusic2, TArray<class USoundCue*> RoundWinVoice1, TArray<class USoundCue*> RoundWinMusic1, TArray<class USoundCue*> RoundWinVoice2, TArray<class USoundCue*> RoundWinMusic2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetRoundSounds");
		
		UTaskForceGameMode_C_SetRoundSounds_Params params {};
		params.RoundStartMusic1 = RoundStartMusic1;
		params.RoundStartMusic2 = RoundStartMusic2;
		params.RoundWinVoice1 = RoundWinVoice1;
		params.RoundWinMusic1 = RoundWinMusic1;
		params.RoundWinVoice2 = RoundWinVoice2;
		params.RoundWinMusic2 = RoundWinMusic2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.RemoveCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::RemoveCharacter(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.RemoveCharacter");
		
		UTaskForceGameMode_C_RemoveCharacter_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.ClearCharacters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTaskForceGameMode_C::ClearCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.ClearCharacters");
		
		UTaskForceGameMode_C_ClearCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.AddCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Helmets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Shirts                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Pants                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Boots                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Gloves                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 * 		TMap<class FName, class USkeletalMeshComponent*>   Gear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference)
	 */
	void UTaskForceGameMode_C::AddCharacter(const class FName& Name, int32_t TeamID, class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Body, TMap<class FName, class USkeletalMeshComponent*> Helmets, TMap<class FName, class USkeletalMeshComponent*> Shirts, TMap<class FName, class USkeletalMeshComponent*> Pants, TMap<class FName, class USkeletalMeshComponent*> Boots, TMap<class FName, class USkeletalMeshComponent*> Gloves, TMap<class FName, class USkeletalMeshComponent*> Gear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.AddCharacter");
		
		UTaskForceGameMode_C_AddCharacter_Params params {};
		params.Name = Name;
		params.TeamID = TeamID;
		params.Head = Head;
		params.Body = Body;
		params.Helmets = Helmets;
		params.Shirts = Shirts;
		params.Pants = Pants;
		params.Boots = Boots;
		params.Gloves = Gloves;
		params.Gear = Gear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetRegion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::SetRegion(const class FName& Region)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetRegion");
		
		UTaskForceGameMode_C_SetRegion_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetTeamIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTaskForceIcon                              Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::SetTeamIcon(int32_t ID, const struct FTaskForceIcon& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetTeamIcon");
		
		UTaskForceGameMode_C_SetTeamIcon_Params params {};
		params.ID = ID;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetTeamName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTaskForceGameMode_C::SetTeamName(int32_t ID, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetTeamName");
		
		UTaskForceGameMode_C_SetTeamName_Params params {};
		params.ID = ID;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceGameMode.TaskForceGameMode_C.SetTeams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, struct FTaskForceIcon>         Teams                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UTaskForceGameMode_C::SetTeams(TMap<class FString, struct FTaskForceIcon> Teams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceGameMode.TaskForceGameMode_C.SetTeams");
		
		UTaskForceGameMode_C_SetTeams_Params params {};
		params.Teams = Teams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceGameMode.TaskForceGameMode_C");
		return ptr;
	}

}


