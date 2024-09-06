#include <iostream>

using namespace std;


int main (){
    system ("cls");

    int num = 30;

    int *ptr = &num;  //keep address variable
    int **pt = &ptr   //keep address pointer  // we called pointer to pointer
    
    // how to prinf address

    cout <<"address of num :" << &num << endl;
    cout <<"address of *ptr :" << &ptr << endl;
    cout <<"address of **pt :" << &pt << endl;

    cout <<"This is value : " << num <<endl;
    cout <<"This is value : " << *ptr << endl;
    cout <<"This is address : " << ptr << endl;
    cout <<"This is address : " << &num << endl;

    *ptr = 70;

    cout <<"This is value : " << num <<endl;
    cout <<"This is value : " << *ptr << endl;
    cout <<"This is address : " << ptr << endl;
    cout <<"This is address : " << &num << endl;

    return 0;
}


