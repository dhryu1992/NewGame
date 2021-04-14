#ifndef __MPPOTION_H__
#define __MPPOTION_H__
#include <iostream>
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
#include "MakePotion.h"
using namespace std;

class MpPotion : public MakePotion {
    public:
        MpPotion(int, int);
        virtual ~MpPotion();
        virtual void Use(Saber*, int, int);
        virtual void Use(Archer*, int, int);
        virtual void Use(Caster*, int, int);
        virtual void Use(Berserker*, int, int);
};

#endif
