#include "AddInventory.h"

Inventory::Inventory() {
       
};

Inventory::~Inventory() {

}

void Inventory::AddHpPotion(HpPotion* hp_potion) {
    
}

void Inventory::ShowInventoryInfo() {
    cout << "HpPotion(50) : " << hppotion_50 << endl;
    cout << "HpPotion(150) : " << hppotion_150 << endl;
    cout << "HpPotion(250) : " << hppotion_250 << endl;
    cout << "MpPotion(50) : " << mppotion_50 << endl;
    cout << "MpPotion(150) : " << mppotion_150 << endl;
    cout << "MpPotion(250) : " << mppotion_250 << endl;
    
}
