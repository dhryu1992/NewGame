#include "IntEnergy.h"
#include "Weapon.h"
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
#include "MakeAccount.h"
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char Lim_Name[20] = "1234567891234567891";
	cout << "strlen(Lim_Name): " << strlen(Lim_Name) << endl;
	//strlen(Lim_Name) is 6.
	int My_Age = 0;
	int SelectCharacter;
	int length;
	char* My_Name = new char[length];
	cout << "Welcome to ShuLand!\n" << endl;
	cout << "Enter your name: " << endl;
	cin >> My_Name;
	
	while(strlen(My_Name) >= strlen(Lim_Name)) {
		cout <<"\nError! Enter one more time!" << endl;
		cin >> My_Name;
	}

	cout << "Enter your age: " << endl;
	cin >> My_Age;

	cout << "\nyour name is " << My_Name << ", " << "your age is " << My_Age << endl;

	MakeAccount(My_Name, My_Age);

	delete []My_Name;

	cout << "Select your Character." << endl;
	cout << "1. Saber\n2. Archer\n3. Caster\n4. Berserker\n" << endl;
	cin >> SelectCharacter;
	switch(SelectCharacter) {
		case 1 : {
			Saber* saber = new Saber;
			break;
		};
		
		case 2 : {
			Archer* archer = new Archer;
			break;
		};

		case 3 : {
			Caster* caster = new Caster;
			break;
		};

		case 4: {
			Berserker* berserker = new Berserker;
			break;
		};
		
	}

	cout << "게임이 시작되었습니다." << endl;
	
	return 0;
}
