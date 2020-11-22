#ifndef __MAKEACCOUNT_H__
#define __MAKEACCOUNT_H__
#include <cstring>
#include <iostream>
using namespace std;

class MakeAccount {
	private:
		string* m_Id;
		int m_Age;
	public:
		MakeAccount(string*, int);
		~MakeAccount();
};

#endif
