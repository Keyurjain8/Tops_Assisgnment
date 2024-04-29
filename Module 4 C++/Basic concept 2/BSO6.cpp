//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class person{
	string name, country;
	int age;
	public:
		void get()
		{
			cout<<"Enter your name";
			cin>>name;
			cout<<"Enter your country";
			cin>>country;
			cout<<"Enter your age";
			cin>>age;
		}
		void display()
		{
			cout<<"Your name is:"<<name<<endl<<"Your age is:"<<age<<endl<<"Your country is:"<<country<<endl;
		}
};
int main()
{
	person s;
	s.get();
	s.display();
	
	return 0;
}
