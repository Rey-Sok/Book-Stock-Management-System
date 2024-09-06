#include <iostream>

using namespace std;

int main ()
{
    system ("cls");

    //logiccal (|| , && , !)

    int age; 
    string nationality;

    cout <<"=======| register |======" << endl;
    cout <<"Enter your age : "; 
    cin>> age ;
    cout <<"Enter your nationalty : ";
    cin.ignore(); getline (cin, nationality);

    // you can write like this
    // if (age >=18 && nationality == "khmer"){
    //     cout <<"You can driver..." << endl;
    // }else {
    //     cout <<"Your cannot driver..."<< endl;
    // }

    bool conditional1 = (age >= 18);
    bool conditional2 = (nationality == "khmer"||nationality=="KHMER");
    if (conditional1 && conditional2){
        cout <<"You can driver.." << endl;
    }else {
        cout <<"You cannot driver.." << endl;
    }
return 0;
}