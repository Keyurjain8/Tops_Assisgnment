//11.Write a program to calculate the area of circle, rectangle and triangle using Function Overloading Rectangle: Area *
//breadth Triangle: ½ *Area* breadthCircle: Pi * Area *Area
//aor=3.14*r*r,aor=lXb,aot=1/2XbxH.
#include<iostream>
using namespace std;
class area{
	int l,b,h,r,aor,aot,ar;
	public:
	area()
		{
			cout<<"1 for Area Of Triangle 2 for Area Rectangle  3 for Area of Radius \n";
		}
		
		
	
	void Area(){
		cout<<"Enter breadth of area: ";
		cin>>b;
		cout<<"\nEnter height of area: ";
		cin>>h;
	    aot =0.5*b*h;
	    cout<<"Area of Triangle is :"<<aot;
	}
	void Area(float l, float b)
	{
		
		this->l=l;
		this->b=b;
		ar=l*b;
		cout<<"\nArea of Rectangle :"<<ar;
		
}
      void Area(double r)
      {
      	this->r=r;
      	aor=3.14*r*r;
      	cout<<"Area of Circle is :"<<aor;
	  }
	
};
int main(){
	area a;
	int choice;
	cin>>choice;
	float l ,b;
	double r;
	switch(choice)
	{
		case 1:
			a.Area();
			break;
		case 2:
			cout<<"\nEnter Lenght and breadth of area :";
			cin>>l>>b;
			a.Area(l,b);
			break;
		
		case 3:
			cout<<"\nEnter radius of circle is :";
			cin>>r;
			a.Area(r);
			break;
		default:
			cout<<"\nenter invalid choice";
			break;	
					
	}
	
	
	return 0;
	
}
	

