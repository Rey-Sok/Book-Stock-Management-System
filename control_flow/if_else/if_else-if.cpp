#include  <iostream>

using namespace std;

void Tax (float salary){
    
    if (salary < 500){
        cout <<"\tTax : 0%" << endl;
        cout <<"\tTax : " << salary * 0 << endl;
    }else if (salary < 1000){
        cout <<"\tTax : 10%" << endl;
        cout <<"\tTax : " << salary * 0.1 << endl; 
    }else if (salary < 2000){
        cout <<"\tTax : 20%" << endl;
        cout <<"\tTax : " << salary * 0.2 << endl; 
    }else {
        cout <<"\tTax : 30%" << endl;
        cout <<"\tTax : " << salary * 0.3 << endl; 
    }

}

int main (){
    system ("cls");
    
    float salary;
    cout <<"\tThis is caculate of tax" << endl;
    cout <<"\tPlease Input your salary : " ; cin >> salary ;
    
    Tax (salary);
    
    return 0;
}