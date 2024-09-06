#include <iostream>

using namespace std;

class account 
{
    private :

    float balance ;
    float rate ;

    public :

    account ();
    void deposit ();
    void withdraw ();
    void compound ();
    void getbalance ();
    void menu ();
};

account::account (){
    cout <<"Input your balance             : " ; cin >> balance;
    cout <<"Input your rate                : " ; cin >> rate ;
    cout <<"================================" << endl;
}

void account::deposit (){
    float amount;
    cout <<"================================" << endl;
    cout <<"Input your amount              :" ; cin >>amount;
    balance = balance + amount;
    cout <<"New balance                    :" << balance << endl;
    cout <<"================================" << endl;
}
void account::withdraw(){
    float amount;
    cout <<"================================" << endl;
    cout <<"How many money do you withdrew :" ; cin >> amount;

    if (amount <= balance){
        balance = balance - amount ;
        cout <<"This is your withdrew      :" << amount << endl;
        cout <<"Your money after wihtdrew  :" << balance << endl;
        cout <<"================================" << endl;
    }
    else {
        cout <<"Your money is not enough   :" << balance << endl;
        cout <<"================================" << endl;
}
}
void account::compound(){
    float interest;
    cout <<"================================" << endl;
    interest = balance * rate;
    cout <<"Interest amount                :" << interest << endl;
    cout <<"totle amount                   :" << balance + interest << endl; 
    
}
void account::getbalance(){
    cout <<"================================" << endl;
    cout <<"Your balanece                  :" << balance << endl;
    cout <<"================================" << endl;
}
void account::menu (){
    cout <<"========| This is menu |========" << endl;
    cout <<"d --> Deposit .................." << endl;
    cout <<"w --> wihtdrew.................." << endl;
    cout <<"g --> getbalance................" << endl;
    cout <<"c --> Compount.................." << endl;
    cout <<"q --> quit ....................." << endl;
    cout <<"o --> option please ............" << endl;
    cout <<"================================" << endl;
}

int main(void)
{
    system ("cls");
  account ACC;
  char m;
  system("cls");
   ACC.menu();
  while((m=cin.get())!='q')
  {
    switch(m)
    {
      case 'd': case 'D':
        ACC.deposit();
        ACC.menu();
        break;
      case 'w': case 'W':
        ACC.withdraw();
        ACC.menu();
        break;
      case 'c': case 'C':
        ACC.compound();
        ACC.menu();
        break;
      case 'g': case 'G':
        ACC.getbalance();
        ACC.menu();
            break;
    }
  }
}