// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/ControladorNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControladorNave() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AControladorNave_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AControladorNave();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	DEFINE_FUNCTION(AControladorNave::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void AControladorNave::StaticRegisterNativesAControladorNave()
	{
		UClass* Class = AControladorNave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &AControladorNave::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ControladorNave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControladorNave, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControladorNave_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControladorNave_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AControladorNave_NoRegister()
	{
		return AControladorNave::StaticClass();
	}
	struct Z_Construct_UClass_AControladorNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControladorNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AControladorNave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AControladorNave_SetupInputComponent, "SetupInputComponent" }, // 2866886418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControladorNave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ABall\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ControladorNave.h" },
		{ "ModuleRelativePath", "ControladorNave.h" },
		{ "ToolTip", "class ABall" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControladorNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControladorNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControladorNave_Statics::ClassParams = {
		&AControladorNave::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControladorNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControladorNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControladorNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControladorNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControladorNave, 2515537569);
	template<> STARFIGHTER_API UClass* StaticClass<AControladorNave>()
	{
		return AControladorNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControladorNave(Z_Construct_UClass_AControladorNave, &AControladorNave::StaticClass, TEXT("/Script/StarFighter"), TEXT("AControladorNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControladorNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
