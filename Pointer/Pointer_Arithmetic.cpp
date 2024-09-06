#include <iostream>

using namespace std;

int main (){
    system ("cls");

    int num[] = {3,4,5,6,7,9,};
    
    // int *ptr = num ;
    // cout << *ptr << endl;

    // *ptr++;
    // cout << *ptr << endl;

    // ptr = ptr + 4;   //addition address;
    // cout << *ptr << endl;

    // *ptr--;
    // cout << *ptr << endl;

    // *ptr = *ptr + 3 ; // addition value ;
    // cout << *ptr << endl;

    // int size;
    // size = sizeof (num)/sizeof (num[0]);

    for (int i=0;i<size;i++){
        cout <<*(num+i)<<" " ;
    }

    return 0 ;
}