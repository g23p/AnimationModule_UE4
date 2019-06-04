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
struct FComponentAnimationStruct;
class USceneComponent;
struct FVector;
struct FRotator;
#ifdef ANIMATIONMODULE_ComponentAnimationHelper_generated_h
#error "ComponentAnimationHelper.generated.h already included, missing '#pragma once' in ComponentAnimationHelper.h"
#endif
#define ANIMATIONMODULE_ComponentAnimationHelper_generated_h

#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentAnimationStruct_Statics; \
	ANIMATIONMODULE_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONMODULE_API UScriptStruct* StaticStruct<struct FComponentAnimationStruct>();

#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayComponentAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_TARRAY(FComponentAnimationStruct,Z_Param_AnimationStructArray); \
		P_GET_UBOOL(Z_Param_StopPreAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentAnimationHelper::PlayComponentAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_AnimationStructArray,Z_Param_StopPreAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeComponentAnimation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector,Z_Param_NewVector); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_STRUCT(FVector,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FComponentAnimationStruct*)Z_Param__Result=UComponentAnimationHelper::MakeComponentAnimation(Z_Param_InComponent,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewVector,Z_Param_NewRotation,Z_Param_NewScale); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayComponentAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_TARRAY(FComponentAnimationStruct,Z_Param_AnimationStructArray); \
		P_GET_UBOOL(Z_Param_StopPreAction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentAnimationHelper::PlayComponentAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_AnimationStructArray,Z_Param_StopPreAction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeComponentAnimation) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector,Z_Param_NewVector); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_GET_STRUCT(FVector,Z_Param_NewScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FComponentAnimationStruct*)Z_Param__Result=UComponentAnimationHelper::MakeComponentAnimation(Z_Param_InComponent,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewVector,Z_Param_NewRotation,Z_Param_NewScale); \
		P_NATIVE_END; \
	}


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentAnimationHelper(); \
	friend struct Z_Construct_UClass_UComponentAnimationHelper_Statics; \
public: \
	DECLARE_CLASS(UComponentAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UComponentAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_INCLASS \
private: \
	static void StaticRegisterNativesUComponentAnimationHelper(); \
	friend struct Z_Construct_UClass_UComponentAnimationHelper_Statics; \
public: \
	DECLARE_CLASS(UComponentAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UComponentAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentAnimationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentAnimationHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentAnimationHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentAnimationHelper(UComponentAnimationHelper&&); \
	NO_API UComponentAnimationHelper(const UComponentAnimationHelper&); \
public:


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentAnimationHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentAnimationHelper(UComponentAnimationHelper&&); \
	NO_API UComponentAnimationHelper(const UComponentAnimationHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentAnimationHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentAnimationHelper)


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_PRIVATE_PROPERTY_OFFSET
#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_222_PROLOG
#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_RPC_WRAPPERS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_INCLASS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_PRIVATE_PROPERTY_OFFSET \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_INCLASS_NO_PURE_DECLS \
	ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODULE_API UClass* StaticClass<class UComponentAnimationHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ModuleTest_Plugins_AnimationModule_Source_AnimationModule_Public_ComponentAnimationHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
