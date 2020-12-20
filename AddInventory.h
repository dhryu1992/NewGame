#ifndef __ADDINVENTORY_H__
#define __ADDINVENTORY_H__
#include <iostream>
#include "MakePotion.h"
#include "HpPotion.h"
#include "MpPotion.h"
using namespace std;

class Inventory {
private:
    int hppotion_50;
    int hppotion_150;
    int hppotion_250;
    int mppotion_50;
    int mppotion_150;
    int mppotion_250;
public:
    Inventory();
    virtual ~Inventory();
    void AddHpPotion(HpPotion*);
    void ShowInventoryInfo();
};

#endif
