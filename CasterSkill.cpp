#include "CasterSkill.h"

Wand::Wand(int power) : WeaponStatus(power) {
    cout << "Get a Wand" << endl;
}

void Wand::Wanding() {
    cout << "Used Wand basically!" << endl;
    m_power -= 5;
    cout << "Weapon's power left: " << m_power << endl;
}

Wand::~Wand() {
    cout << "Broken Sword!" << endl;
}

void Wand::BasicSkill() {
   void Wanding(); 
}

void Wand::UltimateSkill() {
    cout << "Used Wand Ultimate!" << endl;
    m_power -= 10;
    cout << "Weapon's power left: " << m_power << endl;
};


