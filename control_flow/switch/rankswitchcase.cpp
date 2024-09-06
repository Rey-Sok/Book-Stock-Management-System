#include <iostream>

using namespace std;

int main (){
    system ("cls");

    int score ;

    cout << "Input score :" ; cin >> score ;

    switch (score ){


        case 90 ... 100 : {
            cout <<"grade A " << endl;
            break;
        } case 80 ... 89 : {
            cout <<"grade B " << endl;
            break;
        } case 70 ... 79 : {
            cout <<"grade C " << endl;
            break;
        }
    }


    return 0 ;
}