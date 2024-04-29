//5. Assume that the test results of a batch of students are stored in three differentclasses. Class Students are storing the roll 
//number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
//The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance
#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int roll_no;
		public:
		void sInfo(){
			cout<<"Enter student name:";
			cin>>name;
			cout<<"\nEnter Student Roll NUmber :";
			cin>>roll_no;
		}
		
	
};
class Test :public student{
	protected :
int  s1_m,s2_m;
public:
	   void testscore(){
	   	cout<<"Enter Subject 1 Marks :";
		cin>>s1_m;
		cout<<"\nEnter Subject 2 Marks :";
		cin>>s2_m;
	   	
	   }
	
		
	
};
class Result : public Test {
	protected:
	int totalmarks;
	public:	
 			void R()
 			{
 				totalmarks=s1_m+s2_m;
 				cout<<"Total marks are :"<<totalmarks;
 			
			 }
			 void dipslay(){
			 		cout<<"\n-------------------Student Result-----------------------------\n"<<endl;
			 			cout <<"\n-------------------------------\n" << endl;
		cout<<"\nStudent Name is :"<<name<<"\nStudent Roll Number is :"<<roll_no<<"\nSubject 1 Marks is :"<<s1_m<<"\nSubject 2 marks is :"<<s2_m<<"\nTotalmarks is :"<<totalmarks;
			 }
	
};
int main(){
	
	Result r;
	r.sInfo();
	r.testscore();
	r.R();

	r.dipslay();
	return 0;
}

