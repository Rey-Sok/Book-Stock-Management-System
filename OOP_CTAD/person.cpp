#include <iostream>
#include <iomanip>  

using namespace std;

class Person {

        private:
        string name;
        int age;
        string email;

        public:
        void setdata (int age , string name , string email){
            this->age = age;
            this->name = name;
            this->email = email;  // this means that assigh values parameter to variable class
        }
        void screan (){
            cout << setw(4) << "Age"
                << setw(20) << "Name"
                << setw(25) << "Email"<<endl;
        }
        void display (){
            cout<<setw(4)<<age
                <<setw(20)<<name
                <<setw(25)<<email<< endl;
        }
    };
    int main (){
        system ("cls");
        int n ;
        Person *p;

        cout << "Enter number of persons: ";
        cin >> n;

        p = new Person[n];

        for (int i = 0; i < n; i++){
            int age;
            string name, email;
            cout << "Information of person : " << i+1 << endl;
            cout << "Enter name            : " ;cin >> name ;
            cout << "Enter age             : " ;cin >> age ;
            cout << "Enter email           : " ;cin >> email ;
            (p+i)->setdata(age, name, email);
        }

        system ("cls");
        cout << "\nDisplaying data:" << endl;
        p->screan();

        for (int i = 0; i < n; i++){
            (p+i)->display();       // (p+i)->display = p[i]->display
            cout << endl;
        }
    }