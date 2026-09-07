// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape_on_Step_DemoCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEscape_on_Step_DemoCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoCameraManager();
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Escape_on_Step_Demo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEscape_on_Step_DemoCameraManager ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager;
UClass* AEscape_on_Step_DemoCameraManager::GetPrivateStaticClass()
{
	using TClass = AEscape_on_Step_DemoCameraManager;
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Escape_on_Step_DemoCameraManager"),
			Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.InnerSingleton,
			StaticRegisterNativesAEscape_on_Step_DemoCameraManager,
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
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_NoRegister()
{
	return AEscape_on_Step_DemoCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Escape_on_Step_DemoCameraManager.h" },
		{ "ModuleRelativePath", "Escape_on_Step_DemoCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AEscape_on_Step_DemoCameraManager constinit property declarations ********
// ********** End Class AEscape_on_Step_DemoCameraManager constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscape_on_Step_DemoCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics
UObject* (*const Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Escape_on_Step_Demo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::ClassParams = {
	&AEscape_on_Step_DemoCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::Class_MetaDataParams)
};
void AEscape_on_Step_DemoCameraManager::StaticRegisterNativesAEscape_on_Step_DemoCameraManager()
{
}
UClass* Z_Construct_UClass_AEscape_on_Step_DemoCameraManager()
{
	if (!Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.OuterSingleton, Z_Construct_UClass_AEscape_on_Step_DemoCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEscape_on_Step_DemoCameraManager);
AEscape_on_Step_DemoCameraManager::~AEscape_on_Step_DemoCameraManager() {}
// ********** End Class AEscape_on_Step_DemoCameraManager ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCameraManager_h__Script_Escape_on_Step_Demo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEscape_on_Step_DemoCameraManager, AEscape_on_Step_DemoCameraManager::StaticClass, TEXT("AEscape_on_Step_DemoCameraManager"), &Z_Registration_Info_UClass_AEscape_on_Step_DemoCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscape_on_Step_DemoCameraManager), 2467306986U) },
	};
}; // Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCameraManager_h__Script_Escape_on_Step_Demo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCameraManager_h__Script_Escape_on_Step_Demo_3199505490{
	TEXT("/Script/Escape_on_Step_Demo"),
	Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCameraManager_h__Script_Escape_on_Step_Demo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Escape_on_Step_DemoCameraManager_h__Script_Escape_on_Step_Demo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
