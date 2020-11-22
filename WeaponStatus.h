#ifndef __WEAPONSTATUS_H__
#define __WEAPONSTATUS_H__
#include <iostream>
using namespace std;

class WeaponStatus {
     private:
         int m_power;
     public:
         WeaponStatus(int);
         ~WeaponStatus();
         void Use(const int);
};

#endif
