#include <iostream>

using namespace std;

void menu (){
    cout <<"======| Menu |======" << endl;
    cout <<"1. Add " << endl;
    cout <<"2. Suctrub" << endl;
    cout <<"3. Multipley" << endl;
    cout <<"0. exit" << endl;
}
void add (){
    float a,b;
    cout <<"Input a :"; cin >> a ;
    cout <<"Input b :"; cin >> b ;
    cout <<"a + b = " << a + b << endl;
}
void sub (){
    float a,b;
    cout <<"Input a :"; cin >> a ;
    cout <<"Input b :"; cin >> b ;
    cout <<"a - b = " << a - b << endl;
}
void mul (){
    float a,b;
    cout <<"Input a :"; cin >> a ;
    cout <<"Input b :"; cin >> b ;
    cout <<"a * b = " << a * b << endl;
}


int main (){
     system ("cls");
   

    // syntax while
    //while (condition){
    
    // }

    // int count =0 ;

    // while (count < 10 )// or (count !=10)
    // {
    //     count ++;
    //     cout <<count << " " ;
    // }
    while (true){

        menu ();
        int choise;
       
        cout << "Please Input your choise : "; cin >> choise;
        
        switch (choise){
        case 1 : {
            add ();
            break;
        }case 2 : {
            sub ();
            break;
        }case 3 :{
            mul ();
            break;
        }case 0 :{
            exit (0);
        }
        if (choise==0){
            break;
        }
    }

}
    return 0;
}