#include "MakeMonster.h"

MakeMonster::MakeMonster(int hp, int mp, int dx) : IntEnergy(hp, mp, dx) {
	cout << "Monster Appear!\n" << endl;
};

MakeMonster::~MakeMonster() {
	cout << "Monster Dead!" << endl;
};

int MakeMonster::injured(MakeMonster* monster, int damage) {
    monster->m_Hp -= damage;
    cout << "monster's Hp left: " << monster->m_Hp << endl << endl;
    return monster->m_Hp;
};

int MakeMonster::Hit(MakeMonster* monster, int minusMp) {
        cout << "Monster hit You!" << endl;
        monster->m_Mp -= minusMp;
        cout << "monster's Mp left: " << monster->m_Mp << endl;
        return monster->m_Mp;
};
