#include "MakePotion.h"

MakePotion::MakePotion(int quantity, int count) : m_Quantity(quantity), m_CountPotion(count) {
    cout << "You got the Potions" << endl;
};

MakePotion::~MakePotion() {

};

void MakePotion::Use(Saber*, int quantity, int count) {    
    cout << "You used Potion" << endl;
};


void MakePotion::Use(Archer*, int quantity, int count) {    
    cout << "You used Potion" << endl;
};

void MakePotion::Use(Caster*, int quantity, int count) {    
    cout << "You used Potion" << endl;
};

void MakePotion::Use(Berserker*, int quantity, int count) {    
    cout << "You used Potion" << endl;
};
