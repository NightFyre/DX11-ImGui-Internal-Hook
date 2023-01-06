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
	 * BlueprintGeneratedClass MM_HangarShipViewer.MM_HangarShipViewer_C
	 * Size -> 0x00B2 (FullSize[0x0312] - InheritedSize[0x0260])
	 */
	class AMM_HangarShipViewer_C : public ASIGISFrigateRenderActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAudioComponent*                                     Audio_EngineLoop;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_HangarAmb;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Skel_Crewman;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm_Attachment;                                    // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm_Main;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_WeldGun;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera_Attachments;                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera_Main;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       isAllowedToBeRotatedByPlayer;                            // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftMouseClicked;                                        // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A4MC[0x2];                                   // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedAsAPercentage;                                      // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NormalTargetArmLength;                                   // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomAmount;                                              // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9SOF[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          AttachmentSocketTransformOffset;                         // 0x02C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Attachment_BoomLength;                                   // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Attachment_ZoomInByX;                                    // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetBoomLength_AttachmentCam;                          // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RMNZ[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AAmbientSound*>                               ArrayOfSoundsToTurnOnOff;                                // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       Player_Is_in_the_Hangar;                                 // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasPlayingSoundsPrev;                                    // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Set_PlayerInHangarNow(bool PlayerIsInTheHangar);
		void AttachingRelativeTransformChange(EShipAttachmentSlot WhichShipPart, const struct FTransform& AttachOffsetTransform);
		void Ship_SetBoomLengthAttachmentCamera(bool isInstantChange, float TargetArmLength, float ZoomXamount);
		void Ship_Switch_to_Ship_Attachment_Slot(EShipAttachmentSlot WhichShipAttachmentSlot, const class FName& CurrentShipItemDTName, bool DoAZoom);
		void Set_PlayerAbleToRotate(bool isallowed_to_rotate);
		void Switch_Ship(const class FName& ShipName);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E(class UClass* Loaded);
		void SetWhichCameraView(bool isAttachmentView);
		void SwitchShipNew_DoNotUse(const class FName& Switch_Ship);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void Ship_UpdateShipRenderActor(const class FName& Switch_Ship, bool OnlyUpdateBaseTransform, bool IsStarterShip);
		void ExecuteUbergraph_MM_HangarShipViewer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
