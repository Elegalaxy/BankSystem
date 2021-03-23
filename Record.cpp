#include "Record.h"

Record::Record(){

}

std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::map<int, std::vector<Transaction*>>>>>> getRecord(){
    return record;
}
