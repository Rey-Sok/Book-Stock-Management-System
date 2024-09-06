#include <iostream>

using namespace std;

int main (){
    system ("cls");

    int n;

    cout <<"How many student :"; cin >> n;

    string names[n];
    float avg [n];

    for (int i= 0 ; i<n ; i++){
        cout <<"Name    : " <<i+1 ; cin >> names[i] ;
        cout <<"Average : " <<i+1 ; cin >> avg[i];
    }
    for (int i=0 ; i<n ; i++){
        cout <<"Name    : " << names[i] << endl ;
        cout <<"Average : " <<avg[i] << endl;
    }



    return 0 ;
}