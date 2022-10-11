// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonDemo/DungeonDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonDemoGameMode() {}
// Cross Module References
	DUNGEONDEMO_API UClass* Z_Construct_UClass_ADungeonDemoGameMode_NoRegister();
	DUNGEONDEMO_API UClass* Z_Construct_UClass_ADungeonDemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonDemo();
// End Cross Module References
	void ADungeonDemoGameMode::StaticRegisterNativesADungeonDemoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonDemoGameMode);
	UClass* Z_Construct_UClass_ADungeonDemoGameMode_NoRegister()
	{
		return ADungeonDemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonDemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonDemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonDemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonDemoGameMode.h" },
		{ "ModuleRelativePath", "DungeonDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonDemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonDemoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonDemoGameMode_Statics::ClassParams = {
		&ADungeonDemoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonDemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonDemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonDemoGameMode()
	{
		if (!Z_Registration_Info_UClass_ADungeonDemoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonDemoGameMode.OuterSingleton, Z_Construct_UClass_ADungeonDemoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADungeonDemoGameMode.OuterSingleton;
	}
	template<> DUNGEONDEMO_API UClass* StaticClass<ADungeonDemoGameMode>()
	{
		return ADungeonDemoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonDemoGameMode);
	struct Z_CompiledInDeferFile_FID_DungeonDemo_Source_DungeonDemo_DungeonDemoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonDemo_Source_DungeonDemo_DungeonDemoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonDemoGameMode, ADungeonDemoGameMode::StaticClass, TEXT("ADungeonDemoGameMode"), &Z_Registration_Info_UClass_ADungeonDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonDemoGameMode), 1302888820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonDemo_Source_DungeonDemo_DungeonDemoGameMode_h_1759033077(TEXT("/Script/DungeonDemo"),
		Z_CompiledInDeferFile_FID_DungeonDemo_Source_DungeonDemo_DungeonDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonDemo_Source_DungeonDemo_DungeonDemoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
