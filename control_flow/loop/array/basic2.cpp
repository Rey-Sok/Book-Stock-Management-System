#include <iostream>

using namespace std;

int main (){
    system ("cls");

    float marks [5];


    marks[0] = 90.5;
    marks[1] = 80.5;
    marks[2] = 70.5;
    marks[3] = 60.5;
    marks[4] = 50.5;


    cout <<"size of marks array" << sizeof (marks) << endl;
    cout <<"Address of marks array " << marks << endl;
    cout <<"Address of marks[0]"  << &marks[0] << endl;
    cout <<"Address of marks[1]"  << &marks[1] << endl;
    cout <<"Address of marks[2]"  << &marks[2] << endl;


    // how to call value to use. we have to way as below
    cout <<"value of marks[1] array : " << *(marks + 1) << endl;
    cout <<"value of marks[1] array : "  << marks[1] << endl;


    return 0 ;
}