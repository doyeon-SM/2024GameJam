// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbGameJam/ClimbGameJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbGameJamGameMode() {}
// Cross Module References
	CLIMBGAMEJAM_API UClass* Z_Construct_UClass_AClimbGameJamGameMode();
	CLIMBGAMEJAM_API UClass* Z_Construct_UClass_AClimbGameJamGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ClimbGameJam();
// End Cross Module References
	void AClimbGameJamGameMode::StaticRegisterNativesAClimbGameJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClimbGameJamGameMode);
	UClass* Z_Construct_UClass_AClimbGameJamGameMode_NoRegister()
	{
		return AClimbGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AClimbGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClimbGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClimbGameJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbGameJamGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClimbGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClimbGameJamGameMode.h" },
		{ "ModuleRelativePath", "ClimbGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClimbGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClimbGameJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClimbGameJamGameMode_Statics::ClassParams = {
		&AClimbGameJamGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbGameJamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AClimbGameJamGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AClimbGameJamGameMode()
	{
		if (!Z_Registration_Info_UClass_AClimbGameJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClimbGameJamGameMode.OuterSingleton, Z_Construct_UClass_AClimbGameJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClimbGameJamGameMode.OuterSingleton;
	}
	template<> CLIMBGAMEJAM_API UClass* StaticClass<AClimbGameJamGameMode>()
	{
		return AClimbGameJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClimbGameJamGameMode);
	AClimbGameJamGameMode::~AClimbGameJamGameMode() {}
	struct Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_ClimbGameJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_ClimbGameJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClimbGameJamGameMode, AClimbGameJamGameMode::StaticClass, TEXT("AClimbGameJamGameMode"), &Z_Registration_Info_UClass_AClimbGameJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClimbGameJamGameMode), 3183693472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_ClimbGameJamGameMode_h_2576696502(TEXT("/Script/ClimbGameJam"),
		Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_ClimbGameJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2024GameJam_ClimbGameJam_Source_ClimbGameJam_ClimbGameJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
