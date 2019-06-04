// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
struct FUMGAniamtionStruct;
class UWidget;
struct FVector2D;
#ifdef ANIMATIONMODULE_UMGAnimationHelper_generated_h
#error "UMGAnimationHelper.generated.h already included, missing '#pragma once' in UMGAnimationHelper.h"
#endif
#define ANIMATIONMODULE_UMGAnimationHelper_generated_h

#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUMGAniamtionStruct_Statics; \
	ANIMATIONMODULE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONMODULE_API UScriptStruct* StaticStruct<struct FUMGAniamtionStruct>();

#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayUMGAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_TARRAY(FUMGAniamtionStruct,Z_Param_AnimationStructArray); \
		P_GET_UBOOL(Z_Param_StopPreAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUMGAnimationHelper::PlayUMGAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_AnimationStructArray,Z_Param_StopPreAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeUMGAnimation) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector2D,Z_Param_NewPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_NewSize); \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUMGAniamtionStruct*)Z_Param__Result=UUMGAnimationHelper::MakeUMGAnimation(Z_Param_InWidget,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewPosition,Z_Param_NewSize,Z_Param_Pivot); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayUMGAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_TARRAY(FUMGAniamtionStruct,Z_Param_AnimationStructArray); \
		P_GET_UBOOL(Z_Param_StopPreAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUMGAnimationHelper::PlayUMGAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_AnimationStructArray,Z_Param_StopPreAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeUMGAnimation) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector2D,Z_Param_NewPosition); \
		P_GET_STRUCT(FVector2D,Z_Param_NewSize); \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUMGAniamtionStruct*)Z_Param__Result=UUMGAnimationHelper::MakeUMGAnimation(Z_Param_InWidget,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewPosition,Z_Param_NewSize,Z_Param_Pivot); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAnimationHelper(); \
	friend struct Z_Construct_UClass_UUMGAnimationHelper_Statics; \
public: \
	DECLARE_CLASS(UUMGAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UUMGAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAnimationHelper(); \
	friend struct Z_Construct_UClass_UUMGAnimationHelper_Statics; \
public: \
	DECLARE_CLASS(UUMGAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UUMGAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAnimationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAnimationHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAnimationHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAnimationHelper(UUMGAnimationHelper&&); \
	NO_API UUMGAnimationHelper(const UUMGAnimationHelper&); \
public:


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAnimationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAnimationHelper(UUMGAnimationHelper&&); \
	NO_API UUMGAnimationHelper(const UUMGAnimationHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAnimationHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_PRIVATE_PROPERTY_OFFSET
#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_233_PROLOG
#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_RPC_WRAPPERS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_INCLASS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_INCLASS_NO_PURE_DECLS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODULE_API UClass* StaticClass<class UUMGAnimationHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_UMGAnimationHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
