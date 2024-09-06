#include <iostream>

using namespace std;

int main ()

{
    // code assignment has += -= *= /= ex a+=b, a = a+b;
    // y++ = y+1
    //++y = y+1
    system ("cls");

    int x = 6 ;
    int e = 6 ;
    int b , c;
    
    b = x++ ;
    c = ++e ;
    x = x + 1;

    x += 1;  // x = x + 1;

    x -= 4; // x = x - 4 ;

    cout <<" X : " << x <<endl;
    cout <<" X : " << x * 30 << endl;
    cout <<" B : " << b << endl;
    cout <<" C : " << e << endl;

    

    return 0 ;
}