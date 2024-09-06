// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main ()

//     {
//         int Age;
//         //char Name[30] ;
//         string name ;
//         char grade ;
//         int ID ;
//         float Average ;
//         system ("cls");
//         cout <<"\t========Varin high school======== " << endl;
//         cout <<"\tPlease input information of student " << endl;
//         cout << endl;
//         cout <<"\t\tID's student : " ; cin >> ID;
//         cout <<"\t\tName's student : "; cin.ignore();getline(cin,name);
//         cout <<"\t\tGrade's student : "; cin >> grade ;
//         cout <<"\t\tAge's student : "; cin >> Age;
//         cout <<"\t\tAverage's student : "; cin >> Average;
//         cout << endl;
//         cout <<"\t=======Outeput information's Student========" << endl;
//         cout << endl;
//         cout <<"\t\tID's Student : " << ID << endl;
//         cout <<"\t\tName's Student : " << name << endl;
//         cout <<"\t\tGrade's student : " << grade << endl;
//         cout <<"\t\tAge's Student : " << Age << endl;
//         cout <<"\t\tAverage's Student : " << Average << endl;


        
//     return 0 ;
//     }




#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
  private:
    int ID;
    float Score[5];
    char Name[30];
  public:
    void Input()
    {
      cout<<"Input ID:"; cin>>ID;
      cout<<setw(9)<<"Name:"; cin.ignore(); cin.getline(Name, 30);
      cout<<setw(9)<<"CPL:"; cin>>Score[0];
      cout<<setw(9)<<"FUN:"; cin>>Score[1];
      cout<<setw(9)<<"MAT:"; cin>>Score[2];
    }
    void Calculate()
    {
      Score[3] = Score[0]+Score[1]+Score[2];
      Score[4] = Score[3]/3;
    }
    void Head()
    {
      cout<<setw(5)<<"ID"<<setw(30)<<"Name"
          <<setw(5)<<"CPL"<<setw(5)<<"FUN"
          <<setw(5)<<"MAT"<<setw(10)<<"Total"
          <<setw(10)<<"Average"<<endl;
    }
    void Output()
    {
      cout.setf(ios::fixed);
      cout.precision(2);
      cout<<setw(5)<<ID<<setw(30)<<Name
          <<setw(5)<<Score[0]<<setw(5)<<Score[1]
        <<setw(5)<<Score[2]<<setw(10)<<Score[3]
        <<setw(10)<<Score[4]<<endl;      
    }
    float getTotal()
    {
      return Score[3];
    }
};
Student stu[50];

void SortTotalZToA(int n)
{
  Student tmp;
  int i, j;
  for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
      if(stu[i].getTotal() < stu[j].getTotal() )
      {
        tmp = stu[i];
        stu[i] = stu[j];
        stu[j] = tmp;
      }
}
void Display(int n)
{
  int i;
  stu[0].Head();
  for(i=0; i<n; i++)
    stu[i].Output();
}
int main(void)
{
  int i, n;
  cout<<"Input number of student:";
  cin>>n;
  for(i=0; i<n; i++)
  {
    stu[i].Input();
    stu[i].Calculate();
  }
  system("CLS");
  cout<<"Before sort"<<endl;
  Display(n);
  
  cout<<"After sorted"<<endl;
  SortTotalZToA(n);
  Display(n);
  
}
