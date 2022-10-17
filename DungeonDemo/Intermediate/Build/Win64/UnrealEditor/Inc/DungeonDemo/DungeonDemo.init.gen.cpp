// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDemo_init() {}
	DUNGEONDEMO_API UFunction* Z_Construct_UDelegateFunction_DungeonDemo_OnPickUp__DelegateSignature();
	DUNGEONDEMO_API UFunction* Z_Construct_UDelegateFunction_DungeonDemo_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonDemo.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonDemo_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonDemo_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonDemo",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x92492659,
				0x49009A97,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonDemo(Z_Construct_UPackage__Script_DungeonDemo, TEXT("/Script/DungeonDemo"), Z_Registration_Info_UPackage__Script_DungeonDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x92492659, 0x49009A97));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
