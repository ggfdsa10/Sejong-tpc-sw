#ifndef StsTrigger_HH
#define StsTrigger_HH

#include "StsDAQFrame.hh"
#include "StsDst.hh"
#include "StsRawTPCPad.hh"

#include "StsTPCDrum.hh"



class StsTrigger
{
    public:
        StsTrigger();
        virtual ~StsTrigger();

        virtual Int_t Init();
        virtual Int_t GetCoBoNum();
        virtual Int_t GetAsAdNum();
        virtual StsTPCDrum* GetTPCGeometry();
        virtual Int_t FillData(StsDst* dst, StsDAQFrame* frame); 
};

#endif