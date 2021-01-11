// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Interactibles/VRDialComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRDialComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPGripPair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialFinishedLerpingSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms
		{
			float DialMilestoneAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms, DialMilestoneAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::NewProp_DialMilestoneAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when the lever state changes. */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Delegate for notification when the lever state changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VRDialStateChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVRDialStateChangedSignature_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnEndSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnEndUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnChildGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnChildGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execTickGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGetGripScripts)
	{
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execRequestsSocketing)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSetHeld)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_NewHoldingController);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_UBOOL(Z_Param_bNewIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeld_Implementation(Z_Param_NewHoldingController,Z_Param_GripID,Z_Param_bNewIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execIsHeld)
	{
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_CurHoldingControllers);
		P_GET_UBOOL_REF(Z_Param_Out_bCurIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsHeld_Implementation(Z_Param_Out_CurHoldingControllers,Z_Param_Out_bCurIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execAllowsMultipleGrips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execClosestGripSlotInRange)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_UBOOL(Z_Param_bSecondarySlot);
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotName);
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_CallingController);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverridePrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosestGripSlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_bSecondarySlot,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform,Z_Param_Out_SlotName,Z_Param_CallingController,Z_Param_OverridePrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGripBreakDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execAdvancedGripSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGetGripStiffnessAndDamping)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGripLateUpdateSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGripMovementReplicationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSecondaryGripType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execGetPrimaryGripType)
	{
		P_GET_UBOOL(Z_Param_bIsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSimulateOnDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execTeleportBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execDenyGripping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSetDialAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngle);
		P_GET_UBOOL(Z_Param_bCallEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialAngle(Z_Param_DialAngle,Z_Param_bCallEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execAddDialAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DialAngleDelta);
		P_GET_UBOOL(Z_Param_bCallEvents);
		P_GET_UBOOL(Z_Param_bSkipSettingRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDialAngle(Z_Param_DialAngleDelta,Z_Param_bCallEvents,Z_Param_bSkipSettingRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execResetInitialDialLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetInitialDialLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execOnRep_InitialRelativeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialRelativeTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRDialComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	static FName NAME_UVRDialComponent_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings UVRDialComponent::AdvancedGripSettings()
	{
		VRDialComponent_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
	bool UVRDialComponent::AllowsMultipleGrips()
	{
		VRDialComponent_eventAllowsMultipleGrips_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_AllowsMultipleGrips),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void UVRDialComponent::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		VRDialComponent_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.SlotName=SlotName;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
		SlotName=Parms.SlotName;
	}
	static FName NAME_UVRDialComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UVRDialComponent::DenyGripping()
	{
		VRDialComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool UVRDialComponent::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		VRDialComponent_eventGetGripScripts_Parms Parms;
		Parms.ArrayReference=ArrayReference;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GetGripScripts),&Parms);
		ArrayReference=Parms.ArrayReference;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void UVRDialComponent::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		VRDialComponent_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_UVRDialComponent_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType UVRDialComponent::GetPrimaryGripType(bool bIsSlot)
	{
		VRDialComponent_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UVRDialComponent::GripBreakDistance()
	{
		VRDialComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UVRDialComponent::GripLateUpdateSetting()
	{
		VRDialComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UVRDialComponent::GripMovementReplicationType()
	{
		VRDialComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_IsHeld = FName(TEXT("IsHeld"));
	void UVRDialComponent::IsHeld(TArray<FBPGripPair>& CurHoldingControllers, bool& bCurIsHeld)
	{
		VRDialComponent_eventIsHeld_Parms Parms;
		Parms.CurHoldingControllers=CurHoldingControllers;
		Parms.bCurIsHeld=bCurIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_IsHeld),&Parms);
		CurHoldingControllers=Parms.CurHoldingControllers;
		bCurIsHeld=Parms.bCurIsHeld;
	}
	static FName NAME_UVRDialComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UVRDialComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRDialComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UVRDialComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UVRDialComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		VRDialComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UVRDialComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UVRDialComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UVRDialComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UVRDialComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnEndUsed),NULL);
	}
	static FName NAME_UVRDialComponent_OnGrip = FName(TEXT("OnGrip"));
	void UVRDialComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRDialComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnGrip),&Parms);
	}
	static FName NAME_UVRDialComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRDialComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		VRDialComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UVRDialComponent_OnInput = FName(TEXT("OnInput"));
	void UVRDialComponent::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		VRDialComponent_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnInput),&Parms);
	}
	static FName NAME_UVRDialComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRDialComponent::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRDialComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRDialComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRDialComponent::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRDialComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UVRDialComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UVRDialComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UVRDialComponent_OnUsed = FName(TEXT("OnUsed"));
	void UVRDialComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_OnUsed),NULL);
	}
	static FName NAME_UVRDialComponent_ReceiveDialFinishedLerping = FName(TEXT("ReceiveDialFinishedLerping"));
	void UVRDialComponent::ReceiveDialFinishedLerping()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialFinishedLerping),NULL);
	}
	static FName NAME_UVRDialComponent_ReceiveDialHitSnapAngle = FName(TEXT("ReceiveDialHitSnapAngle"));
	void UVRDialComponent::ReceiveDialHitSnapAngle(float DialMilestoneAngle)
	{
		VRDialComponent_eventReceiveDialHitSnapAngle_Parms Parms;
		Parms.DialMilestoneAngle=DialMilestoneAngle;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_ReceiveDialHitSnapAngle),&Parms);
	}
	static FName NAME_UVRDialComponent_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool UVRDialComponent::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		VRDialComponent_eventRequestsSocketing_Parms Parms;
		Parms.ParentToSocketTo=ParentToSocketTo;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransform=RelativeTransform;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_RequestsSocketing),&Parms);
		ParentToSocketTo=Parms.ParentToSocketTo;
		OptionalSocketName=Parms.OptionalSocketName;
		RelativeTransform=Parms.RelativeTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UVRDialComponent::SecondaryGripType()
	{
		VRDialComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_SetHeld = FName(TEXT("SetHeld"));
	void UVRDialComponent::SetHeld(UGripMotionControllerComponent* NewHoldingController, uint8 GripID, bool bNewIsHeld)
	{
		VRDialComponent_eventSetHeld_Parms Parms;
		Parms.NewHoldingController=NewHoldingController;
		Parms.GripID=GripID;
		Parms.bNewIsHeld=bNewIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_SetHeld),&Parms);
	}
	static FName NAME_UVRDialComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UVRDialComponent::SimulateOnDrop()
	{
		VRDialComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UVRDialComponent::TeleportBehavior()
	{
		VRDialComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRDialComponent_TickGrip = FName(TEXT("TickGrip"));
	void UVRDialComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		VRDialComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UVRDialComponent_TickGrip),&Parms);
	}
	void UVRDialComponent::StaticRegisterNativesUVRDialComponent()
	{
		UClass* Class = UVRDialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDialAngle", &UVRDialComponent::execAddDialAngle },
			{ "AdvancedGripSettings", &UVRDialComponent::execAdvancedGripSettings },
			{ "AllowsMultipleGrips", &UVRDialComponent::execAllowsMultipleGrips },
			{ "ClosestGripSlotInRange", &UVRDialComponent::execClosestGripSlotInRange },
			{ "DenyGripping", &UVRDialComponent::execDenyGripping },
			{ "GetGripScripts", &UVRDialComponent::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &UVRDialComponent::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &UVRDialComponent::execGetPrimaryGripType },
			{ "GripBreakDistance", &UVRDialComponent::execGripBreakDistance },
			{ "GripLateUpdateSetting", &UVRDialComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &UVRDialComponent::execGripMovementReplicationType },
			{ "IsHeld", &UVRDialComponent::execIsHeld },
			{ "OnChildGrip", &UVRDialComponent::execOnChildGrip },
			{ "OnChildGripRelease", &UVRDialComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &UVRDialComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", &UVRDialComponent::execOnEndUsed },
			{ "OnGrip", &UVRDialComponent::execOnGrip },
			{ "OnGripRelease", &UVRDialComponent::execOnGripRelease },
			{ "OnInput", &UVRDialComponent::execOnInput },
			{ "OnRep_InitialRelativeTransform", &UVRDialComponent::execOnRep_InitialRelativeTransform },
			{ "OnSecondaryGrip", &UVRDialComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UVRDialComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &UVRDialComponent::execOnSecondaryUsed },
			{ "OnUsed", &UVRDialComponent::execOnUsed },
			{ "RequestsSocketing", &UVRDialComponent::execRequestsSocketing },
			{ "ResetInitialDialLocation", &UVRDialComponent::execResetInitialDialLocation },
			{ "SecondaryGripType", &UVRDialComponent::execSecondaryGripType },
			{ "SetDialAngle", &UVRDialComponent::execSetDialAngle },
			{ "SetGripPriority", &UVRDialComponent::execSetGripPriority },
			{ "SetHeld", &UVRDialComponent::execSetHeld },
			{ "SimulateOnDrop", &UVRDialComponent::execSimulateOnDrop },
			{ "TeleportBehavior", &UVRDialComponent::execTeleportBehavior },
			{ "TickGrip", &UVRDialComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics
	{
		struct VRDialComponent_eventAddDialAngle_Parms
		{
			float DialAngleDelta;
			bool bCallEvents;
			bool bSkipSettingRot;
		};
		static void NewProp_bSkipSettingRot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipSettingRot;
		static void NewProp_bCallEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialAngleDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit(void* Obj)
	{
		((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bSkipSettingRot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot = { "bSkipSettingRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
	{
		((VRDialComponent_eventAddDialAngle_Parms*)Obj)->bCallEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventAddDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta = { "DialAngleDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventAddDialAngle_Parms, DialAngleDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bSkipSettingRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_bCallEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::NewProp_DialAngleDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Can be called to recalculate the dial angle after you move it if you want different values\n" },
		{ "CPP_Default_bCallEvents", "false" },
		{ "CPP_Default_bSkipSettingRot", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Can be called to recalculate the dial angle after you move it if you want different values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "AddDialAngle", nullptr, nullptr, sizeof(VRDialComponent_eventAddDialAngle_Parms), Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_AddDialAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_AddDialAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "AdvancedGripSettings", nullptr, nullptr, sizeof(VRDialComponent_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRDialComponent_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "AllowsMultipleGrips", nullptr, nullptr, sizeof(VRDialComponent_eventAllowsMultipleGrips_Parms), Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform;
		static void NewProp_bHadSlotInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange;
		static void NewProp_bSecondarySlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((VRDialComponent_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((VRDialComponent_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip slot in range\n" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Get grip slot in range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, sizeof(VRDialComponent_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRDialComponent_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventDenyGripping_Parms), &Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "DenyGripping", nullptr, nullptr, sizeof(VRDialComponent_eventDenyGripping_Parms), Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayReference;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayReference_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRDialComponent_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventGetGripScripts_Parms), &Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip scripts\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GetGripScripts", nullptr, nullptr, sizeof(VRDialComponent_eventGetGripScripts_Parms), Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, sizeof(VRDialComponent_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static void NewProp_bIsSlot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((VRDialComponent_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Grip type to use\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GetPrimaryGripType", nullptr, nullptr, sizeof(VRDialComponent_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GripBreakDistance", nullptr, nullptr, sizeof(VRDialComponent_eventGripBreakDistance_Parms), Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define the late update setting\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GripLateUpdateSetting", nullptr, nullptr, sizeof(VRDialComponent_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define which movement repliation setting to use\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "GripMovementReplicationType", nullptr, nullptr, sizeof(VRDialComponent_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics
	{
		static void NewProp_bCurIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurIsHeld;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurHoldingControllers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurHoldingControllers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_bCurIsHeld_SetBit(void* Obj)
	{
		((VRDialComponent_eventIsHeld_Parms*)Obj)->bCurIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_bCurIsHeld = { "bCurIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventIsHeld_Parms), &Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_bCurIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_CurHoldingControllers = { "CurHoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventIsHeld_Parms, CurHoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_CurHoldingControllers_Inner = { "CurHoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_bCurIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_CurHoldingControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::NewProp_CurHoldingControllers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "IsHeld", nullptr, nullptr, sizeof(VRDialComponent_eventIsHeld_Parms), Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnChildGrip", nullptr, nullptr, sizeof(VRDialComponent_eventOnChildGrip_Parms), Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRDialComponent_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnChildGripRelease", nullptr, nullptr, sizeof(VRDialComponent_eventOnChildGripRelease_Parms), Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnEndUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnGrip", nullptr, nullptr, sizeof(VRDialComponent_eventOnGrip_Parms), Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics
	{
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VRDialComponent_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventOnGripRelease_Parms), &Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(VRDialComponent_eventOnGripRelease_Parms), Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnInput_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to send an action event to the object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnInput", nullptr, nullptr, sizeof(VRDialComponent_eventOnInput_Parms), Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnRep_InitialRelativeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(VRDialComponent_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripOwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripOwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(VRDialComponent_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Finished Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialFinishedLerping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialMilestoneAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle = { "DialMilestoneAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventReceiveDialHitSnapAngle_Parms, DialMilestoneAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::NewProp_DialMilestoneAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Dial Hit Snap Angle" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ReceiveDialHitSnapAngle", nullptr, nullptr, sizeof(VRDialComponent_eventReceiveDialHitSnapAngle_Parms), Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptionalSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentToSocketTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentToSocketTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRDialComponent_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object wants to be socketed\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Returns if the object wants to be socketed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "RequestsSocketing", nullptr, nullptr, sizeof(VRDialComponent_eventRequestsSocketing_Parms), Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Should be called after the dial is moved post begin play\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Should be called after the dial is moved post begin play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "ResetInitialDialLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Secondary grip type\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Secondary grip type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SecondaryGripType", nullptr, nullptr, sizeof(VRDialComponent_eventSecondaryGripType_Parms), Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics
	{
		struct VRDialComponent_eventSetDialAngle_Parms
		{
			float DialAngle;
			bool bCallEvents;
		};
		static void NewProp_bCallEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallEvents;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit(void* Obj)
	{
		((VRDialComponent_eventSetDialAngle_Parms*)Obj)->bCallEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents = { "bCallEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventSetDialAngle_Parms), &Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle = { "DialAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetDialAngle_Parms, DialAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_bCallEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::NewProp_DialAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRLeverComponent" },
		{ "Comment", "// Directly sets the dial angle, still obeys maximum limits and snapping though\n" },
		{ "CPP_Default_bCallEvents", "false" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Directly sets the dial angle, still obeys maximum limits and snapping though" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetDialAngle", nullptr, nullptr, sizeof(VRDialComponent_eventSetDialAngle_Parms), Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SetDialAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetDialAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics
	{
		struct VRDialComponent_eventSetGripPriority_Parms
		{
			int32 NewGripPriority;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewGripPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "GripSettings" },
		{ "Comment", "// Sets the grip priority\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Sets the grip priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(VRDialComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics
	{
		static void NewProp_bNewIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsHeld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHoldingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_bNewIsHeld_SetBit(void* Obj)
	{
		((VRDialComponent_eventSetHeld_Parms*)Obj)->bNewIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_bNewIsHeld = { "bNewIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventSetHeld_Parms), &Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_bNewIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_NewHoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_NewHoldingController = { "NewHoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventSetHeld_Parms, NewHoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_NewHoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_NewHoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_bNewIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::NewProp_NewHoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/*BlueprintCallable,*/" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SetHeld", nullptr, nullptr, sizeof(VRDialComponent_eventSetHeld_Parms), Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRDialComponent_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRDialComponent_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should this object simulate on drop\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "SimulateOnDrop", nullptr, nullptr, sizeof(VRDialComponent_eventSimulateOnDrop_Parms), Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "TeleportBehavior", nullptr, nullptr, sizeof(VRDialComponent_eventTeleportBehavior_Parms), Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRDialComponent_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRDialComponent, nullptr, "TickGrip", nullptr, nullptr, sizeof(VRDialComponent_eventTickGrip_Parms), Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRDialComponent_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRDialComponent_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRDialComponent_NoRegister()
	{
		return UVRDialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRDialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[];
#endif
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingGrip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoldingGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[];
#endif
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractorRotationAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractorRotationAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUseDirectHandRotation_MetaData[];
#endif
		static void NewProp_bDialUseDirectHandRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUseDirectHandRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialRotationAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialRotationAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapAngleIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapAngleIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialSnapAngleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialSnapAngleList;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialSnapAngleList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUseSnapAngleList_MetaData[];
#endif
		static void NewProp_bDialUseSnapAngleList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUseSnapAngleList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDialUsesAngleSnap_MetaData[];
#endif
		static void NewProp_bDialUsesAngleSnap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDialUsesAngleSnap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRollover_MetaData[];
#endif
		static void NewProp_bUseRollover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRollover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CClockwiseMaximumDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CClockwiseMaximumDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockwiseMaximumDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClockwiseMaximumDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDialAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDialAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialFinishedLerping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialFinishedLerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLerping_MetaData[];
#endif
		static void NewProp_bIsLerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialReturnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialReturnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSendDialEventsDuringLerp_MetaData[];
#endif
		static void NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSendDialEventsDuringLerp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpBackOnRelease_MetaData[];
#endif
		static void NewProp_bLerpBackOnRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpBackOnRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialHitSnapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialHitSnapAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRDialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRDialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRDialComponent_AddDialAngle, "AddDialAngle" }, // 276897982
		{ &Z_Construct_UFunction_UVRDialComponent_AdvancedGripSettings, "AdvancedGripSettings" }, // 1241046667
		{ &Z_Construct_UFunction_UVRDialComponent_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 610665850
		{ &Z_Construct_UFunction_UVRDialComponent_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 1637911674
		{ &Z_Construct_UFunction_UVRDialComponent_DenyGripping, "DenyGripping" }, // 1421327056
		{ &Z_Construct_UFunction_UVRDialComponent_GetGripScripts, "GetGripScripts" }, // 3236595199
		{ &Z_Construct_UFunction_UVRDialComponent_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 529274079
		{ &Z_Construct_UFunction_UVRDialComponent_GetPrimaryGripType, "GetPrimaryGripType" }, // 2967180246
		{ &Z_Construct_UFunction_UVRDialComponent_GripBreakDistance, "GripBreakDistance" }, // 2752282604
		{ &Z_Construct_UFunction_UVRDialComponent_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 959968376
		{ &Z_Construct_UFunction_UVRDialComponent_GripMovementReplicationType, "GripMovementReplicationType" }, // 2184326648
		{ &Z_Construct_UFunction_UVRDialComponent_IsHeld, "IsHeld" }, // 2459859616
		{ &Z_Construct_UFunction_UVRDialComponent_OnChildGrip, "OnChildGrip" }, // 505839679
		{ &Z_Construct_UFunction_UVRDialComponent_OnChildGripRelease, "OnChildGripRelease" }, // 3309928278
		{ &Z_Construct_UFunction_UVRDialComponent_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 539461306
		{ &Z_Construct_UFunction_UVRDialComponent_OnEndUsed, "OnEndUsed" }, // 2143342290
		{ &Z_Construct_UFunction_UVRDialComponent_OnGrip, "OnGrip" }, // 1832344568
		{ &Z_Construct_UFunction_UVRDialComponent_OnGripRelease, "OnGripRelease" }, // 239792428
		{ &Z_Construct_UFunction_UVRDialComponent_OnInput, "OnInput" }, // 2257609370
		{ &Z_Construct_UFunction_UVRDialComponent_OnRep_InitialRelativeTransform, "OnRep_InitialRelativeTransform" }, // 1482524881
		{ &Z_Construct_UFunction_UVRDialComponent_OnSecondaryGrip, "OnSecondaryGrip" }, // 2742254766
		{ &Z_Construct_UFunction_UVRDialComponent_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 3363994540
		{ &Z_Construct_UFunction_UVRDialComponent_OnSecondaryUsed, "OnSecondaryUsed" }, // 3752674335
		{ &Z_Construct_UFunction_UVRDialComponent_OnUsed, "OnUsed" }, // 914325519
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialFinishedLerping, "ReceiveDialFinishedLerping" }, // 4090453411
		{ &Z_Construct_UFunction_UVRDialComponent_ReceiveDialHitSnapAngle, "ReceiveDialHitSnapAngle" }, // 4270739595
		{ &Z_Construct_UFunction_UVRDialComponent_RequestsSocketing, "RequestsSocketing" }, // 2546508878
		{ &Z_Construct_UFunction_UVRDialComponent_ResetInitialDialLocation, "ResetInitialDialLocation" }, // 2154608869
		{ &Z_Construct_UFunction_UVRDialComponent_SecondaryGripType, "SecondaryGripType" }, // 1816139617
		{ &Z_Construct_UFunction_UVRDialComponent_SetDialAngle, "SetDialAngle" }, // 1721083507
		{ &Z_Construct_UFunction_UVRDialComponent_SetGripPriority, "SetGripPriority" }, // 1508539643
		{ &Z_Construct_UFunction_UVRDialComponent_SetHeld, "SetHeld" }, // 699925275
		{ &Z_Construct_UFunction_UVRDialComponent_SimulateOnDrop, "SimulateOnDrop" }, // 1313200956
		{ &Z_Construct_UFunction_UVRDialComponent_TeleportBehavior, "TeleportBehavior" }, // 2368746160
		{ &Z_Construct_UFunction_UVRDialComponent_TickGrip, "TickGrip" }, // 2537679715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interactibles/VRDialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should we deny gripping on this object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsDenyGripping" },
		{ "ToolTip", "Should we deny gripping on this object" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Distance before the object will break out of the hand, 0.0f == never will\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Distance before the object will break out of the hand, 0.0f == never will" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance = { "BreakDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, BreakDistance), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set on grip notify, not net serializing\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Set on grip notify, not net serializing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip = { "HoldingGrip", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, HoldingGrip), Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ScriptName", "IsCurrentlyHeld" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting = { "MovementReplicationSetting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bRepGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags = { "bRepGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Now replicating this so that it works correctly over the network\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Now replicating this so that it works correctly over the network" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform = { "InitialRelativeTransform", "OnRep_InitialRelativeTransform", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, InitialRelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData[] = {
		{ "Category", "GripSettings" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority = { "GripPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, GripPriority), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "editcondition", "bDialUseDirectHandRotation" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis = { "InteractorRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, InteractorRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// If true then the dial will directly sample the hands rotation instead of using its movement around it.\n// This is good for roll specific dials but is fairly bad elsewhere.\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true then the dial will directly sample the hands rotation instead of using its movement around it.\nThis is good for roll specific dials but is fairly bad elsewhere." },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUseDirectHandRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation = { "bDialUseDirectHandRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis = { "DialRotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialRotationAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scales rotational input to speed up or slow down the rotation\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Scales rotational input to speed up or slow down the rotation" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler = { "RotationScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, RotationScaler), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Threshold distance that when within the dial will stay snapped to its closest snap increment\n" },
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Threshold distance that when within the dial will stay snapped to its closest snap increment" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold = { "SnapAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Angle that the dial snaps to on release and when within the threshold distance\n" },
		{ "editcondition", "!bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Angle that the dial snaps to on release and when within the threshold distance" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement = { "SnapAngleIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, SnapAngleIncrement), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Optional list of snap angles for the dial\n" },
		{ "editcondition", "bDialUseSnapAngleList" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Optional list of snap angles for the dial" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialSnapAngleList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner = { "DialSnapAngleList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUseSnapAngleList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList = { "bDialUseSnapAngleList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bDialUsesAngleSnap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap = { "bDialUsesAngleSnap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// If true then the dial can \"roll over\" past 360/0 degrees in a direction\n// Allowing unlimited dial angle values\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true then the dial can \"roll over\" past 360/0 degrees in a direction\nAllowing unlimited dial angle values" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bUseRollover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover = { "bUseRollover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle = { "CClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, CClockwiseMaximumDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "//, meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", ", meta = (ClampMin = \"0.0\", ClampMax = \"360.0\", UIMin = \"0.0\", UIMax = \"360.0\"))" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle = { "ClockwiseMaximumDialAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, ClockwiseMaximumDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle = { "CurrentDialAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, CurrentDialAngle), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping = { "OnDialFinishedLerping", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDialFinishedLerping), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialFinishedLerpingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bIsLerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping = { "bIsLerping", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed = { "DialReturnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, DialReturnSpeed), METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bSendDialEventsDuringLerp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp = { "bSendDialEventsDuringLerp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData[] = {
		{ "Category", "VRDialComponent|Lerping" },
		{ "Comment", "// If true the dial will lerp back to zero on release\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "If true the dial will lerp back to zero on release" },
	};
#endif
	void Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit(void* Obj)
	{
		((UVRDialComponent*)Obj)->bLerpBackOnRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease = { "bLerpBackOnRelease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRDialComponent), &Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData[] = {
		{ "Category", "VRDialComponent" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Interactibles/VRDialComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle = { "OnDialHitSnapAngle", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRDialComponent, OnDialHitSnapAngle), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRDialStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRDialComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDenyGripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_BreakDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_HoldingGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_MovementReplicationSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bRepGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InitialRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_GripPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_InteractorRotationAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseDirectHandRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialRotationAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_RotationScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_SnapAngleIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialSnapAngleList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUseSnapAngleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bDialUsesAngleSnap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bUseRollover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CClockwiseMaximumDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_ClockwiseMaximumDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_CurrentDialAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialFinishedLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bIsLerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_DialReturnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bSendDialEventsDuringLerp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_bLerpBackOnRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRDialComponent_Statics::NewProp_OnDialHitSnapAngle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVRDialComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRDialComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRDialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRDialComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRDialComponent_Statics::ClassParams = {
		&UVRDialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRDialComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRDialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRDialComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRDialComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRDialComponent, 481251811);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRDialComponent>()
	{
		return UVRDialComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRDialComponent(Z_Construct_UClass_UVRDialComponent, &UVRDialComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRDialComponent"), false, nullptr, nullptr, nullptr);

	void UVRDialComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InitialRelativeTransform(TEXT("InitialRelativeTransform"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGameplayTags(TEXT("bRepGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));

		const bool bIsValid = true
			&& Name_InitialRelativeTransform == ClassReps[(int32)ENetFields_Private::InitialRelativeTransform].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVRDialComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRDialComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
