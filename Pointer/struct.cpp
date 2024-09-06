#include <iostream>

using namespace std;

    struct student {
        int age ;
        string name;
        string gender;
        string email;

        void informatin(){
            cout <<"====| System Information | ====" << endl;
            cout <<"Student Name   : " << name << endl;
            cout <<"Student age    : " << age << endl;
            cout <<"Student Gender : " << gender << endl;
            cout <<"Student Email  : " << email << endl; 
            cout << endl;
        }
    };

enum gender{     // keep only integer values
    MALE = 0;
    FEMALE = 1;
}
int main (){
    system ("cls");       // struct we can combine all data typle
    gender gender = MALE;
    cout << gender::MALE;

    // student 1
    student stu1;
    stu1.name = "Sok";
    stu1.age  = 19;
    stu1.gender= "male";
    stu1.email="sok2005r@gmail.com";
    stu1.informatin();

    // student 2

    student stu2;
    stu2.name = "Sak";
    stu2.age  = 23;
    stu2.gender= "male";
    stu2.email="sak2001@gmail.com";
    stu2.informatin();
    
    // student 3
    student stu3;
    cout << "Student Name   : " ; cin >> stu3.name;
    cout << "Student age    : " ; cin >> stu3.age;
    cout << "Student gender : " ; cin >> stu3.gender;
    cout << "Student email  : " ; cin >> stu3.email;
    cout << endl;
    stu3.informatin();
 

    return 0 ;
}