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
	 * 		Name   -> Function AWSCore.SymmetricCipher.GenerateKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            keyLengthBytes                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAWSByteBuffer USymmetricCipher::GenerateKey(int64_t keyLengthBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AWSCore.SymmetricCipher.GenerateKey");
		
		USymmetricCipher_GenerateKey_Params params {};
		params.keyLengthBytes = keyLengthBytes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USymmetricCipher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USymmetricCipher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AWSCore.SymmetricCipher");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEncryptionMaterials.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEncryptionMaterials::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AWSCore.EncryptionMaterials");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AWSCore.UUID.RandomUUID
	 * 		Flags  -> ()
	 */
	struct FAWSUUID UUUID::RandomUUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AWSCore.UUID.RandomUUID");
		
		UUUID_RandomUUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUUID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUUID::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AWSCore.UUID");
		return ptr;
	}

}


