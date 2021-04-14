#ifndef __ARCHER_H__
#define __ARCHER_H__
#include <iostream>
#include "IntEnergy.h"
#include "MakeMonster.h"

using namespace std;

class Archer : public IntEnergy {
	public:
		Archer();
		virtual ~Archer();
        int selectSkill;
        int Hit(Archer*);
        int injured(Archer*, int);
        int Ultimate(Archer*);
};

#endif
