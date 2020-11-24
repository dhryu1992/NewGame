#include <cstring>
#include <iostream>
#include <string>
#include "IntEnergy.h"
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
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
	int SelectMotion;
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

	cout << "\nYour name is " << *My_Name << ", " << "age is " << My_Age <<endl;

	MakeAccount* account= new MakeAccount(My_Name, My_Age);

	delete My_Name;

	cout << "Select your Character." << endl;
	cout << "1. Saber\n2. Archer\n3. Caster\n4. Berserker\n" << endl;
	cin >> NumSelectCharacter;

	switch(NumSelectCharacter) { 
		case SABER : {
			//Saber saber;
            Saber *NewSaber = new Saber;
            MakeAccount *makesaberinAcc = new MakeAccount(NewSaber);
            makesaberinAcc->PlusSaber(NewSaber);
            break;
		}
		
		case ARCHER : {
			Archer *NewArcher = new Archer;
            MakeAccount *makearcherinAcc = new MakeAccount(NewArcher);
            makearcherinAcc->PlusArcher(NewArcher);
			break;
		}

		case CASTER : {
			Caster *NewCaster = new Caster;
            MakeAccount *makecasterinAcc = new MakeAccount(NewCaster);
            makecasterinAcc->PlusCaster(NewCaster);
			break;
		}

		case BERSERKER : {
		    Berserker *NewBerserker = new Berserker;
            MakeAccount *makeberserkerinAcc = new MakeAccount(NewBerserker);
            makeberserkerinAcc->PlusBerserker(NewBerserker);
			break;
		}
    };
    
    
	cout << "\nThe Game Begins From Now." << endl;
	cout << "First of all, You should be trained. here is GYM.\nThere is a Moster.\n" << endl;
	MakeMonster* monster = new MakeMonster;
	cout << "Choose your action." << endl;
	cout << "1. Hit\n2. Run\n3. Sleep" << endl;
	cin >> SelectMotion;
	switch(SelectMotion) {
		case 1 : {
                       
        }
	}
	


	return 0;
}
