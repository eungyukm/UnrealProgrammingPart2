// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Prob/ABFountain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABFountain() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABFountain();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABFountain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABFountain::StaticRegisterNativesAABFountain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABFountain);
	UClass* Z_Construct_UClass_AABFountain_NoRegister()
	{
		return AABFountain::StaticClass();
	}
	struct Z_Construct_UClass_AABFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Water;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Prob/ABFountain.h" },
		{ "ModuleRelativePath", "Public/Prob/ABFountain.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Prob/ABFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABFountain_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABFountain, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData), Z_Construct_UClass_AABFountain_Statics::NewProp_Body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Prob/ABFountain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABFountain_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABFountain, Water), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData), Z_Construct_UClass_AABFountain_Statics::NewProp_Water_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABFountain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABFountain_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABFountain_Statics::NewProp_Water,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABFountain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABFountain_Statics::ClassParams = {
		&AABFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABFountain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams), Z_Construct_UClass_AABFountain_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABFountain_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AABFountain()
	{
		if (!Z_Registration_Info_UClass_AABFountain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABFountain.OuterSingleton, Z_Construct_UClass_AABFountain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABFountain.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABFountain>()
	{
		return AABFountain::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABFountain);
	AABFountain::~AABFountain() {}
	struct Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UnrealProgrammingPart2_ArenaBattle_Source_ArenaBattle_Public_Prob_ABFountain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UnrealProgrammingPart2_ArenaBattle_Source_ArenaBattle_Public_Prob_ABFountain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABFountain, AABFountain::StaticClass, TEXT("AABFountain"), &Z_Registration_Info_UClass_AABFountain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABFountain), 969233534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UnrealProgrammingPart2_ArenaBattle_Source_ArenaBattle_Public_Prob_ABFountain_h_378404834(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UnrealProgrammingPart2_ArenaBattle_Source_ArenaBattle_Public_Prob_ABFountain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_eungyukim_Documents_GitHub_UnrealProgrammingPart2_ArenaBattle_Source_ArenaBattle_Public_Prob_ABFountain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
