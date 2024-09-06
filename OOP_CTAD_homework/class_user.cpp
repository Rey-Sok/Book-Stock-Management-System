// # Homework
//     - Create class User that include the following properties
//         => (id, name, email, password, profile, isDeleted, isVerified)
//     - Create array of objects of class User then insert data into
//     - Find user by ID
//     - Delete user by ID

#include <iostream>
#include <iomanip>
using namespace std;

class User {

    private:
    int ID;
    string name;
    string email;
    string password;
    string profile;

    public:
    bool isDeleted;
    bool isVerified;
    void Setdata (int id, string name, string email, string password, string profile){
        this->ID = id;
        this->name = name;
        this->email = email;
        this->password = password;
        this->profile = profile;
        this->isDeleted = false;
        this->isVerified = false;
    }
    
    void Display() {
        cout <<setw(5)<<"ID"
             <<setw(10)<<"Name"
             <<setw(20)<<"Email"
             <<setw(25)<<"Password"
             <<setw(20)<<"Profile"<<endl;
    }
    void Print(){
        cout <<setw(5)<<ID
             <<setw(10)<<name
             <<setw(20)<<email <<"@gmail.com"
             <<setw(12)<<password
             <<setw(20)<<profile<<".com"<<endl;
    }
    float getID(){
    return ID;
    }
    void found (){
        cout <<"not found"<<endl;
    }

};

int main (){
    system ("cls");
    int n ;
    char ch;
    char ch1;
    cout << "\t\tEnter the number of users: "; cin >> n;
    cout << "\t=========|Information of the users|========"<<endl;
    User users[n];

    for(int i = 0; i < n; i++){
        int id;
        string name, email, password, profile;
        
        cout << "\t\t  No. User : " << i+1<< endl;
        cout << "\t\t  ID       : "; cin >> id;
        cout << "\t\t  Name     : "; cin.ignore(); getline(cin, name);
        cout << "\t\t  Email    : "; cin >> email;
        cout << "\t\t  Password : "; cin >> password;
        cout << "\t\t  Profile  : "; cin >> profile;
        
        users[i].Setdata(id, name, email, password, profile);
    }
    
    system("cls");
    users[0].Display();
    for(int i = 0; i < n; i++){
        users[i].Print();
    }

    do{
        int search;
        cout << "Enter the ID to search: "; cin >> search;
        for (int i=0; i<n ; i++){

        if(users[i].getID() == search){
            users[0].Display();
            users[i].Print();
            break;
            }
        }
        cout << "Do you want to search again (Y/N)? "; cin >> ch;
    }while(ch != 'n'|| ch == 'N');
    
    do{
        int deleteID;
        cout << "Enter the ID to delete: "; cin >> deleteID;
        for (int i=0; i<n ; i++){
            if(users[i].getID() == deleteID){
                users[i].isDeleted = true;
                break;
                }
            }
        cout << "Do you want to delete another user (Y/N)? "; cin >> ch1;
    }while(ch1!= 'n'|| ch1 == 'N');
    
    users[0].Display();
    for(int i = 0; i < n; i++){
        if(users[i].isDeleted == false){
            users[i].Print();
        }
    }
    
    return 0;

}