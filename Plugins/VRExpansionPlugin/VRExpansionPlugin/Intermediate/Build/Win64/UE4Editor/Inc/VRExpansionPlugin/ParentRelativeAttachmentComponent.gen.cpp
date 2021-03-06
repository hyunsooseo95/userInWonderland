// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/ParentRelativeAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentRelativeAttachmentComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UParentRelativeAttachmentComponent::StaticRegisterNativesUParentRelativeAttachmentComponent()
	{
	}
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateInCharacterMovement_MetaData[];
#endif
		static void NewProp_bUpdateInCharacterMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateInCharacterMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRotationFromParent_MetaData[];
#endif
		static void NewProp_bIgnoreRotationFromParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRotationFromParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[];
#endif
		static void NewProp_bOffsetByHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFeetLocation_MetaData[];
#endif
		static void NewProp_bUseFeetLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFeetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpTransition_MetaData[];
#endif
		static void NewProp_bLerpTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawTolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
		{ "Comment", "/**\n* A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\n* This is intended to be parented to the root component of a pawn, it will then either find and track the camera\n* or use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\n* have its position replicated.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ParentRelativeAttachmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\nThis is intended to be parented to the root component of a pawn, it will then either find and track the camera\nor use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\nhave its position replicated." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, AttachChar), Z_Construct_UClass_AVRCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData[] = {
		{ "Category", "VRTrackedParentInterface" },
		{ "Comment", "// If valid will use this as the tracked parent instead of the HMD / Parent\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent = { "OptionalWaistTrackingParent", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bUpdateInCharacterMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement = { "bUpdateInCharacterMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true, will not set rotation every frame, only position\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "If true, will not set rotation every frame, only position" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bIgnoreRotationFromParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent = { "bIgnoreRotationFromParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character).\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bOffsetByHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD = { "bOffsetByHMD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// An additional value added to the relative position of the PRC \n// Can be used to offset the floor, or component heights if needed\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "An additional value added to the relative position of the PRC\nCan be used to offset the floor, or component heights if needed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset = { "CustomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, CustomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position\n" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "ToolTip", "If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bUseFeetLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation = { "bUseFeetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_SetBit(void* Obj)
	{
		((UParentRelativeAttachmentComponent*)Obj)->bLerpTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition = { "bLerpTransition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParentRelativeAttachmentComponent), &Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed = { "LerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, LerpSpeed), METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance = { "YawTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParentRelativeAttachmentComponent, YawTolerance), METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_AttachChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_OptionalWaistTrackingParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUpdateInCharacterMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bIgnoreRotationFromParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bOffsetByHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_CustomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bUseFeetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_bLerpTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_LerpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::NewProp_YawTolerance,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UParentRelativeAttachmentComponent, IVRTrackedParentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentRelativeAttachmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::ClassParams = {
		&UParentRelativeAttachmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParentRelativeAttachmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentRelativeAttachmentComponent, 3992528299);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UParentRelativeAttachmentComponent>()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentRelativeAttachmentComponent(Z_Construct_UClass_UParentRelativeAttachmentComponent, &UParentRelativeAttachmentComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UParentRelativeAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentRelativeAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
