#include "WeaponStatus.h"

WeaponStatus::WeaponStatus(int power) {
	cout << "You armed your weapon!" << "power: "<< m_power << endl;
}

WeaponStatus::~WeaponStatus() {
	cout << "Your Weapon is destroyed" << endl;
}

void WeaponStatus::Use(const int Damaging) {
	power = power - Damaging * 0.2; 
}
