// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UMGAnimationHelper.h"
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
		extern ANIMATIONMODULE_API uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUMGAniamtionStruct, Z_Construct_UPackage__Script_AnimationModule(), TEXT("UMGAniamtionStruct"), sizeof(FUMGAniamtionStruct), Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUMGAniamtionStruct(FUMGAniamtionStruct::StaticStruct, TEXT("/Script/AnimationModule"), TEXT("UMGAniamtionStruct"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct
{
	FScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UMGAniamtionStruct")),new UScriptStruct::TCppStructOps<FUMGAniamtionStruct>);
	}
} ScriptStruct_AnimationModule_StaticRegisterNativesFUMGAniamtionStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FUMGAniamtionStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UMGAniamtionStruct"), sizeof(FUMGAniamtionStruct), Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUMGAniamtionStruct>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"UMGAniamtionStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FUMGAniamtionStruct),
				alignof(FUMGAniamtionStruct),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUMGAniamtionStruct_CRC() { return 1367999452U; }
	void UUMGAnimationHelper::StaticRegisterNativesUUMGAnimationHelper()
	{
		UClass* Class = UUMGAnimationHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeUMGAnimation", &UUMGAnimationHelper::execMakeUMGAnimation },
			{ "PlayUMGAnimation", &UUMGAnimationHelper::execPlayUMGAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation()
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
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FUMGAniamtionStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot = { UE4CodeGen_Private::EPropertyClass::Struct, "Pivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSize = { UE4CodeGen_Private::EPropertyClass::Struct, "NewSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "NewPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, NewPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsIncrement_SetBit = [](void* Obj){ ((UMGAnimationHelper_eventMakeUMGAnimation_Parms*)Obj)->IsIncrement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIncrement = { UE4CodeGen_Private::EPropertyClass::Bool, "IsIncrement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMGAnimationHelper_eventMakeUMGAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsIncrement_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidget = { UE4CodeGen_Private::EPropertyClass::Object, "InWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventMakeUMGAnimation_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_InWidget_MetaData, ARRAY_COUNT(NewProp_InWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsIncrement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "1" },
				{ "Category", "AnimationHelper|UMGAnimation" },
				{ "Duration", "1.000000" },
				{ "IsIncrement", "1" },
				{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
				{ "ToolTip", "@param InWidget          \xe6\x93\x8d\xe4\xbd\x9c\xe7\x9a\x84Widget\xe5\xaf\xb9\xe8\xb1\xa1\n@param Duration          \xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n@param IsIncrement       NewPosition\xe5\x92\x8cNewSize\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe5\x8e\x9f\xe7\x8a\xb6\xe6\x80\x81\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x8a\xe5\x8e\xbb\xef\xbc\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xa2\x9e\xe9\x87\x8f\xe5\x88\x99\xe4\xb8\xba\xe7\x9b\xae\xe6\xa0\x87\n@param NewPosition       Position\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Position\n@param NewSize           Size\xe7\x9a\x84\xe5\xa2\x9e\xe9\x87\x8f\xe6\x88\x96\xe7\x9b\xae\xe6\xa0\x87Size\n@param Pivot             \xe5\xa2\x9e\xe5\x87\x8f\xe5\xa4\xa7\xe5\xb0\x8f\xe6\x97\xb6\xe7\x9a\x84\xe9\x94\x9a\xe7\x82\xb9(0,0)\xe4\xb8\xba\xe5\xb7\xa6\xe4\xb8\x8a\xef\xbc\x8c(1,1)\xe4\xb8\xba\xe5\x8f\xb3\xe4\xb8\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAnimationHelper, "MakeUMGAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(UMGAnimationHelper_eventMakeUMGAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation()
	{
		struct UMGAnimationHelper_eventPlayUMGAnimation_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FUMGAniamtionStruct> AnimationStructArray;
			bool StopPreAction;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_StopPreAction_SetBit = [](void* Obj){ ((UMGAnimationHelper_eventPlayUMGAnimation_Parms*)Obj)->StopPreAction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopPreAction = { UE4CodeGen_Private::EPropertyClass::Bool, "StopPreAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMGAnimationHelper_eventPlayUMGAnimation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_StopPreAction_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationStructArray = { UE4CodeGen_Private::EPropertyClass::Array, "AnimationStructArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, AnimationStructArray), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationStructArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationStructArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FUMGAniamtionStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UMGAnimationHelper_eventPlayUMGAnimation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StopPreAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationStructArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationStructArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAnimationHelper, "PlayUMGAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(UMGAnimationHelper_eventPlayUMGAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAnimationHelper_NoRegister()
	{
		return UUMGAnimationHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UUMGAnimationHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_AnimationModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUMGAnimationHelper_MakeUMGAnimation, "MakeUMGAnimation" }, // 199343659
				{ &Z_Construct_UFunction_UUMGAnimationHelper_PlayUMGAnimation, "PlayUMGAnimation" }, // 3495670229
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "UMGAnimationHelper.h" },
				{ "ModuleRelativePath", "Public/UMGAnimationHelper.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUMGAnimationHelper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUMGAnimationHelper::StaticClass,
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
	IMPLEMENT_CLASS(UUMGAnimationHelper, 2102946910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAnimationHelper(Z_Construct_UClass_UUMGAnimationHelper, &UUMGAnimationHelper::StaticClass, TEXT("/Script/AnimationModule"), TEXT("UUMGAnimationHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAnimationHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
