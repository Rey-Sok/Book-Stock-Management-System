#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

double tamount;
class Customer
{
  private:
    char ID[10], Name[30], Code[7];
    double Amount;
  public:
    void setInfo()
    {
      cout<<"Enter your ID:";
      cin.sync(); cin.get(ID, 10);
      cout<<"Enter your Name:";
      cin.sync(); cin.get(Name, 30);
      cout<<"Enter passcode:";
      cin.sync(); cin.get(Code, 7);
      cout<<"Enter Amount:";
      cin>>Amount;
    }
    char *getID(){ return ID; }
    char *getCode() { return Code; }
    double getAmount() { return Amount; }
    void setBalance(double t){ Amount = t; }
};
class ATM
{
  private:
    double balance, rate;
  public:
    ATM(double A, double R)
    {
      balance = A, rate = R;
    }
    void Deposit()
    {
      double dep;
      cout<<"Enter Deposit Amount:";
      cin>>dep;
      balance = balance + dep;
      tamount=balance;
      cout<<"Your Current Balance = "<<balance<<endl;
    }
    void Withdraw()
    {
      double wit;
      cout<<"Enter withdraw amount:";
      cin>>wit;
      if(balance<wit)
      {
        cout<<"Your balance is = "<<balance;
        cout<<"Your withdraw amount is = "<<wit<<endl;
        cout<<"You cannot withdraw"<<endl;
      }
      else
      {
        cout<<"Your balance is = "<<balance<<endl;
        cout<<"Your withdraw amount is = "<<wit<<endl;
        balance=balance-wit;
        tamount=balance;
        cout<<"Your remaining balance is = "<<balance;
      }
    }
    void CheckBalance()
    {
      cout<<"Your balance is = "<<balance<<endl;
    }
    void ComInt()
    {
      rate = balance*rate;
      balance=balance+rate;
      cout<<"Your balance is = "<<balance<<endl;
      cout<<"Your interest is = "<<rate<<endl;
      tamount=balance;
    }
    void Menu()
    {
      system("CLS");
      cout<<"D -> Deposit"<<endl;
      cout<<"W -> Withdraw"<<endl;
      cout<<"C -> Check Balance"<<endl;
      cout<<"I -> Compound Interest"<<endl;
      cout<<"Q -> Quit"<<endl;
      cout<<"Option, Please:";
    }
};
int main(void)
{
  Customer cus[20];
  int i, n;
  cout<<"Input number of customer:";
  cin>>n;
  for(i=0; i<n; i++)
    cus[i].setInfo();
  Top:
  system("CLS");
  char ID[10], Code[7];
  cout<<"Enter Your ID:";
  cin.sync(); cin.get(ID, 10);
  cout<<"Enter Your passcode:";
  cin.sync(); cin.get(Code, 7);
  for(i=0; i<n; i++)
    if(stricmp(ID, cus[i].getID())==0)
      if(stricmp(Code, cus[i].getCode())==0)
      {
          tamount=cus[i].getAmount();
          ATM acc(tamount, 0.07);
          acc.Menu();
          char m;
          while((m=cin.get())!='Q')
          {
            switch (m)
            {
              case 'D':
                acc.Deposit();
                cus[i].setBalance(tamount);
                getch();
                acc.Menu();
                break;
              case 'W':
                acc.Withdraw();
                cus[i].setBalance(tamount);
                getch();
                acc.Menu();
                break;
              case 'C':
                acc.CheckBalance();
                getch();
                acc.Menu();
                break;
              case 'I':
                acc.ComInt();
                cus[i].setBalance(tamount);
                getch();
                acc.Menu();
                break;
            }
          }
      }
}