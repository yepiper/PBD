// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PBD_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define PBD_MyGameModeBase_generated_h

#define FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PBD"), NO_API) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyGameModeBase(AMyGameModeBase&&); \
	AMyGameModeBase(const AMyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	NO_API virtual ~AMyGameModeBase();


#define FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_12_PROLOG
#define FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PBD_API UClass* StaticClass<class AMyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_PBD_PBD_Source_PBD_Public_MyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
