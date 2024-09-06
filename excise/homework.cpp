#include <iostream>

using namespace std ;


float us (float mon ) {
    return mon * 4000; 
}
float kh (float mon) {
    return mon /4000;
}
float eu (float mon){
    return mon * 1.2 ;
}

int main (){

    system ("cls");
    int n ;
    float mon;

    cout << "1 USD to KHR"<< endl;
    cout << "2 KHR to USD "<< endl;
    cout << "3 EUR to USD" << endl;

    cout <<"please Input choose : " ; cin >> n;

    switch (n){
        case 1:{
            cout << "1 USD to KHR"<< endl;
            cout << "money : $ " ; cin >> mon ;
            us (mon);
            cout <<"USD to KHR :" << us (mon) <<" Riel" << endl;
            break;
        }case 2:{
            cout << "2 KHR to USD "<< endl;
            cout << "money : Riel " ; cin >> mon ;
            kh (mon);
            cout <<"KHR to USD :" << kh (mon) <<" USD"<< endl;
            break;
        }case 3 :{
            
            cout << "3 EUR to USD" << endl;
            cout << "money : EUR " ; cin >> mon ;
            eu (mon);
            cout << "EUR to USD : " << eu (mon) <<" USD"<< endl;
            break;
        }
    }


    return 0;
}