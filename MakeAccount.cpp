#include "MakeAccount.h"

MakeAccount::MakeAccount(string* select_id, int select_age) 
	: m_Id(select_id), m_Age(select_age) {
		cout << "And Complete to Make your new Account!" << "(" << *m_Id << ", " << m_Age << ")\n" << endl;
}
    
MakeAccount::~MakeAccount() {
		cout << "And Complete to Delete your Account!" << endl;
}

MakeAccount::MakeAccount(Saber *saber) {
    saber = NULL;
}

void MakeAccount::PlusSaber(Saber *makesaber) {
    //MakeAccount *makesaberinAcc = new MakeSaber();
    m_saber = makesaber;
    cout << "new Saber Character is in your Account!" << endl;
}

MakeAccount::MakeAccount(Archer *archer) {
    archer = NULL;
}

void MakeAccount::PlusArcher(Archer *makearcher) {
    m_archer = makearcher;
    cout << "new Archer character is in your Account!" << endl;
}


MakeAccount::MakeAccount(Caster *caster) {
    caster = NULL;
}

void MakeAccount::PlusCaster(Caster *makecaster) {
    m_caster = makecaster;
    cout << "New Caster character is in your Account!" << endl;
}

MakeAccount::MakeAccount(Berserker *berserker) {
    berserker = NULL;
}

void MakeAccount::PlusBerserker(Berserker *makeberserker) {
    m_berserker = makeberserker;
    cout << "New Berserker character is in your Account!" << endl;
}


/*MakeAccount::PlusArcher() {
        Archer* archer = new Archer;
        cout << "new Archer Chracter is in your Account!" << endl;
}

MakeAccount::PlusCaster() {
        Caster* caster = new Caster;
        cout << "new Caster character is in your Account!" << endl;
}

MakeAccount::PlusBerserker() {
        Berserker* berserker = new Berserker;
        cout << "new Berserker Character is in your Account!" << endl;
}*/
