#include "MakeSaber.h"

Saber::Saber() : IntEnergy::IntEnergy(200, 100, 50) {
	cout << "You Select Saber!" << endl;
} 

Saber::~Saber() {
	cout << "Saber Terminated!" << endl;
}
