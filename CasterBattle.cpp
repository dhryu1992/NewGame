#include "CasterBattle.h"

void CasterBattle() {
    Caster* caster = new Caster;
    cout << "\nThe Game Begins From Now." << endl;
	cout << "First of all, You should be trained. here is GYM.\nThere is a Moster.\n" << endl;
    MakeMonster* FirstMon = new MakeMonster(50, 50, 50);
    cout << "Choose your Action!" << endl;
    cout << "1. Hit\n2. Run\n" << endl;
    int SelectMotion;
	cin >> SelectMotion;
    switch(SelectMotion) {
        HitAfterRun:
        case HIT : {
        while(caster->m_Hp > 0 && FirstMon->m_Hp > 0) {
            if(caster->m_Hp > 0) {
                cout << "\nNow, Your turn" << endl;
                caster->Hit(caster);
                FirstMon->injured(FirstMon, 5);
                cout << "caster Hp: " << caster->m_Hp << endl;
                cout << "monster Hp: " << FirstMon->m_Hp << endl;
        } 
            if(FirstMon->m_Hp > 0) {
                cout << "Now, monster's turn" << endl;
                FirstMon->Hit(FirstMon, 5);
                caster->injured(caster, 5);
            }
        }
        if(caster->m_Mp < 0) {
            cout << "caster's m_mp left = 0" << endl;

        }
        if(caster->m_Hp> FirstMon->m_Hp) {
            cout << "You won the battle!" << endl;
        } else {
            cout << "Monster won the battle!" << endl;
        }
        break;
}
        case RUN: {
            cout << "You can't run away. You should defeat it! Auto Attack!\n" << endl;            
            goto HitAfterRun;
            break;
        }
    }
        cout << "You got a New Weapon, And You can use New Ultimate Skill." << endl;
        cout << "And You got 5 HpPotion(100Hp up), 5 MpPotion(100Mp up)\n" << endl;
        Wand* wand = new Wand(1000);
        HpPotion* hp_potion = new HpPotion(100, 5);
        MpPotion* mp_potion = new MpPotion(100, 5);
        cout << "\nThere is more powerful monster." << endl;
        MakeMonster* SecMon = new MakeMonster(100, 100, 100);
        cout << "Choose your Action!" << endl;
        cout << "1. Hit\n2. Run\n" << endl;
        int SelectMotion2;
	    cin >> SelectMotion2;
        switch(SelectMotion2) {
            case HIT : {
            HitAfterRunSec:
            while(caster->m_Hp > 0 && SecMon->m_Hp > 0) {
                if(caster->m_Mp < 50) {
                    cout << "You should dring Mp Potion" << endl;
                    mp_potion->Use(caster, 100, 5); 
                    cout << "caster's Mp left: " << caster->m_Mp << endl;
            }
                if(caster->m_Hp < 50) {
                    cout << "You should dring Hp Potion" << endl;
                    mp_potion->Use(caster, 100, 5);
                    cout << "caster's Hp left: " << caster->m_Hp << endl;
            }
                if(caster->m_Hp > 0) { 
                    cout << "Now, Your turn" << endl;
                    caster->Hit(caster);
                    SecMon->injured(SecMon, 5);
            }
                if(SecMon->m_Hp > 0) {
                    cout << "Now, monster's turn" << endl;
                    SecMon->Hit(SecMon, 5);
                    caster->injured(caster, 5);
            }
                if(caster->m_Mp >= 70) {
                    cout << "You can use your Ultimate Skill. Will you?" << endl;
                    cout << "1. Yes\n2. No" << endl;
                    int Ultimate;
                    cin >> Ultimate;
                    switch(Ultimate) {
                        case 1 : {
                            caster->Ultimate(caster);
                            SecMon->injured(SecMon, 30);
                            break;
                        }
                        case 2 : {
                            break;
                        }
                    }
                }
    } 
        if(caster->m_Hp> SecMon->m_Hp) {
            cout << "You won the battle!" << endl;
        } else {
            cout << "Monster won the battle!" << endl;
        }
        break;
}
        case RUN: {
            cout << "You can't run away. You should defeat it! Auto Attack!\n" << endl;            
            goto HitAfterRunSec;
            break;
        }
    }
        
        
        //MakeMonster* SecondMon(Sec) = new MakeMonster;
};

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
