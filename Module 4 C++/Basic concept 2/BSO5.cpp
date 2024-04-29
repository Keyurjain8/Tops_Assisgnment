//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
	double l,W;
	public:
		void get()
		{
		  cout<<"Enter length :";
		  cin>>l;
		  cout<<"Enter width :";
		  cin>>W;  
		}
		double calculateArea()
		{
			return l*W;
		}
		double calculateperimeter()
		{
			return 2*(l+W);
		}
		void display(){
			cout<<"Area of Rectangle: "<<calculateArea() <<endl<<"perimeter of the Rectangle:"<<calculateperimeter() <<endl;
		}
		
};
int main(){
	Rectangle s;
	s.get();
	s.calculateArea();
	s.calculateperimeter();
	s.display();
}


