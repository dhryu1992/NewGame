#ifndef __SABER_H__
#define __SABER_H__
#include <iostream>
#include "IntEnergy.h"
#include "MakeMonster.h"
using namespace std;

class Saber : public IntEnergy {
    public:
        int selectSkill;
		Saber();
        virtual ~Saber();
        int Hit(Saber*);
        int injured(Saber*, int);
};

#endif
