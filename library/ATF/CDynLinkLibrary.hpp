// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CCmdTarget.hpp>
#include <CTypedSimpleList.hpp>
#include <HINSTANCE__.hpp>


START_ATF_NAMESPACE
    struct  CDynLinkLibrary : CCmdTarget
    {
        HINSTANCE__ *m_hModule;
        HINSTANCE__ *m_hResource;
        CTypedSimpleList<CRuntimeClass *> m_classList;
        CTypedSimpleList<COleObjectFactory *> m_factoryList;
        int m_bSystem;
        CDynLinkLibrary *m_pNextDLL;
    };
END_ATF_NAMESPACE