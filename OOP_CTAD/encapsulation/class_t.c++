#include <iostream>

using namespace std;

class Teacher {
    private:
    int id;
    string name, email;
    public:
    // constructor initializer
    Teacher(int id, string name, string email):id(id), name(name), email(email){}
        // this->id = id;
        // this->name = name;
        // this->email = email;
        void display (){
        cout <<"Teacher ID :" << id << endl;
        cout <<"Teacher Name :" << name << endl;
        cout <<"Teacher Email :" << email << endl;
    }
};
    

int main (){
    system ("cls");
    Teacher t(1, "John Doe", "johndoe@example.com");
    t.display();

    return 0;
}