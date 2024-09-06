#include <iostream>

using namespace std;

int main ()
{
    system ("cls");

    int Age = 18;
    string Name = "sok";
    string university = "RUPP";

    // cout <<"Age : " << &age << endl;
    cout <<"\t\tMy name is \"" << Name <<"\""<< endl;
    cout <<"\t\tI am " << Age << " year old" << endl;
    cout <<"\t\tI am from " << university << endl;

    // 1 variable declearation
    int age;
    float salary;
    string name ;

    cout <<"age : " << age <<endl;
    cout <<"salary : " << salary << endl;
    cout <<"name : " << name << endl;

    // 2 assign value to variaable

    age = 25;
    salary = 3000;
    name = "sok";

    cout <<"Age : " << age <<endl;
    cout <<"Salary : " << salary << endl;
    cout <<"Name : " << name << endl;

    // initialize variable;

    string classname = " C++ programming";
    
    cout <<"Age : " << age <<endl;
    cout <<"Salary : " << salary << endl;
    cout <<"Name : " << name << endl;
    cout <<"Class name : " << classname << endl;
    return 0;
}