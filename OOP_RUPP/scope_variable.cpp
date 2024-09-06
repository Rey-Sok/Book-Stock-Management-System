#include <iostream>

using namespace std;

int totle = 100;  // Globle variable

void myfunction (){
    cout <<"Totle :" << totle << endl;
}

int main (){
    system ("cls");

    string name = "jonh";

    {
        string name = "jame";
        int age = 12;

        cout << "Name : " << name<< endl;
    }

    cout << "Name : " << name << endl;
    //cout << "Age :" << age << endl; // error;

    return 0 ;
}
