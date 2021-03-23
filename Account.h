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
        static totalAccountNumber;

    public:
        Account();
        Account(string n, string p, int amt);
        std::string getter(string item);
        void setter(string item, string value);
        bool transfer(string fromAccountNumber, string toAccountNumber, int amount);
        bool Loan(string accountNumber, string amount);
        void getTransaction();
        int modifyAmount();
};

#endif