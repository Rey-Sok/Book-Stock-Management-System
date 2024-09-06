#include <iostream>

using namespace std;

int main (){

    system ("cls");
    
    int n[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,8}};  // 5 row and 2 colomn //

    int row = sizeof (n)/sizeof(n[0]);
    int colomn = sizeof(n[0])/sizeof(n[0][0]);
    
    for (int i=0 ; i<row ; i++)
    {
        for (int j=0;j<colomn;j++){
            cout <<n[i][j] << " " ;
        }
        cout <<endl;
    }

    return 0;
}