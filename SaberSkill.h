#ifndef __SABERSKILL_H__
#define __SABERSKILL_H__
#include <iostream>
#include "MakeSaber.h"
#include "WeaponStatus.h"
using namespace std;

class Sword : public WeaponStatus {
    protected:
        void SwordSwing();
        void SwordUlt();
    public:
        Sword(int);
        virtual ~Sword();
        
        void BasicSkill();
        void UltimateSkill();
        
};

#endif
