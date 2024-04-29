//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int age, roll_no;
		public:
			void Sinfo(){
				cout<<" Enter student information ";
				
				cout<<"\nEnter Student Name : ";
				cin>>name;
				cout<<"\nEnter Student Rollnumber : ";
				cin>>roll_no;
				cout<<"\nEnter Student Age : ";
				cin>>age;
			}
			
	
};
class Marksheet{
	protected:
		int marks;
		public:
		void smarksheet() {
			
			cout<<"\nEnter Student Marks :";
			cin>>marks;
				}		
	   		
};

class SMARKSHEET :public student, public Marksheet{
	public:
		
	void sm(){
	
	void student();
	
	void smarksheet();

	}	
  void displaymarksheet(){
	cout<<"\n\n -----------Student Mark Sheet---------------\n\n";
	cout << "-------------------" << endl;
	cout<<"Studnet name is:"<<name<<"\nStudent Rollnumber is :"<<roll_no<<"\nStudent age is:"<< age <<"\nStudent Marks is :"<<marks;
	if(marks>=90)
			{
				cout<<"\nStudent Grade is A+";
			}
			else if(marks>=80)
			{
				cout<<"\nStudent Grade is A ";
			}
			else if(marks>=65){
				cout<<"\nStudent Grade is B ";
				
			}
			else if(marks>=50){
				cout<<"Student Grade is C";
				
			}
			else if(marks>=36){
				cout<<"\nStudent Grade is D";
			}
			else
			{
				cout<<"\nStudent is fail";			
			}
}
	
};
int main(){
	SMARKSHEET m;
	m.Sinfo();

	m.smarksheet();

	m.displaymarksheet();
	
	 return 0;
}
