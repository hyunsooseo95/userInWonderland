// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UGripMotionControllerComponent;
class USceneComponent;
struct FBPActorGripInformation;
class UVRGripScriptBase;
struct FTransform_NetQuantize;
struct FBPGripPair;
struct FVector;
struct FTransform;
struct FBPAdvGripSettings;
enum class EGripLateUpdateSettings : uint8;
enum class EGripMovementReplicationSettings : uint8;
enum class ESecondaryGripType : uint8;
enum class EGripCollisionType : uint8;
enum class EGripInterfaceTeleportBehavior : uint8;
#ifdef VREXPANSIONPLUGIN_GrippableSkeletalMeshComponent_generated_h
#error "GrippableSkeletalMeshComponent.generated.h already included, missing '#pragma once' in GrippableSkeletalMeshComponent.h"
#endif
#define VREXPANSIONPLUGIN_GrippableSkeletalMeshComponent_generated_h

#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_SPARSE_DATA
#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_RPC_WRAPPERS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInput_Implementation(FKey Key, EInputEvent KeyEvent); \
	virtual void OnEndSecondaryUsed_Implementation(); \
	virtual void OnSecondaryUsed_Implementation(); \
	virtual void OnEndUsed_Implementation(); \
	virtual void OnUsed_Implementation(); \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* GripOwningController, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnChildGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnChildGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual void TickGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime); \
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference); \
	virtual bool RequestsSocketing_Implementation(USceneComponent*& ParentToSocketTo, FName& OptionalSocketName, FTransform_NetQuantize& RelativeTransform); \
	virtual void SetHeld_Implementation(UGripMotionControllerComponent* HoldingController, uint8 GripID, bool bIsHeld); \
	virtual void IsHeld_Implementation(TArray<FBPGripPair>& HoldingControllers, bool& bIsHeld); \
	virtual bool AllowsMultipleGrips_Implementation(); \
	virtual void ClosestGripSlotInRange_Implementation(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, FName& SlotName, UGripMotionControllerComponent* CallingController, FName OverridePrefix); \
	virtual float GripBreakDistance_Implementation(); \
	virtual FBPAdvGripSettings AdvancedGripSettings_Implementation(); \
	virtual void GetGripStiffnessAndDamping_Implementation(float& GripStiffnessOut, float& GripDampingOut); \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation(); \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation(); \
	virtual ESecondaryGripType SecondaryGripType_Implementation(); \
	virtual EGripCollisionType GetPrimaryGripType_Implementation(bool bIsSlot); \
	virtual bool SimulateOnDrop_Implementation(); \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation(); \
	virtual bool DenyGripping_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInput); \
	DECLARE_FUNCTION(execOnEndSecondaryUsed); \
	DECLARE_FUNCTION(execOnSecondaryUsed); \
	DECLARE_FUNCTION(execOnEndUsed); \
	DECLARE_FUNCTION(execOnUsed); \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnChildGripRelease); \
	DECLARE_FUNCTION(execOnChildGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execTickGrip); \
	DECLARE_FUNCTION(execGetGripScripts); \
	DECLARE_FUNCTION(execRequestsSocketing); \
	DECLARE_FUNCTION(execSetHeld); \
	DECLARE_FUNCTION(execIsHeld); \
	DECLARE_FUNCTION(execAllowsMultipleGrips); \
	DECLARE_FUNCTION(execClosestGripSlotInRange); \
	DECLARE_FUNCTION(execGripBreakDistance); \
	DECLARE_FUNCTION(execAdvancedGripSettings); \
	DECLARE_FUNCTION(execGetGripStiffnessAndDamping); \
	DECLARE_FUNCTION(execGripLateUpdateSetting); \
	DECLARE_FUNCTION(execGripMovementReplicationType); \
	DECLARE_FUNCTION(execSecondaryGripType); \
	DECLARE_FUNCTION(execGetPrimaryGripType); \
	DECLARE_FUNCTION(execSimulateOnDrop); \
	DECLARE_FUNCTION(execTeleportBehavior); \
	DECLARE_FUNCTION(execDenyGripping); \
	DECLARE_FUNCTION(execSetGripPriority); \
	DECLARE_FUNCTION(execSetDenyGripping);


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_EVENT_PARMS \
	struct GrippableSkeletalMeshComponent_eventAdvancedGripSettings_Parms \
	{ \
		FBPAdvGripSettings ReturnValue; \
	}; \
	struct GrippableSkeletalMeshComponent_eventAllowsMultipleGrips_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventAllowsMultipleGrips_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventClosestGripSlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bSecondarySlot; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
		FName SlotName; \
		UGripMotionControllerComponent* CallingController; \
		FName OverridePrefix; \
	}; \
	struct GrippableSkeletalMeshComponent_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventGetGripScripts_Parms \
	{ \
		TArray<UVRGripScriptBase*> ArrayReference; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventGetGripScripts_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventGetGripStiffnessAndDamping_Parms \
	{ \
		float GripStiffnessOut; \
		float GripDampingOut; \
	}; \
	struct GrippableSkeletalMeshComponent_eventGetPrimaryGripType_Parms \
	{ \
		bool bIsSlot; \
		EGripCollisionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventGetPrimaryGripType_Parms() \
			: ReturnValue((EGripCollisionType)0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventGripLateUpdateSetting_Parms \
	{ \
		EGripLateUpdateSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventGripLateUpdateSetting_Parms() \
			: ReturnValue((EGripLateUpdateSettings)0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventGripMovementReplicationType_Parms \
	{ \
		EGripMovementReplicationSettings ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventGripMovementReplicationType_Parms() \
			: ReturnValue((EGripMovementReplicationSettings)0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventIsHeld_Parms \
	{ \
		TArray<FBPGripPair> HoldingControllers; \
		bool bIsHeld; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
		bool bWasSocketed; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnInput_Parms \
	{ \
		FKey Key; \
		TEnumAsByte<EInputEvent> KeyEvent; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnSecondaryGrip_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableSkeletalMeshComponent_eventOnSecondaryGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* GripOwningController; \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct GrippableSkeletalMeshComponent_eventRequestsSocketing_Parms \
	{ \
		USceneComponent* ParentToSocketTo; \
		FName OptionalSocketName; \
		FTransform_NetQuantize RelativeTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventRequestsSocketing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventSecondaryGripType_Parms \
	{ \
		ESecondaryGripType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventSecondaryGripType_Parms() \
			: ReturnValue((ESecondaryGripType)0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventSetHeld_Parms \
	{ \
		UGripMotionControllerComponent* HoldingController; \
		uint8 GripID; \
		bool bIsHeld; \
	}; \
	struct GrippableSkeletalMeshComponent_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventTeleportBehavior_Parms \
	{ \
		EGripInterfaceTeleportBehavior ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrippableSkeletalMeshComponent_eventTeleportBehavior_Parms() \
			: ReturnValue((EGripInterfaceTeleportBehavior)0) \
		{ \
		} \
	}; \
	struct GrippableSkeletalMeshComponent_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		float DeltaTime; \
	};


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_CALLBACK_WRAPPERS
#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrippableSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSkeletalMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSkeletalMeshComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUGrippableSkeletalMeshComponent(); \
	friend struct Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UGrippableSkeletalMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGrippableSkeletalMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGrippableSkeletalMeshComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GripLogicScripts=NETFIELD_REP_START, \
		GameplayTags, \
		bRepGripSettingsAndGameplayTags, \
		bReplicateMovement, \
		VRGripInterfaceSettings, \
		NETFIELD_REP_END=VRGripInterfaceSettings	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrippableSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSkeletalMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSkeletalMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSkeletalMeshComponent(UGrippableSkeletalMeshComponent&&); \
	NO_API UGrippableSkeletalMeshComponent(const UGrippableSkeletalMeshComponent&); \
public:


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrippableSkeletalMeshComponent(UGrippableSkeletalMeshComponent&&); \
	NO_API UGrippableSkeletalMeshComponent(const UGrippableSkeletalMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrippableSkeletalMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrippableSkeletalMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrippableSkeletalMeshComponent)


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_21_PROLOG \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_EVENT_PARMS


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_SPARSE_DATA \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_RPC_WRAPPERS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_CALLBACK_WRAPPERS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_INCLASS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_SPARSE_DATA \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_CALLBACK_WRAPPERS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_INCLASS_NO_PURE_DECLS \
	Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGrippableSkeletalMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Thesis___Copy_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
