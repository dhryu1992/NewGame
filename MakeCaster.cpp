#include "MakeCaster.h"

Caster::Caster() : IntEnergy::IntEnergy(100, 200, 50) {
	cout << "마법사 생성" << endl;
} 

Caster::~Caster() {
	cout << "마법사 사망" << endl;
}
