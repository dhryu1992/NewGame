#include "HpPotion.h"

HpPotion::HpPotion(int quantity, int count) : MakePotion(quantity, count) {
    //cout << "You got " << count << " Hp Potion(s), they will recover you by " << quantity << ". " << endl;  
};

HpPotion::~HpPotion() {
    
};

void HpPotion::Use(Saber* saber, int quantity, int count) {
    saber->m_Hp += quantity;
    count -= 1;
};
