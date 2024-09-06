#include <iostream>
#include <iomanip>

using namespace std;

    void  Title(string title){
        cout <<"========| "<<title<<" |========" << endl;
    }

    float sumscore(float math, float khmer, float english){
        return math + khmer + english ;
    }

    void Information (float math, float khmer, float english){
        cout <<"========| Output Information |=========" << endl;
        cout <<"\tMath score    : " << math << endl;
        cout <<"\tKhmer score   : " << khmer << endl;
        cout <<"\tEnglish score : " << english << endl;
        cout <<"-------------------------------------" << endl;
        float totla_score = sumscore(math, khmer, english);
        cout <<"\tTotle score   : " << totla_score << endl;
    }
    float averages (float math, float khmer , float english){
        float avg = sumscore(math, khmer, english)/3;
        return avg;
    }
    void graderank (float math , float khmer ,float english){
        
        float average = averages (math,khmer,english);
        
        if (average>=90&&average<=100){
            cout <<"\tyou got :  A " << endl;
        }else if(average<90 && average>=80){
            cout <<"\tYou got :  B "<< endl;
        }else if (average<80&&average>=70){
            cout <<"\tyou got :  C " << endl;
        }else {
            cout <<"\tyou are fail" << endl;
        }
    }

int main (){
    system("cls");

    string studentName;
    float mathscore;
    float khmerscore;
    float englsihscore;

    // print title
    Title ("Student system");
    
    // Input score
    cout <<"\tEnter your name : "; getline (cin , studentName);
    cout <<"\tMath score    : " ; cin >> mathscore;
    cout <<"\tkhmer score   : " ; cin >> khmerscore ;
    cout <<"\tEnglish score : "; cin >>  englsihscore;

    sumscore (mathscore,khmerscore,englsihscore);
    
    // Output Information 

    Information (mathscore,khmerscore,englsihscore);

    // Output average

    sumscore (mathscore,khmerscore,englsihscore);

    cout <<"\tAverage       : " <<setiosflags (ios::fixed) << setprecision (2)
    << averages (mathscore,khmerscore,englsihscore)<< endl;

    //  rank 

    graderank (mathscore,khmerscore,englsihscore);

    return 0 ;
}
