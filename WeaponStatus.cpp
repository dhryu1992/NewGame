#include "WeaponStatus.h"

WeaponStatus::WeaponStatus(int power) {
	cout << "무기 생성! 무기내구력: " << power << endl;
}

WeaponStatus::~WeaponStatus() {
	cout << "무기파괴!" << endl;
}

void WeaponStatus::Use(const int Damaging) {
	power = power - Damaging; 
}
