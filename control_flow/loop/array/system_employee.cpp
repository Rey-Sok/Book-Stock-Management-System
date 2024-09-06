#include <iostream>
#include <iomanip>
#include <string.h>


using namespace std;

void displaymenu (){
    cout <<"========| Employee Management System |========" << endl;
    cout <<"1. Add Employee..............................." << endl;
    cout <<"2. Update Employee ..........................." << endl;
    cout <<"3. Delete Employee ..........................." << endl;
    cout <<"4. Short Employee............................." << endl;
    cout <<"5. Display All Employee......................." << endl;
    cout <<"6. Search ...................................." << endl;
    cout <<"0. Exit ......................................" << endl;
    cout <<"==============================================" << endl;
    cout <<"Input your option .......................... : " ;
}
int EmployeeID[100];
char name[100];
string Employeename[100];
float Employeesalary[100];
int Employeecount = 0;

void Addemployee (){
    system ("cls");

    cout <<"=========| Add Employee |==========" << endl;
    EmployeeID [Employeecount] = Employeecount + 1 ;
    cout <<"Employee Name           :" ; cin.ignore () ; getline (cin,Employeename[Employeecount]);
    cout <<"Employee's Salary       :" ; cin >> Employeesalary[Employeecount]; 
    Employeecount++;
}


void displayallemp (){
    system ("cls");

    cout <<"========| Display All Employee |=========" << endl;
    cout << setw(5) << "ID" << setw(10) << "Name" << setw(10) << "Salary" << endl;

    for (int i = 0 ; i<Employeecount ; i++){
        cout << setw(4) << EmployeeID[i] << setw (10) << Employeename[i]
        << setw (9) << Employeesalary[i] << endl;
       }
       cout << "Totle of emplooyee               : " << Employeecount << endl;
       cout <<"==================================" << endl;
}

void search (){
       string name;
       int flage = 0;
   
         cout <<"Please Input name you want to search : " ; cin.ignore(); getline (cin,name);
         
         for (int i=0; i<Employeename[Employeecount];i++){
            if (strcmpi(name,Employeename[Employeecount])==0){
            flage = 1 ;
            cout << setw(5) << "ID" << setw(10) << "Name" << setw(10) << "Salary" << endl;
            cout << setw(4) << EmployeeID[i] << setw (10) << Employeename[i]
            << setw (9) << Employeesalary[i] << endl;
        }
    }
}



int main (){
    system ("cls");
    int option ;
    
    do {

        displaymenu ();

        cin >> option;

        switch (option){
            case 1 :{
                system ("cls");
                Addemployee ();
                break;
            }
            // case 2 :{
            //     Updateemployee ();
            //     break ;
            // }
            case 5 :{
                system ("cls");
                displayallemp ();
                break;
            }
            case 6 : {
                system ("cls");
                search ();
                break;
            }
            case 0 :{
                cout <<"Exit.........." << endl;
            }
            default :{
                cout << "invalit option........" << endl;
            }
        }
        

    }while (option != 0);

    return 0;
}



