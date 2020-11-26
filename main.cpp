#include <cstring>
#include <iostream>
#include <string>
#include "IntEnergy.h"
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
#include "MakeBattleStory.h"
#include "MakeAccount.h"
#include "MakeMonster.h"
#include "WeaponStatus.h"

using namespace std;

enum SelectCharacter {
    SABER = 1,
    ARCHER,
    CASTER, 
    BERSERKER
};

int main() {
	char Lim_Name[20] = "1234567891234567891";
	//strlen(Lim_Name) is 6.
	int My_Age = 0;
	int NumSelectCharacter;
    string *My_Name = new string("My_Name");
	cout << "Welcome to ShuLand!\n" << endl;
	cout << "Enter your name: " << endl;
	cin >> *My_Name;
	while(My_Name -> length() >= strlen(Lim_Name)) {
		cout <<"\nError! Enter one more time!" << endl;
		cin >> *My_Name;
	}

	cout << "Enter your age: " << endl;
	cin >> My_Age;
    MakeAccount* account= new MakeAccount(My_Name, My_Age);
    cout << "\nYour name is " << *My_Name << ", " << "Your age is " << My_Age << endl << endl;
    delete My_Name;
    //-------------Account Complete----------------//
	cout << "Select your Character." << endl;
	cout << "1. Saber\n2. Archer\n3. Caster\n4. Berserker\n" << endl;
	cin >> NumSelectCharacter;
    switch(NumSelectCharacter) {
		case SABER : {
            cout << "You Select Saber!" << endl;
            MakeBattleStory();
            break;
        }

        case ARCHER : {
            cout << "You Select Archer!" << endl;
            return 2;
            break;
        }
            
    }
    
    
}

    
