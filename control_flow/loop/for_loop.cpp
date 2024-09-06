#include <iostream >

using namespace std ;

void message ()
{
        cout <<"Sorry beb. " << endl;
}

int sum (int n){

    int sum = 0;
    for (int i = 0 ; i<n ; i++){
        sum += i;

    return sum;
    }
}
int main (){
    system ("cls");



    int n,i=0;

    cout <<"Please Input number :" ; cin >> n;

    // for (int i=0;i<n;i++) // i=iterate and n = number
    // {
        
    //     message ();
    // }

    cout <<"sum : " <<sum (n)<< endl; // specifect coditional


    return 0;
}

