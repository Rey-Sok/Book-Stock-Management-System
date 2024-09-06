#include <iostream>

using namespace std;

    class utils {
        public:
        int a ;

        void sum (int x, int  , int y ){
            a = x + y ;
            cout << "Sum of a : " << a << endl;
        }

        void subtract (int x, int y){
            a = x - y;
            cout << "Difference of a : " << a << endl;
        }
    };

    int main() {
        utils obj;  // directly initialize
        system ("cls");
        obj.sum(45, 10, 23);  // parameter
        obj.subtract(45, 10); // parameter

        utils *ob = new utils; // dynamically allocated memory
        ob->sum(45, 10, 23);  // pointer
        return 0;
    }

    // class Utils {

    //     private:
    //     int s;

    //     public:
    //     void sum (int x, int y){
    //         s = x + y;
    //         cout << "Sum of a : " << s << endl;
    //     }
    // };

    // int main (){
    //     Utils obj;  // directly initialize
    //     system ("cls");
    //     obj.sum(45, 10);  // parameter
    // }


   