#include <iostream>

using namespace std;

int main (){
    system ("cls");
    int n;
    cout <<"Input n : " ; cin >> n ;

    for (int i=0 ; i < n ;i++){
        if (i%2 == 0){
            continue ;
            
        }
        cout << i <<" ";
    }

    return 0;
}