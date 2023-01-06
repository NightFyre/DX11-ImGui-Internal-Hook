/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Static Fields
	// --------------------------------------------------
	FNamePool*                                                  FName::GNames = nullptr;                                 // 0x0000(0x0000)

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	/**
	 * Initialize SDK
	 */
	bool InitSdk(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset)
	{
		auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
		if (!mBaseAddress)
			return false;
		
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
		FName::GNames = reinterpret_cast<CG::FNamePool*>(mBaseAddress + gNamesOffset);
		UWorld::GWorld = reinterpret_cast<CG::UWorld**>(mBaseAddress + gWorldOffset);
		
		return true;
	}

	/**
	 * Initialize SDK
	 */
	bool InitSdk()
	{
		return InitSdk(L"RaidGame-Win64-Shipping.exe", 0x5168138, 0x514FB80, 0x529D660);
	}

	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.FString
	 * 		Flags  -> ()
	 */
	FString::FString()
	{

	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.FString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const wchar_t*                                     other
	 */
	FString::FString(const wchar_t* other)
	{
		_max = _count = *other ? static_cast<int32_t>(std::wcslen(other)) + 1 : 0;
		if (_count)
			_data = const_cast<wchar_t*>(other);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.wc_str
	 * 		Flags  -> ()
	 */
	const wchar_t* FString::wc_str() const
	{
		return _data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.c_str
	 * 		Flags  -> ()
	 */
	const char* FString::c_str() const
	{
		return (const char*)_data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.IsValid
	 * 		Flags  -> ()
	 */
	bool FString::IsValid() const
	{
		return _data != nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.ToString
	 * 		Flags  -> ()
	 */
	std::string FString::ToString() const
	{
		size_t length = std::wcslen(_data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(_data, _data + length, '?', &str[0]);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FString.ToStringW
	 * 		Flags  -> ()
	 */
	std::wstring FString::ToStringW() const
	{
		std::wstring str(_data);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FUObjectItem.IsUnreachable
	 * 		Flags  -> ()
	 */
	bool FUObjectItem::IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FUObjectItem.IsPendingKill
	 * 		Flags  -> ()
	 */
	bool FUObjectItem::IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Count
	 * 		Flags  -> ()
	 */
	int32_t TUObjectArray::Count() const
	{
		return NumElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Max
	 * 		Flags  -> ()
	 */
	int32_t TUObjectArray::Max() const
	{
		return MaxElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index
	 */
	bool TUObjectArray::IsValidIndex(int32_t Index) const
	{
		return Index < Count() && Index >= 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetObjectPtr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index
	 */
	FUObjectItem* TUObjectArray::GetObjectPtr(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		if (!IsValidIndex(Index)) return nullptr;
		if (ChunkIndex > NumChunks) return nullptr;
		if (Index > MaxElements) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;
		return Chunk + WithinChunkIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	UObject* TUObjectArray::GetByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return (*ItemPtr).Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.GetItemByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	FUObjectItem* TUObjectArray::GetItemByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return ItemPtr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	UObject* TUObjectArray::operator[](int32_t i)
	{
		return GetByIndex(i);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	const UObject* TUObjectArray::operator[](int32_t i) const
	{
		return GetByIndex(i);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetLength
	 * 		Flags  -> ()
	 */
	int32_t FNameEntry::GetLength() const
	{
		return Header.Len;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.IsWide
	 * 		Flags  -> ()
	 */
	bool FNameEntry::IsWide() const
	{
		return Header.bIsWide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetId
	 * 		Flags  -> ()
	 */
	int32_t FNameEntry::GetId() const
	{
		return *reinterpret_cast<const uint16_t*>(&Header);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetAnsiName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetAnsiName() const
	{
		uint32_t len = GetLength();
		if (len > 1024) return "[Error: Overflow]";
		return std::string((const char*)AnsiName, len);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetWideName
	 * 		Flags  -> ()
	 */
	std::wstring FNameEntry::GetWideName() const
	{
		uint32_t len = GetLength();
		return std::wstring((const wchar_t*)WideName, len);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetName() const
	{
		return GetAnsiName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.NumBlocks
	 * 		Flags  -> ()
	 */
	int32_t FNameEntryAllocator::NumBlocks() const
	{
		return CurrentBlock + 1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.GetById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 */
	FNameEntry* FNameEntryAllocator::GetById(int32_t key) const
	{
		int block = key >> 16;
		int offset = (uint16_t)key;
		if (!IsValidIndex(key, block, offset))
			return reinterpret_cast<FNameEntry*>(Blocks[0] + 0); // "None"
		return reinterpret_cast<FNameEntry*>(Blocks[block] + ((uint64_t)offset * Stride));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 */
	bool FNameEntryAllocator::IsValidIndex(int32_t key) const
	{
		uint32_t block = key >> 16;
		uint16_t offset = key;
		return IsValidIndex(key, block, offset);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 * 		uint32_t                                           block
	 * 		uint16_t                                           offset
	 */
	bool FNameEntryAllocator::IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
	{
		return (key >= 0 && block < static_cast<uint32_t>(NumBlocks()) && offset * Stride < MaxOffset);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.GetNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uintptr_t&                                         nextFNameAddress
	 */
	FNameEntry* FNamePool::GetNext(uintptr_t& nextFNameAddress) const
	{
		static int lastBlock = 0;
		if (!nextFNameAddress)
		{
			lastBlock = 0;
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[0]);
		}
		RePlay:
		int32_t nextFNameComparisonId = MAKELONG((uint16_t)((nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock])) / 2), (uint16_t)lastBlock);
		int32_t block = nextFNameComparisonId >> 16;
		int32_t offset = (uint16_t)nextFNameComparisonId;
		int32_t offsetFromBlock = static_cast<int32_t>(nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock]));
		
		// Get entry information
		const uintptr_t entryOffset = nextFNameAddress;
		const int toAdd = 0x00 + 0x02; // HeaderOffset + HeaderSize
		const uint16_t nameHeader = static_cast<uint16_t>(entryOffset);
		int nameLength = nameHeader >> 6;
		bool isWide = (nameHeader & 1) != 0;
		if (isWide)
			nameLength += nameLength;
		
		// if odd number (odd numbers are aligned with 0x00)
		if (!isWide && nameLength % 2 != 0)
			nameLength += 1;
		
		// Block end ?
		if (offsetFromBlock + toAdd + (nameLength * 2) >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor)
		{
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[++lastBlock]);
			goto RePlay;
		}
		
		// We hit last Name in last Block
		if (lastBlock > Allocator.CurrentBlock)
			return nullptr;
		
		// Get next name address
		nextFNameAddress = entryOffset + toAdd + nameLength;
		
		// Get name
		FNameEntry* ret = Allocator.GetById(nextFNameComparisonId);
		return ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.Count
	 * 		Flags  -> ()
	 */
	int32_t FNamePool::Count() const
	{
		return AnsiCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	bool FNamePool::IsValidIndex(int32_t index) const
	{
		return Allocator.IsValidIndex(static_cast<int32_t>(index));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.GetById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            id
	 */
	FNameEntry* FNamePool::GetById(int32_t id) const
	{
		return Allocator.GetById(id);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            id
	 */
	FNameEntry* FNamePool::operator[](int32_t id) const
	{
		return GetById(id);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 */
	FName::FName()
	{
		ComparisonIndex = 0;
		Number = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            i
	 */
	FName::FName(int32_t i)
	{
		ComparisonIndex = i;
		Number = 0;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const char*                                        nameToFind
	 */
	FName::FName(const char* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				ComparisonIndex = i;
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
				#endif
				return;
			}
		}
		
		#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetAnsiName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
				#endif
				return;
			}
		}
		#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
		#endif
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.FName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		const wchar_t*                                     nameToFind
	 */
	FName::FName(const wchar_t* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				ComparisonIndex = i;
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
				#endif
				return;
			}
		}
		
		#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetWideName() == nameToFind)
			{
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
				#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
				#endif
				return;
			}
		}
		#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
		#endif
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetGlobalNames
	 * 		Flags  -> ()
	 */
	FNamePool& FName::GetGlobalNames()
	{
		return *GNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetNameA
	 * 		Flags  -> ()
	 */
	std::string FName::GetNameA() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetNameW
	 * 		Flags  -> ()
	 */
	std::wstring FName::GetNameW() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetWideName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FName.GetName
	 * 		Flags  -> ()
	 */
	std::string FName::GetName() const
	{
		return GetNameA();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetObjectPtr
	 * 		Flags  -> ()
	 */
	UObject* FScriptInterface::GetObjectPtr() const
	{
		return ObjectPointer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetObjectRef
	 * 		Flags  -> ()
	 */
	UObject*& FScriptInterface::GetObjectRef()
	{
		return ObjectPointer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FScriptInterface.GetInterface
	 * 		Flags  -> ()
	 */
	void* FScriptInterface::GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.Get
	 * 		Flags  -> ()
	 */
	wchar_t* FText::Get() const
	{
		return Data != nullptr ? Data->Name : nullptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.ToString
	 * 		Flags  -> ()
	 */
	std::string FText::ToString() const
	{
		wchar_t* name = Get();
		if (!name)
		    return "NOT FOUND";
		
		size_t length = std::wcslen(name);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(name, name + length, '?', &str[0]);
		
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FText.ToWString
	 * 		Flags  -> ()
	 */
	std::wstring FText::ToWString() const
	{
		wchar_t* name = Get();
		if (!name)
		    return L"NOT FOUND";
		
		std::wstring str(name);
		return str;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.SerialNumbersMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		FUObjectItem*                                      objectItem
	 */
	bool FWeakObjectPtr::SerialNumbersMatch(FUObjectItem* objectItem) const
	{
		return objectItem->SerialNumber == ObjectSerialNumber;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.IsValid
	 * 		Flags  -> ()
	 */
	bool FWeakObjectPtr::IsValid() const
	{
		if (ObjectSerialNumber == 0 || ObjectIndex < 0)
			return false;
		
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (!ObjectItem)
			return false;
		
		if (!SerialNumbersMatch(ObjectItem))
			return false;
		
		return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FWeakObjectPtr.Get
	 * 		Flags  -> ()
	 */
	UObject* FWeakObjectPtr::Get() const
	{
		if (!IsValid())
			return nullptr;
		
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (!ObjectItem)
			return nullptr;
		
		return ObjectItem->Object;
	}

}


