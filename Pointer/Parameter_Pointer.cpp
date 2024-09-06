#include <iostream>

using namespace std;

void test (int *p){  //function pointer
    ++*p;
}



int main (){
    system("cls");

    int p=8;
    cout <<"Before passing :" <<  p << endl;
    test (&p);
    cout <<"After passing  :" <<  p << endl;

    return 0 ;
}

// void test (int &p){  // pass by reference 
//     ++p;
// }
// int main (){
//     system("cls");

//     int p=8;
//    cout <<"Before passing :" <<  p << endl;
//    test (p);
//    cout <<"After passing  :" <<  p << endl;

//     return 0 ;
// }