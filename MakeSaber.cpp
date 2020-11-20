#include "IntEnergy.h"
#include "Saber.h"

Saber::Saber() : IntEnergy::IntEnergy(200, 100, 50) {
	cout << "검사 생성" << endl;
} 

Saber::~Saber() {
	cout << "검사 사망" << endl;
}
