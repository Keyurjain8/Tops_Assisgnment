//8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, 
//and marks. Includemember functions to calculate the grade based on the marks and displaythe student's information.
//Accept address from each student implement using of aggregation.
#include<iostream>
using namespace std;
class student{
	public:
	int  divi,roll_no, marks;
	string name;
	public:
		student (int divi, string name, int roll_no , int marks )
		{
			this->divi=divi;
			this->name=name;
			this->roll_no=roll_no;
			this->marks=marks;
		}
	
};
class address 
{
	string city;
	student *ref;
	public:
		 address(string city,student *ref){
			this->city=city;
			this->ref=ref;
			if(ref->marks>=90)
			{
				cout<<"Student grade is A";
				
			}
			else if(ref->marks>=75)
			{
				cout<<"Student grade  is B";
				
			}
			else 
			{
				cout<<"Student grade is c";		
				
			}
			cout<<"city is "<<city;
		}
	
			
		
		
	
};
int main()
{
	student s(5, "keyur", 101, 98);
	address a("udaipur" ,&s);

	
	
	return 0;
}

