#ifndef FUNCTION_H
#define FUNCTION_H
#include <ctime>
#include <string>

int getSec(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_sec;
}

int getMin(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_min;
}

int getHour(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_hour;
}

int getDay(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_mday;
}

int getMonth(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_mon + 1;
}

int getYear(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return now->tm_year + 1900;
}

std::string getTime(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return (std::to_string(getHour()) + '_' + 
            std::to_string(getMin()) + '_' + 
            std::to_string(getSec()));
}

std::string getDate(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    return (std::to_string(getDay()) + '_' + 
            std::to_string(getMonth()) + '_' + 
            std::to_string(getYear()));
}

std::string getAll(){
    return getTime() + ' ' + getDate();
}
#endif