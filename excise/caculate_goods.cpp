#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    system ("cls");

    // float price ;
    // float discount;
    // float total;
    // cout <<"\t=======|This is caculaation of goods|=======" << endl;
    // cout <<"\t\tPlease Enter price of good : " ; cin >> price ;

    // if (price <= 10){
    //     discount = price * 0.05;
    //     total = price - discount ;
    // }else if (price <=50){
    //     discount = price * 0.1;
    //     total = price - discount ;
    // }else if (price <= 100){
    //     discount = price * 0.15;
    //     total = price - discount;
    // }else {
    //     discount = price * 0.2;
    //     total = price - discount;
    // }
    // cout<<"\t\tThis is odd price \t   : " << price <<"$"<< endl;
    // cout<<"\t\tThis is discount price     : " << discount << endl;
    // cout<<"\t\tThe latest pay \t\t   : " << total << endl;
    // cout<<"\t=======|Thank you (Sir/Mardam)|=======" << endl;







    
    float num = 100.6789;
    cout <<setprecision (3)<<setiosflags (ios::fixed) << num << endl;
    return 0 ;
}