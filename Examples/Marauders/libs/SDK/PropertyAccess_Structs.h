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
	 * Enum PropertyAccess.EPropertyAccessCopyBatch
	 */
	enum class EPropertyAccessCopyBatch : uint8_t
	{
		InternalUnbatched = 0,
		ExternalUnbatched = 1,
		InternalBatched   = 2,
		ExternalBatched   = 3,
		Count             = 4,
		MAX               = 5
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessCopyType
	 */
	enum class EPropertyAccessCopyType : uint8_t
	{
		None                = 0,
		Plain               = 1,
		Complex             = 2,
		Bool                = 3,
		Struct              = 4,
		Object              = 5,
		Name                = 6,
		Array               = 7,
		PromoteBoolToByte   = 8,
		PromoteBoolToInt32  = 9,
		PromoteBoolToInt64  = 10,
		PromoteBoolToFloat  = 11,
		PromoteByteToInt32  = 12,
		PromoteByteToInt64  = 13,
		PromoteByteToFloat  = 14,
		PromoteInt32ToInt64 = 15,
		PromoteInt32ToFloat = 16,
		MAX                 = 17
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessObjectType
	 */
	enum class EPropertyAccessObjectType : uint8_t
	{
		None       = 0,
		Object     = 1,
		WeakObject = 2,
		SoftObject = 3,
		MAX        = 4
	};

	/**
	 * Enum PropertyAccess.EPropertyAccessIndirectionType
	 */
	enum class EPropertyAccessIndirectionType : uint8_t
	{
		Offset         = 0,
		Object         = 1,
		Array          = 2,
		ScriptFunction = 3,
		NativeFunction = 4,
		MAX            = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PropertyAccess.PropertyAccessSegment
	 * Size -> 0x0040
	 */
	struct FPropertyAccessSegment
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStruct*                                             Struct;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Property[0x20];                                          // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class UFunction*                                           Function;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArrayIndex;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   Flags;                                                   // 0x003C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VPN5[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessPath
	 * Size -> 0x000C
	 */
	struct FPropertyAccessPath
	{
	public:
		int32_t                                                    PathSegmentStartIndex;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PathSegmentCount;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHasEvents : 1;                                          // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8BNU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessCopy
	 * Size -> 0x0010
	 */
	struct FPropertyAccessCopy
	{
	public:
		int32_t                                                    AccessIndex;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DestAccessStartIndex;                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DestAccessEndIndex;                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessCopyType                                    Type;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W0ON[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessCopyBatch
	 * Size -> 0x0010
	 */
	struct FPropertyAccessCopyBatch
	{
	public:
		TArray<struct FPropertyAccessCopy>                         Copies;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
	 * Size -> 0x0030
	 */
	struct FPropertyAccessIndirectionChain
	{
	public:
		unsigned char                                              Property[0x20];                                          // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		int32_t                                                    IndirectionStartIndex;                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    IndirectionEndIndex;                                     // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    eventId;                                                 // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8CP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessIndirection
	 * Size -> 0x0040
	 */
	struct FPropertyAccessIndirection
	{
	public:
		unsigned char                                              ArrayProperty[0x20];                                     // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
		class UFunction*                                           Function;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ReturnBufferSize;                                        // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ReturnBufferAlignment;                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ArrayIndex;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   Offset;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessObjectType                                  ObjectType;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPropertyAccessIndirectionType                             Type;                                                    // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2QUZ[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PropertyAccess.PropertyAccessLibrary
	 * Size -> 0x00C8
	 */
	struct FPropertyAccessLibrary
	{
	public:
		TArray<struct FPropertyAccessSegment>                      PathSegments;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessPath>                         SrcPaths;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessPath>                         DestPaths;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FPropertyAccessCopyBatch                            CopyBatches[0x4];                                        // 0x0030(0x0040) NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirectionChain>             SrcAccesses;                                             // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirectionChain>             DestAccesses;                                            // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FPropertyAccessIndirection>                  Indirections;                                            // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            EventAccessIndices;                                      // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YWSI[0x18];                                  // 0x00B0(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
