#include "MakeBattleStory.h"

void MakeBattleStory() {
    Saber* saber = new Saber;
    cout << "\nThe Game Begins From Now." << endl;
	cout << "First of all, You should be trained. here is GYM.\nThere is a Moster.\n" << endl;
    MakeMonster* monster = new MakeMonster;
    cout << "Choose your Action!" << endl;
    cout << "1. Hit\n2. Run\n" << endl;
    int SelectMotion;
	cin >> SelectMotion;
    switch(SelectMotion) {
        case 1 : 
        while(saber->m_Hp > 0 && monster->m_Hp > 0) {
            if(saber->m_Hp > 0) { 
                cout << "Now, Your turn" << endl;
                saber->Hit(saber);
                monster->injured(monster, 15);
        }
            if(monster->m_Hp > 0) {
                cout << "Now, monster's turn" << endl;
                monster->Hit(monster);
                saber->injured(saber, 5);
        }   
}
        if(saber->m_Hp> monster->m_Hp) {
            cout << "You won the battle!" << endl;
        }else {
            cout << "Monster won the battle!" << endl;
        }
        //saber->Hit(saber);
        //monster->injured(monster, 5);
        
    
        //case 2 : saber->Run();
    }
}

/*MakeBattle::GymBattleHit(Saber *saber) {
    cout << "1. Cutting\n2. Stabbing\n3.Ultimate\n" << endl;
    cin >> selectSkill
    switch(selectSkill) {
        case CUTTING : {
            m_mp -= 10;
            makemoster.injured(2);
            cout << "Monster's Hp decrease by 2" << endl;
        }
        
        case STABBING : {
            m_mp -= 15;
            makemoster.injured(5);
            cout << "Monster's Hp decrease by 5" << endl;
        }

        case ULTIMATE : {
            m_mp -= 20;
            makemoster.injured(10);
            cout << "Moster's Hp decrease by 10" << endl;
        }
    }
}*/
