#include <iostream>

using namespace std;

void disply (){
    cout <<"=====| Menu |=====" << endl;
    cout <<"1.Login " << endl;
    cout <<"2.Regester " << endl;
    cout <<"0. Exti" << endl;
    cout <<"Enter your choise " << endl;
}
string correctpassword;
string correctname;
void Login (){
    string name ,p;
    cout <<"Please Input your name : " ; cin>> name;
    cout <<"Please Input your password :"; cin >> p;
    while ((name != correctname || (p!=correctpassword))){
    cout <<"Please Input your name : " ; cin>> name;
    cout <<"Please Input your password :"; cin >> p;   
    }
}
void Regester (){
    cout <<"Please Input correctname : " ; cin>>correctname;
    cout <<"Please Input correctpassword :"; cin >> correctpassword;
    system ("cls");
}



int main (){

    system ("cls");

    disply();
    int n;

    do {
        
       
    cout <<"choise: "; cin >> n;
     system ("cls");
        switch(n){
            case 1: {
                Login();
                break;
            }case 2:{
                Regester();
                break;
            }case 0 :{
                cout <<"exit "<< endl;
                break;
            }default :{
                cout <<"Input again" << endl;
                break;
            }
        }
    }while (n!=0);
return 0;

}



