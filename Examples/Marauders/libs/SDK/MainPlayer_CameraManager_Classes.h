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
	 * BlueprintGeneratedClass MainPlayer_CameraManager.MainPlayer_CameraManager_C
	 * Size -> 0x0010 (FullSize[0x2850] - InheritedSize[0x2840])
	 */
	class AMainPlayer_CameraManager_C : public ARaidPlayerCameraManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2840(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UCameraShakeBase*                                    CurrentSprintCamShake;                                   // 0x2848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CameraShake_StartSprinting();
		void CameraShake_StopSprinting();
		void ExecuteUbergraph_MainPlayer_CameraManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
