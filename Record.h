#ifndef RECORD_H
#define RECORD_H
#include <map>
#include <vector>
#include "Transaction.h"

class Record{
    private:
        std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::vector<Transaction*>>>>>>> record;

    public:
        Record();
        std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::vector<Transaction*>>>>>>> getRecord();
};
#endif