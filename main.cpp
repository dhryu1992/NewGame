/*#include "IntEnergy.h"
#include "Weapon.h"
#include "Saber.h"
#include "Archer.h"
#include "Caster.h"
#include "Berserker.h"
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char My_Name[20];
	int size = 0;
	size = sizeof My_Name[20];
	cout << "Welcome to ShuLand!" << endl;
	cout << "Enter your name: " << endl;
	cin >> My_Name;
	char* select = My_Name;
	
	//cout << "select: " << select << endl;
	while(sizeof(select) {
		cout <<"Error! Enter one more time!" << endl;
	}
	cout << "your name is " << My_Name << "." << endl;
	return 0;
}
