#include "MakeSaber.h"

Saber::Saber() : IntEnergy::IntEnergy(200, 100, 50) {
    cout << "You can use Saber class" << endl;
} 

Saber::~Saber() {
	cout << "Saber Terminated!" << endl;
}

int Saber::Hit(Saber* saber) {
    cout << "You chose Hit!" << endl;
    saber->m_Mp -= 10;
    cout << "Saber's Mp left: " << saber->m_Mp << endl; 
    return saber->m_Mp;
};

int Saber::injured(Saber* saber, int damage) {
     saber->m_Hp -= damage;
     cout << "saber's Hp left: " << saber->m_Hp << endl;
     return saber->m_Hp;
};

int Saber::Ultimate(Saber* saber) {
    cout << "You used your Ultimate!" << endl;
    saber->m_Mp -= 70;
    cout << "Saber's Mp left: " << saber->m_Mp << endl;
    return saber->m_Mp;
};
