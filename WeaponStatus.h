#ifndef __WEAPONSTATUS_H__
#define __WEAPONSTATUS_H__
#include <iostream>
using namespace std;

class WeaponStatus {
     protected:
         int m_power;
     public:
         WeaponStatus(int);
         ~WeaponStatus();
         virtual void BasicSkill();
         virtual void UltimateSkill();
         //void Use(const int);
};

#endif
