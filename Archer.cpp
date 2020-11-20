#include "IntEnergy.h"
#include "Archer.h"

Archer::Archer() : IntEnergy::IntEnergy(150, 150, 200) {
	cout << "궁수 생성" << endl;
} 

Archer::~Archer() {
	cout << "궁수 사망" << endl;
}
