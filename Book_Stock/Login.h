#include <iostream>

class Login {
    private:
    string lastName;
    string firstName;
    string phoneNumber;
    string address;
    string email;
    string password;
    string confirmPassword;
    public:
    Login (){
    cout << "=======| welcome To Book Stock Management |========" << endl;
    cout << "================| Please Login Here |=============" << endl;
    }
    void Information (){
        cout << "Enter your last name: ";
        cin >> lastName;
        cout << "Enter your first name: ";
        cin >> firstName;
        cout << "Enter your phone number: ";
        cin >> phoneNumber;
        cout << "Enter your address: ";
        cin >> address;
        cout << "Enter your email: ";
        cin >> email;
        cout << "Enter your password: ";
        cin >> password;
        cout << "Confirm your password: ";
        cin >> confirmPassword;
        if (password!= confirmPassword) {
            cout << "Passwords do not match!" << endl;
            exit(0);
        }
        else {
            cout << "Login Successful!" << endl;
        }
    }
    void display (){
        cout << "============| Admin Information |==============" << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
    }
}