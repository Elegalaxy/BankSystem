#include <iostream>
#include "Account.h"
#include "Extra.h"
#include "Manager.h"

int Account::totalAccountNumber = 1000;

Account::Account(){

}

Account::Account(std::string n, std::string p, int amt){
    accountNumber = (++totalAccountNumber);
    name = n;
    password = p;
    amount = amt;
    if(totalAccountNumber == 9999) totalAccountNumber = 0;
}

std::string Account::getter(std::string key){
	if(key == "name"){
        return name;
    }else if(key == "password"){
        return password;
    }else if("number"){
		return accountNumber;
	}else if(key == "amount"){
        return amount;
    }
	return "";
}

void Account::setter(std::string key, std::string value){
    if(key == "name"){
        name = value;
    }else if(key == "password"){
        password = value;
    }else if(key == "amount"){
        amount = value;
    }
}

bool Account::transfer(std::vector<Account*>& accounts, std::string fromAccountNumber, std::string toAccountNumber, int amount){
	Account* from = getAccountByNumber(accounts, fromAccountNumber);
	Account* to = getAccountByNumber(accounts, toAccountNumber);
	if(!from || !to){
		return false;
	}
	
	if(from->getter("amount") < amount){
		std::cout << "You don't have enough money" << std::endl;
		return false;
	}
	
	to->modifyAmount(amount);
	printAmount(from->modifyAmount(-amount));
	return true;
}

bool Account::Loan(Manager* manager, std::vector<Account*>& accounts, std::string accountNumber, std::string amount){
	Account* to = getAccountByNumber(accounts, toAccountNumber);
	if(!to){
		return false;
	}
	
	if(!manager->loanApprove()){
		return false;
	}
	
	printAmount(to->modifyAmount(amount));
	return true;
}

void Account::getTransaction(){
    auto transaction = record->getRecord();
    if(!transaction.size()){
        std::cout << "Transaction not available!" << std::endl;
        return;
    }
    for(auto year:transaction){
        for(auto month:year.second){
            for(auto day:month.second){
                for(auto hour:day.second){
                    for(auto minutes:hour.second){
                        for(auto sec:minutes.second){
                            for(auto trans:sec.second){
                                std::cout << trans->getDetail() << std::endl;
                            }
                        }
                    }
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}

void Account::printAmount(int a){
	std::cout << "Current amount: " << a << std::endl;
}

int Account::modifyAmount(int value){
    int cur = stoi(amount);
    cur+=value;
	amount = to_string(cur);
    return cur;
}

int Account::modifyAmount(string value){
    int cur = stoi(amount);
    cur+=stoi(value);
	amount = to_string(cur);
    return cur;
}
