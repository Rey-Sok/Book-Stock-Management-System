#include <iostream>

using namespace std;

class animals {
    private:
    string name;
    public:
    animals(){
        cout << "default parameter" << endl;   // call 
    }
    animals(string n){
        name = n;
        cout << "name : " << name << endl;
        cout << "Parameters constructor" << endl;
    }
    ~animals(){
        cout << "Destructor" << endl; // call to delete object
    }

};

int main (){
    animals *a1 = new animals;
    delete a1;  // call to delete object
    animals a2("Lion");

    // animals a3;
    // animals a4("cat");
    return 0;
}
