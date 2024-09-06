#include <iostream>

using namespace std;


// void output (){
//     cout <<"=========| Store | ========" << endl;
//     cout <<"\t1 Buy pizza " << endl;
//     cout <<"\t2 Buy drink " << endl;
//     cout <<"\t3 Buy beer " << endl;
//     cout <<"\t0 Goodbye! " << endl;
    
// }
// void choose (){
//     int n;

//     cout <<"\tPlease input your choose : " ; cin >> n;

//       switch (n){
//         case 1 : {
//             cout <<"\tYou bought pizza" << endl;
//             break;
//         }case 2 : {
//             cout <<"\tYou bought drink" << endl;
//             break;
//         }case 3 : {
//             cout <<"\tYou bought beer" << endl;
//             break;
//         }case 0 : {
//             cout <<"\tGoodbye!" << endl;
//             break;
//         }default : {
//             cout <<"\tPlease input again " << endl;
//         }
//     }
// }
// int main (){
//     system ("cls");

//     output ();

//     choose ();

//     return 0 ;
// }

float us (float mon ) {
    return mon * 4000; 
}
float kh (float mon) {
    return mon /4000;
}
float eu (float mon){
    return mon * 1.2 ;
}

void menu (){
    cout << "1. USD to KHR"<< endl;
    cout << "2. KHR to USD "<< endl;
    cout << "3. EUR to USD" << endl;
}

int main (){


    system ("cls");
    int n ;
    float mon;
    
    menu ();

    cout <<"please Input choose : " ; cin >> n;

    switch (n){
        case 1:{
            cout << "1. USD to KHR"<< endl;
            cout << "money : $ " ; cin >> mon ;
            us (mon);
            cout <<"USD to KHR :" << us (mon) <<" Riel" << endl;
            break;
        }case 2:{
            cout << "2. KHR to USD "<< endl;
            cout << "money : Riel " ; cin >> mon ;
            kh (mon);
            cout <<"KHR to USD :" << kh (mon) <<" USD"<< endl;
            break;
        }case 3 :{
            
            cout << "3. EUR to USD" << endl;
            cout << "money : EUR " ; cin >> mon ;
            eu (mon);
            cout << "EUR to USD : " << eu (mon) <<" USD"<< endl;
            break;
        }
    }


    return 0;
}