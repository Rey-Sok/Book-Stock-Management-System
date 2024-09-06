#include <iostream>

using namespace std;

void sum (int a , int b){
    int sum = a + b ;
    cout << " a + b : " << sum << endl;
}
void sum (double a, double b){
    double sum = a + b ;
    cout << " a + b : " << sum << endl ;
}

void mul (int a , int b){
    int mul = a * b;
    cout << " a * b : " << mul << endl; 
}
void mul (double a , double b){
    double mul = a * b;
    cout << " a * b : " << mul << endl; 
}
void divide (int a , int b){
    double d = a / b;
    cout << " a / b : " << d << endl; 
}
void divide (double a , double b){
    double d = a / b;
    cout << " a / b : " << d << endl; 
}
int main (){

    sum (1,3);
    sum (1.6,2.6);

    mul (2,2);
    mul (2.5,1.5);

    divide(6,2);
    divide(3.5,1.4);

}