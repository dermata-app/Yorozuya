// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _starting_vote_inform_zocl
    {
        int nVoteSerial;
        char byLimGrade;
        unsigned __int16 wLeftSec;
        unsigned __int16 wContentSize;
        char wszContent[1280];
    public:
        _starting_vote_inform_zocl();
        void ctor__starting_vote_inform_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_starting_vote_inform_zocl, 1289>(), "_starting_vote_inform_zocl");
END_ATF_NAMESPACE
