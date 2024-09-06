#include<iostream>
#include<iomanip>

using namespace std;
class people{
	private:
		int id;
		char name[20];
	public:
		void input(){
			cout<<"Enter ID : "; cin>>id;
			cout<<"Enter Name : ";cin.ignore(); cin.getline(name,20);
		}
		void output(){
			cout<<id<<setw(9)<<name<<setw(9);
		}
		void screan(){
			cout<<"ID"<<setw(9)<<"Name"<<setw(9)<<"Day"<<setw(9)<<"Month"<<setw(9)<<"Year"<<endl;
		}
		
		class date{
			private:
				int day;
				char month[10];
				int year ;
			public:
				void enter(){
					cout<<"Enter Day : "; cin>>day;
					cout<<"Enter Month : "; cin.ignore(); cin.getline(month,10);
					cout<<"Enter Year : "; cin>>year;
				}
				void Out (){
					cout<<day<<setw(9)<<month<<setw(9)<<year<<endl;
				}
				int getYear(){
					return year;
				}
				
		};	
};

people per[20];
people::date dt[20];
people tmp1;
people::date tmp2;	

void sort(int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(dt[i].getYear() > dt[j].getYear()){
				tmp1 = per[i];
				per[i] = per[j];
				per[j] = tmp1;
				
				tmp2 = dt[i];
				dt[i] = dt[j];
				dt[j] = tmp2;
				
			}
		}			
	}
	for(int i=0;i<n;i++){	
		per[i].output()	;
		dt[i].Out ();
	}
}
int main(){
	
	int op, n;
	
	do{
		cout<<"1. information"<<endl;
		cout<<"2. output"<<endl;
		cout<<"3. Sort"<<endl;
		cout<<"0. exit"<< endl;
		cout<<"Enter your Option : "; cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Person : "; cin>>n;
				for(int i=0; i<n; i++){
					per[i].input();
					dt[i].enter();
				}
				break;
			}
			case 2:{
					per[0].screan();
				for(int i=0; i<n; i++){
					per[i].output();
					dt[i].Out();
				}
				break;
			}
			case 3:{
				per[0].screan();
				sort(n);
				break;
			}
		}
		
	}while(op != 0);
	
	
	
}