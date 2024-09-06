#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;



class User{
   private:
    int id;
    string name;
    string email;
    string password;
    string profile;
    bool isDeleted;
    bool isVerified;
   public:
    void setData(int id, string name, string email, string password,string profile, bool isDeleted, bool isVerified){
      this->id = id;
      this->name = name;
      this->email = email;
      this->password = password;
      this->isDeleted = isDeleted;
      this->isVerified = isVerified;
      this->profile = profile;
    }
    void getData(){
      cout<<"=> User Information"<<endl;
      cout << "ID: " << id << endl;
      cout << "Name: " << name << endl;
      cout << "Email: " << email << endl;
      cout << "Password: " << password << endl;
      cout << "Profile: " << profile << endl;
      cout << "Is Deleted: " << (isDeleted? "Yes" : "No") << endl;
      cout << "Is Verified: " << (isVerified? "Yes" : "No") << endl;
    }
    int getId(){
      return id;
    }

};
// global variables
vector<User> users;

void insertUserData(const int n){
   // insert data of user
   for(int i=0;i<n;i++){
      User user;
      int id;
      string  name,email,password;
      cout<<"====== Insert data of user ["<<i+1<<"]=====\n";
      cout<<"[+] Insert user ID: ";cin>>id;
      cout<<"[+] Insert user name: ";
      cin.ignore();
      getline(cin, name);
      cout<<"[+] Insert user email: ";cin>>email;
      cout<<"[+] Insert user password: ";cin>>password;
      user.setData(id, name, email, password,"https://www.google.com",false,true);
      users.insert(users.end(),user);
   }
}
void getUserData(){
   for(User u: users){
      u.getData();
      cout<<endl;
   }
}

void findUserById(int id){
   for(User u:users){
      if(u.getId()==id){
         u.getData();
         return;
      }
   }
}
void deleteUserById(int id){
   for(auto u=users.begin(); u!=users.end();){
      if(u->getId()==id){
         users.erase(u);
         return;
      }else{
         u++;
      }
   }
}

int main(){
   // create array of objects

   int n;
   cout<<"[+] Insert number of user: ";cin>>n;
   insertUserData(n);
   cout<<"\n[+] Display User Data:"<<endl; // display data of all users created.
   getUserData();
   int id;
   cout<<"[+] Enter user ID to delete: ";cin>>id;
   deleteUserById(id);
   getUserData();
   return 0;
}