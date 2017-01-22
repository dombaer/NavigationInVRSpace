// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UProceduralMeshComponent;
class UTexture2D;
class UPrimitiveComponent;
struct FVector;
struct FTransform;
class AActor;
struct FRotator;
#ifdef VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h
#error "VRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in VRExpansionFunctionLibrary.h"
#endif
#define VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h

#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVRControllerPropertyString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRControllerPropertyString(EVRControllerProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyFloat(EVRDeviceProperty_Float(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_FloatValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_UBOOL_REF(Z_Param_Out_BoolValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyBool(EVRDeviceProperty_Bool(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_BoolValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyString(EVRDeviceProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DeviceType); \
		P_GET_TARRAY(UProceduralMeshComponent*,Z_Param_ProceduralMeshComponentsToFill); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=this->GetVRDeviceModelAndTexture(Z_Param_WorldContextObject,EBPSteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_ProceduralMeshComponentsToFill,Z_Param_bCreateCollision,(TEnumAsByte<EAsyncBlueprintResultSwitch::Type>&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsActorMovable) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EBPHMDDeviceType>*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPureYaw) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_HMDRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseVRHandles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CloseVRHandles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenVRHandles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenVRHandles(); \
		P_NATIVE_END; \
	}


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVRControllerPropertyString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRControllerPropertyString(EVRControllerProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyFloat(EVRDeviceProperty_Float(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_FloatValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_UBOOL_REF(Z_Param_Out_BoolValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyBool(EVRDeviceProperty_Bool(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_BoolValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyString) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetVRDevicePropertyString(EVRDeviceProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DeviceType); \
		P_GET_TARRAY(UProceduralMeshComponent*,Z_Param_ProceduralMeshComponentsToFill); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=this->GetVRDeviceModelAndTexture(Z_Param_WorldContextObject,EBPSteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_ProceduralMeshComponentsToFill,Z_Param_bCreateCollision,(TEnumAsByte<EAsyncBlueprintResultSwitch::Type>&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsActorMovable) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EBPHMDDeviceType>*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPureYaw) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_HMDRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseVRHandles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CloseVRHandles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenVRHandles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->OpenVRHandles(); \
		P_NATIVE_END; \
	}


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary(); \
	public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_INCLASS \
	private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary(); \
	public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public:


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary)


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_PRIVATE_PROPERTY_OFFSET
#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_149_PROLOG
#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_PRIVATE_PROPERTY_OFFSET \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_RPC_WRAPPERS \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_INCLASS \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_PRIVATE_PROPERTY_OFFSET \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_INCLASS_NO_PURE_DECLS \
	NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_153_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRExpansionFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavVRReal_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EVRCONTROLLERPROPERTY_STRING(op) \
	op(Prop_AttachedDeviceId_String) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_FLOAT(op) \
	op(Prop_DeviceBatteryPercentage_Float) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_BOOL(op) \
	op(Prop_WillDriftInYaw_Bool) \
	op(Prop_DeviceIsWireless_Bool) \
	op(Prop_DeviceIsCharging_Bool) \
	op(Prop_Firmware_UpdateAvailable_Bool) \
	op(Prop_Firmware_ManualUpdate_Bool) \
	op(Prop_BlockServerShutdown_Bool) \
	op(Prop_CanUnifyCoordinateSystemWithHmd_Bool) \
	op(Prop_ContainsProximitySensor_Bool) \
	op(Prop_DeviceProvidesBatteryStatus_Bool) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_STRING(op) \
	op(EVRDeviceProperty_String::Prop_TrackingSystemName_String) \
	op(EVRDeviceProperty_String::Prop_ModelNumber_String) \
	op(EVRDeviceProperty_String::Prop_SerialNumber_String) \
	op(EVRDeviceProperty_String::Prop_RenderModelName_String) \
	op(EVRDeviceProperty_String::Prop_ManufacturerName_String) \
	op(EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String) \
	op(EVRDeviceProperty_String::Prop_HardwareRevision_String) \
	op(EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String) \
	op(EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String) \
	op(EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String) 
#define FOREACH_ENUM_EBPWORLDTYPE(op) \
	op(EBPWorldType::wNone) \
	op(EBPWorldType::wGame) \
	op(EBPWorldType::wEditor) \
	op(EBPWorldType::wPIE) \
	op(EBPWorldType::wPreview) \
	op(EBPWorldType::wInactive) 
#define FOREACH_ENUM_EASYNCBLUEPRINTRESULTSWITCH(op) \
	op(EAsyncBlueprintResultSwitch::OnSuccess) \
	op(EAsyncBlueprintResultSwitch::AsyncLoading) \
	op(EAsyncBlueprintResultSwitch::OnFailure) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
