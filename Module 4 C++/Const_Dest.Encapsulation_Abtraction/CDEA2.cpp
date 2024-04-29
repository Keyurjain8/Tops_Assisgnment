//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.
#include<iostream>
using namespace std;
class calc{
	int n1,n2;
	char choice;
	public:
		calc()
		{
			cout<<"enter n1 and n2 : ";
			cin>>n1>>n2;
			cout<<"enter + for addition"<<endl;
			cout<<"enter - for subtrcation"<<endl;
			cout<<"enter * for multiplication"<<endl;
			cout<<"enter / for division"<<endl;
			cout<<"enter % for modulo"<<endl;
			cout<<"enter your choice : ";
			cin>>choice;
			
			if(choice =='+')
			{
				cout<<n1+n2;
			}
			else if (choice =='-')
			{
				cout<<n1-n2;
			}
			else if(choice =='*')
			{
				cout<<n1*n2;
			}
			else{
				cout<<n1/n2;
			}
			
	}
		
};
int main()
{
	calc obj;
	return 0;
}
