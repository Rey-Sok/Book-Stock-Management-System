#include <iostream>

using namespace std;

int main (){
    system("cls");

    int value [] = {1,2,3,3,4,5,3,6,6,7,9};

    int n = sizeof(value) / sizeof (value[0]);
    for (int i=0 ; i<n ;i++){
        cout <<value [i]<<" ";
    }

    int element ;

    cout <<"\nInput number do you want to delete :" ; cin >> element;

    for (int i=0;i<n;i++){
        if (element == value[i]){       // search element you want to delete
            for (int j=i;j<n-1;j++){
                value [j] = value [j+1];
            }
            n--;
            //i--; 
            break;
                                   
        }
    }

    cout <<"value after delete " << endl;
    for (int i=0 ; i<n;i++){
    cout <<value[i] << " " ;
    }

    return 0 ;
}