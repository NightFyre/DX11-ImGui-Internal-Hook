#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct BuildPatchServices.SHAHashData
	 * Size -> 0x0014
	 */
	struct FSHAHashData
	{
	public:
		unsigned char                                              Hash[0x14];                                              // 0x0000(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BuildPatchServices.ChunkPartData
	 * Size -> 0x0018
	 */
	struct FChunkPartData
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Offset;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Size;                                                    // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct BuildPatchServices.FileManifestData
	 * Size -> 0x0068
	 */
	struct FFileManifestData
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSHAHashData                                        FileHash;                                                // 0x0010(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHSC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChunkPartData>                              FileChunkParts;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      InstallTags;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsUnixExecutable;                                       // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8BI[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SymlinkTarget;                                           // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCompressed;                                           // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7I2[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BuildPatchServices.ChunkInfoData
	 * Size -> 0x0040
	 */
	struct FChunkInfoData
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Hash;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSHAHashData                                        ShaHash;                                                 // 0x0018(0x0014) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMKQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    FileSize;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GroupNumber;                                             // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPZF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct BuildPatchServices.CustomFieldData
	 * Size -> 0x0020
	 */
	struct FCustomFieldData
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
