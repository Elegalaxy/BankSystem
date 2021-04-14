#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <map>
#include <vector>
#include "Record.h"

class Account{	
    protected:
        std::string name, amount, accountNumber, password;
        Record* record;
        static int totalAccountNumber;

    public:
        Account();
        Account(std::string n, std::string p, int amt);
        std::string getter(std::string item);
        void setter(std::string item, std::string value);
        bool transfer(std::vector<Account*>& accounts, std::string fromAccountNumber, std::string toAccountNumber, int amount);
        bool Loan(Manager* manager, std::vector<Account*>& accounts, std::string accountNumber, std::string amount);
        void getTransaction();
		void printAmount(int a);
        int modifyAmount(int value);
        int modifyAmount(std::string value);
};
#endif