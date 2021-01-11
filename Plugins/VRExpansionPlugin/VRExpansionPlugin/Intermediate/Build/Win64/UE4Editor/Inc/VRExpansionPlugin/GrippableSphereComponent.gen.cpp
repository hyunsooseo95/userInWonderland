// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableSphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableSphereComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSphereComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
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
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnInput)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_KeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInput_Implementation(Z_Param_Key,EInputEvent(Z_Param_KeyEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnEndSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnSecondaryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnEndUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUsed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnSecondaryGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_ReleasingSecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGripRelease_Implementation(Z_Param_GripOwningController,Z_Param_ReleasingSecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnSecondaryGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GripOwningController);
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryGripComponent);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecondaryGrip_Implementation(Z_Param_GripOwningController,Z_Param_SecondaryGripComponent,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnChildGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnChildGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnGripRelease)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_ReleasingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGripRelease_Implementation(Z_Param_ReleasingController,Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execOnGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execTickGrip)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_GrippingController);
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickGrip_Implementation(Z_Param_GrippingController,Z_Param_Out_GripInformation,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execGetGripScripts)
	{
		P_GET_TARRAY_REF(UVRGripScriptBase*,Z_Param_Out_ArrayReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGripScripts_Implementation(Z_Param_Out_ArrayReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execRequestsSocketing)
	{
		P_GET_OBJECT_REF(USceneComponent,Z_Param_Out_ParentToSocketTo);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OptionalSocketName);
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_RelativeTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestsSocketing_Implementation(Z_Param_Out_ParentToSocketTo,Z_Param_Out_OptionalSocketName,Z_Param_Out_RelativeTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execSetHeld)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_HoldingController);
		P_GET_PROPERTY(FByteProperty,Z_Param_GripID);
		P_GET_UBOOL(Z_Param_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeld_Implementation(Z_Param_HoldingController,Z_Param_GripID,Z_Param_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execIsHeld)
	{
		P_GET_TARRAY_REF(FBPGripPair,Z_Param_Out_HoldingControllers);
		P_GET_UBOOL_REF(Z_Param_Out_bIsHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsHeld_Implementation(Z_Param_Out_HoldingControllers,Z_Param_Out_bIsHeld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execAllowsMultipleGrips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsMultipleGrips_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execClosestGripSlotInRange)
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
	DEFINE_FUNCTION(UGrippableSphereComponent::execGripBreakDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GripBreakDistance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execAdvancedGripSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBPAdvGripSettings*)Z_Param__Result=P_THIS->AdvancedGripSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execGetGripStiffnessAndDamping)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripStiffnessOut);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GripDampingOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGripStiffnessAndDamping_Implementation(Z_Param_Out_GripStiffnessOut,Z_Param_Out_GripDampingOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execGripLateUpdateSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripLateUpdateSettings*)Z_Param__Result=P_THIS->GripLateUpdateSetting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execGripMovementReplicationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripMovementReplicationSettings*)Z_Param__Result=P_THIS->GripMovementReplicationType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execSecondaryGripType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESecondaryGripType*)Z_Param__Result=P_THIS->SecondaryGripType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execGetPrimaryGripType)
	{
		P_GET_UBOOL(Z_Param_bIsSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripCollisionType*)Z_Param__Result=P_THIS->GetPrimaryGripType_Implementation(Z_Param_bIsSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execSimulateOnDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SimulateOnDrop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execTeleportBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGripInterfaceTeleportBehavior*)Z_Param__Result=P_THIS->TeleportBehavior_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execDenyGripping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DenyGripping_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSphereComponent::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	static FName NAME_UGrippableSphereComponent_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings UGrippableSphereComponent::AdvancedGripSettings()
	{
		GrippableSphereComponent_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_AllowsMultipleGrips = FName(TEXT("AllowsMultipleGrips"));
	bool UGrippableSphereComponent::AllowsMultipleGrips()
	{
		GrippableSphereComponent_eventAllowsMultipleGrips_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_AllowsMultipleGrips),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void UGrippableSphereComponent::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		GrippableSphereComponent_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.SlotName=SlotName;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
		SlotName=Parms.SlotName;
	}
	static FName NAME_UGrippableSphereComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UGrippableSphereComponent::DenyGripping()
	{
		GrippableSphereComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_GetGripScripts = FName(TEXT("GetGripScripts"));
	bool UGrippableSphereComponent::GetGripScripts(TArray<UVRGripScriptBase*>& ArrayReference)
	{
		GrippableSphereComponent_eventGetGripScripts_Parms Parms;
		Parms.ArrayReference=ArrayReference;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GetGripScripts),&Parms);
		ArrayReference=Parms.ArrayReference;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void UGrippableSphereComponent::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		GrippableSphereComponent_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_UGrippableSphereComponent_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType UGrippableSphereComponent::GetPrimaryGripType(bool bIsSlot)
	{
		GrippableSphereComponent_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UGrippableSphereComponent::GripBreakDistance()
	{
		GrippableSphereComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UGrippableSphereComponent::GripLateUpdateSetting()
	{
		GrippableSphereComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UGrippableSphereComponent::GripMovementReplicationType()
	{
		GrippableSphereComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_IsHeld = FName(TEXT("IsHeld"));
	void UGrippableSphereComponent::IsHeld(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld)
	{
		GrippableSphereComponent_eventIsHeld_Parms Parms;
		Parms.HoldingControllers=HoldingControllers;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_IsHeld),&Parms);
		HoldingControllers=Parms.HoldingControllers;
		bIsHeld=Parms.bIsHeld;
	}
	static FName NAME_UGrippableSphereComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UGrippableSphereComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableSphereComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UGrippableSphereComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableSphereComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UGrippableSphereComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableSphereComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UGrippableSphereComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnEndUsed),NULL);
	}
	static FName NAME_UGrippableSphereComponent_OnGrip = FName(TEXT("OnGrip"));
	void UGrippableSphereComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		GrippableSphereComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnGrip),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UGrippableSphereComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed)
	{
		GrippableSphereComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		Parms.bWasSocketed=bWasSocketed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnInput = FName(TEXT("OnInput"));
	void UGrippableSphereComponent::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		GrippableSphereComponent_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnInput),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UGrippableSphereComponent::OnSecondaryGrip(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableSphereComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UGrippableSphereComponent::OnSecondaryGripRelease(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		GrippableSphereComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.GripOwningController=GripOwningController;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UGrippableSphereComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UGrippableSphereComponent_OnUsed = FName(TEXT("OnUsed"));
	void UGrippableSphereComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_OnUsed),NULL);
	}
	static FName NAME_UGrippableSphereComponent_RequestsSocketing = FName(TEXT("RequestsSocketing"));
	bool UGrippableSphereComponent::RequestsSocketing(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform)
	{
		GrippableSphereComponent_eventRequestsSocketing_Parms Parms;
		Parms.ParentToSocketTo=ParentToSocketTo;
		Parms.OptionalSocketName=OptionalSocketName;
		Parms.RelativeTransform=RelativeTransform;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_RequestsSocketing),&Parms);
		ParentToSocketTo=Parms.ParentToSocketTo;
		OptionalSocketName=Parms.OptionalSocketName;
		RelativeTransform=Parms.RelativeTransform;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UGrippableSphereComponent::SecondaryGripType()
	{
		GrippableSphereComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_SetHeld = FName(TEXT("SetHeld"));
	void UGrippableSphereComponent::SetHeld(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld)
	{
		GrippableSphereComponent_eventSetHeld_Parms Parms;
		Parms.HoldingController=HoldingController;
		Parms.GripID=GripID;
		Parms.bIsHeld=bIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_SetHeld),&Parms);
	}
	static FName NAME_UGrippableSphereComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UGrippableSphereComponent::SimulateOnDrop()
	{
		GrippableSphereComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UGrippableSphereComponent::TeleportBehavior()
	{
		GrippableSphereComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGrippableSphereComponent_TickGrip = FName(TEXT("TickGrip"));
	void UGrippableSphereComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		GrippableSphereComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UGrippableSphereComponent_TickGrip),&Parms);
	}
	void UGrippableSphereComponent::StaticRegisterNativesUGrippableSphereComponent()
	{
		UClass* Class = UGrippableSphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", &UGrippableSphereComponent::execAdvancedGripSettings },
			{ "AllowsMultipleGrips", &UGrippableSphereComponent::execAllowsMultipleGrips },
			{ "ClosestGripSlotInRange", &UGrippableSphereComponent::execClosestGripSlotInRange },
			{ "DenyGripping", &UGrippableSphereComponent::execDenyGripping },
			{ "GetGripScripts", &UGrippableSphereComponent::execGetGripScripts },
			{ "GetGripStiffnessAndDamping", &UGrippableSphereComponent::execGetGripStiffnessAndDamping },
			{ "GetPrimaryGripType", &UGrippableSphereComponent::execGetPrimaryGripType },
			{ "GripBreakDistance", &UGrippableSphereComponent::execGripBreakDistance },
			{ "GripLateUpdateSetting", &UGrippableSphereComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", &UGrippableSphereComponent::execGripMovementReplicationType },
			{ "IsHeld", &UGrippableSphereComponent::execIsHeld },
			{ "OnChildGrip", &UGrippableSphereComponent::execOnChildGrip },
			{ "OnChildGripRelease", &UGrippableSphereComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", &UGrippableSphereComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", &UGrippableSphereComponent::execOnEndUsed },
			{ "OnGrip", &UGrippableSphereComponent::execOnGrip },
			{ "OnGripRelease", &UGrippableSphereComponent::execOnGripRelease },
			{ "OnInput", &UGrippableSphereComponent::execOnInput },
			{ "OnSecondaryGrip", &UGrippableSphereComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", &UGrippableSphereComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", &UGrippableSphereComponent::execOnSecondaryUsed },
			{ "OnUsed", &UGrippableSphereComponent::execOnUsed },
			{ "RequestsSocketing", &UGrippableSphereComponent::execRequestsSocketing },
			{ "SecondaryGripType", &UGrippableSphereComponent::execSecondaryGripType },
			{ "SetDenyGripping", &UGrippableSphereComponent::execSetDenyGripping },
			{ "SetGripPriority", &UGrippableSphereComponent::execSetGripPriority },
			{ "SetHeld", &UGrippableSphereComponent::execSetHeld },
			{ "SimulateOnDrop", &UGrippableSphereComponent::execSimulateOnDrop },
			{ "TeleportBehavior", &UGrippableSphereComponent::execTeleportBehavior },
			{ "TickGrip", &UGrippableSphereComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get the advanced physics settings for this grip\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Get the advanced physics settings for this grip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "AdvancedGripSettings", nullptr, nullptr, sizeof(GrippableSphereComponent_eventAdvancedGripSettings_Parms), Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventAllowsMultipleGrips_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventAllowsMultipleGrips_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Check if an object allows multiple grips at one time\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Check if an object allows multiple grips at one time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "AllowsMultipleGrips", nullptr, nullptr, sizeof(GrippableSphereComponent_eventAllowsMultipleGrips_Parms), Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix = { "OverridePrefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController = { "CallingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventClosestGripSlotInRange_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform = { "SlotWorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange = { "bHadSlotInRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot = { "bSecondarySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventClosestGripSlotInRange_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_OverridePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_CallingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_SlotWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bHadSlotInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_bSecondarySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get closest primary slot in range\n" },
		{ "CPP_Default_CallingController", "None" },
		{ "CPP_Default_OverridePrefix", "None" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Get closest primary slot in range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "ClosestGripSlotInRange", nullptr, nullptr, sizeof(GrippableSphereComponent_eventClosestGripSlotInRange_Parms), Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventDenyGripping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventDenyGripping_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Set up as deny instead of allow so that default allows for gripping\n" },
		{ "DisplayName", "IsDenyingGrips" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "DenyGripping", nullptr, nullptr, sizeof(GrippableSphereComponent_eventDenyGripping_Parms), Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics
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
	void Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventGetGripScripts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventGetGripScripts_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference = { "ArrayReference", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGetGripScripts_Parms, ArrayReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner = { "ArrayReference", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::NewProp_ArrayReference_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Get grip scripts\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Get grip scripts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GetGripScripts", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGetGripScripts_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut = { "GripDampingOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut = { "GripStiffnessOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripDampingOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::NewProp_GripStiffnessOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What grip stiffness and damping to use if using a physics constraint\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "What grip stiffness and damping to use if using a physics constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GetGripStiffnessAndDamping", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGetGripStiffnessAndDamping_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot = { "bIsSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventGetPrimaryGripType_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::NewProp_bIsSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Grip type to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Grip type to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GetPrimaryGripType", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGetPrimaryGripType_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// What distance to break a grip at (only relevent with physics enabled grips\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GripBreakDistance", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGripBreakDistance_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define the late update setting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Define the late update setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GripLateUpdateSetting", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGripLateUpdateSetting_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Define which movement repliation setting to use\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Define which movement repliation setting to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "GripMovementReplicationType", nullptr, nullptr, sizeof(GrippableSphereComponent_eventGripMovementReplicationType_Parms), Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HoldingControllers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoldingControllers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventIsHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventIsHeld_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_HoldingControllers = { "HoldingControllers", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventIsHeld_Parms, HoldingControllers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_HoldingControllers_Inner = { "HoldingControllers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPGripPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_HoldingControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::NewProp_HoldingControllers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object is held and if so, which controllers are holding it\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Returns if the object is held and if so, which controllers are holding it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "IsHeld", nullptr, nullptr, sizeof(GrippableSphereComponent_eventIsHeld_Parms), Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_IsHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnChildGrip", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnChildGrip_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics
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
	void Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventOnChildGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventOnChildGripRelease_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when child component is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnChildGripRelease", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnChildGripRelease_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnEndSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to stop using an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Call to stop using an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnEndUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnGrip", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnGrip_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics
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
	void Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventOnGripRelease_Parms*)Obj)->bWasSocketed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventOnGripRelease_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_ReleasingController = { "ReleasingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_ReleasingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_bWasSocketed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::NewProp_ReleasingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnGripRelease", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnGripRelease_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::NewProp_KeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to send an action event to the object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Call to send an action event to the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnInput", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnInput_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent = { "SecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGrip_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_SecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnSecondaryGrip", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnSecondaryGrip_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent = { "ReleasingSecondaryGripComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController = { "GripOwningController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventOnSecondaryGripRelease_Parms, GripOwningController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_ReleasingSecondaryGripComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::NewProp_GripOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered on the interfaced object when secondary grip is released\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnSecondaryGripRelease", nullptr, nullptr, sizeof(GrippableSphereComponent_eventOnSecondaryGripRelease_Parms), Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnSecondaryUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Call to use an object\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Call to use an object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "OnUsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics
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
	void Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventRequestsSocketing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventRequestsSocketing_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventRequestsSocketing_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName = { "OptionalSocketName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventRequestsSocketing_Parms, OptionalSocketName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo = { "ParentToSocketTo", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventRequestsSocketing_Parms, ParentToSocketTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_OptionalSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::NewProp_ParentToSocketTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Returns if the object wants to be socketed\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Returns if the object wants to be socketed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "RequestsSocketing", nullptr, nullptr, sizeof(GrippableSphereComponent_eventRequestsSocketing_Parms), Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Secondary grip type\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Secondary grip type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "SecondaryGripType", nullptr, nullptr, sizeof(GrippableSphereComponent_eventSecondaryGripType_Parms), Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics
	{
		struct GrippableSphereComponent_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventSetDenyGripping_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(GrippableSphereComponent_eventSetDenyGripping_Parms), Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics
	{
		struct GrippableSphereComponent_eventSetGripPriority_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(GrippableSphereComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics
	{
		static void NewProp_bIsHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_bIsHeld_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventSetHeld_Parms*)Obj)->bIsHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_bIsHeld = { "bIsHeld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventSetHeld_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_bIsHeld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_GripID = { "GripID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventSetHeld_Parms, GripID), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_HoldingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_HoldingController = { "HoldingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_HoldingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_HoldingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_bIsHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_GripID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::NewProp_HoldingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "/*BlueprintCallable,*/" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "BlueprintCallable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "SetHeld", nullptr, nullptr, sizeof(GrippableSphereComponent_eventSetHeld_Parms), Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_SetHeld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GrippableSphereComponent_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GrippableSphereComponent_eventSimulateOnDrop_Parms), &Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Should this object simulate on drop\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Should this object simulate on drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "SimulateOnDrop", nullptr, nullptr, sizeof(GrippableSphereComponent_eventSimulateOnDrop_Parms), Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// How an interfaced object behaves when teleporting\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "How an interfaced object behaves when teleporting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "TeleportBehavior", nullptr, nullptr, sizeof(GrippableSphereComponent_eventTeleportBehavior_Parms), Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GrippingController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GrippingController = { "GrippingController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrippableSphereComponent_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GrippingController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GrippingController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GripInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::NewProp_GrippingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSphereComponent, nullptr, "TickGrip", nullptr, nullptr, sizeof(GrippableSphereComponent_eventTickGrip_Parms), Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSphereComponent_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrippableSphereComponent_TickGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrippableSphereComponent_NoRegister()
	{
		return UGrippableSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrippableSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripLogicScripts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrippableSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrippableSphereComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrippableSphereComponent_AdvancedGripSettings, "AdvancedGripSettings" }, // 3858742925
		{ &Z_Construct_UFunction_UGrippableSphereComponent_AllowsMultipleGrips, "AllowsMultipleGrips" }, // 4194410644
		{ &Z_Construct_UFunction_UGrippableSphereComponent_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 3271824817
		{ &Z_Construct_UFunction_UGrippableSphereComponent_DenyGripping, "DenyGripping" }, // 2790603032
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GetGripScripts, "GetGripScripts" }, // 3862748034
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 4028062609
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GetPrimaryGripType, "GetPrimaryGripType" }, // 973795139
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GripBreakDistance, "GripBreakDistance" }, // 3394767814
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 2264069606
		{ &Z_Construct_UFunction_UGrippableSphereComponent_GripMovementReplicationType, "GripMovementReplicationType" }, // 4008020653
		{ &Z_Construct_UFunction_UGrippableSphereComponent_IsHeld, "IsHeld" }, // 2651521867
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnChildGrip, "OnChildGrip" }, // 2338153130
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnChildGripRelease, "OnChildGripRelease" }, // 1849178379
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 547204766
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnEndUsed, "OnEndUsed" }, // 194551407
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnGrip, "OnGrip" }, // 1074675598
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnGripRelease, "OnGripRelease" }, // 1084454678
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnInput, "OnInput" }, // 1064470370
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGrip, "OnSecondaryGrip" }, // 3390241218
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 1189092991
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnSecondaryUsed, "OnSecondaryUsed" }, // 882327301
		{ &Z_Construct_UFunction_UGrippableSphereComponent_OnUsed, "OnUsed" }, // 3724980285
		{ &Z_Construct_UFunction_UGrippableSphereComponent_RequestsSocketing, "RequestsSocketing" }, // 2478142567
		{ &Z_Construct_UFunction_UGrippableSphereComponent_SecondaryGripType, "SecondaryGripType" }, // 2282089315
		{ &Z_Construct_UFunction_UGrippableSphereComponent_SetDenyGripping, "SetDenyGripping" }, // 1415429377
		{ &Z_Construct_UFunction_UGrippableSphereComponent_SetGripPriority, "SetGripPriority" }, // 1032443873
		{ &Z_Construct_UFunction_UGrippableSphereComponent_SetHeld, "SetHeld" }, // 1445369346
		{ &Z_Construct_UFunction_UGrippableSphereComponent_SimulateOnDrop, "SimulateOnDrop" }, // 2065748632
		{ &Z_Construct_UFunction_UGrippableSphereComponent_TeleportBehavior, "TeleportBehavior" }, // 4056678846
		{ &Z_Construct_UFunction_UGrippableSphereComponent_TickGrip, "TickGrip" }, // 3318684722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Grippables/GrippableSphereComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UGrippableSphereComponent*)Obj)->bReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableSphereComponent), &Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((UGrippableSphereComponent*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGrippableSphereComponent), &Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Called when a object is dropped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n// If you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
		{ "ToolTip", "Called when a object is gripped\nIf you override the OnGrip event then you will need to call the parent implementation or this event will not fire!!" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnGripped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001000800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrippableSphereComponent, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrippableSphereComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_VRGripInterfaceSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnSecondaryGripAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_OnGripped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSphereComponent_Statics::NewProp_GripLogicScripts_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGrippableSphereComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableSphereComponent, IVRGripInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableSphereComponent, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrippableSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrippableSphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrippableSphereComponent_Statics::ClassParams = {
		&UGrippableSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrippableSphereComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrippableSphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrippableSphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrippableSphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrippableSphereComponent, 2763826143);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGrippableSphereComponent>()
	{
		return UGrippableSphereComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrippableSphereComponent(Z_Construct_UClass_UGrippableSphereComponent, &UGrippableSphereComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UGrippableSphereComponent"), false, nullptr, nullptr, nullptr);

	void UGrippableSphereComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGrippableSphereComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableSphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
