#include <iostream> 

using namespace std;

// code comparison (==,!=,<,>,<=,>=)

int main ()
    {
     system ("cls");

        int age;

        cout <<"Please Input your age : "; cin >> age ;

        bool Result = age >= 18;

        if (Result){

            cout << "you can vote" << endl;
        }else{

            cout <<"you cannot vote " << endl;

            cout <<"you have wait : " << 18 - age << endl;
        }


    cout << endl;

    cout <<"======Menu=====" << endl;
    cout <<"1. Add product"  << endl;
    cout <<"2. remove procuct " << endl;
    cout <<"3. view product " << endl;
    cout <<"4. exit" << endl;


    int option ;

    cout << "Please input opion : "; cin >> option;
    if (option != 0){
        cout << "Program continue working " << endl;
    }else{
        cout <<"exit..." << endl;
    }

     return 0 ;   
    }