//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator{
	int n1,n2;
	
	public:
		char choice;
		void menu()
		{
			cout<<"enter + for addition"<<endl;
			cout<<"enter - for subtrcation"<<endl;
			cout<<"enter * for multiplication"<<endl;
			cout<<"enter / for division"<<endl;
			cout<<"enter % for modulo"<<endl;
			cout<<"enter your choice";
			cin>>choice;
		}
		void get()
		{
			cout<<"enter number 1 and number 2 ";
			cin>>n1>>n2;
		}
		int add()
		{
			return n1+n2;
		}
		int sub()
		{
			return n1-n2;
		}
		int mul()
		{
			return n1*n2;
		}
		int div()
		{
			
			return n1/n2;
		}
		int mod()
		{
			return n1%n2;
		}
};
int main()
{
	calculator obj;
	obj.menu();
	obj.get();
	switch(obj.choice)
	{
		case '+':
			cout<<"addition is "<<obj.add();
			break;
		case '-':
			cout<<"subtrcation  is "<<obj.sub();
			break;
		case '*':
			cout<<"multiplication  is "<<obj.mul();
			break;	
		case '/':
			cout<<"division  is "<<obj.div();
			break;	
		case '%':
			cout<<"modulo  is "<<obj.mod();
			break;	
		default:
			cout<<"invalid choice";			
	}
	return 0;
}
