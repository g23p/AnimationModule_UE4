// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ComponentAnimationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentAnimationHelper() {}
// Cross Module References
	COMPONENTANIMATIONMODULE_API UClass* Z_Construct_UClass_UComponentAnimationHelper_NoRegister();
	COMPONENTANIMATIONMODULE_API UClass* Z_Construct_UClass_UComponentAnimationHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ComponentAnimationModule();
	COMPONENTANIMATIONMODULE_API UFunction* Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UComponentAnimationHelper::StaticRegisterNativesUComponentAnimationHelper()
	{
		UClass* Class = UComponentAnimationHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayComponentAnimation", &UComponentAnimationHelper::execPlayComponentAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation()
	{
		struct ComponentAnimationHelper_eventPlayComponentAnimation_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			USceneComponent* InComponent;
			float Duration;
			bool IsIncrement;
			FVector NewVector;
			FRotator NewRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVector = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, NewVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsIncrement_SetBit = [](void* Obj){ ((ComponentAnimationHelper_eventPlayComponentAnimation_Parms*)Obj)->IsIncrement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIncrement = { UE4CodeGen_Private::EPropertyClass::Bool, "IsIncrement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ComponentAnimationHelper_eventPlayComponentAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsIncrement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, InComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InComponent_MetaData, ARRAY_COUNT(NewProp_InComponent_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsIncrement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AnimationHelper|ComponentAnimation" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "HidePin", "WorldContextObject" },
				{ "Latent", "" },
				{ "LatentInfo", "LatentInfo" },
				{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
				{ "ToolTip", "@param Duration          \xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n@param IsIncrement       NewVector\xe5\x92\x8cNewRotation\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe5\x8e\x9f\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x8e\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xa2\x9e\xe9\x87\x8f\xe5\x88\x99\xe4\xb8\xba\xe7\x9b\xae\xe6\xa0\x87\n@param NewVector         \xe4\xb8\x8d\xe6\x98\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe5\xa2\x9e\xe9\x87\x8f\xe6\x97\xb6\xef\xbc\x8c\xe4\xb8\xba""0\xe5\x88\x99\xe4\xb8\x8d\xe4\xbc\x9a\xe5\xa4\x84\xe7\x90\x86\n@param NewRotation       \xe4\xb8\x8d\xe6\x98\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe5\xa2\x9e\xe9\x87\x8f\xe6\x97\xb6\xef\xbc\x8c\xe4\xb8\xba""0\xe5\x88\x99\xe4\xb8\x8d\xe4\xbc\x9a\xe5\xa4\x84\xe7\x90\x86" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentAnimationHelper, "PlayComponentAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(ComponentAnimationHelper_eventPlayComponentAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponentAnimationHelper_NoRegister()
	{
		return UComponentAnimationHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UComponentAnimationHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_ComponentAnimationModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation, "PlayComponentAnimation" }, // 789810902
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ComponentAnimationHelper.h" },
				{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UComponentAnimationHelper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UComponentAnimationHelper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentAnimationHelper, 58114471);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentAnimationHelper(Z_Construct_UClass_UComponentAnimationHelper, &UComponentAnimationHelper::StaticClass, TEXT("/Script/ComponentAnimationModule"), TEXT("UComponentAnimationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentAnimationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
