#ifndef __INTENERGY_H__
#define __INTENERGY_H__
#include <iostream>
using namespace std;

class IntEnergy {
	public:
		int m_Hp;
		int m_Mp;
		int m_Dx;
		IntEnergy(const int m_hp, const int m_mp, const int m_dx);
		~IntEnergy();
};

#endif
