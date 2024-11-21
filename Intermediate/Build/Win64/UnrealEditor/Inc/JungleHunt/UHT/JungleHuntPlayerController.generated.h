// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JungleHuntPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUNGLEHUNT_JungleHuntPlayerController_generated_h
#error "JungleHuntPlayerController.generated.h already included, missing '#pragma once' in JungleHuntPlayerController.h"
#endif
#define JUNGLEHUNT_JungleHuntPlayerController_generated_h

#define FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJungleHuntPlayerController(); \
	friend struct Z_Construct_UClass_AJungleHuntPlayerController_Statics; \
public: \
	DECLARE_CLASS(AJungleHuntPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JungleHunt"), NO_API) \
	DECLARE_SERIALIZER(AJungleHuntPlayerController)


#define FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJungleHuntPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJungleHuntPlayerController(AJungleHuntPlayerController&&); \
	AJungleHuntPlayerController(const AJungleHuntPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJungleHuntPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJungleHuntPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJungleHuntPlayerController) \
	NO_API virtual ~AJungleHuntPlayerController();


#define FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_14_PROLOG
#define FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUNGLEHUNT_API UClass* StaticClass<class AJungleHuntPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JungleHunt_Source_JungleHunt_JungleHuntPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
