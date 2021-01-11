// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRBaseCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics
	{
		struct _Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms
		{
			FVector FinalStepUpLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalStepUpLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::NewProp_FinalStepUpLocation = { "FinalStepUpLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms, FinalStepUpLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::NewProp_FinalStepUpLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when to handle a climbing step up, will override default step up logic if is bound to. */" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Delegate for notification when to handle a climbing step up, will override default step up logic if is bound to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnPerformClimbingStepUp__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRExpansionPlugin_eventVROnPerformClimbingStepUp_Parms), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRMoveActionDataReq_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionDataReq>()
	{
		return EVRMoveActionDataReq_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionDataReq(EVRMoveActionDataReq_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionDataReq"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Hash() { return 2666996403U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionDataReq"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "VRMOVEACTIONDATA_LOC.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC" },
				{ "VRMOVEACTIONDATA_LOC_AND_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT" },
				{ "VRMOVEACTIONDATA_None.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_None" },
				{ "VRMOVEACTIONDATA_ROT.Name", "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveActionDataReq",
				"EVRMoveActionDataReq",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveActionVelocityRetention_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionVelocityRetention"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveActionVelocityRetention>()
	{
		return EVRMoveActionVelocityRetention_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionVelocityRetention(EVRMoveActionVelocityRetention_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionVelocityRetention"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Hash() { return 1476273911U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionVelocityRetention"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None },
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear },
				{ "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn", (int64)EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// What to do with the players velocity when specific move actions are called\n// Default of none leaves it as is, for people with 0 ramp up time on acelleration\n// This likely won't be that useful.\n" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "What to do with the players velocity when specific move actions are called\nDefault of none leaves it as is, for people with 0 ramp up time on acelleration\nThis likely won't be that useful." },
				{ "VRMOVEACTION_Velocity_Clear.Comment", "// Clears velocity entirely\n" },
				{ "VRMOVEACTION_Velocity_Clear.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Clear" },
				{ "VRMOVEACTION_Velocity_Clear.ToolTip", "Clears velocity entirely" },
				{ "VRMOVEACTION_Velocity_None.Comment", "// Leaves velocity as is\n" },
				{ "VRMOVEACTION_Velocity_None.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_None" },
				{ "VRMOVEACTION_Velocity_None.ToolTip", "Leaves velocity as is" },
				{ "VRMOVEACTION_Velocity_Turn.Comment", "// Rotates the velocity to match new heading\n" },
				{ "VRMOVEACTION_Velocity_Turn.Name", "EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn" },
				{ "VRMOVEACTION_Velocity_Turn.ToolTip", "Rotates the velocity to match new heading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveActionVelocityRetention",
				"EVRMoveActionVelocityRetention",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRMoveAction>()
	{
		return EVRMoveAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveAction(EVRMoveAction_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Hash() { return 24559407U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveAction"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
				{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
				{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
				{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
				{ "EVRMoveAction::VRMOVEACTION_SetRotation", (int64)EVRMoveAction::VRMOVEACTION_SetRotation },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * VRSimpleCharacterMovementComponent handles movement logic for the associated Character owner.\n * It supports various movement modes including: walking, falling, swimming, flying, custom.\n *\n * Movement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\n * based on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n *\n * Networking is fully implemented, with server-client correction and prediction included.\n *\n * @see ACharacter, UPawnMovementComponent\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/\n */" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "VRSimpleCharacterMovementComponent handles movement logic for the associated Character owner.\nIt supports various movement modes including: walking, falling, swimming, flying, custom.\n\nMovement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\nbased on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n\nNetworking is fully implemented, with server-client correction and prediction included.\n\n@see ACharacter, UPawnMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
				{ "VRMOVEACTION_CUSTOM1.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM1" },
				{ "VRMOVEACTION_CUSTOM10.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM10" },
				{ "VRMOVEACTION_CUSTOM2.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM2" },
				{ "VRMOVEACTION_CUSTOM3.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM3" },
				{ "VRMOVEACTION_CUSTOM4.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM4" },
				{ "VRMOVEACTION_CUSTOM5.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM5" },
				{ "VRMOVEACTION_CUSTOM6.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM6" },
				{ "VRMOVEACTION_CUSTOM7.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM7" },
				{ "VRMOVEACTION_CUSTOM8.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM8" },
				{ "VRMOVEACTION_CUSTOM9.Name", "EVRMoveAction::VRMOVEACTION_CUSTOM9" },
				{ "VRMOVEACTION_None.Name", "EVRMoveAction::VRMOVEACTION_None" },
				{ "VRMOVEACTION_SetRotation.Name", "EVRMoveAction::VRMOVEACTION_SetRotation" },
				{ "VRMOVEACTION_SnapTurn.Name", "EVRMoveAction::VRMOVEACTION_SnapTurn" },
				{ "VRMOVEACTION_StopAllMovement.Name", "EVRMoveAction::VRMOVEACTION_StopAllMovement" },
				{ "VRMOVEACTION_Teleport.Name", "EVRMoveAction::VRMOVEACTION_Teleport" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRMoveAction",
				"EVRMoveAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRConditionalMoveRep2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep2, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep2>()
{
	return FVRConditionalMoveRep2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep2(FVRConditionalMoveRep2::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep2"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep2")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep2;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ClientPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ClientYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientBaseBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll = { "ClientRoll", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientRoll), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch = { "ClientPitch", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw = { "ClientYaw", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName = { "ClientBaseBoneName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData[] = {
		{ "Comment", "// Moved these here to avoid having to duplicate tons of properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Moved these here to avoid having to duplicate tons of properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase = { "ClientMovementBase", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep2, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::NewProp_ClientMovementBase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep2",
		sizeof(FVRConditionalMoveRep2),
		alignof(FVRConditionalMoveRep2),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep2"), sizeof(FVRConditionalMoveRep2), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep2_Hash() { return 2239817801U; }
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRConditionalMoveRep>()
{
	return FVRConditionalMoveRep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep(FVRConditionalMoveRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep;
	struct Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray = { "MoveActionArray", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionArray), Z_Construct_UScriptStruct_FVRMoveActionArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity = { "RequestedVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector = { "CustomVRInputVector", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_MoveActionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_RequestedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::NewProp_CustomVRInputVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRConditionalMoveRep",
		sizeof(FVRConditionalMoveRep),
		alignof(FVRConditionalMoveRep),
		Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRConditionalMoveRep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_Hash() { return 940028756U; }
class UScriptStruct* FVRMoveActionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionArray, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionArray>()
{
	return FVRMoveActionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionArray(FVRMoveActionArray::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionArray"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRMoveActionArray")),new UScriptStruct::TCppStructOps<FVRMoveActionArray>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionArray;
	struct Z_Construct_UScriptStruct_FVRMoveActionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions = { "MoveActions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionArray, MoveActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner = { "MoveActions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::NewProp_MoveActions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionArray",
		sizeof(FVRMoveActionArray),
		alignof(FVRMoveActionArray),
		Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionArray"), sizeof(FVRMoveActionArray), Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionArray_Hash() { return 2739632823U; }
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash());
	}
	return Singleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FVRMoveActionContainer>()
{
	return FVRMoveActionContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionContainer(FVRMoveActionContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRMoveActionContainer")),new UScriptStruct::TCppStructOps<FVRMoveActionContainer>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer;
	struct Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelRetentionSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelRetentionSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelRetentionSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting = { "VelRetentionSetting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, VelRetentionSetting), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot = { "MoveActionRot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc = { "MoveActionLoc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq = { "MoveActionDataReq", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_VelRetentionSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveActionDataReq_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::NewProp_MoveAction_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"VRMoveActionContainer",
		sizeof(FVRMoveActionContainer),
		alignof(FVRMoveActionContainer),
		Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMoveActionContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_Hash() { return 637070417U; }
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execClientVeryShortAdjustPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector,Z_Param_NewLoc);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewBaseBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientVeryShortAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execClientAdjustPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStamp);
		P_GET_STRUCT(FVector,Z_Param_NewLoc);
		P_GET_STRUCT(FVector,Z_Param_NewVel);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewBaseBoneName);
		P_GET_UBOOL(Z_Param_bHasBase);
		P_GET_UBOOL(Z_Param_bBaseRelativePosition);
		P_GET_PROPERTY(FByteProperty,Z_Param_ServerMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAdjustPosition_Implementation(Z_Param_TimeStamp,Z_Param_NewLoc,Z_Param_NewVel,Z_Param_NewBase,Z_Param_NewBaseBoneName,Z_Param_bHasBase,Z_Param_bBaseRelativePosition,Z_Param_ServerMovementMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execGetReplicatedMovementMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVRConjoinedMovementModes*)Z_Param__Result=P_THIS->GetReplicatedMovementMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode)
	{
		P_GET_ENUM(EVRConjoinedMovementModes,Z_Param_NewMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicatedMovementMode(EVRConjoinedMovementModes(Z_Param_NewMovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetClimbingMode)
	{
		P_GET_UBOOL(Z_Param_bIsClimbing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClimbingMode(Z_Param_bIsClimbing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execGetCustomInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCustomInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execRewindVRMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->RewindVRMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom)
	{
		P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionToPerform);
		P_GET_ENUM(EVRMoveActionDataReq,Z_Param_DataRequirementsForMoveAction);
		P_GET_STRUCT(FVector,Z_Param_MoveActionVector);
		P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMoveAction_Custom(EVRMoveAction(Z_Param_MoveActionToPerform),EVRMoveActionDataReq(Z_Param_DataRequirementsForMoveAction),Z_Param_MoveActionVector,Z_Param_MoveActionRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMoveAction_StopAllMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport)
	{
		P_GET_STRUCT(FVector,Z_Param_TeleportLocation);
		P_GET_STRUCT(FRotator,Z_Param_TeleportRotation);
		P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
		P_GET_UBOOL(Z_Param_bSkipEncroachmentCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMoveAction_Teleport(Z_Param_TeleportLocation,Z_Param_TeleportRotation,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bSkipEncroachmentCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SetRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
		P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
		P_GET_UBOOL(Z_Param_bFlagGripTeleport);
		P_GET_UBOOL(Z_Param_bFlagCharacterTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMoveAction_SetRotation(Z_Param_NewYaw,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bFlagGripTeleport,Z_Param_bFlagCharacterTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnapTurnDeltaYaw);
		P_GET_ENUM(EVRMoveActionVelocityRetention,Z_Param_VelocityRetention);
		P_GET_UBOOL(Z_Param_bFlagGripTeleport);
		P_GET_UBOOL(Z_Param_bFlagCharacterTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformMoveAction_SnapTurn(Z_Param_SnapTurnDeltaYaw,EVRMoveActionVelocityRetention(Z_Param_VelocityRetention),Z_Param_bFlagGripTeleport,Z_Param_bFlagCharacterTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execClearCustomReplicatedMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomReplicatedMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement)
	{
		P_GET_STRUCT(FVector,Z_Param_Movement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomReplicatedMovement(Z_Param_Movement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRBaseCharacterMovementComponent::execSetCrouchedHalfHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCrouchedHalfHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrouchedHalfHeight(Z_Param_NewCrouchedHalfHeight);
		P_NATIVE_END;
	}
	static FName NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition = FName(TEXT("ClientAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition),&Parms);
	}
	static FName NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition = FName(TEXT("ClientVeryShortAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition),&Parms);
	}
	void UVRBaseCharacterMovementComponent::StaticRegisterNativesUVRBaseCharacterMovementComponent()
	{
		UClass* Class = UVRBaseCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomReplicatedMovement", &UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement },
			{ "ClearCustomReplicatedMovement", &UVRBaseCharacterMovementComponent::execClearCustomReplicatedMovement },
			{ "ClientAdjustPosition", &UVRBaseCharacterMovementComponent::execClientAdjustPosition },
			{ "ClientVeryShortAdjustPosition", &UVRBaseCharacterMovementComponent::execClientVeryShortAdjustPosition },
			{ "GetCustomInputVector", &UVRBaseCharacterMovementComponent::execGetCustomInputVector },
			{ "GetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execGetReplicatedMovementMode },
			{ "PerformMoveAction_Custom", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom },
			{ "PerformMoveAction_SetRotation", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SetRotation },
			{ "PerformMoveAction_SnapTurn", &UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn },
			{ "PerformMoveAction_StopAllMovement", &UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement },
			{ "PerformMoveAction_Teleport", &UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport },
			{ "RewindVRMovement", &UVRBaseCharacterMovementComponent::execRewindVRMovement },
			{ "SetClimbingMode", &UVRBaseCharacterMovementComponent::execSetClimbingMode },
			{ "SetCrouchedHalfHeight", &UVRBaseCharacterMovementComponent::execSetCrouchedHalfHeight },
			{ "SetReplicatedMovementMode", &UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics
	{
		struct VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms
		{
			FVector Movement;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::NewProp_Movement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
		{ "Comment", "// Add in the custom replicated movement that climbing mode uses, this is a cutom vector that is applied to character movements\n// on the next tick as a movement input..\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Add in the custom replicated movement that climbing mode uses, this is a cutom vector that is applied to character movements\non the next tick as a movement input.." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "AddCustomReplicatedMovement", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
		{ "Comment", "// Clears the custom replicated movement, can be used to cancel movements if the mode changes\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Clears the custom replicated movement, can be used to cancel movements if the mode changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "ClearCustomReplicatedMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName = { "NewBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewVel = { "NewVel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment.  */" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "ClientAdjustPosition", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode;
		static void NewProp_bBaseRelativePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition;
		static void NewProp_bHasBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode = { "ServerMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition = { "bBaseRelativePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bHasBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase = { "bHasBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName = { "NewBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase = { "NewBase", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_ServerMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bBaseRelativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_bHasBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_NewLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Bandwidth saving version, when velocity is zeroed */" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Bandwidth saving version, when velocity is zeroed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "ClientVeryShortAdjustPosition", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics
	{
		struct VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Gets the current CustomInputVector for use in custom movement modes\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Gets the current CustomInputVector for use in custom movement modes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "GetCustomInputVector", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventGetCustomInputVector_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "/*\n\x09* Call this to convert the current movement mode to a Conjoined one for reference\n\x09*\n\x09* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n\x09* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n\x09* For a total of 6 Custom movement modes past the currently implemented plugin ones.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "* Call this to convert the current movement mode to a Conjoined one for reference\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "GetReplicatedMovementMode", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventGetReplicatedMovementMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms
		{
			EVRMoveAction MoveActionToPerform;
			EVRMoveActionDataReq DataRequirementsForMoveAction;
			FVector MoveActionVector;
			FRotator MoveActionRotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVector;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataRequirementsForMoveAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataRequirementsForMoveAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionToPerform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionToPerform_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator = { "MoveActionRotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector = { "MoveActionVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction = { "DataRequirementsForMoveAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, DataRequirementsForMoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform = { "MoveActionToPerform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionToPerform), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_DataRequirementsForMoveAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::NewProp_MoveActionToPerform_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Perform a custom moveaction that you define, will call the OnCustomMoveActionPerformed event in the character when processed so you can run your own logic\n// Be sure to set the minimum data replication requirements for your move action in order to save on replication.\n// Move actions are currently limited to 1 per frame.\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a custom moveaction that you define, will call the OnCustomMoveActionPerformed event in the character when processed so you can run your own logic\nBe sure to set the minimum data replication requirements for your move action in order to save on replication.\nMove actions are currently limited to 1 per frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_Custom", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms
		{
			float NewYaw;
			EVRMoveActionVelocityRetention VelocityRetention;
			bool bFlagGripTeleport;
			bool bFlagCharacterTeleport;
		};
		static void NewProp_bFlagCharacterTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlagCharacterTeleport;
		static void NewProp_bFlagGripTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlagGripTeleport;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms*)Obj)->bFlagCharacterTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport = { "bFlagCharacterTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms*)Obj)->bFlagGripTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport = { "bFlagGripTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagCharacterTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_bFlagGripTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_VelocityRetention_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::NewProp_NewYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Perform a rotation set in line with the move actions system\n// This node specifically sets the FACING direction to a value, where your HMD is pointed\n" },
		{ "CPP_Default_bFlagCharacterTeleport", "false" },
		{ "CPP_Default_bFlagGripTeleport", "false" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a rotation set in line with the move actions system\nThis node specifically sets the FACING direction to a value, where your HMD is pointed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SetRotation", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SetRotation_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms
		{
			float SnapTurnDeltaYaw;
			EVRMoveActionVelocityRetention VelocityRetention;
			bool bFlagGripTeleport;
			bool bFlagCharacterTeleport;
		};
		static void NewProp_bFlagCharacterTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlagCharacterTeleport;
		static void NewProp_bFlagGripTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlagGripTeleport;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTurnDeltaYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms*)Obj)->bFlagCharacterTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport = { "bFlagCharacterTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms*)Obj)->bFlagGripTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport = { "bFlagGripTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw = { "SnapTurnDeltaYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, SnapTurnDeltaYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagCharacterTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_bFlagGripTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_VelocityRetention_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::NewProp_SnapTurnDeltaYaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Perform a snap turn in line with the move action system\n" },
		{ "CPP_Default_bFlagCharacterTeleport", "false" },
		{ "CPP_Default_bFlagGripTeleport", "false" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a snap turn in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_SnapTurn", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Perform StopAllMovementImmediately in line with the move action system\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform StopAllMovementImmediately in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_StopAllMovement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms
		{
			FVector TeleportLocation;
			FRotator TeleportRotation;
			EVRMoveActionVelocityRetention VelocityRetention;
			bool bSkipEncroachmentCheck;
		};
		static void NewProp_bSkipEncroachmentCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipEncroachmentCheck;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityRetention;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityRetention_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms*)Obj)->bSkipEncroachmentCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck = { "bSkipEncroachmentCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention = { "VelocityRetention", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, VelocityRetention), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionVelocityRetention, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation = { "TeleportRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation = { "TeleportLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_bSkipEncroachmentCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_VelocityRetention_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::NewProp_TeleportLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Perform a teleport in line with the move action system\n" },
		{ "CPP_Default_bSkipEncroachmentCheck", "false" },
		{ "CPP_Default_VelocityRetention", "VRMOVEACTION_Velocity_None" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Perform a teleport in line with the move action system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "PerformMoveAction_Teleport", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics
	{
		struct VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Rewind the relative movement that we had with the HMD, this is exposed to Blueprint so that custom movement modes can use it to rewind prior to movement actions.\n// Returns the Vector required to get back to the original position (for custom movement modes)\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Rewind the relative movement that we had with the HMD, this is exposed to Blueprint so that custom movement modes can use it to rewind prior to movement actions.\nReturns the Vector required to get back to the original position (for custom movement modes)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "RewindVRMovement", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventRewindVRMovement_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms
		{
			bool bIsClimbing;
		};
		static void NewProp_bIsClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
	{
		((VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms*)Obj)->bIsClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::NewProp_bIsClimbing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetClimbingMode", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms
		{
			float NewCrouchedHalfHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCrouchedHalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewCrouchedHalfHeight = { "NewCrouchedHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms, NewCrouchedHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::NewProp_NewCrouchedHalfHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Sets the crouching half height since it isn't exposed during runtime to blueprints\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Sets the crouching half height since it isn't exposed during runtime to blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetCrouchedHalfHeight", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics
	{
		struct VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes NewMovementMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::NewProp_NewMovementMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "/*\n\x09* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n\x09*\n\x09* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n\x09* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n\x09* For a total of 6 Custom movement modes past the currently implemented plugin ones.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, nullptr, "SetReplicatedMovementMode", nullptr, nullptr, sizeof(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms), Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister()
	{
		return UVRBaseCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[];
#endif
		static void NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VRLowGravIgnoresDefaultFluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravWallFrictionScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRLowGravWallFrictionScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPostClimbMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPostClimbMovement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPostClimbMovement_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VREdgeRejectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VREdgeRejectDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingMaxReleaseVelocitySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[];
#endif
		static void NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetDefaultPostClimbMovementOnStepUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMaxSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampClimbingStepUp_MetaData[];
#endif
		static void NewProp_bClampClimbingStepUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampClimbingStepUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingEdgeRejectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingEdgeRejectDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunControlRotationInMovementComponent_MetaData[];
#endif
		static void NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunControlRotationInMovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[];
#endif
		static void NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSimulatingComponentsInFloorCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData[];
#endif
		static void NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoldPositionOnTrackingLossThresholdHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingLossThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackingLossThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRWallSlideScaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRWallSlideScaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPerformClimbingStepUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformClimbingStepUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseVRCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseVRCharacterOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement, "AddCustomReplicatedMovement" }, // 2417315116
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement, "ClearCustomReplicatedMovement" }, // 126434015
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition, "ClientAdjustPosition" }, // 1393845790
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition, "ClientVeryShortAdjustPosition" }, // 3509031162
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetCustomInputVector, "GetCustomInputVector" }, // 80035384
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_GetReplicatedMovementMode, "GetReplicatedMovementMode" }, // 2996964630
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom, "PerformMoveAction_Custom" }, // 2749784294
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation, "PerformMoveAction_SetRotation" }, // 2889258329
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn, "PerformMoveAction_SnapTurn" }, // 3934409227
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement, "PerformMoveAction_StopAllMovement" }, // 1671688203
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport, "PerformMoveAction_Teleport" }, // 3148950947
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_RewindVRMovement, "RewindVRMovement" }, // 105768422
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode, "SetClimbingMode" }, // 1491170396
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight, "SetCrouchedHalfHeight" }, // 2660676212
		{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode, "SetReplicatedMovementMode" }, // 835151433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRBaseCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
		{ "Comment", "// If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->VRLowGravIgnoresDefaultFluidFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction = { "VRLowGravIgnoresDefaultFluidFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData[] = {
		{ "Category", "VRMovement|LowGrav" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Setting this below 1.0 will change how fast you de-accelerate when touching a wall\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Setting this below 1.0 will change how fast you de-accelerate when touching a wall" },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler = { "VRLowGravWallFrictionScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRLowGravWallFrictionScaler), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement = { "DefaultPostClimbMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, DefaultPostClimbMovement), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "/* Custom distance that is required before accepting a walking stepup\n\x09*  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n\x09*  Do NOT set to larger than capsule radius!\n\x09*  #TODO: Port to SimpleCharacter as well\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Custom distance that is required before accepting a walking stepup\n      *  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance = { "VREdgeRejectDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VREdgeRejectDistance), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// Max velocity on releasing a climbing grip\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Max velocity on releasing a climbing grip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize = { "VRClimbingMaxReleaseVelocitySize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingMaxReleaseVelocitySize), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// If true will automatically set falling when a stepup occurs during climbing\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will automatically set falling when a stepup occurs during climbing" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->SetDefaultPostClimbMovementOnStepUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp = { "SetDefaultPostClimbMovementOnStepUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// Maximum X/Y vector size to use when climbing stepping up (prevents very deep step ups from large movements).\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Maximum X/Y vector size to use when climbing stepping up (prevents very deep step ups from large movements)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize = { "VRClimbingStepUpMaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMaxSize), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// If true will clamp the maximum movement on climbing step up to: VRClimbingStepUpMaxSize\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will clamp the maximum movement on climbing step up to: VRClimbingStepUpMaxSize" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bClampClimbingStepUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp = { "bClampClimbingStepUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier = { "VRClimbingStepUpMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "/* Custom distance that is required before accepting a climbing stepup\n\x09*  This is to help with cases where head wobble causes falling backwards\n\x09*  Do NOT set to larger than capsule radius!\n\x09*  #TODO: Port to SimpleCharacter as well\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Custom distance that is required before accepting a climbing stepup\n      *  This is to help with cases where head wobble causes falling backwards\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance = { "VRClimbingEdgeRejectDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingEdgeRejectDistance), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData[] = {
		{ "Category", "VRMovement|Climbing" },
		{ "Comment", "// Height to auto step up\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Height to auto step up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight = { "VRClimbingStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepHeight), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// If true will run the control rotation in the CMC instead of in the player controller\n// This puts the player rotation into the scoped movement (perf savings) and also ensures it is properly rotated prior to movement\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will run the control rotation in the CMC instead of in the player controller\nThis puts the player rotation into the scoped movement (perf savings) and also ensures it is properly rotated prior to movement" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bRunControlRotationInMovementComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent = { "bRunControlRotationInMovementComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// If true will never count a physicsbody channel component as the floor, to prevent jitter / physics problems.\n// Make sure that you set simulating objects to the physics body channel if you want this to work correctly\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If true will never count a physicsbody channel component as the floor, to prevent jitter / physics problems.\nMake sure that you set simulating objects to the physics body channel if you want this to work correctly" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bIgnoreSimulatingComponentsInFloorCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck = { "bIgnoreSimulatingComponentsInFloorCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// If we hit the tracking loss threshold then rewind position instead of running to the new location\n// Will force the HMD to stay in its original spot prior to the tracking jump\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "If we hit the tracking loss threshold then rewind position instead of running to the new location\nWill force the HMD to stay in its original spot prior to the tracking jump" },
	};
#endif
	void Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit(void* Obj)
	{
		((UVRBaseCharacterMovementComponent*)Obj)->bHoldPositionOnTrackingLossThresholdHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit = { "bHoldPositionOnTrackingLossThresholdHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRBaseCharacterMovementComponent), &Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Any movement above this value we will consider as have been a tracking jump and null out the movement in the character\n// Raise this value higher if players are noticing freezing when moving quickly.\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Any movement above this value we will consider as have been a tracking jump and null out the movement in the character\nRaise this value higher if players are noticing freezing when moving quickly." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold = { "TrackingLossThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, TrackingLossThreshold), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Setting this higher will divide the wall slide effect by this value, to reduce collision sliding.\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Setting this higher will divide the wall slide effect by this value, to reduce collision sliding." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler = { "VRWallSlideScaler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRWallSlideScaler), METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Called when a valid climbing step up movement is found, if bound to the default auto step up is not performed to let custom step up logic happen instead.\n" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "Called when a valid climbing step up movement is found, if bound to the default auto step up is not performed to let custom step up logic happen instead." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp = { "OnPerformClimbingStepUp", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, OnPerformClimbingStepUp), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnPerformClimbingStepUp__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner_MetaData[] = {
		{ "Comment", "/** BaseVR Character movement component belongs to */" },
		{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
		{ "ToolTip", "BaseVR Character movement component belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner = { "BaseVRCharacterOwner", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, BaseVRCharacterOwner), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravIgnoresDefaultFluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRLowGravWallFrictionScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_DefaultPostClimbMovement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VREdgeRejectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingMaxReleaseVelocitySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_SetDefaultPostClimbMovementOnStepUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMaxSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bClampClimbingStepUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepUpMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingEdgeRejectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRClimbingStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bRunControlRotationInMovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bIgnoreSimulatingComponentsInFloorCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_bHoldPositionOnTrackingLossThresholdHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_TrackingLossThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_VRWallSlideScaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_OnPerformClimbingStepUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::NewProp_BaseVRCharacterOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRBaseCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams = {
		&UVRBaseCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRBaseCharacterMovementComponent, 1182207520);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRBaseCharacterMovementComponent>()
	{
		return UVRBaseCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRBaseCharacterMovementComponent(Z_Construct_UClass_UVRBaseCharacterMovementComponent, &UVRBaseCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRBaseCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRBaseCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
