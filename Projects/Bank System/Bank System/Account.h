#pragma once
#include "Client.h"
class Account :
    public Client
{
private:
    long Balance=0;
    long Amount=0;
    int ans=0;
public:
    void S_Account();
    void Deposite();
    void Withdraw();
    void CheckBalance();
};

