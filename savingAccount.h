#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "Account.h"

class savingAccount : public Account
{
    public:
    virtual bool onlinePayment(); //Visual
};
#endif