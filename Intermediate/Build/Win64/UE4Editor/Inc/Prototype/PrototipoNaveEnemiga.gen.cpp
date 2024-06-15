// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype/PrototipoNaveEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototipoNaveEnemiga() {}
// Cross Module References
	PROTOTYPE_API UClass* Z_Construct_UClass_UPrototipoNaveEnemiga_NoRegister();
	PROTOTYPE_API UClass* Z_Construct_UClass_UPrototipoNaveEnemiga();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Prototype();
// End Cross Module References
	void UPrototipoNaveEnemiga::StaticRegisterNativesUPrototipoNaveEnemiga()
	{
	}
	UClass* Z_Construct_UClass_UPrototipoNaveEnemiga_NoRegister()
	{
		return UPrototipoNaveEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_UPrototipoNaveEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PrototipoNaveEnemiga.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPrototipoNaveEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::ClassParams = {
		&UPrototipoNaveEnemiga::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrototipoNaveEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrototipoNaveEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrototipoNaveEnemiga, 3360515335);
	template<> PROTOTYPE_API UClass* StaticClass<UPrototipoNaveEnemiga>()
	{
		return UPrototipoNaveEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrototipoNaveEnemiga(Z_Construct_UClass_UPrototipoNaveEnemiga, &UPrototipoNaveEnemiga::StaticClass, TEXT("/Script/Prototype"), TEXT("UPrototipoNaveEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrototipoNaveEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
