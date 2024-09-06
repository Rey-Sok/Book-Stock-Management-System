#pragma
#include<iostream>
#include "Bank.h"

using namespace std;

double globalcase= 0;


class Banking : public Bank {
    public:

    void deposit(double cash){
        bool islessthanzoro = (cash <= 0) ? true : false;
        if (islessthanzoro){
            cout<<"Invalid deposit amount."<<endl;
        }else {
            globalcase+=cash;
            cout<<"Deposit successful. New balance: $"<<globalcase<<endl;
        }
    }
    
    void withdraw(double cash){ 
        if (cash > globalcase){
            cout<<"Insufficient funds."<<endl;
        } else {
            globalcase-=cash;
            cout<<"Withdrawal successful. New balance: $"<<globalcase<<endl;
        }
    }
    double getBalance(){
        cout<<"Current balance: $"<<globalcase<<endl;
        return globalcase;
    }
};