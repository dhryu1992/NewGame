#ifndef __CASTERSKILL_H__
#define __CASTERSKILL_H__
#include <iostream>
#include "MakeCaster.h"
#include "WeaponStatus.h"
using namespace std;

class Wand : public WeaponStatus {
    protected:
        void Wanding();
        void WandUlt();
    public:
        Wand(int);
        virtual ~Wand();
        
        void BasicSkill();
        void UltimateSkill();
        
};

#endif
