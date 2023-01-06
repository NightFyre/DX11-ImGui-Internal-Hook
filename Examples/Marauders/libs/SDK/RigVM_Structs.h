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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RigVM.ERigVMParameterType
	 */
	enum class ERigVMParameterType : uint8_t
	{
		Input   = 0,
		Output  = 1,
		Invalid = 2,
		MAX     = 3
	};

	/**
	 * Enum RigVM.ERigVMOpCode
	 */
	enum class ERigVMOpCode : uint8_t
	{
		Execute_0_Operands  = 0,
		Execute_1_Operands  = 1,
		Execute_2_Operands  = 2,
		Execute_3_Operands  = 3,
		Execute_4_Operands  = 4,
		Execute_5_Operands  = 5,
		Execute_6_Operands  = 6,
		Execute_7_Operands  = 7,
		Execute_8_Operands  = 8,
		Execute_9_Operands  = 9,
		Execute_10_Operands = 10,
		Execute_11_Operands = 11,
		Execute_12_Operands = 12,
		Execute_13_Operands = 13,
		Execute_14_Operands = 14,
		Execute_15_Operands = 15,
		Execute_16_Operands = 16,
		Execute_17_Operands = 17,
		Execute_18_Operands = 18,
		Execute_19_Operands = 19,
		Execute_20_Operands = 20,
		Execute_21_Operands = 21,
		Execute_22_Operands = 22,
		Execute_23_Operands = 23,
		Execute_24_Operands = 24,
		Execute_25_Operands = 25,
		Execute_26_Operands = 26,
		Execute_27_Operands = 27,
		Execute_28_Operands = 28,
		Execute_29_Operands = 29,
		Execute_30_Operands = 30,
		Execute_31_Operands = 31,
		Execute_32_Operands = 32,
		Execute_33_Operands = 33,
		Execute_34_Operands = 34,
		Execute_35_Operands = 35,
		Execute_36_Operands = 36,
		Execute_37_Operands = 37,
		Execute_38_Operands = 38,
		Execute_39_Operands = 39,
		Execute_40_Operands = 40,
		Execute_41_Operands = 41,
		Execute_42_Operands = 42,
		Execute_43_Operands = 43,
		Execute_44_Operands = 44,
		Execute_45_Operands = 45,
		Execute_46_Operands = 46,
		Execute_47_Operands = 47,
		Execute_48_Operands = 48,
		Execute_49_Operands = 49,
		Execute_50_Operands = 50,
		Execute_51_Operands = 51,
		Execute_52_Operands = 52,
		Execute_53_Operands = 53,
		Execute_54_Operands = 54,
		Execute_55_Operands = 55,
		Execute_56_Operands = 56,
		Execute_57_Operands = 57,
		Execute_58_Operands = 58,
		Execute_59_Operands = 59,
		Execute_60_Operands = 60,
		Execute_61_Operands = 61,
		Execute_62_Operands = 62,
		Execute_63_Operands = 63,
		Execute_64_Operands = 64,
		Zero                = 65,
		BoolFalse           = 66,
		BoolTrue            = 67,
		Copy                = 68,
		Increment           = 69,
		Decrement           = 70,
		Equals              = 71,
		NotEquals           = 72,
		JumpAbsolute        = 73,
		JumpForward         = 74,
		JumpBackward        = 75,
		JumpAbsoluteIf      = 76,
		JumpForwardIf       = 77,
		JumpBackwardIf      = 78,
		ChangeType          = 79,
		Exit                = 80,
		BeginBlock          = 81,
		EndBlock            = 82,
		Invalid             = 83,
		MAX                 = 84
	};

	/**
	 * Enum RigVM.ERigVMPinDirection
	 */
	enum class ERigVMPinDirection : uint8_t
	{
		Input   = 0,
		Output  = 1,
		IO      = 2,
		Visible = 3,
		Hidden  = 4,
		Invalid = 5,
		MAX     = 6
	};

	/**
	 * Enum RigVM.ERigVMRegisterType
	 */
	enum class ERigVMRegisterType : uint8_t
	{
		Plain   = 0,
		String  = 1,
		Name    = 2,
		Struct  = 3,
		Invalid = 4,
		MAX     = 5
	};

	/**
	 * Enum RigVM.ERigVMMemoryType
	 */
	enum class ERigVMMemoryType : uint8_t
	{
		Work     = 0,
		Literal  = 1,
		External = 2,
		Invalid  = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RigVM.RigVMRegister
	 * Size -> 0x0024
	 */
	struct FRigVMRegister
	{
	public:
		ERigVMRegisterType                                         Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S78B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ByteIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ElementSize;                                             // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ElementCount;                                            // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SliceCount;                                              // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AlignmentBytes;                                          // 0x000E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TSU[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TrailingBytes;                                           // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RF0F[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScriptStructIndex;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsArray;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDynamic;                                              // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A10D[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMRegisterOffset
	 * Size -> 0x0048
	 */
	struct FRigVMRegisterOffset
	{
	public:
		TArray<int32_t>                                            Segments;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		ERigVMRegisterType                                         Type;                                                    // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QJRQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CPPType;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A3ZP[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       ScriptStruct;                                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScriptStruct*                                       ParentScriptStruct;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArrayIndex;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   ElementSize;                                             // 0x0034(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B795[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CachedSegmentPath;                                       // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RigVM.RigVMMemoryContainer
	 * Size -> 0x00A0
	 */
	struct FRigVMMemoryContainer
	{
	public:
		bool                                                       bUseNameMap;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ERigVMMemoryType                                           MemoryType;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PB8N[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMRegister>                              Registers;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FRigVMRegisterOffset>                        RegisterOffsets;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Data;                                                    // 0x0028(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UScriptStruct*>                               ScriptStructs;                                           // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 NameMap;                                                 // 0x0048(0x0050) Transient, NativeAccessSpecifierPrivate
		bool                                                       bEncounteredErrorDuringLoad;                             // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LIKS[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMByteCodeEntry
	 * Size -> 0x000C
	 */
	struct FRigVMByteCodeEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InstructionIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigVM.RigVMByteCode
	 * Size -> 0x0030
	 */
	struct FRigVMByteCode
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    NumInstructions;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QHHX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMByteCodeEntry>                         Entries;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G6E0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMInstruction
	 * Size -> 0x0010
	 */
	struct FRigVMInstruction
	{
	public:
		uint64_t                                                   ByteCodeIndex;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERigVMOpCode                                               OpCode;                                                  // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OperandAlignment;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6HR[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMInstructionArray
	 * Size -> 0x0010
	 */
	struct FRigVMInstructionArray
	{
	public:
		TArray<struct FRigVMInstruction>                           Instructions;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RigVM.RigVMExecuteContext
	 * Size -> 0x0058
	 */
	struct FRigVMExecuteContext
	{
	public:
		unsigned char                                              UnknownData_RKOU[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMParameter
	 * Size -> 0x0030
	 */
	struct FRigVMParameter
	{
	public:
		ERigVMParameterType                                        Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XDBA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    RegisterIndex;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CPPType;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScriptStruct*                                       ScriptStruct;                                            // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ScriptStructPath;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RigVM.RigVMStruct
	 * Size -> 0x0008
	 */
	struct FRigVMStruct
	{
	public:
		unsigned char                                              UnknownData_MZ2Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMBaseOp
	 * Size -> 0x0001
	 */
	struct FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_5X5Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMUnaryOp
	 * Size -> 0x0007 (FullSize[0x0008] - InheritedSize[0x0001])
	 */
	struct FRigVMUnaryOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_RXQ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMChangeTypeOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigVMChangeTypeOp : public FRigVMUnaryOp
	{
	public:
		unsigned char                                              UnknownData_KTSV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMJumpIfOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigVMJumpIfOp : public FRigVMUnaryOp
	{
	public:
		unsigned char                                              UnknownData_8RJU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMJumpOp
	 * Size -> 0x0007 (FullSize[0x0008] - InheritedSize[0x0001])
	 */
	struct FRigVMJumpOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_D3P5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMComparisonOp
	 * Size -> 0x0013 (FullSize[0x0014] - InheritedSize[0x0001])
	 */
	struct FRigVMComparisonOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_8L0Q[0x13];                                  // 0x0001(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMCopyOp
	 * Size -> 0x000D (FullSize[0x000E] - InheritedSize[0x0001])
	 */
	struct FRigVMCopyOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_LV4P[0xD];                                   // 0x0001(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMBinaryOp
	 * Size -> 0x000D (FullSize[0x000E] - InheritedSize[0x0001])
	 */
	struct FRigVMBinaryOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_TBHM[0xD];                                   // 0x0001(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMExecuteOp
	 * Size -> 0x0003 (FullSize[0x0004] - InheritedSize[0x0001])
	 */
	struct FRigVMExecuteOp : public FRigVMBaseOp
	{
	public:
		unsigned char                                              UnknownData_X4JR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMSlice
	 * Size -> 0x000C
	 */
	struct FRigVMSlice
	{
	public:
		unsigned char                                              UnknownData_YHVT[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RigVM.RigVMOperand
	 * Size -> 0x0006
	 */
	struct FRigVMOperand
	{
	public:
		ERigVMMemoryType                                           MemoryType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4O9G[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   RegisterIndex;                                           // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   RegisterOffset;                                          // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RigVM.RigVMMemoryStatistics
	 * Size -> 0x000C
	 */
	struct FRigVMMemoryStatistics
	{
	public:
		uint32_t                                                   RegisterCount;                                           // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataBytes;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalBytes;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigVM.RigVMByteCodeStatistics
	 * Size -> 0x0008
	 */
	struct FRigVMByteCodeStatistics
	{
	public:
		uint32_t                                                   InstructionCount;                                        // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataBytes;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RigVM.RigVMStatistics
	 * Size -> 0x002C
	 */
	struct FRigVMStatistics
	{
	public:
		uint32_t                                                   BytesForCDO;                                             // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BytesPerInstance;                                        // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMMemoryStatistics                              LiteralMemory;                                           // 0x0008(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigVMMemoryStatistics                              WorkMemory;                                              // 0x0014(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   BytesForCaching;                                         // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMByteCodeStatistics                            ByteCode;                                                // 0x0024(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
