#include<iostream>
#include<string.h>
#include<iomanip>
#include<conio.h>
using namespace std;

class employee
{
  private:
    char name[30], id[10], sex[7];
    float salary;
  public:
    employee() //constructor
    {
      strcpy(name, "\0");  
      strcpy(id, "\0");
      strcpy(sex, "\0");
      salary=0;
    }
    ~employee(){}//destructor
    void setData(char n[30], char i[10], char s[7], float sa)
    {
      strcpy(name, n);
      strcpy(id, i);
      strcpy(sex, s);
      salary=sa;
    }
    float getSalary()
    {
      return salary;
    }
    void displayInfo()
    {
      cout<<setw(20)<<name;
      cout<<setw(10)<<id;
      cout<<setw(7)<<sex;
    }
};
void sort(employee *T, int n);

int main(void)
{
  char n[30], s[7], i[10];
  float sa;
  int num, j;
  employee *emp;
  cout<<"Input Number of employee:"; cin>>num;
  emp = new employee[num];
  for(j=0; j<num; j++)
  {
    cout<<"employee No["<<(j+1)<<"]"<<endl;
    cout<<"Input Name:"; cin.sync(); cin.get(n, 30);
    cout<<"       Sex:"; cin.sync(); cin.get(s, 7);
    cout<<"        ID:"; cin.sync(); cin.get(i, 10);
    cout<<"    Salary:"; cin>>sa;
    (emp+j)->setData(n, i, s, sa);
  }
  system("CLS");
  cout<<"Display with unsorted..."<<endl;
  cout<<setw(20)<<"Name"<<setw(10)<<"ID"<<setw(7)<<"Sex"
     <<setw(8)<<setw(10)<<"Salary"<<endl;
  for(j=0; j<num; j++)
  {
    (emp+j)->displayInfo(); // ==> emp[j].displayInfo();
    cout<<setw(10)<<(emp+j)->getSalary()<<endl;
  }
  
  sort(emp, num); //call sort function

  cout<<"Display after sorted..."<<endl;
  cout<<setw(20)<<"Name"<<setw(10)<<"ID"<<setw(7)<<"Sex"
     <<setw(8)<<setw(10)<<"Salary"<<endl;
  for(j=0; j<num; j++)
  {
    (emp+j)->displayInfo();
    cout<<setw(10)<<(emp+j)->getSalary()<<endl;
  }
  delete []emp;
} //end of main
void sort(employee *T, int n)
{
  int i, j;
  employee temp;
  for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
      if((T+i)->getSalary()<=(T+j)->getSalary())
      {
        temp =*(T+i);  // temp = T[i];
        *(T+i)=*(T+j);
        *(T+j)=temp;
      }
}