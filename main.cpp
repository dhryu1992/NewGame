#include <cstring>
#include <iostream>
#include <string>
//#include <vector>
#include "ArcherBattle.h"
#include "CasterBattle.h"
#include "BerserkerBattle.h"
#include "IntEnergy.h"
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
#include "SaberBattle.h"
#include "MakeAccount.h"
#include "MakeMonster.h"
#include "WeaponStatus.h"
#include "AddInventory.h"
using namespace std;
/*struct items {
    map<HpPotion*, int> itemMap;
    map<MpPotion*, int>::iterator mItemMap;
}*/

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
            SaberBattle();
            break;
        } 
        case ARCHER : {
            cout << "You Select Archer!" << endl;
            ArcherBattle();
            break;
        }
        case CASTER : {
            cout << "You Select Caster!" << endl;
            CasterBattle();
            break;
        }
        case BERSERKER : {
            cout << "You Select BERSERKER!" << endl;
            BerserkerBattle();
            break;
        }
    }   
    cout << "Let's move outside!" << endl;
    cout << "You can use every servents." <<endl;
    Saber *saber = new Saber;
    Archer *archer = new Archer;
    Caster *caster = new Caster;
    Berserker *berserker = new Berserker;
    cout << "And You have a 10000 Gold." << endl;
    cout << "You can use Inventory(10)." << endl;
    Inventory hp_inventory[3];
    Inventory mp_inventory[3];
    int gold = 10000;
    cout << "This is market. You can buy that you want" << endl;
    cout << "1. HpPotion(50)\n2. HpPotion(150)\n3. HpPotion(250)\n4. MpPotion(50)\n5. MpPotion(150)\n6. MpPotion(250)" << endl;
    int Select_Potion;
    int Select_potion_count;
    cin >> Select_Potion;
    if(Select_Potion == 1) {
    cout << "How many you want?(maximum 100) price is 50 per 1" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
        hp_inventory[0] = Select_potion_count;
    }
    HpPotion *hp_potion = new HpPotion(50, Select_potion_count);
    cout << "You have 50 HpPotions, and You have " << Select_potion_count << endl;
    int subtract = 50 * Select_potion_count;
    if(subtract > gold) {
        cout << "You can't buy because of lack of gold. check the count" << endl;
        cin >> Select_potion_count;
    }

    gold -= subtract;
    cout << "your gold is " << gold << " now." << endl;
    
    }
    if(Select_Potion == 2) {
    cout << "How many you want?(maximum 100)" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
    }
    HpPotion *hp_potion = new HpPotion(150, Select_potion_count);
    cout << "You have 150 HpPotion, and You have " << Select_potion_count << endl;
    gold -= 50 * Select_potion_count;
    cout << "your gold is " << gold << " now." << endl;
    }
    if(Select_Potion == 3) {
    cout << "How many you want?(maximum 100)" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
    }
    HpPotion *hp_potion = new HpPotion(250, Select_potion_count);
    cout << "You have 250 HpPotion, and You have " << Select_potion_count << endl;
    gold -= 50 * Select_potion_count;
    cout << "your gold is " << gold << " now." << endl;

    }
    if(Select_Potion == 4) {
    cout << "How many you want?(maximum 100)" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
    }
    MpPotion *mp_potion = new MpPotion(50, Select_potion_count);
    cout << "You have 50 MpPotion, and You have " << Select_potion_count << endl;
    gold -= 50 * Select_potion_count;
    cout << "your gold is " << gold << " now." << endl;

    }
    if(Select_Potion == 5) {
    cout << "How many you want?(maximum 100)" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
    }
    MpPotion *mp_potion = new MpPotion(150, Select_potion_count);
    cout << "You have 150 MpPotion, and You have " << Select_potion_count << endl;
    gold -= 50 * Select_potion_count;
    cout << "your gold is " << gold << " now." << endl;

    }
    if(Select_Potion == 6) {
    cout << "How many you want?(maximum 100)" << endl;
    cin >> Select_potion_count;
    while(Select_potion_count < 0 || Select_potion_count > 100) {
        cout << "you have wrong answer. check the answer" << endl;
        cin >> Select_potion_count;
    }
    MpPotion *mp_potion = new MpPotion(250, Select_potion_count);
    cout << "You have 250 MpPotion, and You have " << Select_potion_count << endl;
    gold -= 50 * Select_potion_count;
    cout << "your gold is " << gold << " now." << endl;
    }
}
