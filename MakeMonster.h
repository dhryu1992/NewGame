#ifndef __MONSTER_H__
#define __MONSTER_H__
#include <iostream>
#include "IntEnergy.h"
using namespace std;

class MakeMonster : public IntEnergy {
	protected:
		int m_Hp;
		int m_Mp;
		int m_Dx;
	public:
		MakeMonster();
		~MakeMonster();
};

#endif
