#ifndef __MAKEACCOUNT_H__
#define __MAKEACCOUNT_H__
#include <iostream>
using namespace std;

class MakeAccount {
	private:
		char* m_Id;
		int m_Age;
	public:
		MakeAccount(char*, int);
		~MakeAccount();
};

#endif
