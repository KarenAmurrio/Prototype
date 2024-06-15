// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_PrototypePawn_generated_h
#error "PrototypePawn.generated.h already included, missing '#pragma once' in PrototypePawn.h"
#endif
#define PROTOTYPE_PrototypePawn_generated_h

#define Prototype_Source_Prototype_PrototypePawn_h_12_SPARSE_DATA
#define Prototype_Source_Prototype_PrototypePawn_h_12_RPC_WRAPPERS
#define Prototype_Source_Prototype_PrototypePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype_Source_Prototype_PrototypePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypePawn(); \
	friend struct Z_Construct_UClass_APrototypePawn_Statics; \
public: \
	DECLARE_CLASS(APrototypePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(APrototypePawn)


#define Prototype_Source_Prototype_PrototypePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypePawn(); \
	friend struct Z_Construct_UClass_APrototypePawn_Statics; \
public: \
	DECLARE_CLASS(APrototypePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(APrototypePawn)


#define Prototype_Source_Prototype_PrototypePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypePawn(APrototypePawn&&); \
	NO_API APrototypePawn(const APrototypePawn&); \
public:


#define Prototype_Source_Prototype_PrototypePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypePawn(APrototypePawn&&); \
	NO_API APrototypePawn(const APrototypePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypePawn)


#define Prototype_Source_Prototype_PrototypePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(APrototypePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(APrototypePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APrototypePawn, CameraBoom); }


#define Prototype_Source_Prototype_PrototypePawn_h_9_PROLOG
#define Prototype_Source_Prototype_PrototypePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_Prototype_PrototypePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_Prototype_PrototypePawn_h_12_SPARSE_DATA \
	Prototype_Source_Prototype_PrototypePawn_h_12_RPC_WRAPPERS \
	Prototype_Source_Prototype_PrototypePawn_h_12_INCLASS \
	Prototype_Source_Prototype_PrototypePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_Prototype_PrototypePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_Prototype_PrototypePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_Prototype_PrototypePawn_h_12_SPARSE_DATA \
	Prototype_Source_Prototype_PrototypePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_Prototype_PrototypePawn_h_12_INCLASS_NO_PURE_DECLS \
	Prototype_Source_Prototype_PrototypePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class APrototypePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_Prototype_PrototypePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
