#include<iostream>
#include<string>

using namespace std;

// 

class Skin{
    private:
        string skinName;
        string skinColor;
    public:
        void setSkinInfo(string skinName, string skinColor){
            this->skinName = skinName;
            this->skinColor = skinColor;
        }
        void getSkinDetail() {
            cout << "Skin Name: " << skinName << ", Color: " << skinColor << endl;
        }
};

class Skill{
    private:    
        int numberOfSkills;
    public:
        void setNumberOfSkills(int numberOfSkills){
            this->numberOfSkills = numberOfSkills;
        }
        void getSkillDetail() {
            cout << "Number of Skills: " << numberOfSkills << endl;
        }
};

class Hero: public Skin, public Skill{
    private:
        int id;
        string name;
    public:
        void setHeroInfo(int id,string name){
            this->id = id;
            this->name = name;
        }
        void getHeroDetails() {
            cout<<"===> Hero Information\n";
            cout << "Hero ID: " << id << ", Name: " << name << endl;
        }
};



int main(){
    Hero sun;
    sun.setHeroInfo(1, "Sun");
    sun.setSkinInfo("Legend","RGB");
    sun.setNumberOfSkills(4);
    // 
    sun.getHeroDetails();
    sun.getSkillDetail();
    sun.getSkinDetail();
    //
    Hero koko;
    koko.setHeroInfo(2, "Koko");
    return 0;
}
