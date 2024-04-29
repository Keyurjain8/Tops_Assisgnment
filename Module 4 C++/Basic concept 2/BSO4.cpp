//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
#include<iostream>
using namespace std;
class circle{
	double r;
	public:
		void get()
		{
		  cout<<"Enter your Radius";
		  cin>>r;
		  
		}
		double calculateArea()
		{
			return 3.14*r*r;
		}
		double calculateCircumference()
		{
			return 2*3.14*r;
		}
		void display(){
			cout<<"Area of circle: "<<calculateArea() <<endl<<"Circumference of the circle:"<<calculateCircumference() <<endl;
		}
		
};
int main(){
	circle s;
	s.get();
	s.calculateArea();
	s.calculateCircumference();
	s.display();
}


