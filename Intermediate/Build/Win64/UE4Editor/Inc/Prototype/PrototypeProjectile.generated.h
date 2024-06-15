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
struct FVector;
struct FHitResult;
#ifdef PROTOTYPE_PrototypeProjectile_generated_h
#error "PrototypeProjectile.generated.h already included, missing '#pragma once' in PrototypeProjectile.h"
#endif
#define PROTOTYPE_PrototypeProjectile_generated_h

#define Prototype_Source_Prototype_PrototypeProjectile_h_15_SPARSE_DATA
#define Prototype_Source_Prototype_PrototypeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_Prototype_PrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_Prototype_PrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeProjectile(); \
	friend struct Z_Construct_UClass_APrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(APrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(APrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Prototype_Source_Prototype_PrototypeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypeProjectile(); \
	friend struct Z_Construct_UClass_APrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(APrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Prototype"), NO_API) \
	DECLARE_SERIALIZER(APrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Prototype_Source_Prototype_PrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeProjectile(APrototypeProjectile&&); \
	NO_API APrototypeProjectile(const APrototypeProjectile&); \
public:


#define Prototype_Source_Prototype_PrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeProjectile(APrototypeProjectile&&); \
	NO_API APrototypeProjectile(const APrototypeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeProjectile)


#define Prototype_Source_Prototype_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APrototypeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APrototypeProjectile, ProjectileMovement); }


#define Prototype_Source_Prototype_PrototypeProjectile_h_12_PROLOG
#define Prototype_Source_Prototype_PrototypeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_SPARSE_DATA \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_RPC_WRAPPERS \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_INCLASS \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_Prototype_PrototypeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_SPARSE_DATA \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Prototype_Source_Prototype_PrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_API UClass* StaticClass<class APrototypeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_Prototype_PrototypeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
