#include "WeaponStatus.h"

WeaponStatus::WeaponStatus(int power) : m_power(power) {
	cout << "You armed your weapon! " << "power: "<< power << endl;
}

WeaponStatus::~WeaponStatus() {
	cout << "Your Weapon is destroyed" << endl;
}

void WeaponStatus::BasicSkill() {
    cout << "You used your Weapon directly!" << endl;
}

void WeaponStatus::UltimateSkill() {
    cout << "You used Ultimate Skill" << endl;
};
/*void WeaponStatus::Use(const int Damaging) {
	power = power - Damaging * 0.2; 
}*/
