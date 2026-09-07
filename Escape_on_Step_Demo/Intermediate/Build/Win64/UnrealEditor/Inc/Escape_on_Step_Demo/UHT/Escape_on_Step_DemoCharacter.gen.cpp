// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_on_Step_DemoCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEscape_on_Step_DemoCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoCharacter();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_on_Step_Demo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEscape_on_Step_DemoCharacter Function DoAim *****************************
struct Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics
{
	struct Escape_on_Step_DemoCharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoAim constinit property declarations *********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoAim constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoAim Property Definitions ********************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Escape_on_Step_DemoCharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Escape_on_Step_DemoCharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::PropPointers) < 2048);
// ********** End Function DoAim Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEscape_on_Step_DemoCharacter, nullptr, "DoAim", 	Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::Escape_on_Step_DemoCharacter_eventDoAim_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::Escape_on_Step_DemoCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEscape_on_Step_DemoCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AEscape_on_Step_DemoCharacter Function DoAim *******************************

// ********** Begin Class AEscape_on_Step_DemoCharacter Function DoJumpEnd *************************
struct Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump end inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump end inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoJumpEnd constinit property declarations *****************************
// ********** End Function DoJumpEnd constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEscape_on_Step_DemoCharacter, nullptr, "DoJumpEnd", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEscape_on_Step_DemoCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AEscape_on_Step_DemoCharacter Function DoJumpEnd ***************************

// ********** Begin Class AEscape_on_Step_DemoCharacter Function DoJumpStart ***********************
struct Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoJumpStart constinit property declarations ***************************
// ********** End Function DoJumpStart constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEscape_on_Step_DemoCharacter, nullptr, "DoJumpStart", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEscape_on_Step_DemoCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AEscape_on_Step_DemoCharacter Function DoJumpStart *************************

// ********** Begin Class AEscape_on_Step_DemoCharacter Function DoMove ****************************
struct Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics
{
	struct Escape_on_Step_DemoCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DoMove constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DoMove constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DoMove Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Escape_on_Step_DemoCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Escape_on_Step_DemoCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::PropPointers) < 2048);
// ********** End Function DoMove Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEscape_on_Step_DemoCharacter, nullptr, "DoMove", 	Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::Escape_on_Step_DemoCharacter_eventDoMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::Escape_on_Step_DemoCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEscape_on_Step_DemoCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AEscape_on_Step_DemoCharacter Function DoMove ******************************

// ********** Begin Class AEscape_on_Step_DemoCharacter ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter;
UClass* AEscape_on_Step_DemoCharacter::GetPrivateStaticClass()
{
	using TClass = AEscape_on_Step_DemoCharacter;
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Escape_on_Step_DemoCharacter"),
			Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.InnerSingleton,
			StaticRegisterNativesAEscape_on_Step_DemoCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoCharacter_NoRegister()
{
	return AEscape_on_Step_DemoCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Escape_on_Step_DemoCharacter.h" },
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Escape_on_Step_DemoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AEscape_on_Step_DemoCharacter constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AEscape_on_Step_DemoCharacter constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DoAim"), .Pointer = &AEscape_on_Step_DemoCharacter::execDoAim },
		{ .NameUTF8 = UTF8TEXT("DoJumpEnd"), .Pointer = &AEscape_on_Step_DemoCharacter::execDoJumpEnd },
		{ .NameUTF8 = UTF8TEXT("DoJumpStart"), .Pointer = &AEscape_on_Step_DemoCharacter::execDoJumpStart },
		{ .NameUTF8 = UTF8TEXT("DoMove"), .Pointer = &AEscape_on_Step_DemoCharacter::execDoMove },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoAim, "DoAim" }, // 3733335348
		{ &Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpEnd, "DoJumpEnd" }, // 4265683393
		{ &Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoJumpStart, "DoJumpStart" }, // 2938212346
		{ &Z_Construct_UFunction_AEscape_on_Step_DemoCharacter_DoMove, "DoMove" }, // 2094022538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscape_on_Step_DemoCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics

// ********** Begin Class AEscape_on_Step_DemoCharacter Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEscape_on_Step_DemoCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::NewProp_MouseLookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::PropPointers) < 2048);
// ********** End Class AEscape_on_Step_DemoCharacter Property Definitions *************************
UObject* (*const Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_on_Step_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::ClassParams = {
	&AEscape_on_Step_DemoCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::Class_MetaDataParams)
};
void AEscape_on_Step_DemoCharacter::StaticRegisterNativesAEscape_on_Step_DemoCharacter()
{
	UClass* Class = AEscape_on_Step_DemoCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoCharacter()
{
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.OuterSingleton, Z_Construct_UClass_AEscape_on_Step_DemoCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEscape_on_Step_DemoCharacter);
AEscape_on_Step_DemoCharacter::~AEscape_on_Step_DemoCharacter() {}
// ********** End Class AEscape_on_Step_DemoCharacter **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCharacter_h__Script_Escape_on_Step_Demo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEscape_on_Step_DemoCharacter, AEscape_on_Step_DemoCharacter::StaticClass, TEXT("AEscape_on_Step_DemoCharacter"), &Z_Registration_Info_UClass_AEscape_on_Step_DemoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscape_on_Step_DemoCharacter), 4197240621U) },
	};
}; // Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCharacter_h__Script_Escape_on_Step_Demo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCharacter_h__Script_Escape_on_Step_Demo_3917844622{
	TEXT("/Script/Escape_on_Step_Demo"),
	Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCharacter_h__Script_Escape_on_Step_Demo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCharacter_h__Script_Escape_on_Step_Demo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
