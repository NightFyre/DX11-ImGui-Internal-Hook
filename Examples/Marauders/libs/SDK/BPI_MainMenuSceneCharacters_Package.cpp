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
	 * 		Name   -> Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichChar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainMenuSceneCharacters_C::Set_WhichMM_CharIAm(int32_t WhichChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_WhichMM_CharIAm");
		
		UBPI_MainMenuSceneCharacters_C_Set_WhichMM_CharIAm_Params params {};
		params.WhichChar = WhichChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_MM_CharacterPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               AnimToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainMenuSceneCharacters_C::Set_MM_CharacterPose(class UAnimSequence* AnimToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C.Set_MM_CharacterPose");
		
		UBPI_MainMenuSceneCharacters_C_Set_MM_CharacterPose_Params params {};
		params.AnimToUse = AnimToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MainMenuSceneCharacters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MainMenuSceneCharacters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MainMenuSceneCharacters.BPI_MainMenuSceneCharacters_C");
		return ptr;
	}

}


