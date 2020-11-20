#ifndef __INTENERGY_H__
#define __INTENERGY_H__
#include <iostream>
using namespace std;

class IntEnergy {
	protected:
		int Hp;
		int Mp;
		int Dx;
	public:
		IntEnergy(const int hp, const int mp, const int dx);
		~IntEnergy();
};

#endif
