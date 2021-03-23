#include <iostream>
#include "Account.h"

Account::totalAcountNumber = 1000;

Account::Account(){

}

Account::Account(string n, string p, int amt){
    accountNumber = (++totalAccountNumber);
    name = n;
    password = p;
    amount = amt;
    if(totalAccountNumber == 9999) totalAccountNumber = 0;
}

std::string Account::getter(string key){

}

void Account::setter(string key, string value){
    switch(key){
        case "name":
            name = value;
            break;
        case "password":
            password = value;
            break;
        case "amount":
            amount = value;
            break;

    }
}

bool Account::transfer(string fromAccountNumber, string toAccountNumber, int amount){

}

bool Account::Loan(string accountNumber, string amount){

}

void Account::getTransaction(){
    auto transaction = record->getRecord();
    if(!transaction.size){
        std::cout << "Transaction not available!" << std::endl;
        return;
    }
    for(auto year:transaction){
        for(auto month:year){
            for(auto day:month){
                for(auto hour:day){
                    for(auto minutes:hour){
                        for(auto sec:minutes){
                            for(auto trans:sec){
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