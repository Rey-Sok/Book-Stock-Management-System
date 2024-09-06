/*
Create a class called Utils that has the following methods
    1. method named sum that has two parameters for integer total
    2. method named square that has one parameter for powering number
    3. method named khCurrencyExchange that has one parameter for exchange cash from riel to dollar
*/
// Create object of this class and called above methods
#include <iostream>

using namespace std;

// class Utils{
//     public:
//         int sum(int a, int b){
//             return a + b;
//         }
//         int square(int a){
//             return a * a;
//         }
//         double khCurrencyExchange(double a){
//             return a/4000;
//         }
// };

// int main(){
//     Utils util;
//     cout<<"Sum: "<<util.sum(90,-100)<<endl;
//     cout<<"Square: "<<util.square((-4)*(-4)*-2)<<endl;
//     cout<<"Cash in dollar: "<<util.khCurrencyExchange(10200)<<endl;
//     return 0;
// }


class Pet {
    private:
    int id;
    string name;
    string color;
    string type;
    
    public:
    Pet (int id, string name, string color , string type){
        this->id = id;
        this->name = name;
        this->color = color;
        this->type = type;
    }
    Pet ();
    void getPetDetail (){
        cout << "This is ID Pet : " << id << endl;
        cout << "Name of pet : " << name << endl;
        cout << "Color of pet : " << color << endl;
        cout << "Type of pet : " << type << endl;
    }
};

int main (){
    system ("cls");
    Pet pet1(1, "Luna", "White", "birt");
    pet1.getPetDetail();
    return 0;
}

