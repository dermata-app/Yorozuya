// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_param_cash.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct  _param_cash_select : _param_cash
    {
        char in_szAcc[13];
        unsigned int out_dwCashAmount;
        char in_bySetDiscount[4];
        unsigned __int16 out_bReturn;
        char in_byLimDiscount;
    public:
        _param_cash_select(unsigned int dwAc, unsigned int dwAv, uint16_t wSock);
        void ctor__param_cash_select(unsigned int dwAc, unsigned int dwAv, uint16_t wSock);
        int size();
        ~_param_cash_select();
        void dtor__param_cash_select();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_param_cash_select, 44>(), "_param_cash_select");
END_ATF_NAMESPACE
