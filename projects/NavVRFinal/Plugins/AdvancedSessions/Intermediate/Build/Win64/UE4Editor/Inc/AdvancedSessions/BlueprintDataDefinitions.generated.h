// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h
#error "BlueprintDataDefinitions.generated.h already included, missing '#pragma once' in BlueprintDataDefinitions.h"
#endif
#define ADVANCEDSESSIONS_BlueprintDataDefinitions_generated_h

#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_294_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionsSearchSetting(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_283_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FSessionPropertyKeyPair(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_247_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPFriendInfo(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_222_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPFriendPresenceInfo(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_211_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineRecentPlayer(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FBPOnlineUser Super;


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_197_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_134_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#define NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h_45_GENERATED_BODY \
	friend ADVANCEDSESSIONS_API class UScriptStruct* Z_Construct_UScriptStruct_FBPUserOnlineAccount(); \
	ADVANCEDSESSIONS_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavVRFinal_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_BlueprintDataDefinitions_h


#define FOREACH_ENUM_EONLINECOMPARISONOPREDUX(op) \
	op(EOnlineComparisonOpRedux::Equals) \
	op(EOnlineComparisonOpRedux::NotEquals) \
	op(EOnlineComparisonOpRedux::GreaterThan) \
	op(EOnlineComparisonOpRedux::GreaterThanEquals) \
	op(EOnlineComparisonOpRedux::LessThan) \
	op(EOnlineComparisonOpRedux::LessThanEquals) 
#define FOREACH_ENUM_EBPONLINESESSIONSTATE(op) \
	op(EBPOnlineSessionState::NoSession) \
	op(EBPOnlineSessionState::Creating) \
	op(EBPOnlineSessionState::Pending) \
	op(EBPOnlineSessionState::Starting) \
	op(EBPOnlineSessionState::InProgress) \
	op(EBPOnlineSessionState::Ending) \
	op(EBPOnlineSessionState::Ended) \
	op(EBPOnlineSessionState::Destroying) 
#define FOREACH_ENUM_EBPONLINEPRESENCESTATE(op) \
	op(EBPOnlinePresenceState::Online) \
	op(EBPOnlinePresenceState::Offline) \
	op(EBPOnlinePresenceState::Away) \
	op(EBPOnlinePresenceState::ExtendedAway) \
	op(EBPOnlinePresenceState::DoNotDisturb) \
	op(EBPOnlinePresenceState::Chat) 
#define FOREACH_ENUM_EBPSERVERPRESENCESEARCHTYPE(op) \
	op(EBPServerPresenceSearchType::ClientServersOnly) \
	op(EBPServerPresenceSearchType::DedicatedServersOnly) \
	op(EBPServerPresenceSearchType::AllServers) 
#define FOREACH_ENUM_EBLUEPRINTRESULTSWITCH(op) \
	op(EBlueprintResultSwitch::OnSuccess) \
	op(EBlueprintResultSwitch::OnFailure) 
#define FOREACH_ENUM_ESESSIONSETTINGSEARCHRESULT(op) \
	op(ESessionSettingSearchResult::Found) \
	op(ESessionSettingSearchResult::NotFound) \
	op(ESessionSettingSearchResult::WrongType) 
#define FOREACH_ENUM_EBPLOGINSTATUS(op) \
	op(EBPLoginStatus::NotLoggedIn) \
	op(EBPLoginStatus::UsingLocalProfile) \
	op(EBPLoginStatus::LoggedIn) 
#define FOREACH_ENUM_EBPUSERPRIVILEGES(op) \
	op(CanPlay) \
	op(CanPlayOnline) \
	op(CanCommunicateOnline) \
	op(CanUseUserGeneratedContent) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
