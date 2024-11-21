// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJungleHunt_init() {}
	JUNGLEHUNT_API UFunction* Z_Construct_UDelegateFunction_JungleHunt_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JungleHunt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JungleHunt()
	{
		if (!Z_Registration_Info_UPackage__Script_JungleHunt.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_JungleHunt_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JungleHunt",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC57B39AB,
				0x6CB84EA9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JungleHunt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JungleHunt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JungleHunt(Z_Construct_UPackage__Script_JungleHunt, TEXT("/Script/JungleHunt"), Z_Registration_Info_UPackage__Script_JungleHunt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC57B39AB, 0x6CB84EA9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
