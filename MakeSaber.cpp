#include "MakeSaber.h"

Saber::Saber() : IntEnergy::IntEnergy(200, 100, 50) {
	cout << "You Select Saber!" << endl;
} 

Saber::~Saber() {
	cout << "Saber Terminated!" << endl;
}

/*Saber::ShowskillInfo_LV1() {
    cout << "1. cutting\n2.stabbing\n3.ultimate\n" << endl;
    cin >> SelectAttack;
    switch(SelectAttack) {
        case CUTTING : {
            IntEnergy::m_mp = m_mp - 10;
            makemonster.injured(1);
        }
        case STABBING : {
            IntEnergy::m_mp = m_mp - 15;
            makemonster.injured(3);
        }
        case ULTIMATE : {
            IntEnergy::m_mp = m_mp - 20;
            Saber::makemonster.injured(5);
        }
    }
} */
