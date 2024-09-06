#include <iostream>

using namespace std;

// compile time polymorphism

class Person {
    public:
    virtual void talk (string name)=0;     // virtual use to edit function or override ; =0 no body
        
    void talk (int age){
        cout << "Age : " << age << endl;
    }
};
// run time polymorphism

class Student : public Person {
    public:
    void talk (string name){
        cout <<"Name Student " << endl;
    }
};

int main (){
    system ("cls");

     Student stu ;
     stu.talk("John");
     Person p;
     p.talk("John");

    return 0;
}