#include <iostream>

using namespace std;

#define MAX 1000
int main (){

system ("cls");  // best pratice we write name const value in Big latter example const int X = 23;


const int X = 34; // if we change value, it will error;
//X = 35 ; // error
//MAX = 12 // Error

cout << "x : " << X << endl;
cout <<"MAX : " << MAX << endl;

return 0 ;
}