#ifndef __HPPOTION_H__
#define __HPPOTION_H__
#include <iostream>
#include "MakeSaber.h"
#include "MakePotion.h"
using namespace std;

class HpPotion : public MakePotion {
public:
        HpPotion(int, int);
        virtual ~HpPotion();
        void Use(Saber*, int, int);
};

#endif
