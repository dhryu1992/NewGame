#include "MakeMonster.h"

MakeMonster::MakeMonster() : IntEnergy(10, 10, 10) {
	cout << "Monster(in GYM) Appear!\n" << endl;
}

MakeMonster::~MakeMonster() {
	cout << "Monster Dead!\n" << endl;
}

/*MakeMonster::injured(int damaging) {
    IntEnergy::Hp = Hp - damaging;
    cout << "Monster's hp decrease by 1" << endl;
}*/
