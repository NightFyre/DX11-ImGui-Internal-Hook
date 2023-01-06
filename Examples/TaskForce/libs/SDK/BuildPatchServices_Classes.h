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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class BuildPatchServices.BuildPatchManifest
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UBuildPatchManifest : public UObject
	{
	public:
		unsigned char                                              ManifestFileVersion;                                     // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFileData;                                             // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXHV[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AppID;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppName;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildVersion;                                            // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LaunchExe;                                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LaunchCommand;                                           // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PrereqIds[0x50];                                         // 0x0070(0x0050) UNKNOWN PROPERTY: SetProperty BuildPatchServices.BuildPatchManifest.PrereqIds
		class FString                                              PrereqName;                                              // 0x00C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrereqPath;                                              // 0x00D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrereqArgs;                                              // 0x00E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFileManifestData>                           FileManifestList;                                        // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FChunkInfoData>                              ChunkList;                                               // 0x0100(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCustomFieldData>                            CustomFields;                                            // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
