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
	 * Class Overlay.Overlays
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOverlays : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Overlay.BasicOverlays
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBasicOverlays : public UOverlays
	{
	public:
		TArray<struct FOverlayItem>                                Overlays;                                                // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Overlay.LocalizedOverlays
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULocalizedOverlays : public UOverlays
	{
	public:
		class UBasicOverlays*                                      DefaultOverlays;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UBasicOverlays*>                 LocaleToOverlaysMap;                                     // 0x0030(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
