#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class worker{
  public:
    static float rate;
    worker(){}
    ~worker(){}
    void setData(int id, char name[], float hour){
      this->id=id;
      strcpy(this->name, name);
      this->hour=hour;
    }
    float getSalary(){
      return hour*rate;
    }
    void display(){
      cout<<setw(5)<<id
        <<setw(30)<<name
        <<setw(5)<<hour
        <<setw(7)<<rate
        <<setw(7)<<rate*hour;
    }
  private:
    int id;
    char name[30], sex[7];
    float hour;
};
float worker::rate=2.5;
int main(void){
  worker *w;
  int n, i;
  int id;
  char name[30];
  float hour, Grand_Salary=0;
  cout<<"Enter number of worker:";
  cin>>n;
  w=new worker[n];
  for(i=0; i<n; i++)
  {
    cout<<"Enter ID:";
    cin>>id;
    cout<<"    Name:";
    cin.sync(); cin.get(name, 30);
    cout<<"    Hour:";
    cin>>hour;
    (w+i)->setData(id, name, hour);
  }
  cout<<setw(5)<<"ID"<<setw(30)<<"Name"<<setw(5)<<"Hour"
     <<setw(7)<<"Rate"<<setw(7)<<"Salary"<<endl;
  for(i=0; i<n; i++)
  {
    if((w+i)->getSalary()>100)
    {
      (w+i)->display();
    }
    Grand_Salary += (w+i)->getSalary();
  }
  cout<<"\n\nGrand Salalry = "<<Grand_Salary;
}