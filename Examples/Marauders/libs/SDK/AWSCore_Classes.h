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
	 * Class AWSCore.SymmetricCipher
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USymmetricCipher : public UObject
	{
	public:
		struct FAWSByteBuffer GenerateKey(int64_t keyLengthBytes);
		static UClass* StaticClass();
	};

	/**
	 * Class AWSCore.EncryptionMaterials
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEncryptionMaterials : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AWSCore.UUID
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUUID : public UBlueprintFunctionLibrary
	{
	public:
		struct FAWSUUID RandomUUID();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
