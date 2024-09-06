// inherithance get value public from parent class to child class
#include <iostream>
using namespace std;

// base class or parant class or super class
// class Person {
//     public:
//     string name;
//     int age;
//     int id;

//     void getoutput (){
//         cout <<"ID   : " << id << endl;
//         cout <<"Name : " << name << endl;
//         cout <<"Age  : " << age << endl;
//     }
// };

// // child class or dirived class
// class student : public Person {};
// class Teacher : public Person {};


// int main (){
//     system ("cls");

//     student s1;
//     s1.name = "Student";
//     s1.age = 20;
//     s1.id = 1;
//     s1.getoutput();

//     cout <<"======================================="<< endl;

//     Teacher t1;
//     t1.name = "Teacher";
//     t1.age = 30;
//     t1.id = 2;
//     t1.getoutput();
// }


class Engine {
    public:
    void speedup (){
        cout << "Engine is speeding up" << endl;
    }
    void slowdown (){
        cout << "Engine is slowing down" << endl;
    }
};

class Car : public Engine {
    private:

    int id ;
    string brand;
    int releasedyear;

    public:

    Car (int id , string brand , int releasedyear){
        this->id = id;
        this->brand = brand;
        this->releasedyear = releasedyear;
    }

    void output (){
        cout << "ID    : " << id << endl;
        cout << "Brand : " << brand << endl;
        cout << "Year  : " << releasedyear << endl;
    }
};

class Vechicle : public Engine {

};


int main (){

    system ("cls");

    Car c (1, "Toyota", 2010);
    c.output();
    c.speedup();
    c.slowdown();

}