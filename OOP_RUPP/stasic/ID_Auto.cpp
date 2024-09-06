#include<iostream>
#include<iomanip>

using namespace std;

class Employee
{
  private:
    int id;
    static int idGen;
    static int rate;
    float hour, salary;
    char name[30], sex[7];
  public:
    Employee() 
    { 
      id = idGen + 1; 
    }
    ~Employee() {};
    void Input()
    {
      cout<<"ID:"<<id<<endl;
      cout<<"Input Name:"; cin.sync(); cin.get(name, 30);
      cout<<"Input Sex:"; cin.sync(); cin.get(sex, 7);
      cout<<"Input Hour:"; cin>>hour;
      salary = hour * rate;
    }
    void Output()
    {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout<<setw(4)<<id<<setw(20)<<name
         <<setw(9)<<sex<<setw(6)<<rate
         <<setw(8)<<hour<<setw(10)<<salary<<endl;
    }
};
int Employee::idGen=10001;
int Employee::rate=5;
int main(void)
{
  int n, i;
  cout<<"Enter Number of Employee"; cin>>n;
  Employee *emp=new Employee[n];
  for(i=0; i<n; i++)
    emp[i].Input();
  for(i=0; i<n; i++)
    emp[i].Output();
  delete []emp;
}