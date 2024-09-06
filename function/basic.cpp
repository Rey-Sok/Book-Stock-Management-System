 #include <iostream>
 #include <iomanip>


 using namespace std;

// int pin;
// string name;

// // 1 function prototype
// // type 1 : fuction has no return value and no paramater  
// void Hello ();

// // type 2 :function has no return value and has paramater 
// void smart(string name, int pin);


// int main (){
//     system ("cls");
   
//     // 3 calling function

//     Hello ();
//     cout <<setw(50)<<"please input pin code : " ; cin >> pin ;
//     cout <<setw(51)<<"please input your name : "; cin.ignore () ; getline(cin,name);
//     smart (name,pin);
//     return 0 ;
// }

// // 2 function definition

// void Hello (){

//     cout <<setw(48)<<"This is my Information" << endl;  // setw that means \t
//     cout <<setw(44)<<"My name is sok" << endl;
// }
// // string name is paramater 

// void smart (string name , int pin){
//    if ( pin == 1234){
//      cout <<setw(34)<<"Hello " << name <<" from hotel" << endl;
//    }else{
//     cout<<setw(47)<< "you aren't from hotel"<< endl;
//    }
// }



// type 3: function has return value and no paramater
float getbalene ();

// type 4 : function has return value and has parameter
float caculatetax (float salary);

int main (){
    system ("cls");
    

    cout<< getbalene () << endl;
    float get_function = getbalene ();
    cout<<"get_function : " <<get_function << endl;
    
    float salary ;
    cout <<"Please input your salary : " ; cin >> salary;
    float paidtax = caculatetax (salary);
    cout <<"This is tax of salary : " << paidtax << endl;

    return 0 ;
}
float getbalene (){
    return 40 + 50 + 10 ;
}

float caculatetax (float salary){
    float tax = 0.2 ;
    return salary * tax ;

}