/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _VCRESMAN_
#define _VCRESMAN_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct RSMInit
{
} RSMInit_typ;

typedef struct RSMGetRootNode
{
} RSMGetRootNode_typ;

typedef struct RSMLoadBrModule
{
} RSMLoadBrModule_typ;

typedef struct RSMUnloadBrModule
{
} RSMUnloadBrModule_typ;

typedef struct RSMDirInsertNode
{
} RSMDirInsertNode_typ;

typedef struct RSMDirGetNodeCount
{
} RSMDirGetNodeCount_typ;

typedef struct RSMDirDeleteAllNodes
{
} RSMDirDeleteAllNodes_typ;

typedef struct RSMDGetNwName
{
} RSMDGetNwName_typ;

typedef struct RSMDGetNwKey
{
} RSMDGetNwKey_typ;

typedef struct RSMDGetNoType
{
} RSMDGetNoType_typ;

typedef struct RSMDGetNwIndex
{
} RSMDGetNwIndex_typ;

typedef struct RSMDGetNbPath
{
} RSMDGetNbPath_typ;

typedef struct RSMDIterStart
{
} RSMDIterStart_typ;

typedef struct RSMDIterNext
{
} RSMDIterNext_typ;

typedef struct RSMDGetNbFormattedPath
{
} RSMDGetNbFormattedPath_typ;

typedef struct RSMCrInst
{
} RSMCrInst_typ;

typedef struct RSMCrInstFromNode
{
} RSMCrInstFromNode_typ;

typedef struct RSMRegisterClass
{
} RSMRegisterClass_typ;

typedef struct RSMInitClass
{
} RSMInitClass_typ;

typedef struct RSMNewNode
{
} RSMNewNode_typ;

typedef struct RSMAllocateMemory
{
} RSMAllocateMemory_typ;

typedef struct RSMReallocateMemory
{
} RSMReallocateMemory_typ;

typedef struct RSMFreeMemory
{
} RSMFreeMemory_typ;

typedef struct RSMGetDPVDir
{
} RSMGetDPVDir_typ;

typedef struct RSMInitInterface
{
} RSMInitInterface_typ;

typedef struct RSMNewInterfaceNode
{
} RSMNewInterfaceNode_typ;

typedef struct RSMDirCreateDirectory
{
} RSMDirCreateDirectory_typ;

typedef struct RSMTskCreate
{
} RSMTskCreate_typ;

typedef struct RSMTskDelete
{
} RSMTskDelete_typ;

typedef struct RSMSemCreate
{
} RSMSemCreate_typ;

typedef struct RSMSemDelete
{
} RSMSemDelete_typ;

typedef struct RSMGetInterfaceNode
{
} RSMGetInterfaceNode_typ;

typedef struct RSMDirDeleteNode
{
} RSMDirDeleteNode_typ;

typedef struct RSMTrace
{
} RSMTrace_typ;

typedef struct vcwcsconvert
{
} vcwcsconvert_typ;

typedef struct RSMTraceHResult
{
} RSMTraceHResult_typ;

typedef struct RSMGetScalingInterface
{
} RSMGetScalingInterface_typ;

typedef struct RSMGetClassNode
{
} RSMGetClassNode_typ;

typedef struct RSMDummyE_NOTIMPL
{
} RSMDummyE_NOTIMPL_typ;

typedef struct RSMDummyS_FALSE
{
} RSMDummyS_FALSE_typ;

typedef struct RSMUnlock
{
} RSMUnlock_typ;

typedef struct RSMLock
{
} RSMLock_typ;

typedef struct RSMDirLock
{
} RSMDirLock_typ;

typedef struct RSMDirUnlock
{
} RSMDirUnlock_typ;

typedef struct RSMGetDPVInterface
{
} RSMGetDPVInterface_typ;

typedef struct RSMLanguageNameToID
{
} RSMLanguageNameToID_typ;

typedef struct RSMDeregisterClass
{
} RSMDeregisterClass_typ;

typedef struct RSMExpansionHandle
{
} RSMExpansionHandle_typ;

typedef struct RSMExpansionQuery
{
} RSMExpansionQuery_typ;

typedef struct RSMExpansionCleanUp
{
} RSMExpansionCleanUp_typ;

typedef struct RSMLoadDefaultCCFs
{
} RSMLoadDefaultCCFs_typ;

typedef struct RSMDefault_AddRef
{
} RSMDefault_AddRef_typ;

typedef struct RSMDefault_Release
{
} RSMDefault_Release_typ;

typedef struct RSMLogEntry
{
} RSMLogEntry_typ;

typedef struct RSMGetIfNode
{
} RSMGetIfNode_typ;

typedef struct RSMClInfoIf
{
} RSMClInfoIf_typ;

typedef struct RSMGetCurrentRuntime
{
} RSMGetCurrentRuntime_typ;

typedef struct vcwcstrncpy
{
} vcwcstrncpy_typ;

typedef struct vcwcslen
{
} vcwcslen_typ;

typedef struct vcwcscmp
{
} vcwcscmp_typ;

typedef struct RSMGetExpansionDir
{
} RSMGetExpansionDir_typ;

typedef struct RSMRegPubIF
{
} RSMRegPubIF_typ;

typedef struct RSMUnRegPubIF
{
} RSMUnRegPubIF_typ;

typedef struct RSMGetPubIF
{
} RSMGetPubIF_typ;

typedef struct RSMDirCreateDirectoryLRU
{
} RSMDirCreateDirectoryLRU_typ;

typedef struct RSMDirDeleteNodeLRU
{
} RSMDirDeleteNodeLRU_typ;

typedef struct RSMNewNodeLRU
{
} RSMNewNodeLRU_typ;

typedef struct RSMDirInsertNodeLRUHead
{
} RSMDirInsertNodeLRUHead_typ;

typedef struct RSMDirDeleteNodeLRUAtTail
{
} RSMDirDeleteNodeLRUAtTail_typ;

typedef struct RSMDirGetNodeLRUAtTail
{
} RSMDirGetNodeLRUAtTail_typ;

typedef struct RSMDeleteInterfaceNode
{
} RSMDeleteInterfaceNode_typ;

typedef struct RSMDirNodeHitLRU
{
} RSMDirNodeHitLRU_typ;

typedef struct RSMGetHWPlatform
{
} RSMGetHWPlatform_typ;

typedef struct RSMSystemTimerCreate
{
} RSMSystemTimerCreate_typ;

typedef struct RSMSystemTimerDelete
{
} RSMSystemTimerDelete_typ;

typedef struct RSMSystemCriticalSectionCreate
{
} RSMSystemCriticalSectionCreate_typ;

typedef struct RSMSystemCriticalSectionDelete
{
} RSMSystemCriticalSectionDelete_typ;

typedef struct RSMSystemCriticalSectionEnter
{
} RSMSystemCriticalSectionEnter_typ;

typedef struct RSMSystemCriticalSectionLeave
{
} RSMSystemCriticalSectionLeave_typ;

typedef struct RSMDirBalance
{
} RSMDirBalance_typ;

typedef struct RSMSetCurrentRuntime
{
} RSMSetCurrentRuntime_typ;

typedef struct RSMDirCreateDirectoryHashSize
{
} RSMDirCreateDirectoryHashSize_typ;

typedef struct RSMCodeTest
{
} RSMCodeTest_typ;

typedef struct RSMUpdateDatapoints
{
} RSMUpdateDatapoints_typ;

typedef struct RSMNodeDelete
{
} RSMNodeDelete_typ;

typedef struct RSMDirSaveNodeToFile
{
} RSMDirSaveNodeToFile_typ;

typedef struct RSMDirLoadNodeFromFile
{
} RSMDirLoadNodeFromFile_typ;

typedef struct RSMGetClassStyledProperties
{
} RSMGetClassStyledProperties_typ;

typedef struct RSMDoubleToFormatedString
{
} RSMDoubleToFormatedString_typ;

typedef struct RSMGetTweak
{
} RSMGetTweak_typ;

typedef struct RSMGetHead
{
} RSMGetHead_typ;

typedef struct RSMVsprintf
{
} RSMVsprintf_typ;

typedef struct RSMDirIsLockingOwner
{
} RSMDirIsLockingOwner_typ;

typedef struct RSMMemoryStatistics
{
} RSMMemoryStatistics_typ;

typedef struct debugEvent
{
} debugEvent_typ;

typedef struct debugEventGroupEnable
{
} debugEventGroupEnable_typ;

typedef struct vco_memcpy
{
} vco_memcpy_typ;

typedef struct vco_memset
{
} vco_memset_typ;

typedef struct vcwcscpy
{
} vcwcscpy_typ;

typedef struct vcwcsncmp
{
} vcwcsncmp_typ;

typedef struct vcwcscat
{
} vcwcscat_typ;

typedef struct RSMNewNodeKey
{
} RSMNewNodeKey_typ;

typedef struct RSMDirSetHashMode
{
} RSMDirSetHashMode_typ;

typedef struct RSMDirSetOptions
{
} RSMDirSetOptions_typ;

typedef struct RSMGetClassDir
{
} RSMGetClassDir_typ;

typedef struct RSMGetMD5Sum
{
} RSMGetMD5Sum_typ;

typedef struct RSMstrftime
{
} RSMstrftime_typ;

typedef struct RSMCheckOverload
{
} RSMCheckOverload_typ;

typedef struct RSMRegisterSymbolTable
{
} RSMRegisterSymbolTable_typ;

typedef struct RSMLoadSymbolTable
{
} RSMLoadSymbolTable_typ;

typedef struct RSMCompareDouble
{
} RSMCompareDouble_typ;

typedef struct RSMSetBoundaryFailureCallback
{
} RSMSetBoundaryFailureCallback_typ;

typedef struct RSMShowStack
{
} RSMShowStack_typ;

typedef struct RSMShowStack2
{
} RSMShowStack2_typ;

typedef struct RSMSysGTickCount
{
} RSMSysGTickCount_typ;

typedef struct RSMSysGetSysTick
{
} RSMSysGetSysTick_typ;

typedef struct RSMGetSymbolName
{
} RSMGetSymbolName_typ;

typedef struct RSMGetBitNumber
{
} RSMGetBitNumber_typ;

typedef struct RSMRoundValue
{
} RSMRoundValue_typ;

typedef struct RSMAdjHigherValue
{
} RSMAdjHigherValue_typ;

typedef struct RSMAdjLowerValue
{
} RSMAdjLowerValue_typ;

typedef struct VCStrLen
{
} VCStrLen_typ;

typedef struct VCStrNewInit
{
} VCStrNewInit_typ;

typedef struct VCStrNewLen
{
} VCStrNewLen_typ;

typedef struct VCStrNewWChar
{
} VCStrNewWChar_typ;

typedef struct VCStrNewChar
{
} VCStrNewChar_typ;

typedef struct VCStrDup
{
} VCStrDup_typ;

typedef struct VCStrFree
{
} VCStrFree_typ;

typedef struct VCStrSetLen
{
} VCStrSetLen_typ;

typedef struct VCStrMaxLen
{
} VCStrMaxLen_typ;

typedef struct VCStrCat
{
} VCStrCat_typ;

typedef struct VCStrWCat
{
} VCStrWCat_typ;

typedef struct VCStrFormat
{
} VCStrFormat_typ;

typedef struct VCStrAppendChar
{
} VCStrAppendChar_typ;

typedef struct VCStrToUnicode
{
} VCStrToUnicode_typ;

typedef struct VCStrFromUnicode
{
} VCStrFromUnicode_typ;

typedef struct VCStrIns
{
} VCStrIns_typ;

typedef struct VCStrCut
{
} VCStrCut_typ;

typedef struct VCStrGetStatistic
{
} VCStrGetStatistic_typ;

typedef struct VCStrSplit
{
} VCStrSplit_typ;

typedef struct VCStrTrace
{
} VCStrTrace_typ;

typedef struct VCStrReplace
{
} VCStrReplace_typ;

typedef struct VCStrDupBidirectional
{
} VCStrDupBidirectional_typ;

typedef struct VCStrUTMain
{
} VCStrUTMain_typ;

typedef struct RSMGetCPUType
{
} RSMGetCPUType_typ;

typedef struct RSMStatStop
{
} RSMStatStop_typ;

typedef struct RSMStatSnapshot
{
} RSMStatSnapshot_typ;

typedef struct RSMStatGetData
{
} RSMStatGetData_typ;

typedef struct RSMStatInit
{
} RSMStatInit_typ;

typedef struct RSMStatCurrent
{
} RSMStatCurrent_typ;

typedef struct RSMHwGetBatteryInfo
{
} RSMHwGetBatteryInfo_typ;

typedef struct RSMMDumpCacheLines
{
} RSMMDumpCacheLines_typ;

typedef struct RSMStatGetMainValues
{
} RSMStatGetMainValues_typ;

typedef struct RSMEventLogGet
{
} RSMEventLogGet_typ;

typedef struct RSMEventLogDataAvailable
{
} RSMEventLogDataAvailable_typ;

typedef struct RSMEventLogStop
{
} RSMEventLogStop_typ;

typedef struct RSMEventLogInitialize
{
} RSMEventLogInitialize_typ;

typedef struct RSMEventLogRunning
{
} RSMEventLogRunning_typ;

typedef struct RSMEventLog
{
} RSMEventLog_typ;

typedef struct RSMDirForEachNodeIn
{
} RSMDirForEachNodeIn_typ;

typedef struct VCTstSendMessage
{
} VCTstSendMessage_typ;

typedef struct RSMAlMemZero
{
} RSMAlMemZero_typ;

typedef struct VCEventPOP
{
} VCEventPOP_typ;

typedef struct VCEventPUSH
{
} VCEventPUSH_typ;

typedef struct VCEventGetValueAsInteger
{
} VCEventGetValueAsInteger_typ;

typedef struct VCEventGetValueAsDouble
{
} VCEventGetValueAsDouble_typ;

typedef struct VCEventGetValueAsUtf8
{
} VCEventGetValueAsUtf8_typ;

typedef struct VCEventGetValueAsUtf16
{
} VCEventGetValueAsUtf16_typ;

typedef struct VCEventGetValueAsChar
{
} VCEventGetValueAsChar_typ;

typedef struct VCEventCount
{
} VCEventCount_typ;

typedef struct VCEventFree
{
} VCEventFree_typ;

typedef struct VCEventEnable
{
} VCEventEnable_typ;

typedef struct RSMEventAlloc
{
} RSMEventAlloc_typ;

typedef struct RSMEventFree
{
} RSMEventFree_typ;

typedef struct RSMEventAddStringUTF8
{
} RSMEventAddStringUTF8_typ;

typedef struct RSMEventAddStringUTF16
{
} RSMEventAddStringUTF16_typ;

typedef struct RSMEventAddVCSTR
{
} RSMEventAddVCSTR_typ;

typedef struct RSMEventAddInt
{
} RSMEventAddInt_typ;

typedef struct RSMEventGetInt
{
} RSMEventGetInt_typ;

typedef struct RSMEventAddDbl
{
} RSMEventAddDbl_typ;

typedef struct RSMEventGetDbl
{
} RSMEventGetDbl_typ;

typedef struct RSMEventDUP
{
} RSMEventDUP_typ;

typedef struct RSMEnumRunningObjects
{
} RSMEnumRunningObjects_typ;

typedef struct RSMClassDump
{
} RSMClassDump_typ;

typedef struct RSMNewClassObject
{
} RSMNewClassObject_typ;

typedef struct RSMDeleteClassObject
{
} RSMDeleteClassObject_typ;

typedef struct RSMGetClassObjectByName
{
} RSMGetClassObjectByName_typ;

typedef struct RSMDeleteClassObjectByInterface
{
} RSMDeleteClassObjectByInterface_typ;

typedef struct RSMGetGlobalDPVInterface
{
} RSMGetGlobalDPVInterface_typ;

typedef struct VCStrToUTF8
{
} VCStrToUTF8_typ;

typedef struct Variant_DimAs
{
} Variant_DimAs_typ;

typedef struct Variant_GetInteger
{
} Variant_GetInteger_typ;

typedef struct Variant_GetDouble
{
} Variant_GetDouble_typ;

typedef struct Variant_GetString
{
} Variant_GetString_typ;

typedef struct Variant_GetAuto
{
} Variant_GetAuto_typ;

typedef struct Variant_SetInteger
{
} Variant_SetInteger_typ;

typedef struct Variant_SetDouble
{
} Variant_SetDouble_typ;

typedef struct Variant_SetString
{
} Variant_SetString_typ;

typedef struct Variant_SetAuto
{
} Variant_SetAuto_typ;

typedef struct Variant_GetType
{
} Variant_GetType_typ;

typedef struct Variant_GetSize
{
} Variant_GetSize_typ;

typedef struct Variant_Release
{
} Variant_Release_typ;

typedef struct RSMStringToDouble
{
} RSMStringToDouble_typ;

typedef struct RSMEventMsgGetStringUTF16
{
} RSMEventMsgGetStringUTF16_typ;

typedef struct RSMEventMsgGetStringUTF8
{
} RSMEventMsgGetStringUTF8_typ;

typedef struct VCTstUnloadProject
{
} VCTstUnloadProject_typ;

typedef struct VCTstReloadProject
{
} VCTstReloadProject_typ;

typedef struct RSMEventAddDateTime
{
} RSMEventAddDateTime_typ;

typedef struct RSMDirUseSeperateLocking
{
} RSMDirUseSeperateLocking_typ;

typedef struct RSMDirHasSeperateLocking
{
} RSMDirHasSeperateLocking_typ;

typedef struct RSMStringParse
{
} RSMStringParse_typ;

typedef struct RSMDVAdd
{
} RSMDVAdd_typ;

typedef struct RSMDVSet
{
} RSMDVSet_typ;

typedef struct RSMDVSum
{
} RSMDVSum_typ;

typedef struct RSMTimeEvent
{
} RSMTimeEvent_typ;

typedef struct RSMExecuteCommand
{
} RSMExecuteCommand_typ;

typedef struct VCStrFromUTF8String
{
} VCStrFromUTF8String_typ;

typedef struct RSMGetIntegerOption
{
} RSMGetIntegerOption_typ;

typedef struct VCStrToBidirectional
{
} VCStrToBidirectional_typ;

typedef struct RSMDBGVAdd
{
} RSMDBGVAdd_typ;

typedef struct RSMDBGCAdd
{
} RSMDBGCAdd_typ;

typedef struct RSMDBGTrace
{
} RSMDBGTrace_typ;

typedef struct RSMDBGTEna
{
} RSMDBGTEna_typ;

typedef struct RSMDBGTDis
{
} RSMDBGTDis_typ;

typedef struct printd
{
} printd_typ;

typedef struct vcwcbidiclass
{
} vcwcbidiclass_typ;

typedef struct vcwcmirrorchar
{
} vcwcmirrorchar_typ;

typedef struct RSMCachedAlloc
{
} RSMCachedAlloc_typ;

typedef struct RSMAsc2BRStr
{
} RSMAsc2BRStr_typ;

typedef struct IAPIparam_CreateInstance
{
} IAPIparam_CreateInstance_typ;

typedef struct IAPIparam_Destroy
{
} IAPIparam_Destroy_typ;

typedef struct IAPI_CallUserFunc
{
} IAPI_CallUserFunc_typ;

typedef struct IAPI_InitIAPI
{
} IAPI_InitIAPI_typ;

typedef struct IAPI_LogEntry
{
} IAPI_LogEntry_typ;

typedef struct IProperty_CreateInstance
{
} IProperty_CreateInstance_typ;

typedef struct RSMSystemTaskSetLowMemory
{
} RSMSystemTaskSetLowMemory_typ;

typedef struct RSMSystemTaskIsLowMemory
{
} RSMSystemTaskIsLowMemory_typ;

typedef struct RSMDebuggerInit
{
} RSMDebuggerInit_typ;

typedef struct RSMExpansionInitialize
{
} RSMExpansionInitialize_typ;

typedef struct RSMIsServiceMode
{
} RSMIsServiceMode_typ;

typedef struct VCMapMemory
{
} VCMapMemory_typ;

typedef struct VCPinyinGetDictionary
{
} VCPinyinGetDictionary_typ;

typedef struct RSMDebuggerAll
{
} RSMDebuggerAll_typ;

typedef struct RSMProfilerUserLogEvent
{
} RSMProfilerUserLogEvent_typ;

typedef struct RSMSetVCWTIpAddress
{
} RSMSetVCWTIpAddress_typ;

typedef struct RSMGetVCWTIpAddress
{
} RSMGetVCWTIpAddress_typ;

typedef struct RSMTskSleepUsec
{
} RSMTskSleepUsec_typ;

typedef struct RSMReadUsecCounter
{
} RSMReadUsecCounter_typ;

typedef struct RSMGetRealTimeClock
{
} RSMGetRealTimeClock_typ;

typedef struct RSMSetRealTimeClock
{
} RSMSetRealTimeClock_typ;

typedef struct RSMHwBeep
{
} RSMHwBeep_typ;

typedef struct RSMIfAddrGet
{
} RSMIfAddrGet_typ;

typedef struct RSMEthOnboardDeviceGet
{
} RSMEthOnboardDeviceGet_typ;

typedef struct RSMEthIpAddressGet
{
} RSMEthIpAddressGet_typ;

typedef struct RSMHwGetNodeSwitch
{
} RSMHwGetNodeSwitch_typ;

typedef struct RSMHwGetCpuTemp
{
} RSMHwGetCpuTemp_typ;

typedef struct RSMPciConfigInByte
{
} RSMPciConfigInByte_typ;

typedef struct RSMPciConfigInWord
{
} RSMPciConfigInWord_typ;

typedef struct RSMPciConfigInLong
{
} RSMPciConfigInLong_typ;

typedef struct RSMPciConfigOutByte
{
} RSMPciConfigOutByte_typ;

typedef struct RSMPciConfigOutWord
{
} RSMPciConfigOutWord_typ;

typedef struct RSMPciConfigOutLong
{
} RSMPciConfigOutLong_typ;

typedef struct RSMPciFindDevice
{
} RSMPciFindDevice_typ;

typedef struct RSMPciFindClass
{
} RSMPciFindClass_typ;

typedef struct RSMInitHwBreakpoint_dbgInit
{
} RSMInitHwBreakpoint_dbgInit_typ;

typedef struct RSMSetHwBreakpoint_b
{
} RSMSetHwBreakpoint_b_typ;

typedef struct RSMSetHwBreakpoint_bh
{
} RSMSetHwBreakpoint_bh_typ;

typedef struct RSMDeleteHwBreakpoint_bd
{
} RSMDeleteHwBreakpoint_bd_typ;

typedef struct RSMTestHwBreakpoint
{
} RSMTestHwBreakpoint_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void RSMInit(struct RSMInit* inst);
_BUR_PUBLIC void RSMGetRootNode(struct RSMGetRootNode* inst);
_BUR_PUBLIC void RSMLoadBrModule(struct RSMLoadBrModule* inst);
_BUR_PUBLIC void RSMUnloadBrModule(struct RSMUnloadBrModule* inst);
_BUR_PUBLIC void RSMDirInsertNode(struct RSMDirInsertNode* inst);
_BUR_PUBLIC void RSMDirGetNodeCount(struct RSMDirGetNodeCount* inst);
_BUR_PUBLIC void RSMDirDeleteAllNodes(struct RSMDirDeleteAllNodes* inst);
_BUR_PUBLIC void RSMDGetNwName(struct RSMDGetNwName* inst);
_BUR_PUBLIC void RSMDGetNwKey(struct RSMDGetNwKey* inst);
_BUR_PUBLIC void RSMDGetNoType(struct RSMDGetNoType* inst);
_BUR_PUBLIC void RSMDGetNwIndex(struct RSMDGetNwIndex* inst);
_BUR_PUBLIC void RSMDGetNbPath(struct RSMDGetNbPath* inst);
_BUR_PUBLIC void RSMDIterStart(struct RSMDIterStart* inst);
_BUR_PUBLIC void RSMDIterNext(struct RSMDIterNext* inst);
_BUR_PUBLIC void RSMDGetNbFormattedPath(struct RSMDGetNbFormattedPath* inst);
_BUR_PUBLIC void RSMCrInst(struct RSMCrInst* inst);
_BUR_PUBLIC void RSMCrInstFromNode(struct RSMCrInstFromNode* inst);
_BUR_PUBLIC void RSMRegisterClass(struct RSMRegisterClass* inst);
_BUR_PUBLIC void RSMInitClass(struct RSMInitClass* inst);
_BUR_PUBLIC void RSMNewNode(struct RSMNewNode* inst);
_BUR_PUBLIC void RSMAllocateMemory(struct RSMAllocateMemory* inst);
_BUR_PUBLIC void RSMReallocateMemory(struct RSMReallocateMemory* inst);
_BUR_PUBLIC void RSMFreeMemory(struct RSMFreeMemory* inst);
_BUR_PUBLIC void RSMGetDPVDir(struct RSMGetDPVDir* inst);
_BUR_PUBLIC void RSMInitInterface(struct RSMInitInterface* inst);
_BUR_PUBLIC void RSMNewInterfaceNode(struct RSMNewInterfaceNode* inst);
_BUR_PUBLIC void RSMDirCreateDirectory(struct RSMDirCreateDirectory* inst);
_BUR_PUBLIC void RSMTskCreate(struct RSMTskCreate* inst);
_BUR_PUBLIC void RSMTskDelete(struct RSMTskDelete* inst);
_BUR_PUBLIC void RSMSemCreate(struct RSMSemCreate* inst);
_BUR_PUBLIC void RSMSemDelete(struct RSMSemDelete* inst);
_BUR_PUBLIC void RSMGetInterfaceNode(struct RSMGetInterfaceNode* inst);
_BUR_PUBLIC void RSMDirDeleteNode(struct RSMDirDeleteNode* inst);
_BUR_PUBLIC void RSMTrace(struct RSMTrace* inst);
_BUR_PUBLIC void vcwcsconvert(struct vcwcsconvert* inst);
_BUR_PUBLIC void RSMTraceHResult(struct RSMTraceHResult* inst);
_BUR_PUBLIC void RSMGetScalingInterface(struct RSMGetScalingInterface* inst);
_BUR_PUBLIC void RSMGetClassNode(struct RSMGetClassNode* inst);
_BUR_PUBLIC void RSMDummyE_NOTIMPL(struct RSMDummyE_NOTIMPL* inst);
_BUR_PUBLIC void RSMDummyS_FALSE(struct RSMDummyS_FALSE* inst);
_BUR_PUBLIC void RSMUnlock(struct RSMUnlock* inst);
_BUR_PUBLIC void RSMLock(struct RSMLock* inst);
_BUR_PUBLIC void RSMDirLock(struct RSMDirLock* inst);
_BUR_PUBLIC void RSMDirUnlock(struct RSMDirUnlock* inst);
_BUR_PUBLIC void RSMGetDPVInterface(struct RSMGetDPVInterface* inst);
_BUR_PUBLIC void RSMLanguageNameToID(struct RSMLanguageNameToID* inst);
_BUR_PUBLIC void RSMDeregisterClass(struct RSMDeregisterClass* inst);
_BUR_PUBLIC void RSMExpansionHandle(struct RSMExpansionHandle* inst);
_BUR_PUBLIC void RSMExpansionQuery(struct RSMExpansionQuery* inst);
_BUR_PUBLIC void RSMExpansionCleanUp(struct RSMExpansionCleanUp* inst);
_BUR_PUBLIC void RSMLoadDefaultCCFs(struct RSMLoadDefaultCCFs* inst);
_BUR_PUBLIC void RSMDefault_AddRef(struct RSMDefault_AddRef* inst);
_BUR_PUBLIC void RSMDefault_Release(struct RSMDefault_Release* inst);
_BUR_PUBLIC void RSMLogEntry(struct RSMLogEntry* inst);
_BUR_PUBLIC void RSMGetIfNode(struct RSMGetIfNode* inst);
_BUR_PUBLIC void RSMClInfoIf(struct RSMClInfoIf* inst);
_BUR_PUBLIC void RSMGetCurrentRuntime(struct RSMGetCurrentRuntime* inst);
_BUR_PUBLIC void vcwcstrncpy(struct vcwcstrncpy* inst);
_BUR_PUBLIC void vcwcslen(struct vcwcslen* inst);
_BUR_PUBLIC void vcwcscmp(struct vcwcscmp* inst);
_BUR_PUBLIC void RSMGetExpansionDir(struct RSMGetExpansionDir* inst);
_BUR_PUBLIC void RSMRegPubIF(struct RSMRegPubIF* inst);
_BUR_PUBLIC void RSMUnRegPubIF(struct RSMUnRegPubIF* inst);
_BUR_PUBLIC void RSMGetPubIF(struct RSMGetPubIF* inst);
_BUR_PUBLIC void RSMDirCreateDirectoryLRU(struct RSMDirCreateDirectoryLRU* inst);
_BUR_PUBLIC void RSMDirDeleteNodeLRU(struct RSMDirDeleteNodeLRU* inst);
_BUR_PUBLIC void RSMNewNodeLRU(struct RSMNewNodeLRU* inst);
_BUR_PUBLIC void RSMDirInsertNodeLRUHead(struct RSMDirInsertNodeLRUHead* inst);
_BUR_PUBLIC void RSMDirDeleteNodeLRUAtTail(struct RSMDirDeleteNodeLRUAtTail* inst);
_BUR_PUBLIC void RSMDirGetNodeLRUAtTail(struct RSMDirGetNodeLRUAtTail* inst);
_BUR_PUBLIC void RSMDeleteInterfaceNode(struct RSMDeleteInterfaceNode* inst);
_BUR_PUBLIC void RSMDirNodeHitLRU(struct RSMDirNodeHitLRU* inst);
_BUR_PUBLIC void RSMGetHWPlatform(struct RSMGetHWPlatform* inst);
_BUR_PUBLIC void RSMSystemTimerCreate(struct RSMSystemTimerCreate* inst);
_BUR_PUBLIC void RSMSystemTimerDelete(struct RSMSystemTimerDelete* inst);
_BUR_PUBLIC void RSMSystemCriticalSectionCreate(struct RSMSystemCriticalSectionCreate* inst);
_BUR_PUBLIC void RSMSystemCriticalSectionDelete(struct RSMSystemCriticalSectionDelete* inst);
_BUR_PUBLIC void RSMSystemCriticalSectionEnter(struct RSMSystemCriticalSectionEnter* inst);
_BUR_PUBLIC void RSMSystemCriticalSectionLeave(struct RSMSystemCriticalSectionLeave* inst);
_BUR_PUBLIC void RSMDirBalance(struct RSMDirBalance* inst);
_BUR_PUBLIC void RSMSetCurrentRuntime(struct RSMSetCurrentRuntime* inst);
_BUR_PUBLIC void RSMDirCreateDirectoryHashSize(struct RSMDirCreateDirectoryHashSize* inst);
_BUR_PUBLIC void RSMCodeTest(struct RSMCodeTest* inst);
_BUR_PUBLIC void RSMUpdateDatapoints(struct RSMUpdateDatapoints* inst);
_BUR_PUBLIC void RSMNodeDelete(struct RSMNodeDelete* inst);
_BUR_PUBLIC void RSMDirSaveNodeToFile(struct RSMDirSaveNodeToFile* inst);
_BUR_PUBLIC void RSMDirLoadNodeFromFile(struct RSMDirLoadNodeFromFile* inst);
_BUR_PUBLIC void RSMGetClassStyledProperties(struct RSMGetClassStyledProperties* inst);
_BUR_PUBLIC void RSMDoubleToFormatedString(struct RSMDoubleToFormatedString* inst);
_BUR_PUBLIC void RSMGetTweak(struct RSMGetTweak* inst);
_BUR_PUBLIC void RSMGetHead(struct RSMGetHead* inst);
_BUR_PUBLIC void RSMVsprintf(struct RSMVsprintf* inst);
_BUR_PUBLIC void RSMDirIsLockingOwner(struct RSMDirIsLockingOwner* inst);
_BUR_PUBLIC void RSMMemoryStatistics(struct RSMMemoryStatistics* inst);
_BUR_PUBLIC void debugEvent(struct debugEvent* inst);
_BUR_PUBLIC void debugEventGroupEnable(struct debugEventGroupEnable* inst);
_BUR_PUBLIC void vco_memcpy(struct vco_memcpy* inst);
_BUR_PUBLIC void vco_memset(struct vco_memset* inst);
_BUR_PUBLIC void vcwcscpy(struct vcwcscpy* inst);
_BUR_PUBLIC void vcwcsncmp(struct vcwcsncmp* inst);
_BUR_PUBLIC void vcwcscat(struct vcwcscat* inst);
_BUR_PUBLIC void RSMNewNodeKey(struct RSMNewNodeKey* inst);
_BUR_PUBLIC void RSMDirSetHashMode(struct RSMDirSetHashMode* inst);
_BUR_PUBLIC void RSMDirSetOptions(struct RSMDirSetOptions* inst);
_BUR_PUBLIC void RSMGetClassDir(struct RSMGetClassDir* inst);
_BUR_PUBLIC void RSMGetMD5Sum(struct RSMGetMD5Sum* inst);
_BUR_PUBLIC void RSMstrftime(struct RSMstrftime* inst);
_BUR_PUBLIC void RSMCheckOverload(struct RSMCheckOverload* inst);
_BUR_PUBLIC void RSMRegisterSymbolTable(struct RSMRegisterSymbolTable* inst);
_BUR_PUBLIC void RSMLoadSymbolTable(struct RSMLoadSymbolTable* inst);
_BUR_PUBLIC void RSMCompareDouble(struct RSMCompareDouble* inst);
_BUR_PUBLIC void RSMSetBoundaryFailureCallback(struct RSMSetBoundaryFailureCallback* inst);
_BUR_PUBLIC void RSMShowStack(struct RSMShowStack* inst);
_BUR_PUBLIC void RSMShowStack2(struct RSMShowStack2* inst);
_BUR_PUBLIC void RSMSysGTickCount(struct RSMSysGTickCount* inst);
_BUR_PUBLIC void RSMSysGetSysTick(struct RSMSysGetSysTick* inst);
_BUR_PUBLIC void RSMGetSymbolName(struct RSMGetSymbolName* inst);
_BUR_PUBLIC void RSMGetBitNumber(struct RSMGetBitNumber* inst);
_BUR_PUBLIC void RSMRoundValue(struct RSMRoundValue* inst);
_BUR_PUBLIC void RSMAdjHigherValue(struct RSMAdjHigherValue* inst);
_BUR_PUBLIC void RSMAdjLowerValue(struct RSMAdjLowerValue* inst);
_BUR_PUBLIC void VCStrLen(struct VCStrLen* inst);
_BUR_PUBLIC void VCStrNewInit(struct VCStrNewInit* inst);
_BUR_PUBLIC void VCStrNewLen(struct VCStrNewLen* inst);
_BUR_PUBLIC void VCStrNewWChar(struct VCStrNewWChar* inst);
_BUR_PUBLIC void VCStrNewChar(struct VCStrNewChar* inst);
_BUR_PUBLIC void VCStrDup(struct VCStrDup* inst);
_BUR_PUBLIC void VCStrFree(struct VCStrFree* inst);
_BUR_PUBLIC void VCStrSetLen(struct VCStrSetLen* inst);
_BUR_PUBLIC void VCStrMaxLen(struct VCStrMaxLen* inst);
_BUR_PUBLIC void VCStrCat(struct VCStrCat* inst);
_BUR_PUBLIC void VCStrWCat(struct VCStrWCat* inst);
_BUR_PUBLIC void VCStrFormat(struct VCStrFormat* inst);
_BUR_PUBLIC void VCStrAppendChar(struct VCStrAppendChar* inst);
_BUR_PUBLIC void VCStrToUnicode(struct VCStrToUnicode* inst);
_BUR_PUBLIC void VCStrFromUnicode(struct VCStrFromUnicode* inst);
_BUR_PUBLIC void VCStrIns(struct VCStrIns* inst);
_BUR_PUBLIC void VCStrCut(struct VCStrCut* inst);
_BUR_PUBLIC void VCStrGetStatistic(struct VCStrGetStatistic* inst);
_BUR_PUBLIC void VCStrSplit(struct VCStrSplit* inst);
_BUR_PUBLIC void VCStrTrace(struct VCStrTrace* inst);
_BUR_PUBLIC void VCStrReplace(struct VCStrReplace* inst);
_BUR_PUBLIC void VCStrDupBidirectional(struct VCStrDupBidirectional* inst);
_BUR_PUBLIC void VCStrUTMain(struct VCStrUTMain* inst);
_BUR_PUBLIC void RSMGetCPUType(struct RSMGetCPUType* inst);
_BUR_PUBLIC void RSMStatStop(struct RSMStatStop* inst);
_BUR_PUBLIC void RSMStatSnapshot(struct RSMStatSnapshot* inst);
_BUR_PUBLIC void RSMStatGetData(struct RSMStatGetData* inst);
_BUR_PUBLIC void RSMStatInit(struct RSMStatInit* inst);
_BUR_PUBLIC void RSMStatCurrent(struct RSMStatCurrent* inst);
_BUR_PUBLIC void RSMHwGetBatteryInfo(struct RSMHwGetBatteryInfo* inst);
_BUR_PUBLIC void RSMMDumpCacheLines(struct RSMMDumpCacheLines* inst);
_BUR_PUBLIC void RSMStatGetMainValues(struct RSMStatGetMainValues* inst);
_BUR_PUBLIC void RSMEventLogGet(struct RSMEventLogGet* inst);
_BUR_PUBLIC void RSMEventLogDataAvailable(struct RSMEventLogDataAvailable* inst);
_BUR_PUBLIC void RSMEventLogStop(struct RSMEventLogStop* inst);
_BUR_PUBLIC void RSMEventLogInitialize(struct RSMEventLogInitialize* inst);
_BUR_PUBLIC void RSMEventLogRunning(struct RSMEventLogRunning* inst);
_BUR_PUBLIC void RSMEventLog(struct RSMEventLog* inst);
_BUR_PUBLIC void RSMDirForEachNodeIn(struct RSMDirForEachNodeIn* inst);
_BUR_PUBLIC void VCTstSendMessage(struct VCTstSendMessage* inst);
_BUR_PUBLIC void RSMAlMemZero(struct RSMAlMemZero* inst);
_BUR_PUBLIC void VCEventPOP(struct VCEventPOP* inst);
_BUR_PUBLIC void VCEventPUSH(struct VCEventPUSH* inst);
_BUR_PUBLIC void VCEventGetValueAsInteger(struct VCEventGetValueAsInteger* inst);
_BUR_PUBLIC void VCEventGetValueAsDouble(struct VCEventGetValueAsDouble* inst);
_BUR_PUBLIC void VCEventGetValueAsUtf8(struct VCEventGetValueAsUtf8* inst);
_BUR_PUBLIC void VCEventGetValueAsUtf16(struct VCEventGetValueAsUtf16* inst);
_BUR_PUBLIC void VCEventGetValueAsChar(struct VCEventGetValueAsChar* inst);
_BUR_PUBLIC void VCEventCount(struct VCEventCount* inst);
_BUR_PUBLIC void VCEventFree(struct VCEventFree* inst);
_BUR_PUBLIC void VCEventEnable(struct VCEventEnable* inst);
_BUR_PUBLIC void RSMEventAlloc(struct RSMEventAlloc* inst);
_BUR_PUBLIC void RSMEventFree(struct RSMEventFree* inst);
_BUR_PUBLIC void RSMEventAddStringUTF8(struct RSMEventAddStringUTF8* inst);
_BUR_PUBLIC void RSMEventAddStringUTF16(struct RSMEventAddStringUTF16* inst);
_BUR_PUBLIC void RSMEventAddVCSTR(struct RSMEventAddVCSTR* inst);
_BUR_PUBLIC void RSMEventAddInt(struct RSMEventAddInt* inst);
_BUR_PUBLIC void RSMEventGetInt(struct RSMEventGetInt* inst);
_BUR_PUBLIC void RSMEventAddDbl(struct RSMEventAddDbl* inst);
_BUR_PUBLIC void RSMEventGetDbl(struct RSMEventGetDbl* inst);
_BUR_PUBLIC void RSMEventDUP(struct RSMEventDUP* inst);
_BUR_PUBLIC void RSMEnumRunningObjects(struct RSMEnumRunningObjects* inst);
_BUR_PUBLIC void RSMClassDump(struct RSMClassDump* inst);
_BUR_PUBLIC void RSMNewClassObject(struct RSMNewClassObject* inst);
_BUR_PUBLIC void RSMDeleteClassObject(struct RSMDeleteClassObject* inst);
_BUR_PUBLIC void RSMGetClassObjectByName(struct RSMGetClassObjectByName* inst);
_BUR_PUBLIC void RSMDeleteClassObjectByInterface(struct RSMDeleteClassObjectByInterface* inst);
_BUR_PUBLIC void RSMGetGlobalDPVInterface(struct RSMGetGlobalDPVInterface* inst);
_BUR_PUBLIC void RSMGetClassObjectByName(struct RSMGetClassObjectByName* inst);
_BUR_PUBLIC void VCStrToUTF8(struct VCStrToUTF8* inst);
_BUR_PUBLIC void Variant_DimAs(struct Variant_DimAs* inst);
_BUR_PUBLIC void Variant_GetInteger(struct Variant_GetInteger* inst);
_BUR_PUBLIC void Variant_GetDouble(struct Variant_GetDouble* inst);
_BUR_PUBLIC void Variant_GetString(struct Variant_GetString* inst);
_BUR_PUBLIC void Variant_GetAuto(struct Variant_GetAuto* inst);
_BUR_PUBLIC void Variant_SetInteger(struct Variant_SetInteger* inst);
_BUR_PUBLIC void Variant_SetDouble(struct Variant_SetDouble* inst);
_BUR_PUBLIC void Variant_SetString(struct Variant_SetString* inst);
_BUR_PUBLIC void Variant_SetAuto(struct Variant_SetAuto* inst);
_BUR_PUBLIC void Variant_GetType(struct Variant_GetType* inst);
_BUR_PUBLIC void Variant_GetSize(struct Variant_GetSize* inst);
_BUR_PUBLIC void Variant_Release(struct Variant_Release* inst);
_BUR_PUBLIC void RSMStringToDouble(struct RSMStringToDouble* inst);
_BUR_PUBLIC void RSMEventMsgGetStringUTF16(struct RSMEventMsgGetStringUTF16* inst);
_BUR_PUBLIC void RSMEventMsgGetStringUTF8(struct RSMEventMsgGetStringUTF8* inst);
_BUR_PUBLIC void VCTstUnloadProject(struct VCTstUnloadProject* inst);
_BUR_PUBLIC void VCTstReloadProject(struct VCTstReloadProject* inst);
_BUR_PUBLIC void RSMEventAddDateTime(struct RSMEventAddDateTime* inst);
_BUR_PUBLIC void RSMDirUseSeperateLocking(struct RSMDirUseSeperateLocking* inst);
_BUR_PUBLIC void RSMDirHasSeperateLocking(struct RSMDirHasSeperateLocking* inst);
_BUR_PUBLIC void RSMStringParse(struct RSMStringParse* inst);
_BUR_PUBLIC void RSMDVAdd(struct RSMDVAdd* inst);
_BUR_PUBLIC void RSMDVSet(struct RSMDVSet* inst);
_BUR_PUBLIC void RSMDVSum(struct RSMDVSum* inst);
_BUR_PUBLIC void RSMTimeEvent(struct RSMTimeEvent* inst);
_BUR_PUBLIC void RSMExecuteCommand(struct RSMExecuteCommand* inst);
_BUR_PUBLIC void VCStrFromUTF8String(struct VCStrFromUTF8String* inst);
_BUR_PUBLIC void RSMGetIntegerOption(struct RSMGetIntegerOption* inst);
_BUR_PUBLIC void VCStrToBidirectional(struct VCStrToBidirectional* inst);
_BUR_PUBLIC void RSMDBGVAdd(struct RSMDBGVAdd* inst);
_BUR_PUBLIC void RSMDBGCAdd(struct RSMDBGCAdd* inst);
_BUR_PUBLIC void RSMDBGTrace(struct RSMDBGTrace* inst);
_BUR_PUBLIC void RSMDBGTEna(struct RSMDBGTEna* inst);
_BUR_PUBLIC void RSMDBGTDis(struct RSMDBGTDis* inst);
_BUR_PUBLIC void printd(struct printd* inst);
_BUR_PUBLIC void vcwcbidiclass(struct vcwcbidiclass* inst);
_BUR_PUBLIC void vcwcmirrorchar(struct vcwcmirrorchar* inst);
_BUR_PUBLIC void RSMCachedAlloc(struct RSMCachedAlloc* inst);
_BUR_PUBLIC void RSMAsc2BRStr(struct RSMAsc2BRStr* inst);
_BUR_PUBLIC void IAPIparam_CreateInstance(struct IAPIparam_CreateInstance* inst);
_BUR_PUBLIC void IAPIparam_Destroy(struct IAPIparam_Destroy* inst);
_BUR_PUBLIC void IAPI_CallUserFunc(struct IAPI_CallUserFunc* inst);
_BUR_PUBLIC void IAPI_InitIAPI(struct IAPI_InitIAPI* inst);
_BUR_PUBLIC void IAPI_LogEntry(struct IAPI_LogEntry* inst);
_BUR_PUBLIC void IProperty_CreateInstance(struct IProperty_CreateInstance* inst);
_BUR_PUBLIC void RSMSystemTaskSetLowMemory(struct RSMSystemTaskSetLowMemory* inst);
_BUR_PUBLIC void RSMSystemTaskIsLowMemory(struct RSMSystemTaskIsLowMemory* inst);
_BUR_PUBLIC void RSMDebuggerInit(struct RSMDebuggerInit* inst);
_BUR_PUBLIC void RSMExpansionInitialize(struct RSMExpansionInitialize* inst);
_BUR_PUBLIC void RSMExpansionQuery(struct RSMExpansionQuery* inst);
_BUR_PUBLIC void RSMExpansionHandle(struct RSMExpansionHandle* inst);
_BUR_PUBLIC void RSMIsServiceMode(struct RSMIsServiceMode* inst);
_BUR_PUBLIC void VCMapMemory(struct VCMapMemory* inst);
_BUR_PUBLIC void VCPinyinGetDictionary(struct VCPinyinGetDictionary* inst);
_BUR_PUBLIC void RSMDebuggerAll(struct RSMDebuggerAll* inst);
_BUR_PUBLIC void RSMProfilerUserLogEvent(struct RSMProfilerUserLogEvent* inst);
_BUR_PUBLIC void RSMSetVCWTIpAddress(struct RSMSetVCWTIpAddress* inst);
_BUR_PUBLIC void RSMGetVCWTIpAddress(struct RSMGetVCWTIpAddress* inst);
_BUR_PUBLIC void RSMTskSleepUsec(struct RSMTskSleepUsec* inst);
_BUR_PUBLIC void RSMReadUsecCounter(struct RSMReadUsecCounter* inst);
_BUR_PUBLIC void RSMGetRealTimeClock(struct RSMGetRealTimeClock* inst);
_BUR_PUBLIC void RSMSetRealTimeClock(struct RSMSetRealTimeClock* inst);
_BUR_PUBLIC void RSMHwBeep(struct RSMHwBeep* inst);
_BUR_PUBLIC void RSMIfAddrGet(struct RSMIfAddrGet* inst);
_BUR_PUBLIC void RSMEthOnboardDeviceGet(struct RSMEthOnboardDeviceGet* inst);
_BUR_PUBLIC void RSMEthIpAddressGet(struct RSMEthIpAddressGet* inst);
_BUR_PUBLIC void RSMHwGetNodeSwitch(struct RSMHwGetNodeSwitch* inst);
_BUR_PUBLIC void RSMHwGetCpuTemp(struct RSMHwGetCpuTemp* inst);
_BUR_PUBLIC void RSMPciConfigInByte(struct RSMPciConfigInByte* inst);
_BUR_PUBLIC void RSMPciConfigInWord(struct RSMPciConfigInWord* inst);
_BUR_PUBLIC void RSMPciConfigInLong(struct RSMPciConfigInLong* inst);
_BUR_PUBLIC void RSMPciConfigOutByte(struct RSMPciConfigOutByte* inst);
_BUR_PUBLIC void RSMPciConfigOutWord(struct RSMPciConfigOutWord* inst);
_BUR_PUBLIC void RSMPciConfigOutLong(struct RSMPciConfigOutLong* inst);
_BUR_PUBLIC void RSMPciFindDevice(struct RSMPciFindDevice* inst);
_BUR_PUBLIC void RSMPciFindClass(struct RSMPciFindClass* inst);
_BUR_PUBLIC void RSMInitHwBreakpoint_dbgInit(struct RSMInitHwBreakpoint_dbgInit* inst);
_BUR_PUBLIC void RSMSetHwBreakpoint_b(struct RSMSetHwBreakpoint_b* inst);
_BUR_PUBLIC void RSMSetHwBreakpoint_bh(struct RSMSetHwBreakpoint_bh* inst);
_BUR_PUBLIC void RSMDeleteHwBreakpoint_bd(struct RSMDeleteHwBreakpoint_bd* inst);
_BUR_PUBLIC void RSMTestHwBreakpoint(struct RSMTestHwBreakpoint* inst);


#ifdef __cplusplus
};
#endif
#endif /* _VCRESMAN_ */

