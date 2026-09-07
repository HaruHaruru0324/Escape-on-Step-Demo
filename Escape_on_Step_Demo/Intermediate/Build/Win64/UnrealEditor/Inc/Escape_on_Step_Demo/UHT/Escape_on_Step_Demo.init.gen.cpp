// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscape_on_Step_Demo_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ESCAPE_ON_STEP_DEMO_API UFunction* Z_Construct_UDelegateFunction_Escape_on_Step_Demo_BulletCountUpdatedDelegate__DelegateSignature();
	ESCAPE_ON_STEP_DEMO_API UFunction* Z_Construct_UDelegateFunction_Escape_on_Step_Demo_DamagedDelegate__DelegateSignature();
	ESCAPE_ON_STEP_DEMO_API UFunction* Z_Construct_UDelegateFunction_Escape_on_Step_Demo_PawnDeathDelegate__DelegateSignature();
	ESCAPE_ON_STEP_DEMO_API UFunction* Z_Construct_UDelegateFunction_Escape_on_Step_Demo_SprintStateChangedDelegate__DelegateSignature();
	ESCAPE_ON_STEP_DEMO_API UFunction* Z_Construct_UDelegateFunction_Escape_on_Step_Demo_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Escape_on_Step_Demo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Escape_on_Step_Demo()
	{
		if (!Z_Registration_Info_UPackage__Script_Escape_on_Step_Demo.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Escape_on_Step_Demo_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Escape_on_Step_Demo_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Escape_on_Step_Demo_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Escape_on_Step_Demo_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Escape_on_Step_Demo_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Escape_on_Step_Demo",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xECA2E86D,
			0xFD7B8170,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Escape_on_Step_Demo.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Escape_on_Step_Demo.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Escape_on_Step_Demo(Z_Construct_UPackage__Script_Escape_on_Step_Demo, TEXT("/Script/Escape_on_Step_Demo"), Z_Registration_Info_UPackage__Script_Escape_on_Step_Demo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xECA2E86D, 0xFD7B8170));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
