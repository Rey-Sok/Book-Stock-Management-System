#include <iostream>

using namespace std ;

void gotobank (){

    bool issecurityallowed = true;
    bool isgetticket = true ;
    bool istaketurn = true;

    if (issecurityallowed){
        cout <<"You can enter the bank !" << endl;
       
        if (isgetticket){
            cout <<"You can wait for your turn " << endl;
           
            if (istaketurn){
                cout <<"You can meet casheir" << endl;
            }else{
                cout << "Please wait"<< endl;
            }

        }else {
            cout <<"It's not your turn  " << endl;
        }

    }else {
        cout <<"You cannot go to the bank !" << endl;
    }
}

int main (){

    system ("cls");

    gotobank ();

    return 0 ;

}