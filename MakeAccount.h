#ifndef __MAKEACCOUNT_H__
#define __MAKEACCOUNT_H__
#include <cstring>
#include <iostream>
#include "MakeSaber.h"
#include "MakeArcher.h"
#include "MakeCaster.h"
#include "MakeBerserker.h"
using namespace std;

class MakeAccount {
	private:
		string* m_Id;
		int m_Age;
        Saber *m_saber;
        Archer *m_archer;
        Caster *m_caster;
        Berserker *m_berserker;
    public:
		MakeAccount(string*, int);
		virtual ~MakeAccount();
        MakeAccount(Saber*);
        void PlusSaber(Saber*); //Link
        MakeAccount(Archer*);
        void PlusArcher(Archer*);
        MakeAccount(Caster*);
        void PlusCaster(Caster*);
        MakeAccount(Berserker*);
        void PlusBerserker(Berserker*);
};

#endif
