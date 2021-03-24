#include "Transaction.h"
#include "TimeFunctions.h"

Transaction::Transaction(std::string name, std::string amount)
{
    reciveName = name;
    amount = amount;

}

std::string Transaction::getDetail()
{
    std::string str = getAll() + " " + "From: " + reciveName + " " + " Total: " + amount;
    return str;

}