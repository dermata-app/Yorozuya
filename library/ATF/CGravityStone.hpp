// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGameObject.hpp>
#include <CPlayer.hpp>
#include <_object_create_setdata.hpp>


START_ATF_NAMESPACE
    struct  CGravityStone : CGameObject
    {
        unsigned int m_dwTakeLimitTime;
        CPlayer *m_pkOwner;
    public:
        CGravityStone(uint16_t wInx);
        void ctor_CGravityStone(uint16_t wInx);
        char CheatGet(struct CPlayer* pkPlayer);
        bool CheckTakeTimeLimit();
        void Clear();
        void Destroy();
        char Drop(struct CPlayer* pkPlayer);
        char Get(uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer);
        struct CPlayer* GetOwner();
        float* GetOwnerCurPos();
        bool IsInTown();
        bool IsNearPosition(float* pfCurPos);
        bool IsValidOwner(struct CPlayer* pkPlayer);
        bool Regen(struct _object_create_setdata* pParam);
        void SendMsg_Create();
        void SendMsg_Destroy();
        void SendMsg_FixPosition(int n);
        void SetOwner(struct CPlayer* pkPlayer);
        ~CGravityStone();
        void dtor_CGravityStone();
    };
END_ATF_NAMESPACE
