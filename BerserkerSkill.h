#ifndef __BERSERKERSKILL_H__
#define __BERKSERKERSKILL_H__
#include <iostream>
#include "MakeBerserker.h"
#include "WeaponStatus.h"
using namespace std;

class Club : public WeaponStatus {
    protected:
        void ClubSwing();
        void ClubUlt();
    public:
        Club(int);
        virtual ~Club();
        
        void BasicSkill();
        void UltimateSkill();
        
};

#endif
