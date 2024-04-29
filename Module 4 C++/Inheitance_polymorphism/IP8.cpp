//8. Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different 
//parameters and Function Overloading
#include<iostream>
using namespace std;

class calculator{
	int no1,no2;
	int ans;
	public:
		calculator()
		{
			cout<<"1 for + 2for - 3 for * 4 for /\n";
		}
		void ope()
		{
			cout<<"enter number1 and 2 for addition\n";
			cin>>no1>>no2;
			cout<<no1+no2;
		}
		void ope(int no1,int no2)
		{
			this->no1=no1;
			this->no2=no2;
			cout<<"subtraction of values are: "<<no1-no2;
		}
		void ope(float no1,float no2)
		{
			this->no1=no1;
			this->no2=no2;
			cout<<"multiplication of values are: "<<no1*no2;
		}
		void ope(int no1)
		{
			
			cout<<"enter number 2 for division";
			cin>>no2;
			this->no1=no1;
			if(no2==0)
			{
				cout<<"can't divide by zero";
			}
			else
			{
				cout<<no1/no2;
			}
		}
};
int main()
{
	calculator obj;
	int choice;
	cin>>choice;
	int no1,no2;
	float n1,n2;
	switch(choice)
	{
		case 1:
			obj.ope();
			break;
		case 2:
			cout<<"enter 1 and 2 number for subtraction";
			cin>>no1>>no2;
			obj.ope(no1,no2);
			break;
		case 3:
			cout<<"enter 1 and 2 number for multiplication";
			cin>>n1>>n2;
			obj.ope(n1,n2);
			break;	
		case 4:
			cout<<"enter 1  number for division";
			cin>>no1;
			obj.ope(no1);
			break;
		default:
			cout<<"enter invalid choice";
			break;	
					
	}
	return 0;
}
