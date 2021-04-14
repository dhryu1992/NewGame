#ifndef __BERSERKER_H__
#define __BERSERKER_H__
#include <iostream>
#include "IntEnergy.h"
#include "MakeMonster.h"
using namespace std;

class Berserker : public IntEnergy {
	public:
		Berserker();
		virtual ~Berserker();
        int selectSkill;
        int Hit(Berserker*);
        int injured(Berserker*, int);
        int Ultimate(Berserker*);
};

#endif
