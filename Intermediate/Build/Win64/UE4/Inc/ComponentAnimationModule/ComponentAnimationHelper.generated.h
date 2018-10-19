// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
class USceneComponent;
struct FVector;
struct FRotator;
#ifdef COMPONENTANIMATIONMODULE_ComponentAnimationHelper_generated_h
#error "ComponentAnimationHelper.generated.h already included, missing '#pragma once' in ComponentAnimationHelper.h"
#endif
#define COMPONENTANIMATIONMODULE_ComponentAnimationHelper_generated_h

#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayComponentAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector,Z_Param_NewVector); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentAnimationHelper::PlayComponentAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_InComponent,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewVector,Z_Param_NewRotation); \
		P_NATIVE_END; \
	}


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayComponentAnimation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_OBJECT(USceneComponent,Z_Param_InComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsIncrement); \
		P_GET_STRUCT(FVector,Z_Param_NewVector); \
		P_GET_STRUCT(FRotator,Z_Param_NewRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UComponentAnimationHelper::PlayComponentAnimation(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_InComponent,Z_Param_Duration,Z_Param_IsIncrement,Z_Param_NewVector,Z_Param_NewRotation); \
		P_NATIVE_END; \
	}


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentAnimationHelper(); \
	friend COMPONENTANIMATIONMODULE_API class UClass* Z_Construct_UClass_UComponentAnimationHelper(); \
public: \
	DECLARE_CLASS(UComponentAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ComponentAnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UComponentAnimationHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUComponentAnimationHelper(); \
	friend COMPONENTANIMATIONMODULE_API class UClass* Z_Construct_UClass_UComponentAnimationHelper(); \
public: \
	DECLARE_CLASS(UComponentAnimationHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ComponentAnimationModule"), NO_API) \
	DECLARE_SERIALIZER(UComponentAnimationHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentAnimationHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentAnimationHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentAnimationHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentAnimationHelper(UComponentAnimationHelper&&); \
	NO_API UComponentAnimationHelper(const UComponentAnimationHelper&); \
public:


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentAnimationHelper(UComponentAnimationHelper&&); \
	NO_API UComponentAnimationHelper(const UComponentAnimationHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentAnimationHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentAnimationHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComponentAnimationHelper)


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_PRIVATE_PROPERTY_OFFSET
#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_127_PROLOG
#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_PRIVATE_PROPERTY_OFFSET \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_RPC_WRAPPERS \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_INCLASS \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_PRIVATE_PROPERTY_OFFSET \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_INCLASS_NO_PURE_DECLS \
	DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DoorBP_Plugins_ComponentAnimationModule_Source_ComponentAnimationModule_Public_ComponentAnimationHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
