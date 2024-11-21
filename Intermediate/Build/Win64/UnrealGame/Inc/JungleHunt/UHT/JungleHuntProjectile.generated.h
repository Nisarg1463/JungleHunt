// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JungleHuntProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JUNGLEHUNT_JungleHuntProjectile_generated_h
#error "JungleHuntProjectile.generated.h already included, missing '#pragma once' in JungleHuntProjectile.h"
#endif
#define JUNGLEHUNT_JungleHuntProjectile_generated_h

#define FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJungleHuntProjectile(); \
	friend struct Z_Construct_UClass_AJungleHuntProjectile_Statics; \
public: \
	DECLARE_CLASS(AJungleHuntProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JungleHunt"), NO_API) \
	DECLARE_SERIALIZER(AJungleHuntProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJungleHuntProjectile(AJungleHuntProjectile&&); \
	AJungleHuntProjectile(const AJungleHuntProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJungleHuntProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJungleHuntProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJungleHuntProjectile) \
	NO_API virtual ~AJungleHuntProjectile();


#define FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_12_PROLOG
#define FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUNGLEHUNT_API UClass* StaticClass<class AJungleHuntProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JungleHunt_Source_JungleHunt_JungleHuntProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
