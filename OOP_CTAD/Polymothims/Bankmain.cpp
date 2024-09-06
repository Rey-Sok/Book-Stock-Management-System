#include <iostream>
#include "Bank.h"
#include "Banking.h"

using namespace std;


int main (){
    system("cls");
    Bank * money = new Banking;
    money->deposit(1000);
    money->withdraw(500);
    money->getBalance();
    money->withdraw(100);
    money->getBalance();


}