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
	 * BlueprintGeneratedClass MainHUD.MainHUD_C
	 * Size -> 0x0030 (FullSize[0x0890] - InheritedSize[0x0860])
	 */
	class AMainHUD_C : public ARaidHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTexture2DDynamic*                                   MyPlayerDiscordIcon;                                     // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                MyPlayerDiscordName;                                     // 0x0878(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void HideTheInventoryExtras();
		void Get_MyDiscordNameAndImage(class FText* MyDiscordName, class UTexture2DDynamic** DiscordIconTexDynamic);
		void MenuStateChanged(EMenuState NewState);
		void BP_NoSpaceForItem();
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void PostLoginLoad();
		void ReceiveBeginPlay();
		void BP_CantScrapItemsInside();
		void BP_CantSellItemsInside();
		void ExecuteUbergraph_MainHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
