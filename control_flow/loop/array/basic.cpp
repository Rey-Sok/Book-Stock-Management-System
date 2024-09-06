#include <iostream>

using namespace std;

int main (){

    system("cls");

    // declaraig

    float mark [5];
    mark [0]= 22.00;
    mark [1]= 33.34;
    mark [2]= 44.44;
    mark [3]= 55.57;
    mark [4]= 66.99;

    // initializing

    string name [5] = {"sok","nana","hyper","gold","Dara"};

    //cout <<"Name  Score" << endl;
   // cout << name [4] << "  :  " << mark [4];

    for (int i =0 ; i<5 ;i++){
        cout <<"Name  : " << name[i] << endl;
        cout <<"Score : " << mark[i] << endl;
    }

    return 0;
}