#include "BerserkerSkill.h"

Club::Club(int power) : WeaponStatus(power) {
    cout << "Get a Club!" << endl;
};

void Club::ClubSwing() {
    cout << "Used Club basically!" << endl;
    m_power -= 5;
    cout << "Weapon's power left: " << m_power << endl;
};

Club::~Club() {
    cout << "Broken Club!" << endl;
};

void Club::BasicSkill() {
   void ClubSwing(); 
};

void Club::UltimateSkill() {
    cout << "Used Club Ultimate!" << endl;
    m_power -= 10;
    cout << "Weapon's power left: " << m_power << endl;
};


