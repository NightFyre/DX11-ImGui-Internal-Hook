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
	 * Class RigVM.RigVM
	 * Size -> 0x02D0 (FullSize[0x02F8] - InheritedSize[0x0028])
	 */
	class URigVM : public UObject
	{
	public:
		struct FRigVMMemoryContainer                               WorkMemoryStorage;                                       // 0x0028(0x00A0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LQS[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMMemoryContainer                               LiteralMemoryStorage;                                    // 0x00D0(0x00A0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SQH[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMByteCode                                      ByteCodeStorage;                                         // 0x0178(0x0030) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LYG[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMInstructionArray                              Instructions;                                            // 0x01B0(0x0010) Transient, NativeAccessSpecifierPrivate
		struct FRigVMExecuteContext                                Context;                                                 // 0x01C0(0x0058) Transient, NativeAccessSpecifierPrivate
		TArray<class FName>                                        FunctionNamesStorage;                                    // 0x0218(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P01U[0x20];                                  // 0x0228(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMParameter>                             Parameters;                                              // 0x0248(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 ParametersNameMap;                                       // 0x0258(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_64M3[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              DeferredVMToCopy;                                        // 0x02F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex);
		void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex);
		void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex);
		void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32_t InArrayIndex);
		void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex);
		void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32_t InArrayIndex);
		void SetParameterValueInt(const class FName& InParameterName, int32_t InValue, int32_t InArrayIndex);
		void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32_t InArrayIndex);
		void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32_t InArrayIndex);
		class FString GetRigVMFunctionName(int32_t InFunctionIndex);
		struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32_t InArrayIndex);
		struct FVector GetParameterValueVector(const class FName& InParameterName, int32_t InArrayIndex);
		struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32_t InArrayIndex);
		class FString GetParameterValueString(const class FName& InParameterName, int32_t InArrayIndex);
		struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32_t InArrayIndex);
		class FName GetParameterValueName(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterValueInt(const class FName& InParameterName, int32_t InArrayIndex);
		float GetParameterValueFloat(const class FName& InParameterName, int32_t InArrayIndex);
		bool GetParameterValueBool(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterArraySize(const class FName& InParameterName);
		bool Execute(const class FName& InEntryName);
		int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
