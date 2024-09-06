#include <iostream>
#include <iomanip>

using namespace std;

class student  
{
    private :
    string name , sex ;
    int id;
    float salary;

    public :

    void getinfo (){
       // cout <"Input your ID    :" ; cin >> id ;
        cout <<"Input your name :" ; cin.ignore (); getline (cin,name) ;
        cout <<"Input your sex  :" ; cin.ignore (); getline (cin,sex)  ;
        cout <<"Input your salary:" ; cin >> salary ;
    }

    void display (){

        cout <<id<<setw(5)<<name<<setw(11)<<sex << setw(5)<<setw(5)<<salary<<setw(6) << endl;
    }

    class dob {

        private:
        int dd,mm,yy;
        public :

        void getd (){
            cout <<"Input your Date :" ; cin >> dd ;
            cout <<"Input your month:" ; cin >> mm;
            cout <<"input your year :" ; cin >> yy;
        }
        void out(){
            cout <<dd << setw(11) << mm << setw (5) << yy << setw(5) << endl;
        }
    };
};


int main (){

    student st;
    student::dob db;
    st.getinfo ();
    db.getd ();
    st.display ();
    db.out ();

}