#include "SaberSkill.h"

Sword::Sword(int power) : WeaponStatus(power) {
    cout << "Get a Sword!" << endl;
}

void Sword::SwordSwing() {
    cout << "Used Sword basically!" << endl;
    m_power -= 5;
    cout << "Weapon's power left: " << m_power << endl;
}

Sword::~Sword() {
    cout << "Broken Sword!" << endl;
}

void Sword::BasicSkill() {
   void SwordSwing(); 
}

void Sword::UltimateSkill() {
    cout << "Used Sword Ultimate!" << endl;
    m_power -= 10;
    cout << "Weapon's power left: " << m_power << endl;
};


