// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_ControladorNave_generated_h
#error "ControladorNave.generated.h already included, missing '#pragma once' in ControladorNave.h"
#endif
#define STARFIGHTER_ControladorNave_generated_h

#define StarFighter_Source_StarFighter_ControladorNave_h_14_SPARSE_DATA
#define StarFighter_Source_StarFighter_ControladorNave_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define StarFighter_Source_StarFighter_ControladorNave_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define StarFighter_Source_StarFighter_ControladorNave_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControladorNave(); \
	friend struct Z_Construct_UClass_AControladorNave_Statics; \
public: \
	DECLARE_CLASS(AControladorNave, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AControladorNave)


#define StarFighter_Source_StarFighter_ControladorNave_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAControladorNave(); \
	friend struct Z_Construct_UClass_AControladorNave_Statics; \
public: \
	DECLARE_CLASS(AControladorNave, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AControladorNave)


#define StarFighter_Source_StarFighter_ControladorNave_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControladorNave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControladorNave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControladorNave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControladorNave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControladorNave(AControladorNave&&); \
	NO_API AControladorNave(const AControladorNave&); \
public:


#define StarFighter_Source_StarFighter_ControladorNave_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControladorNave(AControladorNave&&); \
	NO_API AControladorNave(const AControladorNave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControladorNave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControladorNave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AControladorNave)


#define StarFighter_Source_StarFighter_ControladorNave_h_14_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_ControladorNave_h_11_PROLOG
#define StarFighter_Source_StarFighter_ControladorNave_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_ControladorNave_h_14_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_ControladorNave_h_14_SPARSE_DATA \
	StarFighter_Source_StarFighter_ControladorNave_h_14_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_ControladorNave_h_14_INCLASS \
	StarFighter_Source_StarFighter_ControladorNave_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_ControladorNave_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_ControladorNave_h_14_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_ControladorNave_h_14_SPARSE_DATA \
	StarFighter_Source_StarFighter_ControladorNave_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_ControladorNave_h_14_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_ControladorNave_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AControladorNave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_ControladorNave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
