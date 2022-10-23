// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DUNGEONDEMO_DungeonDemoProjectile_generated_h
#error "DungeonDemoProjectile.generated.h already included, missing '#pragma once' in DungeonDemoProjectile.h"
#endif
#define DUNGEONDEMO_DungeonDemoProjectile_generated_h

#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_SPARSE_DATA
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonDemoProjectile(); \
	friend struct Z_Construct_UClass_ADungeonDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(ADungeonDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDemo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADungeonDemoProjectile(); \
	friend struct Z_Construct_UClass_ADungeonDemoProjectile_Statics; \
public: \
	DECLARE_CLASS(ADungeonDemoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDemo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDemoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonDemoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonDemoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDemoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDemoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDemoProjectile(ADungeonDemoProjectile&&); \
	NO_API ADungeonDemoProjectile(const ADungeonDemoProjectile&); \
public:


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDemoProjectile(ADungeonDemoProjectile&&); \
	NO_API ADungeonDemoProjectile(const ADungeonDemoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDemoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDemoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonDemoProjectile)


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_12_PROLOG
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_SPARSE_DATA \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_RPC_WRAPPERS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_INCLASS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_SPARSE_DATA \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONDEMO_API UClass* StaticClass<class ADungeonDemoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonDemo_Source_DungeonDemo_DungeonDemoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
