#include "MakeCaster.h"

Caster::Caster() : IntEnergy::IntEnergy(100, 200, 50) {
	cout << "You Select Caster!" << endl;
} 

Caster::~Caster() {
	cout << "Caster Terminated!" << endl;
}
