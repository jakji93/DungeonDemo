// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONDEMO_DungeonDemoCharacter_generated_h
#error "DungeonDemoCharacter.generated.h already included, missing '#pragma once' in DungeonDemoCharacter.h"
#endif
#define DUNGEONDEMO_DungeonDemoCharacter_generated_h

#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_SPARSE_DATA
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_RPC_WRAPPERS
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonDemoCharacter(); \
	friend struct Z_Construct_UClass_ADungeonDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDemo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDemoCharacter)


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADungeonDemoCharacter(); \
	friend struct Z_Construct_UClass_ADungeonDemoCharacter_Statics; \
public: \
	DECLARE_CLASS(ADungeonDemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonDemo"), NO_API) \
	DECLARE_SERIALIZER(ADungeonDemoCharacter)


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADungeonDemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeonDemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDemoCharacter(ADungeonDemoCharacter&&); \
	NO_API ADungeonDemoCharacter(const ADungeonDemoCharacter&); \
public:


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADungeonDemoCharacter(ADungeonDemoCharacter&&); \
	NO_API ADungeonDemoCharacter(const ADungeonDemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonDemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonDemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonDemoCharacter)


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_20_PROLOG
#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_SPARSE_DATA \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_RPC_WRAPPERS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_INCLASS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_SPARSE_DATA \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONDEMO_API UClass* StaticClass<class ADungeonDemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonDemo_Source_DungeonDemo_DungeonDemoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
