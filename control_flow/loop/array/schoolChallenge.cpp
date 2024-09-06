#include <iostream>

using namespace std;

void printArray(string name[], float salary[], int size){
    cout << "Employee Name\t\tSalary" << endl;
    for(int i=0; i<size; i++){
        cout << name[i] << "\t\t\t" << salary[i] << endl;
    }
    cout << endl;
}

int main(){
    system("cls");
    string employeeNames[] ={
        "John",
        "Doe",
        "Jane",
        "Alex",
        "Mary"
    };
    float employeeSalaries[] = {
        1000.50,
        4000.75,
        2000.75,
        5000.25,
        3000.25
    };

    int sizeTotal = sizeof(employeeNames);
    int sizeElement = sizeof(employeeNames[0]);
    int numberElements = sizeTotal / sizeElement;

    cout << "Original array: " << endl;
    printArray(employeeNames, employeeSalaries, numberElements);

int tmp;

    for (int i=0;i<numberElements;i++){
        for (int j=0;j<numberElements-1;j++){

            if (employeeSalaries[j]>employeeSalaries[j+1])
            {
            tmp =  employeeSalaries[j];
            employeeSalaries[j]=employeeSalaries[j+1];
            employeeSalaries[j+1]=tmp;

            string tmpname;

            tmpname = employeeNames[j];
            employeeNames[j]=employeeNames[j+1];
            employeeNames[j+1]=tmpname;
            }
        }
    }
    
   
    
    cout << "Sorted array: " << endl;
    printArray(employeeNames, employeeSalaries, numberElements);
    return 0;
}