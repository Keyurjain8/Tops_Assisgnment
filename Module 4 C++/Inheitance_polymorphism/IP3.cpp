//3. Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std; 
class person{
	protected:
		string name;
		int age;
		public:
			void p(){
				cout<<"Enter Data about person :-\n";
				cout<<"Enter person name :";
				cin>>name;
				cout<<"Enter person age :";
				cin>>age;
				
			}
};
class student{
	protected:
		float per;
		public:
			void s(){
				
				cout<<"Enter student percentage :";
				cin>>per;
			}
			
	
			
};
class teacher : public person, public student{
	int salary;
	public:
		void t(){
			cout<<"Enter teacher salary :";
			cin>>salary;
		}
		void display(){
			cout<<"your name:"<<name<<"\nEnter age :"<<age<<"\n Enter Percentage:"<<per<<"\nEnter salary:"<<salary<<endl;
		}
	
};

int main()
{
	teacher O;
	O.p();
	O.s();
	O.t();
	O.display();
	
	return 0;
}
