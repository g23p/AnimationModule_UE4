// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModule/Public/ComponentAnimationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentAnimationHelper() {}
// Cross Module References
	ANIMATIONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentAnimationStruct();
	UPackage* Z_Construct_UPackage__Script_AnimationModule();
	ANIMATIONMODULE_API UClass* Z_Construct_UClass_UComponentAnimationHelper_NoRegister();
	ANIMATIONMODULE_API UClass* Z_Construct_UClass_UComponentAnimationHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANIMATIONMODULE_API UFunction* Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ANIMATIONMODULE_API UFunction* Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FComponentAnimationStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONMODULE_API uint32 Get_Z_Construct_UScriptStruct_FComponentAnimationStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentAnimationStruct, Z_Construct_UPackage__Script_AnimationModule(), TEXT("ComponentAnimationStruct"), sizeof(FComponentAnimationStruct), Get_Z_Construct_UScriptStruct_FComponentAnimationStruct_Hash());
	}
	return Singleton;
}
template<> ANIMATIONMODULE_API UScriptStruct* StaticStruct<FComponentAnimationStruct>()
{
	return FComponentAnimationStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentAnimationStruct(FComponentAnimationStruct::StaticStruct, TEXT("/Script/AnimationModule"), TEXT("ComponentAnimationStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationModule_StaticRegisterNativesFComponentAnimationStruct
{
	FScriptStruct_AnimationModule_StaticRegisterNativesFComponentAnimationStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentAnimationStruct")),new UScriptStruct::TCppStructOps<FComponentAnimationStruct>);
	}
} ScriptStruct_AnimationModule_StaticRegisterNativesFComponentAnimationStruct;
	struct Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentAnimationStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
		nullptr,
		&NewStructOps,
		"ComponentAnimationStruct",
		sizeof(FComponentAnimationStruct),
		alignof(FComponentAnimationStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentAnimationStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentAnimationStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentAnimationStruct"), sizeof(FComponentAnimationStruct), Get_Z_Construct_UScriptStruct_FComponentAnimationStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentAnimationStruct_Hash() { return 2021269697U; }
	void UComponentAnimationHelper::StaticRegisterNativesUComponentAnimationHelper()
	{
		UClass* Class = UComponentAnimationHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeComponentAnimation", &UComponentAnimationHelper::execMakeComponentAnimation },
			{ "PlayComponentAnimation", &UComponentAnimationHelper::execPlayComponentAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics
	{
		struct ComponentAnimationHelper_eventMakeComponentAnimation_Parms
		{
			USceneComponent* InComponent;
			float Duration;
			bool IsIncrement;
			FVector NewVector;
			FRotator NewRotation;
			FVector NewScale;
			FComponentAnimationStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVector;
		static void NewProp_IsIncrement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIncrement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FComponentAnimationStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, NewScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewVector = { "NewVector", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, NewVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_IsIncrement_SetBit(void* Obj)
	{
		((ComponentAnimationHelper_eventMakeComponentAnimation_Parms*)Obj)->IsIncrement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_IsIncrement = { "IsIncrement", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentAnimationHelper_eventMakeComponentAnimation_Parms), &Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_IsIncrement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventMakeComponentAnimation_Parms, InComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_InComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_InComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_NewVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_IsIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AnimationHelper|ComponentAnimation" },
		{ "Duration", "1.000000" },
		{ "IsIncrement", "1" },
		{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
		{ "ToolTip", "@param InComponent       \xe6\x93\x8d\xe4\xbd\x9c\xe7\x9a\x84""component\xe5\xaf\xb9\xe8\xb1\xa1\n@param Duration          \xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n@param IsIncrement       \xe5\x90\xa6\xe4\xbd\x9c\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe5\x8e\x9f\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x8e\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xa2\x9e\xe9\x87\x8f\xe5\x88\x99\xe4\xb8\xba\xe7\x9b\xae\xe6\xa0\x87\n@param NewVector         Vector\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Vector\n@param NewRotation       Rotation\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Rotation\n@param NewScale          Scale\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentAnimationHelper, nullptr, "MakeComponentAnimation", sizeof(ComponentAnimationHelper_eventMakeComponentAnimation_Parms), Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics
	{
		struct ComponentAnimationHelper_eventPlayComponentAnimation_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FComponentAnimationStruct> AnimationStructArray;
			bool StopPreAction;
		};
		static void NewProp_StopPreAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopPreAction;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationStructArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationStructArray_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_StopPreAction_SetBit(void* Obj)
	{
		((ComponentAnimationHelper_eventPlayComponentAnimation_Parms*)Obj)->StopPreAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_StopPreAction = { "StopPreAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ComponentAnimationHelper_eventPlayComponentAnimation_Parms), &Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_StopPreAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_AnimationStructArray = { "AnimationStructArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, AnimationStructArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_AnimationStructArray_Inner = { "AnimationStructArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentAnimationStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponentAnimationHelper_eventPlayComponentAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_StopPreAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_AnimationStructArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_AnimationStructArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationHelper|ComponentAnimation" },
		{ "CPP_Default_StopPreAction", "false" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
		{ "ToolTip", "@param StopPreAction     \xe7\xab\x8b\xe5\x88\xbb\xe6\x8a\x8a\xe4\xb8\x8a\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8a\xa8\xe4\xbd\x9c\xe7\xbd\xae\xe4\xb8\xba\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponentAnimationHelper, nullptr, "PlayComponentAnimation", sizeof(ComponentAnimationHelper_eventPlayComponentAnimation_Parms), Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponentAnimationHelper_NoRegister()
	{
		return UComponentAnimationHelper::StaticClass();
	}
	struct Z_Construct_UClass_UComponentAnimationHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentAnimationHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponentAnimationHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponentAnimationHelper_MakeComponentAnimation, "MakeComponentAnimation" }, // 710150581
		{ &Z_Construct_UFunction_UComponentAnimationHelper_PlayComponentAnimation, "PlayComponentAnimation" }, // 3955211277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentAnimationHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComponentAnimationHelper.h" },
		{ "ModuleRelativePath", "Public/ComponentAnimationHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentAnimationHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentAnimationHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponentAnimationHelper_Statics::ClassParams = {
		&UComponentAnimationHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentAnimationHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UComponentAnimationHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentAnimationHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponentAnimationHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentAnimationHelper, 2288752071);
	template<> ANIMATIONMODULE_API UClass* StaticClass<UComponentAnimationHelper>()
	{
		return UComponentAnimationHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentAnimationHelper(Z_Construct_UClass_UComponentAnimationHelper, &UComponentAnimationHelper::StaticClass, TEXT("/Script/AnimationModule"), TEXT("UComponentAnimationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentAnimationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
