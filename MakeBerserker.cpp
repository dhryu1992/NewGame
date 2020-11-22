#include "MakeBerserker.h"

Berserker::Berserker() : IntEnergy::IntEnergy(300, 0, 150) {
	cout << "You Selected Berserker!" << endl;
} 

Berserker::~Berserker() {
	cout << "Berserker Terminated!" << endl;
}
