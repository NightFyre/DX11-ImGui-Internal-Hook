/**
 * Name: RaidGame
 * Version: 1
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
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueVector2D");
		
		URigVM_SetParameterValueVector2D_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueVector");
		
		URigVM_SetParameterValueVector_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueTransform");
		
		URigVM_SetParameterValueTransform_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueString");
		
		URigVM_SetParameterValueString_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueQuat");
		
		URigVM_SetParameterValueQuat_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueName");
		
		URigVM_SetParameterValueName_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueInt(const class FName& InParameterName, int32_t InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueInt");
		
		URigVM_SetParameterValueInt_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueFloat(const class FName& InParameterName, float InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueFloat");
		
		URigVM_SetParameterValueFloat_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.SetParameterValueBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigVM::SetParameterValueBool(const class FName& InParameterName, bool InValue, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueBool");
		
		URigVM_SetParameterValueBool_Params params {};
		params.InParameterName = InParameterName;
		params.InValue = InValue;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetRigVMFunctionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFunctionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URigVM::GetRigVMFunctionName(int32_t InFunctionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetRigVMFunctionName");
		
		URigVM_GetRigVMFunctionName_Params params {};
		params.InFunctionIndex = InFunctionIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D URigVM::GetParameterValueVector2D(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueVector2D");
		
		URigVM_GetParameterValueVector2D_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URigVM::GetParameterValueVector(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueVector");
		
		URigVM_GetParameterValueVector_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigVM::GetParameterValueTransform(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueTransform");
		
		URigVM_GetParameterValueTransform_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString URigVM::GetParameterValueString(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueString");
		
		URigVM_GetParameterValueString_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueQuat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat URigVM::GetParameterValueQuat(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueQuat");
		
		URigVM_GetParameterValueQuat_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URigVM::GetParameterValueName(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueName");
		
		URigVM_GetParameterValueName_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigVM::GetParameterValueInt(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueInt");
		
		URigVM_GetParameterValueInt_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigVM::GetParameterValueFloat(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueFloat");
		
		URigVM_GetParameterValueFloat_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterValueBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InArrayIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigVM::GetParameterValueBool(const class FName& InParameterName, int32_t InArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueBool");
		
		URigVM_GetParameterValueBool_Params params {};
		params.InParameterName = InParameterName;
		params.InArrayIndex = InArrayIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.GetParameterArraySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InParameterName                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigVM::GetParameterArraySize(const class FName& InParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterArraySize");
		
		URigVM_GetParameterArraySize_Params params {};
		params.InParameterName = InParameterName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InEntryName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigVM::Execute(const class FName& InEntryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.Execute");
		
		URigVM_Execute_Params params {};
		params.InEntryName = InEntryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RigVM.RigVM.AddRigVMFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScriptStruct*                               InRigVMStruct                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMethodName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RigVM.RigVM.AddRigVMFunction");
		
		URigVM_AddRigVMFunction_Params params {};
		params.InRigVMStruct = InRigVMStruct;
		params.InMethodName = InMethodName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigVM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigVM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RigVM.RigVM");
		return ptr;
	}

}


