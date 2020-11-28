#include "MakeCaster.h"

Caster::Caster() : IntEnergy::IntEnergy(100, 200, 50) {
	cout << "You Select Caster!" << endl;
} 

Caster::~Caster() {
	cout << "Caster Terminated!" << endl;
}

int Caster::Hit(Caster* caster) {
    cout << "You chose Hit!" << endl;
    caster->m_Mp -= 10;
    cout << "Caster's Mp left: " << caster->m_Mp << endl;
    return caster->m_Mp;
};

int Caster::injured(Caster* caster, int damage) {
     caster->m_Hp -= damage;
     cout << "caster's Hp left: " << caster->m_Hp << endl;
     return caster->m_Hp;
};

int Caster::Ultimate(Caster* caster) {
    cout << "You used your Ultimate!" << endl;
    caster->m_Mp -= 70;
    cout << "Caster's Mp left: " << caster->m_Mp << endl;
    return caster->m_Mp;
};  

