#include "MpPotion.h"

MpPotion::MpPotion(int quantity, int count) : MakePotion(quantity, count) {
    //cout << "You got " << count << " Mp Potion(s), they will recover you by " << quantity << ". " << endl;  
};

MpPotion::~MpPotion() {
    
};

void MpPotion::Use(Saber* saber, int quantity, int count) {
    saber->m_Mp += quantity;
    count -= 1;
};

void MpPotion::Use(Archer* archer, int quantity, int count) {
    archer->m_Mp += quantity;
    count -= 1;
};

void MpPotion::Use(Caster* caster, int quantity, int count) {
    caster->m_Mp += quantity;
    count -= 1;
};

void MpPotion::Use(Berserker* berserker, int quantity, int count) {
    berserker->m_Mp += quantity;
    count -= 1;
};
