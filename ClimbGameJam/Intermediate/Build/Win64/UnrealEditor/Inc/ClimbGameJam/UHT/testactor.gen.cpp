// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbGameJam/testactor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestactor() {}
// Cross Module References
	CLIMBGAMEJAM_API UClass* Z_Construct_UClass_Atestactor();
	CLIMBGAMEJAM_API UClass* Z_Construct_UClass_Atestactor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ClimbGameJam();
// End Cross Module References
	void Atestactor::StaticRegisterNativesAtestactor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atestactor);
	UClass* Z_Construct_UClass_Atestactor_NoRegister()
	{
		return Atestactor::StaticClass();
	}
	struct Z_Construct_UClass_Atestactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atestactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ClimbGameJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atestactor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atestactor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "testactor.h" },
		{ "ModuleRelativePath", "testactor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atestactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atestactor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atestactor_Statics::ClassParams = {
		&Atestactor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Atestactor_Statics::Class_MetaDataParams), Z_Construct_UClass_Atestactor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Atestactor()
	{
		if (!Z_Registration_Info_UClass_Atestactor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atestactor.OuterSingleton, Z_Construct_UClass_Atestactor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atestactor.OuterSingleton;
	}
	template<> CLIMBGAMEJAM_API UClass* StaticClass<Atestactor>()
	{
		return Atestactor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atestactor);
	Atestactor::~Atestactor() {}
	struct Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_testactor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_testactor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atestactor, Atestactor::StaticClass, TEXT("Atestactor"), &Z_Registration_Info_UClass_Atestactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atestactor), 4095261374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_testactor_h_3856749272(TEXT("/Script/ClimbGameJam"),
		Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_testactor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_testactor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
