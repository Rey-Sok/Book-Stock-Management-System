#include <iostream>
#include <conio.h>

using namespace std;

class App_larryta
{
    private:

    string directions;
    string nationalty;
    string ch;
    string phone;
    string name;
    string date ;
    string time ;

    public :

    App_larryta (){
        cout <<"==========| Welcome to Larryta App |==========="      << endl;
        cout <<"==========| where do you want to go|==========="      << endl;
        cout <<"           Informations in My Company      "          << endl;
    }
    void information () {
        cout                                                          << endl;
        cout <<"=============|    Directions    |=============="      << endl; 
        cout                                                          <<endl;
        cout <<"\tSiem Reap  ---> Phnom Penh           "              << endl;
        cout <<"\tPhnom Penh ---> Siem Reap            "              << endl;
        cout <<"\tPhnom Penh ---> Sihanouk Ville       "              << endl;
        cout                                                          <<endl;
        cout <<"=============|   Time Depart    |=============="      << endl;
        cout <<"=======| AM |....................| PM |========"      << endl;
        cout <<"\t6:30  AM "           <<"\t\t12:30 PM "              << endl;
        cout <<"\t7:00  AM "           <<"\t\t1:00  PM "              << endl;
        cout <<"\t8:00  AM "           <<"\t\t1:30  PM "              << endl; 
        cout <<"\t8:30  AM "           <<"\t\t2:00  PM "              << endl; 
        cout <<"\t9:00  AM "           <<"\t\t2:30  PM "              << endl;
        cout <<"\t9:30  AM "           <<"\t\t3:00  PM "              << endl;
        cout <<"\t10:00 AM "           <<"\t\t3:30  PM "              << endl; 
        cout <<"\t10:30 AM "           <<"\t\t4:00  PM "              << endl; 
        cout <<"\t11:00 AM "           <<"\t\t4:30  PM "              << endl;
        cout <<"\t11:30 AM "           <<"\t\t5:00  PM "              << endl;
        cout <<"\t12:00 AM "           <<"\t\t6:00  PM "              << endl; 
         
    }

    void complate (){
        cout                                                          <<endl;
        cout <<"\twhere do you want to go ?        "                  << endl; 
        cout <<"\tWhich one do you go (Bus/Van)  : "; getline (cin,ch);
        cout <<"\tEnter your name                : "; getline (cin,name);
        cout <<"\tEnter your phone number        : "; getline (cin,phone) ;
        cout <<"\tPlease Enter your direction    : "; getline (cin,directions);
        cout <<"\tPlease Enter your nationalty   : "; getline (cin,nationalty);
        
    }
    void Date (){
            cout <<"\tDate depart                    : ";getline (cin,date) ;
    }
    string  timedepart (){
         cout <<"\tWhat time do you want to go    : ";getline (cin,time) ;
         return time ;
    }

    class ditail {

        public :
        
        void totle (){
            cout <<"\tYou must pay $13 for Ticket"         << endl;
            cout <<"\tThank you So much..........."        << endl;
        }
    };

    void display (){
        cout                                                 << endl;
        cout <<"\t      BUS TICKET RECEIPT"                  << endl;
        cout <<"\t..............................."           << endl;
        cout                                                 <<endl;
        cout <<"\t| -> Your Name            : " << name      << endl;
        cout <<"\t| -> Phone Number         : " << phone     << endl;
        cout <<"\t| -> Nationaly            : " << nationalty<< endl;
        cout <<"\t| -> Direction            : " << directions<< endl;
        cout <<"\t| -> Date                 : " << date      << endl;
        cout <<"\t| -> Time Depart          : " << time      << endl;
        cout <<"\t| -> Go by                : " << ch        << endl;
        cout <<"\t| -> Pice Of Ticket       : " << "$13"     << endl;
        cout <<"\t| -> Safe travel..................."       <<endl;
        cout <<"\t| -> Thank Your So Much............"       << endl;
        cout                                                 <<endl;
        cout <<"\t..............................."           << endl;
    }

};


int main (void){
    system ("cls");
    char ch;
    int n;

    App_larryta LRR        ;
    App_larryta::ditail DTL;
    LRR.information      ();
do{
    LRR.complate         ();
    LRR.Date             ();
    LRR.timedepart       ();
    DTL.totle            ();
    system ("cls")         ;
    LRR.display          ();
    cout                                << endl;
    cout <<"\tDo you have new costomer : " << " ";
    cin >> ch;
}while (ch != 'n'&& ch !='N');

    return 0;
}