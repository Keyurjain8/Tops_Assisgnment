//3.Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.
#include<iostream>
using namespace std;
class car{
	string company,model;
	int year;
	public:
		void get()
		{
			cout<<"Enter company name :" ;
			cin>>company;
			cout<<"Enter model name : ";
			cin>>model;
			cout<<"Enter year : ";
			cin>>year;
		}
		void display()
		{
			cout<<"Company name is :"<<company<<endl<<"Model is :"<<model<<endl<<"Year is : "<<year<<endl;
		}
};
int main()
{
	car s;
	s.get();
	s.display();
	
	return 0;
	}

