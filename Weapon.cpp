#include "Weapon.h"

Weapon::Weapon(int power) {
	cout << "무기 생성! 무기내구력: " << power << endl;
}

Weapon::~Weapon() {
	cout << "무기파괴!" << endl;
}

void Weapon::Use(const int Damaging) {
	power = power - Damaging; 
}
