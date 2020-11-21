#include "MakeAccount.h"

MakeAccount::MakeAccount(char* select_id, int select_age) 
	: m_Id(select_id), m_Age(select_age) {
		cout << "And Complete to Make your new Account! " << "(" << m_Id << ", " << m_Age << ")\n" << endl;
	}

MakeAccount::~MakeAccount() {
		cout << "And Complete to Delete your Account!\n" << endl;
	}

