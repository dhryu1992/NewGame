#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>
using namespace std;

class Weapon {
     private:
         int power;
     public:
         Weapon(int);
         ~Weapon();
         virtual void Use(const int);
};

#endif
