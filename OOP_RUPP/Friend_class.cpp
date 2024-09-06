#include<iostream>
#include<iomanip>

using namespace std;

class Score;
class Info
{
  friend class Score;
  private:
    int id;
    char name[30];
    char sex[7];
  public:
    void Input();
    void Output();
};
class Score
{
  private:
    float s[5];
  public:
    void Input();
    void Output(Info &P);
    float average();
};
void Info::Input()
{
  cout<<"Enter ID:";
  cin>>id;
  cout<<"Enter Name:";
  cin.ignore();cin.getline(name, 30);
  cout<<"Enter Sex:";
  cin.getline(sex, 7);
}
void Info::Output()
{
  cout<<id<<setw(20)
  <<name<<setw(7)<<sex<<endl;
}
void Score::Input()
{
  for(int i=0; i<5; i++)
  {
    cout<<"Score["<<(i+1)<<"]=";
    cin>>s[i];
  }
}
void Score::Output(Info &P)
{
  cout<<P.id<<setw(20)<<P.name<<setw(7)
     <<P.sex<<setw(7)<<setw(4)<<s[0]
     <<setw(4)<<s[1]<<setw(4)<<s[2]
     <<setw(4)<<s[3]<<setw(4)<<average()<<endl;
}
float Score::average()
{
  float avg=0;
  for(int i=0; i<5; i++)
    avg += s[i];
  return avg/5;
}

int main(){

  system ("cls");
  int n;
  cout<<"Enter number of student:";
  cin>>n;
  Score *S=new Score[n];
  Info *P=new Info[n];
  for(int i=0; i<n; i++)
  {
    (P+i)->Input();
    (S+i)->Input();
  }

  for(int i=0; i<n; i++)
  {
    (S+i)->Output(*(P+i));
  }
  delete []P;
  delete []S;
}