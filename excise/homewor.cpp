#include <iostream>
#include <iomanip>

using namespace std;

 

class employee
{
    private:
    float salary ;
    string name;
    string id;
    int age;
    
    public:

    void getinfor(){

        cout <<"Input employee's ID :" ; cin >> id;
        cout <<"Input emplpoyee's Name :"; cin.ignore (); getline (cin,name);
        cout <<"Input employee's Age :" ; cin >> age;
        cout <<"Input employee's Salary :"; cin >> salary;

    }
    void output (){
        cout <<"ID\tName\tAge\tSalary" << endl;
        cout<< id<<"\t"<<name<<setw(7)<< age <<setw(9)<< salary << endl;

    }
    float Mon ()
    {
    return salary;
    }

};

employee obj[50];
void shotZToA (int n){
    employee tmp;
    int i,j;
    for (i=0 ; i<n-1 ; i++)
        for (j=i+1;j<n;j++)
        if (obj[i].Mon() < obj[j].Mon())
        {
            tmp = obj[i];
            obj[i] = obj[j];
            obj[j] = tmp;
        }

}
void Display (int n){
    for (int i=0; i<n;i++){
        obj[i].output();
    }
}


int main (){
    int i=0;
    system ("cls");

    

    int n;

    cout <<"Please input number of employee :" ; cin >> n;

    for (int i=0 ; i < n ; i++){
        cout <<"Employee " << i + 1 << endl;
        obj[i].getinfor ();
    }
    
    for (int i=0; i<n; i++){
         obj[i].output ();
         cout <<"==========================" << endl;
    }
    system ("cls");
    shotZToA (n);
    Display (n);
    

    return 0 ;
}
