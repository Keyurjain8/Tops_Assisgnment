//1. Write a program to find the multiplication values and the cubic values using
//inline function
#include<iostream>
using namespace std;
inline int mul(int m, int n)
{
	return m*n;
}
inline int cube(int n)
{
	return n*n*n;
}
int main()
{  
int n1,n2;
cout<<"Enter 1 value";
cin>>n1;
cout<<"Enter 2 value";
cin>>n2;
	cout<<"Multiplications value is :"<<mul(n1,n2);
	cout<<endl;
	cout<<"Cubic values is : "<<cube(n1);
	return 0;
}
