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
	 * Class TimeManagement.FixedFrameRateCustomTimeStep
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
	{
	public:
		struct FFrameRate                                          FixedFrameRate;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.GenlockedCustomTimeStep
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.GenlockedTimecodeProvider
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UGenlockedTimecodeProvider : public UTimecodeProvider
	{
	public:
		bool                                                       bUseGenlockToCount;                                      // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC8L[0x27];                                  // 0x0031(0x0027) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.TimeManagementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
		struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
		struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
		struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
		struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
		bool IsValid_Framerate(const struct FFrameRate& InFrameRate);
		struct FFrameRate GetTimecodeFrameRate();
		struct FTimecode GetTimecode();
		struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		class FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
		float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
		float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
		int32_t Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
		struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& A, int32_t B);
		struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
		static UClass* StaticClass();
	};

	/**
	 * Class TimeManagement.TimeSynchronizationSource
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTimeSynchronizationSource : public UObject
	{
	public:
		bool                                                       bUseForSynchronization;                                  // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF7U[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FrameOffset;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
