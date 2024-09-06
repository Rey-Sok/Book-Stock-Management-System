#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    system ("cls");

    // integer data type
    int a = 2333; // (-2147...... to 2147.....)


    cout <<"Answer a : " << a << endl;
    cout <<"Data type of a : " << typeid(a).name() << endl;
    cout <<"Size of a : " << sizeof(a) << " bytes" << endl;

    // character data type

    char y = 'B';
    
    cout <<"Answer y : " << y << endl;
    cout <<"Data type of y : " << typeid(y).name() << endl;
    cout <<"Size of y : " << sizeof(y) << " bytes" << endl;

    // Floating point data type

    float z = 90.885;

    cout <<"Answer z : " << setprecision (3) << z << endl;
    cout <<"Data type of z : " << typeid(z).name() << endl;  // setprecision has header file <iomanip>
    cout <<"Size of z : " << sizeof(z) << " bytes" << endl;

    // double point data type

    double n = 3.141666666666666666666666666666666666666666666666666;

    cout <<"Answer n : " << setprecision (4) <<  n << endl;
    cout <<"Data type of n : " << typeid(n).name() << endl;
    cout <<"Size of n : " << sizeof(n) << " bytes" << endl;

    // boolean data type 

    bool havemany = true ;

    cout <<"Answer havemany : " <<  havemany << endl;
    cout <<"Data type of havemany : " << typeid(havemany).name() << endl;
    cout <<"Size of havemany : " << sizeof(havemany) << " bytes" << endl;

    unsigned int k = 2300; //unsigned int store only positive number ;

    cout <<"Answer k : " << k << endl;
    cout <<"Data type of k : " << typeid(k).name() << endl;
    cout <<"Size of k : " << sizeof(k) << " bytes" << endl;

    // short data type 

    short p = 223;

    cout <<"Answer p : " << p << endl;
    cout <<"Data type of p : " << typeid(p).name() << endl;
    cout <<"Size of p : " << sizeof(p) << " bytes" << endl;

    // long data type 

    long g = 3999999999999;

    cout <<"Answer g : " << g << endl;
    cout <<"Data type of g : " << typeid(g).name() << endl;
    cout <<"Size of g : " << sizeof(g) << " bytes" << endl;

    unsigned long long G = -3999999999999;  // unsigned long long the same size_t

    cout <<"Answer G : " << g << endl;
    cout <<"Data type of G : " << typeid(G).name() << endl;
    cout <<"Size of G : " << sizeof(G) << " bytes" << endl;


    return 0;
}