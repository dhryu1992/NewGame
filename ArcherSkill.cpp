#include "ArcherSkill.h"

Bow::Bow(int power) : WeaponStatus(power) {
    cout << "Get a Sword!" << endl;
}

void Bow::BowShot() {
    cout << "Used Bow basically!" << endl;
    m_power -= 5;
    cout << "Weapon's power left: " << m_power << endl;
}

Bow::~Bow() {
    cout << "Broken Sword!" << endl;
}

void Bow::BasicSkill() {
   void BowShot(); 
}

void Bow::UltimateSkill() {
    cout << "Used Sword Ultimate!" << endl;
    m_power -= 10;
    cout << "Weapon's power left: " << m_power << endl;
};


