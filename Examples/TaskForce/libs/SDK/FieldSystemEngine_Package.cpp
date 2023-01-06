/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFieldSystemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFieldSystemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8360
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFieldSystemComponent::ResetFieldSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");
		
		UFieldSystemComponent_ResetFieldSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E81B0
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");
		
		UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params {};
		params.Enabled = Enabled;
		params.Position = Position;
		params.Direction = Direction;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8000
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32_t Iterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");
		
		UFieldSystemComponent_ApplyStrainField_Params params {};
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E7EE0
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");
		
		UFieldSystemComponent_ApplyStayDynamicField_Params params {};
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E7D70
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");
		
		UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params {};
		params.Enabled = Enabled;
		params.Position = Position;
		params.Radius = Radius;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E7C50
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");
		
		UFieldSystemComponent_ApplyRadialForce_Params params {};
		params.Enabled = Enabled;
		params.Position = Position;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E7B00
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");
		
		UFieldSystemComponent_ApplyPhysicsField_Params params {};
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E79E0
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");
		
		UFieldSystemComponent_ApplyLinearForce_Params params {};
		params.Enabled = Enabled;
		params.Direction = Direction;
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E7890
	 * 		Name   -> Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldPhysicsType                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldSystemMetaData*                        MetaData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFieldSystemComponent::AddFieldCommand(bool Enabled, EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");
		
		UFieldSystemComponent_AddFieldCommand_Params params {};
		params.Enabled = Enabled;
		params.Target = Target;
		params.MetaData = MetaData;
		params.Field = Field;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E86B0
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Iterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");
		
		UFieldSystemMetaDataIteration_SetMetaDataIteration_Params params {};
		params.Iterations = Iterations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaDataIteration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaDataIteration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8740
	 * 		Name   -> Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EFieldResolutionType                               ResolutionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");
		
		UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params {};
		params.ResolutionType = ResolutionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldSystemMetaDataProcessingResolution.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldSystemMetaDataProcessingResolution::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFieldNodeVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFieldNodeVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E86B0
	 * 		Name   -> Function FieldSystemEngine.UniformInteger.SetUniformInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");
		
		UUniformInteger_SetUniformInteger_Params params {};
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformInteger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformInteger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8F40
	 * 		Name   -> Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ExteriorValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetMaskConditionType                              SetMaskConditionIn                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");
		
		URadialIntMask_SetRadialIntMask_Params params {};
		params.Radius = Radius;
		params.Position = Position;
		params.InteriorValue = InteriorValue;
		params.ExteriorValue = ExteriorValue;
		params.SetMaskConditionIn = SetMaskConditionIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialIntMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialIntMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E91E0
	 * 		Name   -> Function FieldSystemEngine.UniformScalar.SetUniformScalar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");
		
		UUniformScalar_SetUniformScalar_Params params {};
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformScalar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8D20
	 * 		Name   -> Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, EFieldFalloffType Falloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");
		
		URadialFalloff_SetRadialFalloff_Params params {};
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Radius = Radius;
		params.Position = Position;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialFalloff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8AA0
	 * 		Name   -> Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, EFieldFalloffType Falloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");
		
		UPlaneFalloff_SetPlaneFalloff_Params params {};
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Distance = Distance;
		params.Position = Position;
		params.Normal = Normal;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneFalloff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8380
	 * 		Name   -> Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFieldFalloffType                                  Falloff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, EFieldFalloffType Falloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");
		
		UBoxFalloff_SetBoxFalloff_Params params {};
		params.Magnitude = Magnitude;
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Default = Default;
		params.Transform = Transform;
		params.Falloff = Falloff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoxFalloff.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoxFalloff::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E87D0
	 * 		Name   -> Function FieldSystemEngine.NoiseField.SetNoiseField
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");
		
		UNoiseField_SetNoiseField_Params params {};
		params.MinRange = MinRange;
		params.MaxRange = MaxRange;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoiseField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoiseField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9100
	 * 		Name   -> Function FieldSystemEngine.UniformVector.SetUniformVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUniformVector* UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");
		
		UUniformVector_SetUniformVector_Params params {};
		params.Magnitude = Magnitude;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniformVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniformVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9100
	 * 		Name   -> Function FieldSystemEngine.RadialVector.SetRadialVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URadialVector* URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");
		
		URadialVector_SetRadialVector_Params params {};
		params.Magnitude = Magnitude;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E91E0
	 * 		Name   -> Function FieldSystemEngine.RandomVector.SetRandomVector
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URandomVector* URandomVector::SetRandomVector(float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");
		
		URandomVector_SetRandomVector_Params params {};
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomVector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomVector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E8950
	 * 		Name   -> Function FieldSystemEngine.OperatorField.SetOperatorField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              RightField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              LeftField                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldOperationType                                Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOperatorField* UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, EFieldOperationType Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");
		
		UOperatorField_SetOperatorField_Params params {};
		params.Magnitude = Magnitude;
		params.RightField = RightField;
		params.LeftField = LeftField;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOperatorField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOperatorField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E92A0
	 * 		Name   -> Function FieldSystemEngine.ToIntegerField.SetToIntegerField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UFieldNodeFloat*                             FloatField                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");
		
		UToIntegerField_SetToIntegerField_Params params {};
		params.FloatField = FloatField;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToIntegerField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToIntegerField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E92A0
	 * 		Name   -> Function FieldSystemEngine.ToFloatField.SetToFloatField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UFieldNodeInt*                               IntegerField                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");
		
		UToFloatField_SetToFloatField_Params params {};
		params.IntegerField = IntegerField;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToFloatField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToFloatField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E85B0
	 * 		Name   -> Function FieldSystemEngine.CullingField.SetCullingField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UFieldNodeBase*                              Culling                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFieldNodeBase*                              Field                                                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFieldCullingOperationType                         Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, EFieldCullingOperationType Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");
		
		UCullingField_SetCullingField_Params params {};
		params.Culling = Culling;
		params.Field = Field;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCullingField.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCullingField::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x011E9270
	 * 		Name   -> Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");
		
		UReturnResultsTerminal_SetReturnResultsTerminal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReturnResultsTerminal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReturnResultsTerminal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}

}


