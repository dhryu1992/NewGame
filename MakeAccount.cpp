#include "MakeAccount.h"

MakeAccount::MakeAccount(string* select_id, int select_age) 
	: m_Id(select_id), m_Age(select_age) {
        cout << "Complete to Make your new Account!" << "(" << *m_Id << ", " << m_Age << ")";
}
    
MakeAccount::~MakeAccount() {
		cout << "And Complete to Delete your Account!" << endl;
}


