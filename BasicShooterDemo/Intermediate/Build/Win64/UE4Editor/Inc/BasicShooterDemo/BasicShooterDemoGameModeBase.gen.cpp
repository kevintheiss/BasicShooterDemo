// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicShooterDemo/BasicShooterDemoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicShooterDemoGameModeBase() {}
// Cross Module References
	BASICSHOOTERDEMO_API UClass* Z_Construct_UClass_ABasicShooterDemoGameModeBase_NoRegister();
	BASICSHOOTERDEMO_API UClass* Z_Construct_UClass_ABasicShooterDemoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicShooterDemo();
// End Cross Module References
	void ABasicShooterDemoGameModeBase::StaticRegisterNativesABasicShooterDemoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABasicShooterDemoGameModeBase_NoRegister()
	{
		return ABasicShooterDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicShooterDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicShooterDemoGameModeBase.h" },
		{ "ModuleRelativePath", "BasicShooterDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicShooterDemoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::ClassParams = {
		&ABasicShooterDemoGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicShooterDemoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicShooterDemoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicShooterDemoGameModeBase, 1825729276);
	template<> BASICSHOOTERDEMO_API UClass* StaticClass<ABasicShooterDemoGameModeBase>()
	{
		return ABasicShooterDemoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicShooterDemoGameModeBase(Z_Construct_UClass_ABasicShooterDemoGameModeBase, &ABasicShooterDemoGameModeBase::StaticClass, TEXT("/Script/BasicShooterDemo"), TEXT("ABasicShooterDemoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicShooterDemoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
