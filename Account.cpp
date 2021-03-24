#include <iostream>
#include "Account.h"

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

bool Account::transfer(std::string fromAccountNumber, std::string toAccountNumber, int amount){

}

bool Account::Loan(std::string accountNumber, std::string amount){

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


int Account::modifyAmount(int value){
    int cur = stoi(amount);
    cur+=value;
    return cur;
}