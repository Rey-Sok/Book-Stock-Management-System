#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    system ("cls");

    float a,b,c,d,x,m,n;
    cout << "Please Input a :"; cin >> a;
    cout << "Please Input b : "; cin >> b;
    cout << "Please Input c : "; cin  >> d;
    cout << "Please Input m : "; cin >> m;
    cout << "Please Input n : "; cin >> n ;
    x = (a+b)*(c-d)/(m*2+n);
    cout <<"Result : "<< x ;



    int ID;
    string name;
    string sex;
    int age;
    string address;
    cout << endl;
    cout <<"=====|Input your information|======"<< endl;
    cout <<"Please input ID : "; cin >> ID;
    cout <<"Please input name : ";cin.ignore (); getline(cin,name);
    cout <<"Please input sex : "; getline (cin,sex);
    cout <<"Please input address : " ;getline (cin, address);
    cout <<"Please input age : "; cin >> age;
    cout << endl;
    cout <<"======|Output Result|======" << endl;
    cout <<"This is ID : " << ID << endl;
    cout <<"This is name : " << name << endl;
    cout <<"This is sex : " << sex << endl;
    cout <<"This is address : " << address << endl;
    cout <<"This is age : " << age << endl;


    unsigned int Num;
    cout << endl;
    cout <<"Please input number : " ; cin >> Num;
    cout << setbase(10) << Num << endl;
    cout << setbase(8) << Num << endl;
    cout << setbase(16) << Num << endl;
    cout << setbase(2) << Num << endl;

    return 0 ;
}