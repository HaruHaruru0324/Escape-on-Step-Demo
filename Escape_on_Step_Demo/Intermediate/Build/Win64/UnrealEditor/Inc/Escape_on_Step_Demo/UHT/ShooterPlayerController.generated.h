// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/ShooterPlayerController.h"

#ifdef ESCAPE_ON_STEP_DEMO_ShooterPlayerController_generated_h
#error "ShooterPlayerController.generated.h already included, missing '#pragma once' in ShooterPlayerController.h"
#endif
#define ESCAPE_ON_STEP_DEMO_ShooterPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class AShooterPlayerController *************************************************
#define FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDamaged); \
	DECLARE_FUNCTION(execOnBulletCountUpdated); \
	DECLARE_FUNCTION(execOnPawnDestroyed);


struct Z_Construct_UClass_AShooterPlayerController_Statics;
ESCAPE_ON_STEP_DEMO_API UClass* Z_Construct_UClass_AShooterPlayerController_NoRegister();

#define FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct ::Z_Construct_UClass_AShooterPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPE_ON_STEP_DEMO_API UClass* ::Z_Construct_UClass_AShooterPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escape_on_Step_Demo"), Z_Construct_UClass_AShooterPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterPlayerController(AShooterPlayerController&&) = delete; \
	AShooterPlayerController(const AShooterPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController) \
	NO_API virtual ~AShooterPlayerController();


#define FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_18_PROLOG
#define FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterPlayerController;

// ********** End Class AShooterPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID__team_Escape_on_Step_Demo_Escape_on_Step_Demo_Source_Escape_on_Step_Demo_Variant_Shooter_ShooterPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
