#ifndef __ARCHERSKILL_H__
#define __ARCHERSKILL_H__
#include <iostream>
#include "MakeArcher.h"
#include "WeaponStatus.h"
using namespace std;

class Bow : public WeaponStatus {
    protected:
        void BowShot();
        void BowUlt();
    public:
        Bow(int);
        virtual ~Bow();
        
        void BasicSkill();
        void UltimateSkill();
        
};

#endif
