#include <iostream>
#include <vector>

using namespace std;

int main (){
    system ("cls");

    vector <string> names = {"Sok","Sak"};

    cout << "\toriginal" << endl;
    for (int i=0;i<names.size();i++){        
        cout <<" " << names[i] << endl;
    }

    names.insert (names.begin (),"Haha"); // how to add element in vector
    //names.insert (names.end (),"Haha"); // how to add element in vector
    names.erase  (names.begin ()) ; // delete element
    //names.erase  (names.begin ()) ; // delete element 
    names.push_back ("dara");  // we can write names.insert (names.end (),"dara");
    names.pop_back ();  // delete element end of vector
    
    cout <<"\tAfter adding vector" << endl;
    for (int i=0;i<names.size();i++){
        cout <<" "<<names[i] << endl;
    }

    return 0;
}