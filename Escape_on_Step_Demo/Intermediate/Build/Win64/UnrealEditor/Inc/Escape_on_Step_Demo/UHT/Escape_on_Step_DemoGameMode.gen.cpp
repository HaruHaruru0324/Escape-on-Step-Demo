// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_on_Step_DemoGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEscape_on_Step_DemoGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoGameMode();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_on_Step_Demo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEscape_on_Step_DemoGameMode *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode;
UClass* AEscape_on_Step_DemoGameMode::GetPrivateStaticClass()
{
	using TClass = AEscape_on_Step_DemoGameMode;
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Escape_on_Step_DemoGameMode"),
			Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.InnerSingleton,
			StaticRegisterNativesAEscape_on_Step_DemoGameMode,
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
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoGameMode_NoRegister()
{
	return AEscape_on_Step_DemoGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Escape_on_Step_DemoGameMode.h" },
		{ "ModuleRelativePath", "Escape_on_Step_DemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AEscape_on_Step_DemoGameMode constinit property declarations *************
// ********** End Class AEscape_on_Step_DemoGameMode constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscape_on_Step_DemoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics
UObject* (*const Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_on_Step_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::ClassParams = {
	&AEscape_on_Step_DemoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::Class_MetaDataParams)
};
void AEscape_on_Step_DemoGameMode::StaticRegisterNativesAEscape_on_Step_DemoGameMode()
{
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoGameMode()
{
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.OuterSingleton, Z_Construct_UClass_AEscape_on_Step_DemoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEscape_on_Step_DemoGameMode);
AEscape_on_Step_DemoGameMode::~AEscape_on_Step_DemoGameMode() {}
// ********** End Class AEscape_on_Step_DemoGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoGameMode_h__Script_Escape_on_Step_Demo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEscape_on_Step_DemoGameMode, AEscape_on_Step_DemoGameMode::StaticClass, TEXT("AEscape_on_Step_DemoGameMode"), &Z_Registration_Info_UClass_AEscape_on_Step_DemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscape_on_Step_DemoGameMode), 4086336022U) },
	};
}; // Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoGameMode_h__Script_Escape_on_Step_Demo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoGameMode_h__Script_Escape_on_Step_Demo_3021531186{
	TEXT("/Script/Escape_on_Step_Demo"),
	Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoGameMode_h__Script_Escape_on_Step_Demo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoGameMode_h__Script_Escape_on_Step_Demo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
