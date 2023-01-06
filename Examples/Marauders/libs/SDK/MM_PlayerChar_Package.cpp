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
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.CheckIfItemHasOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      WhichSkelMesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::CheckIfItemHasOffset(class USkeletalMeshComponent* WhichSkelMesh, const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.CheckIfItemHasOffset");
		
		AMM_PlayerChar_C_CheckIfItemHasOffset_Params params {};
		params.WhichSkelMesh = WhichSkelMesh;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.CheckIfShouldOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Secondary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OffsetToUse                                                (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasAnOffset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_PlayerChar_C::CheckIfShouldOffset(bool Secondary, const class FName& ItemName, struct FTransform* OffsetToUse, bool* HasAnOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.CheckIfShouldOffset");
		
		AMM_PlayerChar_C_CheckIfShouldOffset_Params params {};
		params.Secondary = Secondary;
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OffsetToUse != nullptr)
			*OffsetToUse = params.OffsetToUse;
		if (HasAnOffset != nullptr)
			*HasAnOffset = params.HasAnOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.ClearAllSecondaryModules
	 * 		Flags  -> ()
	 */
	void AMM_PlayerChar_C::ClearAllSecondaryModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.ClearAllSecondaryModules");
		
		AMM_PlayerChar_C_ClearAllSecondaryModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.ClearAllPrimaryModules
	 * 		Flags  -> ()
	 */
	void AMM_PlayerChar_C::ClearAllPrimaryModules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.ClearAllPrimaryModules");
		
		AMM_PlayerChar_C_ClearAllPrimaryModules_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.GetSetPlayerItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       WhichSkellMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        EquipmentName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMesh*                               NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_PlayerChar_C::GetSetPlayerItem(class USkinnedMeshComponent* WhichSkellMesh, const class FName& EquipmentName, bool Debug, class USkeletalMesh* NewMesh, bool* Successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.GetSetPlayerItem");
		
		AMM_PlayerChar_C_GetSetPlayerItem_Params params {};
		params.WhichSkellMesh = WhichSkellMesh;
		params.EquipmentName = EquipmentName;
		params.Debug = Debug;
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Successful != nullptr)
			*Successful = params.Successful;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMM_PlayerChar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.UserConstructionScript");
		
		AMM_PlayerChar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C");
		
		AMM_PlayerChar_C_OnLoaded_C6727CBB4E576E606EF2BF9F8740B89C_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D");
		
		AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F3438692EB3B5D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1");
		
		AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F34386EA04B8C1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5");
		
		AMM_PlayerChar_C_OnLoaded_F5D3A45C423FB3547A9F4EBAC36743D5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2");
		
		AMM_PlayerChar_C_OnLoaded_C8E7846746F71E7D3DE80EA4AC2DEEF2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438621061219
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_F0B5A4D74D1CD2E366F3438621061219(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_F0B5A4D74D1CD2E366F3438621061219");
		
		AMM_PlayerChar_C_OnLoaded_F0B5A4D74D1CD2E366F3438621061219_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F077B743F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::OnLoaded_C6727CBB4E576E606EF2BF9F077B743F(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.OnLoaded_C6727CBB4E576E606EF2BF9F077B743F");
		
		AMM_PlayerChar_C_OnLoaded_C6727CBB4E576E606EF2BF9F077B743F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMM_PlayerChar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.ReceiveBeginPlay");
		
		AMM_PlayerChar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.ShowHideOtherPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_PlayerChar_C::ShowHideOtherPlayer(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.ShowHideOtherPlayer");
		
		AMM_PlayerChar_C_ShowHideOtherPlayer_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.Refresh_PlayerLookActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuPlayerLook                             PlayerLook                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMM_PlayerChar_C::Refresh_PlayerLookActor(const struct FMenuPlayerLook& PlayerLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.Refresh_PlayerLookActor");
		
		AMM_PlayerChar_C_Refresh_PlayerLookActor_Params params {};
		params.PlayerLook = PlayerLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.Cosmetic_ExampleFakeBodyPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemDTrowName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECosmeticSlot                                      Current_ApperBodyPart                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::Cosmetic_ExampleFakeBodyPart(const class FName& ItemDTrowName, ECosmeticSlot Current_ApperBodyPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.Cosmetic_ExampleFakeBodyPart");
		
		AMM_PlayerChar_C_Cosmetic_ExampleFakeBodyPart_Params params {};
		params.ItemDTrowName = ItemDTrowName;
		params.Current_ApperBodyPart = Current_ApperBodyPart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_PlayerChar.MM_PlayerChar_C.ExecuteUbergraph_MM_PlayerChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_PlayerChar_C::ExecuteUbergraph_MM_PlayerChar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_PlayerChar.MM_PlayerChar_C.ExecuteUbergraph_MM_PlayerChar");
		
		AMM_PlayerChar_C_ExecuteUbergraph_MM_PlayerChar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMM_PlayerChar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMM_PlayerChar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_PlayerChar.MM_PlayerChar_C");
		return ptr;
	}

}


