#pragma once

class Bank {
    public:
    virtual void deposit(double cash)=0;
    virtual void withdraw(double cash)=0;
    virtual double getBalance()=0;
};