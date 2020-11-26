#include "MakeMonster.h"

MakeMonster::MakeMonster() : IntEnergy(50, 50, 50) {
	cout << "Monster(in GYM) Appear!\n" << endl;
}

MakeMonster::~MakeMonster() {
	cout << "Monster Dead!\n" << endl;
}

int MakeMonster::injured(MakeMonster* monster, int damage) {
    monster->m_Hp -= damage;
    cout << "monster's Hp left: " << monster->m_Hp << endl << endl;
    return monster->m_Hp;
}

int MakeMonster::Hit(MakeMonster* monster) {
        cout << "Monster hit You!" << endl;
        monster->m_Mp -= 2;
        cout << "monster's Mp left: " << monster->m_Mp << endl;
        return monster->m_Mp;
}
