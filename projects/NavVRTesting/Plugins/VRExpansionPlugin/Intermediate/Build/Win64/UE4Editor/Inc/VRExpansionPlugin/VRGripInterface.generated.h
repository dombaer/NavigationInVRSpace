// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPInteractionSettings;
struct FVector;
struct FTransform;
class UGripMotionControllerComponent;
struct FBPActorGripInformation;
class USceneComponent;
#ifdef VREXPANSIONPLUGIN_VRGripInterface_generated_h
#error "VRGripInterface.generated.h already included, missing '#pragma once' in VRGripInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRGripInterface_generated_h

#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_RPC_WRAPPERS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation()=0; \
	virtual bool IsInteractible_Implementation()=0; \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform)=0; \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform)=0; \
	virtual float GripBreakDistance_Implementation()=0; \
	virtual float GripDamping_Implementation()=0; \
	virtual float GripStiffness_Implementation()=0; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation()=0; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation()=0; \
	virtual bool CanHaveDoubleGrip_Implementation()=0; \
	virtual EGripCollisionType FreeGripType_Implementation()=0; \
	virtual EGripCollisionType SlotGripType_Implementation()=0; \
	virtual void ObjectType_Implementation(uint8& ObjectType)=0; \
	virtual bool SimulateOnDrop_Implementation()=0; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation()=0; \
	virtual bool DenyGripping_Implementation()=0; \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripMovementReplicationSettings>*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripLateUpdateSettings>*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHaveDoubleGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanHaveDoubleGrip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execObjectType) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ObjectType_Implementation(Z_Param_Out_ObjectType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripInterfaceTeleportBehavior>*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FBPInteractionSettings GetInteractionSettings_Implementation()=0; \
	virtual bool IsInteractible_Implementation()=0; \
	virtual void ClosestPrimarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform)=0; \
	virtual void ClosestSecondarySlotInRange_Implementation(FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform)=0; \
	virtual float GripBreakDistance_Implementation()=0; \
	virtual float GripDamping_Implementation()=0; \
	virtual float GripStiffness_Implementation()=0; \
	virtual EGripMovementReplicationSettings GripMovementReplicationType_Implementation()=0; \
	virtual EGripLateUpdateSettings GripLateUpdateSetting_Implementation()=0; \
	virtual bool CanHaveDoubleGrip_Implementation()=0; \
	virtual EGripCollisionType FreeGripType_Implementation()=0; \
	virtual EGripCollisionType SlotGripType_Implementation()=0; \
	virtual void ObjectType_Implementation(uint8& ObjectType)=0; \
	virtual bool SimulateOnDrop_Implementation()=0; \
	virtual EGripInterfaceTeleportBehavior TeleportBehavior_Implementation()=0; \
	virtual bool DenyGripping_Implementation()=0; \
 \
	DECLARE_FUNCTION(execGetInteractionSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBPInteractionSettings*)Z_Param__Result=this->GetInteractionSettings_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInteractible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsInteractible_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPrimarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestPrimarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestSecondarySlotInRange) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClosestSecondarySlotInRange_Implementation(Z_Param_WorldLocation,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripBreakDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripBreakDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripDamping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripDamping_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripStiffness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GripStiffness_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripMovementReplicationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripMovementReplicationSettings>*)Z_Param__Result=this->GripMovementReplicationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripLateUpdateSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripLateUpdateSettings>*)Z_Param__Result=this->GripLateUpdateSetting_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHaveDoubleGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanHaveDoubleGrip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreeGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->FreeGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlotGripType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripCollisionType>*)Z_Param__Result=this->SlotGripType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execObjectType) \
	{ \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_ObjectType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ObjectType_Implementation(Z_Param_Out_ObjectType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulateOnDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SimulateOnDrop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportBehavior) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGripInterfaceTeleportBehavior>*)Z_Param__Result=this->TeleportBehavior_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDenyGripping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DenyGripping_Implementation(); \
		P_NATIVE_END; \
	}


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_EVENT_PARMS \
	struct VRGripInterface_eventCanHaveDoubleGrip_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventCanHaveDoubleGrip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventClosestPrimarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct VRGripInterface_eventClosestSecondarySlotInRange_Parms \
	{ \
		FVector WorldLocation; \
		bool bHadSlotInRange; \
		FTransform SlotWorldTransform; \
	}; \
	struct VRGripInterface_eventDenyGripping_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventDenyGripping_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventFreeGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventFreeGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGetInteractionSettings_Parms \
	{ \
		FBPInteractionSettings ReturnValue; \
	}; \
	struct VRGripInterface_eventGripBreakDistance_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripBreakDistance_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripDamping_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripDamping_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripLateUpdateSetting_Parms \
	{ \
		TEnumAsByte<EGripLateUpdateSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripLateUpdateSetting_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripMovementReplicationType_Parms \
	{ \
		TEnumAsByte<EGripMovementReplicationSettings> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripMovementReplicationType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventGripStiffness_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventGripStiffness_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventIsInteractible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventIsInteractible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventObjectType_Parms \
	{ \
		uint8 ObjectType; \
	}; \
	struct VRGripInterface_eventOnChildGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnChildGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnGripRelease_Parms \
	{ \
		UGripMotionControllerComponent* ReleasingController; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnSecondaryGrip_Parms \
	{ \
		USceneComponent* SecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventOnSecondaryGripRelease_Parms \
	{ \
		USceneComponent* ReleasingSecondaryGripComponent; \
		FBPActorGripInformation GripInformation; \
	}; \
	struct VRGripInterface_eventSimulateOnDrop_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSimulateOnDrop_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventSlotGripType_Parms \
	{ \
		TEnumAsByte<EGripCollisionType> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventSlotGripType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTeleportBehavior_Parms \
	{ \
		TEnumAsByte<EGripInterfaceTeleportBehavior> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRGripInterface_eventTeleportBehavior_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct VRGripInterface_eventTickGrip_Parms \
	{ \
		UGripMotionControllerComponent* GrippingController; \
		FBPActorGripInformation GripInformation; \
		FVector MControllerLocDelta; \
		float DeltaTime; \
	};


extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_CanHaveDoubleGrip;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ClosestPrimarySlotInRange;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ClosestSecondarySlotInRange;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_DenyGripping;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_FreeGripType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GetInteractionSettings;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripBreakDistance;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripDamping;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripLateUpdateSetting;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripMovementReplicationType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_GripStiffness;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_IsInteractible;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_ObjectType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnChildGrip;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnChildGripRelease;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnEndUsed;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnGrip;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnGripRelease;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnSecondaryGrip;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnSecondaryGripRelease;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_OnUsed;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_SimulateOnDrop;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_SlotGripType;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_TeleportBehavior;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_TickGrip;
#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_CALLBACK_WRAPPERS
#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public:


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripInterface(UVRGripInterface&&); \
	NO_API UVRGripInterface(const UVRGripInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
	private: \
	static void StaticRegisterNativesUVRGripInterface(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRGripInterface(); \
public: \
	DECLARE_CLASS(UVRGripInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	static bool Execute_CanHaveDoubleGrip(UObject* O); \
	static void Execute_ClosestPrimarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	static void Execute_ClosestSecondarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	static bool Execute_DenyGripping(UObject* O); \
	static EGripCollisionType Execute_FreeGripType(UObject* O); \
	static FBPInteractionSettings Execute_GetInteractionSettings(UObject* O); \
	static float Execute_GripBreakDistance(UObject* O); \
	static float Execute_GripDamping(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static float Execute_GripStiffness(UObject* O); \
	static bool Execute_IsInteractible(UObject* O); \
	static void Execute_ObjectType(UObject* O, uint8& ObjectType); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnUsed(UObject* O); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripCollisionType Execute_SlotGripType(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, FVector MControllerLocDelta, float DeltaTime); \
	virtual UObject* _getUObject() const = 0;


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRGripInterface() {} \
public: \
	typedef UVRGripInterface UClassType; \
	static bool Execute_CanHaveDoubleGrip(UObject* O); \
	static void Execute_ClosestPrimarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	static void Execute_ClosestSecondarySlotInRange(UObject* O, FVector WorldLocation, bool& bHadSlotInRange, FTransform& SlotWorldTransform); \
	static bool Execute_DenyGripping(UObject* O); \
	static EGripCollisionType Execute_FreeGripType(UObject* O); \
	static FBPInteractionSettings Execute_GetInteractionSettings(UObject* O); \
	static float Execute_GripBreakDistance(UObject* O); \
	static float Execute_GripDamping(UObject* O); \
	static EGripLateUpdateSettings Execute_GripLateUpdateSetting(UObject* O); \
	static EGripMovementReplicationSettings Execute_GripMovementReplicationType(UObject* O); \
	static float Execute_GripStiffness(UObject* O); \
	static bool Execute_IsInteractible(UObject* O); \
	static void Execute_ObjectType(UObject* O, uint8& ObjectType); \
	static void Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnEndUsed(UObject* O); \
	static void Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	static void Execute_OnUsed(UObject* O); \
	static bool Execute_SimulateOnDrop(UObject* O); \
	static EGripCollisionType Execute_SlotGripType(UObject* O); \
	static EGripInterfaceTeleportBehavior Execute_TeleportBehavior(UObject* O); \
	static void Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, FVector MControllerLocDelta, float DeltaTime); \
	virtual UObject* _getUObject() const = 0;


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_9_PROLOG \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_EVENT_PARMS


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_RPC_WRAPPERS \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_CALLBACK_WRAPPERS \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_CALLBACK_WRAPPERS \
	NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavVRTesting_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGripInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
