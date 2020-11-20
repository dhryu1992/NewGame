#include "IntEnergy.h"

IntEnergy::IntEnergy(const int hp, const int mp, const int dx) : Hp(hp), Mp(mp), Dx(dx) {
	cout << "총 체력: " << Hp << ", " << "총 마력: " << Mp << ", " << "총 민첩: " << Dx << endl;
}


IntEnergy::~IntEnergy() {
	
}



