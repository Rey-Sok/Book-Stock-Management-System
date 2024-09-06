#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>

using namespace std;

class Employee
{
  
  private:
      int ID;
      char Name[30];
      float Hour;
      static float Rate;
      static int genID;
  public:
      
      Employee()
      {
        ID = genID++;
      }
      ~Employee() { }
      void InputData()
      {
        cout<<"Employee's ID : "<< ID <<endl;
        cout<<setw(15)<<"Name : "; cin.ignore(); cin.getline(Name, 30);
        cout<<setw(15)<<"Hour : "; cin>>Hour;  
      }
      float getSalary()
      {
        return (Hour * Rate);
      }
      void Display()
      {
        cout<<setw(7)<<ID<<setw(15)<<Name<<setw(10)<<Hour<<setw(10)<<getSalary()<<endl;
      }
      friend void Search(Employee E[], int n);
      friend void Delete(Employee E[], int &n);
};

float Employee::Rate = 2.5;
int Employee::genID = 1;

void Grand_Total(Employee E[], int n)
{
  float G_T=0;
  for(int i=0; i<n; i++)
    G_T = G_T + E[i].getSalary();
  cout<<"Grand Salary = "<< G_T;
}

void Delete(Employee E[], int &n)
{
  int did, i, j, flag = 0;
  char sn[30];
  //cout<<"Input ID you want to delete : "; cin>>did;
  cout<<"Input name you want to delete:"; cin.getline(sn, 30);
  for(i=0; i<n; i++)
  {
    if(strcmpi(sn, E[i].Name)==0)
    //if(did == E[i].ID)
    {
      flag = 1;
      for(j=i; j<n; j++)
        E[j] = E[j+1];
      i--;
      n--;
    }
  }
  if(flag==0)
    cout<<"Not found..."<<endl;
}

void Search(Employee E[], int n) 
{
  char sn[30];
  int i, flag = 0;
  system("CLS");
  cout<<"Input Name you want to search : "; cin.ignore(); cin.getline(sn, 30);
  cout<<setw(7)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Salary"<<endl;
  for(i=0; i<n; i++)
  {
    if(strcmpi(sn, E[i].Name)==0)
    {
      flag = 1;
      E[i].Display();
    }
  }
  if(flag == 0)
    cout<<"Not Found...";
}

int main(void)
{
  int n, i;
  cout<<"Input number of employee:"; cin>>n;
  Employee *Emp;
  Emp = new Employee[n];
  for(i=0; i<n; i++)
  {
    (Emp+i)->InputData(); //Emp[i].InputData();
  }
  
  cout<<setw(7)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Salary"<<endl;
  for(i=0; i<n; i++)
  {
    if((Emp+i)->getSalary()>=100)
      (Emp+i)->Display();
  }
  getch();
  
  Search(Emp, n);
  
  getch();
  
  Delete(Emp, n);
  
  cout<<setw(7)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Salary"<<endl;
  for(i=0; i<n; i++)
  {
    if((Emp+i)->getSalary()>=100)
      (Emp+i)->Display();
  }
  
  Grand_Total(Emp, n);
}