#include "MakeArcher.h"

Archer::Archer() : IntEnergy::IntEnergy(150, 150, 200) {
	cout << "You can use Archer class" << endl;
} 

Archer::~Archer() {
	cout << "Archer Terminated!" << endl;
}

int Archer::Hit(Archer* archer) {
    cout << "You chose Hit!" << endl;
    archer->m_Mp -= 10;
    cout << "Archer's Mp left: " << archer->m_Mp << endl;
    return archer->m_Mp;
};

int Archer::injured(Archer* archer, int damage) {
    archer->m_Hp -= damage;
    cout << "archer's Hp left: " << archer->m_Hp << endl;
    return archer->m_Hp;
};

int Archer::Ultimate(Archer* archer) {
    cout << "You used your Ultimate!" << endl;
    archer->m_Mp -= 70;
    cout << "Archer's Mp left: " << archer->m_Mp << endl;
    return archer->m_Mp;
}

