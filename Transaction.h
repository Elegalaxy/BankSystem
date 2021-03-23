#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
class Transaction
{
    private:
    std::string time;

    std::string reciveName;
    std::string amount;

    public: 
    Transaction (std::string name, std::string amount);

    std::string getDetail();
};
#endif