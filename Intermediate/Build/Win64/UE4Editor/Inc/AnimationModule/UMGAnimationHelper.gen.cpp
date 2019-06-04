// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModule/Public/UMGAnimationHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAnimationHelper() {}
// Cross Module References
	ANIMATIONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FUMGAniamtionStruct();
	UPackage* Z_Construct_UPackage__Script_AnimationModule();
	ANIMATIONMODULE_API UClass* Z_Construct_UClass_UUMGAnimationHelper_NoRegister();
	ANIMATIONMODULE_API UClass* Z_Construct_UClass_UUMGAnimationHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANIMATIONMODULE_API UFunction* Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ANIMATIONMODULE_API UFunction* Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FUMGAniamtionStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONMODULE_API uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMGAniamtionStruct, Z_Construct_UPackage__Script_AnimationModule(), TEXT("UMGAniamtionStruct"), sizeof(FUMGAniamtionStruct), Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_Hash());
	}
	return Singleton;
}
template<> ANIMATIONMODULE_API UScriptStruct* StaticStruct<FUMGAniamtionStruct>()
{
	return FUMGAniamtionStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUMGAniamtionStruct(FUMGAniamtionStruct::StaticStruct, TEXT("/Script/AnimationModule"), TEXT("UMGAniamtionStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct
{
	FScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UMGAniamtionStruct")),new UScriptStruct::TCppStructOps<FUMGAniamtionStruct>);
	}
} ScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct;
	struct Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMGAniamtionStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
		nullptr,
		&NewStructOps,
		"UMGAniamtionStruct",
		sizeof(FUMGAniamtionStruct),
		alignof(FUMGAniamtionStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUMGAniamtionStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UMGAniamtionStruct"), sizeof(FUMGAniamtionStruct), Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_Hash() { return 2246419731U; }
	void UUMGAnimationHelper::StaticRegisterNativesUUMGAnimationHelper()
	{
		UClass* Class = UUMGAnimationHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeUMGAnimation", &UUMGAnimationHelper::execMakeUMGAnimation },
			{ "PlayUMGAnimation", &UUMGAnimationHelper::execPlayUMGAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics
	{
		struct UMGAnimationHelper_eventMakeUMGAnimation_Parms
		{
			UWidget* InWidget;
			float Duration;
			bool IsIncrement;
			FVector2D NewPosition;
			FVector2D NewSize;
			FVector2D Pivot;
			FUMGAniamtionStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition;
		static void NewProp_IsIncrement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIncrement;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FUMGAniamtionStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_IsIncrement_SetBit(void* Obj)
	{
		((UMGAnimationHelper_eventMakeUMGAnimation_Parms*)Obj)->IsIncrement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_IsIncrement = { "IsIncrement", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAnimationHelper_eventMakeUMGAnimation_Parms), &Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_IsIncrement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_InWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_NewSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_NewPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_IsIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::NewProp_InWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AnimationHelper|UMGAnimation" },
		{ "Duration", "1.000000" },
		{ "IsIncrement", "1" },
		{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
		{ "ToolTip", "@param InWidget          \xe6\x93\x8d\xe4\xbd\x9c\xe7\x9a\x84Widget\xe5\xaf\xb9\xe8\xb1\xa1\n@param Duration          \xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n@param IsIncrement       NewPosition\xe5\x92\x8cNewSize\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe5\x8e\x9f\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x8e\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xa2\x9e\xe9\x87\x8f\xe5\x88\x99\xe4\xb8\xba\xe7\x9b\xae\xe6\xa0\x87\n@param NewPosition       Position\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Position\n@param NewSize           Size\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Size\n@param Pivot             \xe5\xa2\x9e\xe5\x87\x8f\xe5\xa4\xa7\xe5\xb0\x8f\xe6\x97\xb6\xe7\x9a\x84\xe9\x94\x9a\xe7\x82\xb9(0,0)\xe4\xb8\xba\xe5\xb7\xa6\xe4\xb8\x8a\xef\xbc\x8c(1,1)\xe4\xb8\xba\xe5\x8f\xb3\xe4\xb8\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAnimationHelper, nullptr, "MakeUMGAnimation", sizeof(UMGAnimationHelper_eventMakeUMGAnimation_Parms), Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics
	{
		struct UMGAnimationHelper_eventPlayUMGAnimation_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FUMGAniamtionStruct> AnimationStructArray;
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
	void Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_StopPreAction_SetBit(void* Obj)
	{
		((UMGAnimationHelper_eventPlayUMGAnimation_Parms*)Obj)->StopPreAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_StopPreAction = { "StopPreAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAnimationHelper_eventPlayUMGAnimation_Parms), &Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_StopPreAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_AnimationStructArray = { "AnimationStructArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, AnimationStructArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_AnimationStructArray_Inner = { "AnimationStructArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUMGAniamtionStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_StopPreAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_AnimationStructArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_AnimationStructArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationHelper|UMGAnimation" },
		{ "CPP_Default_StopPreAction", "false" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
		{ "ToolTip", "@param StopPreAction     \xe7\xab\x8b\xe5\x88\xbb\xe6\x8a\x8a\xe4\xb8\x8a\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8a\xa8\xe4\xbd\x9c\xe7\xbd\xae\xe4\xb8\xba\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAnimationHelper, nullptr, "PlayUMGAnimation", sizeof(UMGAnimationHelper_eventPlayUMGAnimation_Parms), Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAnimationHelper_NoRegister()
	{
		return UUMGAnimationHelper::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAnimationHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAnimationHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAnimationHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation, "MakeUMGAnimation" }, // 3713116533
		{ &Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation, "PlayUMGAnimation" }, // 3702364185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAnimationHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAnimationHelper.h" },
		{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAnimationHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAnimationHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAnimationHelper_Statics::ClassParams = {
		&UUMGAnimationHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGAnimationHelper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUMGAnimationHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAnimationHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAnimationHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAnimationHelper, 1987631147);
	template<> ANIMATIONMODULE_API UClass* StaticClass<UUMGAnimationHelper>()
	{
		return UUMGAnimationHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAnimationHelper(Z_Construct_UClass_UUMGAnimationHelper, &UUMGAnimationHelper::StaticClass, TEXT("/Script/AnimationModule"), TEXT("UUMGAnimationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAnimationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
