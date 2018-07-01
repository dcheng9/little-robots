// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THROBOTS_ThrobotsCharacter_generated_h
#error "ThrobotsCharacter.generated.h already included, missing '#pragma once' in ThrobotsCharacter.h"
#endif
#define THROBOTS_ThrobotsCharacter_generated_h

#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_RPC_WRAPPERS
#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrobotsCharacter(); \
	friend THROBOTS_API class UClass* Z_Construct_UClass_AThrobotsCharacter(); \
public: \
	DECLARE_CLASS(AThrobotsCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Throbots"), NO_API) \
	DECLARE_SERIALIZER(AThrobotsCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThrobotsCharacter(); \
	friend THROBOTS_API class UClass* Z_Construct_UClass_AThrobotsCharacter(); \
public: \
	DECLARE_CLASS(AThrobotsCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Throbots"), NO_API) \
	DECLARE_SERIALIZER(AThrobotsCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrobotsCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrobotsCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrobotsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrobotsCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrobotsCharacter(AThrobotsCharacter&&); \
	NO_API AThrobotsCharacter(const AThrobotsCharacter&); \
public:


#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrobotsCharacter(AThrobotsCharacter&&); \
	NO_API AThrobotsCharacter(const AThrobotsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrobotsCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrobotsCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrobotsCharacter)


#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AThrobotsCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AThrobotsCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AThrobotsCharacter, CursorToWorld); }


#define Throbots_Source_Throbots_ThrobotsCharacter_h_9_PROLOG
#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_RPC_WRAPPERS \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_INCLASS \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Throbots_Source_Throbots_ThrobotsCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Throbots_Source_Throbots_ThrobotsCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Throbots_Source_Throbots_ThrobotsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
