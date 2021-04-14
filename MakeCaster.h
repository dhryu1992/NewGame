#ifndef __CASTER_H__
#define __CASTER_H__
#include <iostream>
#include "IntEnergy.h"
#include "MakeMonster.h"
using namespace std;

class Caster : public IntEnergy {
	public:
		Caster();
		virtual ~Caster();
        int selectSkill;
        int Hit(Caster*);
        int injured(Caster*, int);
        int Ultimate(Caster*);
};

#endif
