// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <TimeLimitMgr.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using TimeLimitMgrChack_Time2_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrChack_Time2_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrChack_Time2_ptr);
        using TimeLimitMgrCheckPlayerStatus4_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char*, unsigned int*);
        using TimeLimitMgrCheckPlayerStatus4_clbk = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char*, unsigned int*, TimeLimitMgrCheckPlayerStatus4_ptr);
        using TimeLimitMgrClacLastLogoutTimeSec6_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        using TimeLimitMgrClacLastLogoutTimeSec6_clbk = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int, TimeLimitMgrClacLastLogoutTimeSec6_ptr);
        using TimeLimitMgrClacLastLogoutTimeToFatigue8_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        using TimeLimitMgrClacLastLogoutTimeToFatigue8_clbk = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int, TimeLimitMgrClacLastLogoutTimeToFatigue8_ptr);
        using TimeLimitMgrDelete_All10_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrDelete_All10_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrDelete_All10_ptr);
        using TimeLimitMgrFind_Data12_ptr = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        using TimeLimitMgrFind_Data12_clbk = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, unsigned int, TimeLimitMgrFind_Data12_ptr);
        using TimeLimitMgrFind_Data14_ptr = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        using TimeLimitMgrFind_Data14_clbk = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, uint16_t, TimeLimitMgrFind_Data14_ptr);
        using TimeLimitMgrGetEndPlayTime16_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrGetEndPlayTime16_clbk = uint16_t (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrGetEndPlayTime16_ptr);
        using TimeLimitMgrGetPeriodCnt18_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrGetPeriodCnt18_clbk = uint16_t (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrGetPeriodCnt18_ptr);
        using TimeLimitMgrGetPlayFDegree20_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrGetPlayFDegree20_clbk = unsigned int (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrGetPlayFDegree20_ptr);
        using TimeLimitMgrGetPlayerData22_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*, uint16_t, char*, long double*);
        using TimeLimitMgrGetPlayerData22_clbk = uint16_t (WINAPIV*)(struct TimeLimitMgr*, uint16_t, char*, long double*, TimeLimitMgrGetPlayerData22_ptr);
        using TimeLimitMgrGetPlayerPenalty24_ptr = long double (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        using TimeLimitMgrGetPlayerPenalty24_clbk = long double (WINAPIV*)(struct TimeLimitMgr*, uint16_t, TimeLimitMgrGetPlayerPenalty24_ptr);
        using TimeLimitMgrGetPlayerStatus26_ptr = char (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        using TimeLimitMgrGetPlayerStatus26_clbk = char (WINAPIV*)(struct TimeLimitMgr*, uint16_t, TimeLimitMgrGetPlayerStatus26_ptr);
        using TimeLimitMgrInitializeTLMgr28_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrInitializeTLMgr28_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrInitializeTLMgr28_ptr);
        using TimeLimitMgrInsertPlayerStatus30_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char, unsigned int, unsigned int, bool);
        using TimeLimitMgrInsertPlayerStatus30_clbk = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char, unsigned int, unsigned int, bool, TimeLimitMgrInsertPlayerStatus30_ptr);
        using TimeLimitMgrInstance32_ptr = struct TimeLimitMgr* (WINAPIV*)();
        using TimeLimitMgrInstance32_clbk = struct TimeLimitMgr* (WINAPIV*)(TimeLimitMgrInstance32_ptr);
        using TimeLimitMgrLoadTLINIFile34_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrLoadTLINIFile34_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrLoadTLINIFile34_ptr);
        using TimeLimitMgrPop_Data36_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t);
        using TimeLimitMgrPop_Data36_clbk = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t, TimeLimitMgrPop_Data36_ptr);
        using TimeLimitMgrPush_Data38_ptr = void (WINAPIV*)(struct TimeLimitMgr*, struct Player_TL_Status*, uint16_t);
        using TimeLimitMgrPush_Data38_clbk = void (WINAPIV*)(struct TimeLimitMgr*, struct Player_TL_Status*, uint16_t, TimeLimitMgrPush_Data38_ptr);
        using TimeLimitMgrReInitFatigue40_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrReInitFatigue40_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrReInitFatigue40_ptr);
        using TimeLimitMgrReSetPercent42_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        using TimeLimitMgrReSetPercent42_clbk = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t, TimeLimitMgrReSetPercent42_ptr);
        using TimeLimitMgrSetConfig44_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);
        using TimeLimitMgrSetConfig44_clbk = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, TimeLimitMgrSetConfig44_ptr);
        using TimeLimitMgrSetLogoutFDegree46_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        using TimeLimitMgrSetLogoutFDegree46_clbk = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, TimeLimitMgrSetLogoutFDegree46_ptr);
        using TimeLimitMgrSetPlayFDegree48_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        using TimeLimitMgrSetPlayFDegree48_clbk = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, TimeLimitMgrSetPlayFDegree48_ptr);
        using TimeLimitMgrSetTLEnable50_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        using TimeLimitMgrSetTLEnable50_clbk = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t, TimeLimitMgrSetTLEnable50_ptr);
        using TimeLimitMgrSetTime52_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t);
        using TimeLimitMgrSetTime52_clbk = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t, TimeLimitMgrSetTime52_ptr);
        using TimeLimitMgrSumMinuteBetweenSec54_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct tm*);
        using TimeLimitMgrSumMinuteBetweenSec54_clbk = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct tm*, TimeLimitMgrSumMinuteBetweenSec54_ptr);
        using TimeLimitMgrSumMinuteOne56_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct _SYSTEMTIME*);
        using TimeLimitMgrSumMinuteOne56_clbk = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct _SYSTEMTIME*, TimeLimitMgrSumMinuteOne56_ptr);
        
        using TimeLimitMgrctor_TimeLimitMgr58_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrctor_TimeLimitMgr58_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrctor_TimeLimitMgr58_ptr);
        using TimeLimitMgrUpdatePlayerStatus60_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char);
        using TimeLimitMgrUpdatePlayerStatus60_clbk = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char, TimeLimitMgrUpdatePlayerStatus60_ptr);
        
        using TimeLimitMgrdtor_TimeLimitMgr64_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        using TimeLimitMgrdtor_TimeLimitMgr64_clbk = void (WINAPIV*)(struct TimeLimitMgr*, TimeLimitMgrdtor_TimeLimitMgr64_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE