#ifndef __MONSTER_H__
#define __MONSTER_H__
#include <iostream>
#include "IntEnergy.h"
using namespace std;

class MakeMonster : public IntEnergy {
	public:
		MakeMonster();
		virtual ~MakeMonster();
        int injured(MakeMonster*, int);
        int Hit(MakeMonster*);
};
    

#endif
