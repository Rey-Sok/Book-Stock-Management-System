#include <iostream> 
#include <iomanip>

using namespace std;

// int main (){

//     system ("cls");

//     class retangle {
//         private :
//         float l , w ;
//         public :
            
//                 void enter (){
//                     cout <<"Please input length        : " ; cin >> l;
//                     cout <<"Please input width         : " ; cin >> w;
//                 }
//                 float area(){
//                     return l*w;
//                 }
//                 void output (){
//                     cout <<"This is length of retangle : " << l << endl;
//                     cout <<"This is width of retangle  : " << w << endl;
//                     cout <<"This is area of ratangle   : " << area () << endl;
//                 }
                
//                 };

   
    
//                     retangle obj;
//                     obj.enter ();
//                     obj.output();
//     return 0 ;
// }

int main (){
    system ("cls");

    class student 
    {
        private:

        int id , phone ;
        string  name,sex;
        float score ;

        public:
        void title (){
            cout <<"======|| Information of Student ||======"<< endl;
        }

        void input (){
            cout <<"       Please Input your ID      : ";cin >> id;
            cout <<"       Please Input your name    : "; cin.ignore(); getline (cin,name);
            cout <<"       Please Input your sex     : "; getline (cin, sex);
            cout <<"       Please your Phone Number  : ";cin>>phone;
            cout <<"       Please input your score   : "; cin >> score ;
        }

        void output (){
            cout <<"       This is your ID           : " << id << endl;
            cout <<"       This is your Name         : " << name << endl;
            cout <<"       This is your Sex          : " << sex << endl;
            cout <<"       This is your Phone Number : "<<setprecision (3) << setiosflags (ios::fixed) << phone << endl;
            cout <<"       This is your Score        : " << score << endl;
        }
    };

    student iovalue;
    iovalue.title();
    iovalue.input ();
    iovalue.output ();



    return 0;
}