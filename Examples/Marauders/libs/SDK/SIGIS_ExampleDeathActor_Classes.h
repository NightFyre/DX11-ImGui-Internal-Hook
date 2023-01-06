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
	 * BlueprintGeneratedClass SIGIS_ExampleDeathActor.SIGIS_ExampleDeathActor_C
	 * Size -> 0x001C (FullSize[0x064C] - InheritedSize[0x0630])
	 */
	class ASIGIS_ExampleDeathActor_C : public ASIGISDeathActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USoundBase*                                          Sound_ForOpening;                                        // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UseVolume;                                               // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WhenUseAiNoise_Loudness;                                 // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WhenUseAiNoise_MaxRange;                                 // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActiveCalled();
		void DeActiveCalled();
		void ExecuteUbergraph_SIGIS_ExampleDeathActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
