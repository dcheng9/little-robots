// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ThrobotsPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrobotsPlayerController() {}
// Cross Module References
	THROBOTS_API UClass* Z_Construct_UClass_AThrobotsPlayerController_NoRegister();
	THROBOTS_API UClass* Z_Construct_UClass_AThrobotsPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Throbots();
// End Cross Module References
	void AThrobotsPlayerController::StaticRegisterNativesAThrobotsPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AThrobotsPlayerController_NoRegister()
	{
		return AThrobotsPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AThrobotsPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_Throbots,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ThrobotsPlayerController.h" },
				{ "ModuleRelativePath", "ThrobotsPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AThrobotsPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AThrobotsPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThrobotsPlayerController, 478626900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThrobotsPlayerController(Z_Construct_UClass_AThrobotsPlayerController, &AThrobotsPlayerController::StaticClass, TEXT("/Script/Throbots"), TEXT("AThrobotsPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrobotsPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
