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
	 * BlueprintGeneratedClass NormalAI_Controller.NormalAI_Controller_C
	 * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
	 */
	class ANormalAI_Controller_C : public ARaidAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void OnDestroyed_Event_1(class AActor* DestroyedActor);
		void ExecuteUbergraph_NormalAI_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
