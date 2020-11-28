#include "MakeBerserker.h"

Berserker::Berserker() : IntEnergy::IntEnergy(300, 200, 150) {
	cout << "You Selected Berserker!" << endl;
}; 

Berserker::~Berserker() {
	cout << "Berserker Terminated!" << endl;
};

int Berserker::Hit(Berserker* berserker) {
    cout << "You chose Hit!" << endl;
    berserker->m_Mp -= 10;
    cout << "Berserker's Mp left: " << berserker->m_Mp << endl;
    return berserker->m_Mp;
};

int Berserker::injured(Berserker* berserker, int damage) {
    berserker->m_Hp -= damage;
    cout << "Berserker's Hp left: " << berserker->m_Hp << endl;
    return berserker->m_Hp;
};

int Berserker::Ultimate(Berserker* berserker) {
    cout << "You used your Ultimate!" << endl;
    berserker->m_Mp -= 70;
    cout << "Berserker's Mp left: " << berserker->m_Mp << endl;
    return berserker->m_Mp;
};

