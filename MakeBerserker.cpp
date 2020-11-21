#include "MakeBerserker.h"

Berserker::Berserker() : IntEnergy::IntEnergy(300, 0, 150) {
	cout << "광전사 생성" << endl;
} 

Berserker::~Berserker() {
	cout << "광전사 사망" << endl;
}
