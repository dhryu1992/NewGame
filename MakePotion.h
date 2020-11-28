#ifndef __POTION_H__
#define __POTION_H__
#include <iostream>
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"

using namespace std;

class MakePotion {
    protected:
        int m_Quantity;
        int m_CountPotion;

    public:
        MakePotion(int, int);
        virtual ~MakePotion();
        void Use(Saber*, int, int);
        void Use(Archer*, int, int);
        void Use(Caster*, int, int);
        void Use(Berserker*, int, int);
};

#endif
