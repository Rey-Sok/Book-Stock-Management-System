#include <iostream>

using namespace std;


int fack (int n){
    cout << n << "!= " ;
    int fack = 1;
    for (int i=n ; i >= 1 ; i--){
        fack *= i ;
        cout << i << " " ;
    if (i == 1 ){
        cout <<" " ;
    }else {
        cout <<" * " ;
    }
    }
    cout <<" = " << fack << endl;
    return fack;
}

int main (){

    system ("cls");

    fack (5);


    return 0 ;
}