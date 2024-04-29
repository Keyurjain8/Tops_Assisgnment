//2. Define a class to represent a bank account. Include the following members:
//3. Data Member:
#include<iostream>
using namespace std;
class bank{
	string name;
	double Acc_no;
	string Acc_type;
	float Balance,dp_balance,w_balance;
	public:
		int choice;
	void get()
	{
		cout<<"Enter your name"<<endl;
		cin>>name;
		cout<<"Enter your Account number"<<endl;
		cin>>Acc_no;
		cout<<"Enter your Account Type"<<endl;
		cin>>Acc_type;
		cout<<"Enter your Balance"<<endl;
		cin>>Balance;
		cout<<"Enter 1 for deposite 2 for Withdraw";
		cin>>choice;
	}
	void deposite()
	{
		cout<<"Enter your deposite balance";
		cin>>dp_balance;
		Balance= dp_balance+Balance;
		
		
	}
	void Withdraw()
	{
		cout<<"Enter withrow balance";
		cin>>w_balance;
		
		`
		if(w_balance>Balance)
		{
			cout<<"Insufficient balance";
		}
		else{
			Balance=Balance-w_balance;
		}
	}
	void display()
	{
		cout<<"\nyour name is "<<name;
		cout<<"\nTotal balance is"<<Balance;
	}
	
};
	int main()
{
	
	bank obj;
	obj.get();

	switch(obj.choice)
	{
		case 1:
		obj.deposite();
		break;
		case 2 :
			obj.Withdraw();
			break;
			default:
			cout<<"	invalid choice";
	}
	
	obj.display();
	return 0;
}

