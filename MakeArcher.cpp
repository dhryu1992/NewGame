#include "MakeArcher.h"

Archer::Archer() : IntEnergy::IntEnergy(150, 150, 200) {
	cout << "You Select Archer!" << endl;
} 

Archer::~Archer() {
	cout << "Archer Terminated!" << endl;
}

