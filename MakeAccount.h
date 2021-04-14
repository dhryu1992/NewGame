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
        string* m_character;
    public:
		MakeAccount(string*, int);
		virtual ~MakeAccount();
};

#endif
