// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRStereoWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRStereoWidgetComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	void UVRStereoWidgetComponent::StaticRegisterNativesUVRStereoWidgetComponent()
	{
		UClass* Class = UVRStereoWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &UVRStereoWidgetComponent::execGetPriority },
			{ "SetPriority", &UVRStereoWidgetComponent::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRStereoWidgetComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the render priority\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "@return the render priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "GetPriority", nullptr, nullptr, sizeof(VRStereoWidgetComponent_eventGetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRStereoWidgetComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09* Change the layer's render priority, higher priorities render on top of lower priorities\n\x09* @param\x09InPriority: Priority value\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param        InPriority: Priority value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "SetPriority", nullptr, nullptr, sizeof(VRStereoWidgetComponent_eventSetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRStereoWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSleeping_MetaData[];
#endif
		static void NewProp_bIsSleeping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSleeping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayForRenderThread_MetaData[];
#endif
		static void NewProp_bDelayForRenderThread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayForRenderThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEpicsWorldLockedStereo_MetaData[];
#endif
		static void NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEpicsWorldLockedStereo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderBothStereoAndWorld_MetaData[];
#endif
		static void NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderBothStereoAndWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRStereoWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority, "GetPriority" }, // 3920827130
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority, "SetPriority" }, // 3607533215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A widget component that displays the widget in a stereo layer instead of in worldspace.\n* Currently this class uses a custom postion instead of the engines WorldLocked for stereo layers\n* This is because world locked stereo layers don't account for player movement currently.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VRStereoWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A widget component that displays the widget in a stereo layer instead of in worldspace.\nCurrently this class uses a custom postion instead of the engines WorldLocked for stereo layers\nThis is because world locked stereo layers don't account for player movement currently." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Render priority among all stereo layers, higher priority render on top of lower priority **/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the quad should internally set it's Y value based on the set texture's dimensions */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the texture should not use its own alpha channel (1.0 will be substituted) */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true will not render or update until false\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true will not render or update until false" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bIsSleeping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping = { "bIsSleeping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\n// Not for use with late updated parents.\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\nNot for use with late updated parents." },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bDelayForRenderThread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread = { "bDelayForRenderThread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, use Epics world locked stereo implementation instead of my own temp solution\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, use Epics world locked stereo implementation instead of my own temp solution" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bUseEpicsWorldLockedStereo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo = { "bUseEpicsWorldLockedStereo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true forces the widget to render both stereo and world widgets\n// Overriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true forces the widget to render both stereo and world widgets\nOverriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bRenderBothStereoAndWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld = { "bRenderBothStereoAndWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! **/" },
		{ "DisplayName", "Stereo Layer Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x001200000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRStereoWidgetComponent, Shape), Z_Construct_UClass_UStereoLayerShape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRStereoWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRStereoWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams = {
		&UVRStereoWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRStereoWidgetComponent, 524791188);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRStereoWidgetComponent>()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRStereoWidgetComponent(Z_Construct_UClass_UVRStereoWidgetComponent, &UVRStereoWidgetComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRStereoWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
