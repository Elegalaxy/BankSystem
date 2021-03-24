#ifndef EXTRA_H
#define EXTRA_H
#include<vector>
#include "Account.h"

//Extra Function
Account* getAccountByNumber(std::vector<Account*>& accounts, int accountNumber){
	for(Account* i:accounts){
		if(i->getter("number") == accountNumber){
			return i;
		}
	}
	std::cout << "Invalid account" << std::endl;
	return nullptr;
}

Account* getAccountByNumber(std::vector<Account*>& accounts, std::string accountNumber){
	acountNumber = stoi(accountNumber);
	for(Account* i:accounts){
		if(i->getter("number") == accountNumber){
			return i;
		}
	}
	std::cout << "Invalid account" << std::endl;
	return nullptr;
}

#endif