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
	 * Class WebBrowserWidget.WebBrowser
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UWebBrowser : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnUrlChanged;                                            // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeforePopup;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              InitialURL;                                              // 0x0128(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSupportsTransparency;                                   // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_51B2[0x17];                                  // 0x0139(0x0017) MISSED OFFSET (PADDING)

	public:
		void OnUrlChanged__DelegateSignature(const class FText& Text);
		void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
		void LoadURL(const class FString& NewURL);
		void LoadString(const class FString& Contents, const class FString& DummyURL);
		class FString GetURL();
		class FText GetTitleText();
		void ExecuteJavaScript(const class FString& ScriptText);
		static UClass* StaticClass();
	};

	/**
	 * Class WebBrowserWidget.WebBrowserAssetManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UWebBrowserAssetManager : public UObject
	{
	public:
		unsigned char                                              DefaultMaterial[0x28];                                   // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WebBrowserWidget.WebBrowserAssetManager.DefaultMaterial
		unsigned char                                              UnknownData_F60C[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
