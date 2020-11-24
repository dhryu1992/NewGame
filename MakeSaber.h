#ifndef __SABER_H__
#define __SABER_H__
#include <iostream>
#include "IntEnergy.h"
using namespace std;
enum AttackSaber {
    CUTTING = 1,
    STABBING,
    ULTIMATE
};

class Saber : public IntEnergy {
	public:
        int SelectAttack;
		Saber();
        ~Saber();
        //void ShowskillInfo_LV1();
        //MakeMonster makemonster;
};

#endif
