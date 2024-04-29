//9. Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class addition{
	int array[3];
	int i;
	public:
		void get()
		{
			cout<<"Enter 3 value";
			for(i=0;i<3;i++)
			{
				cin>>array[i];
			}
		}
		void display()
		{
			cout<<"value are :"<<endl;
			for(i=0;i<3;i++)
			{
				cout<<array[i],"\t";
			}
		}
		addition operator +(addition obj)
		{
			int result[3];
			int i;
			for(i=0;i<3;i++)
			{
				result[i]=array[i]+obj.array[i];
			}
			cout<<"result array is";
			for(i=0;i<3;i++)
			{
				cout<<" "<<result[i];
			}
		}
};
int main()
{
	addition obj1,obj2;
	cout<<"------obj1-----\n";
	obj1.get();
	obj1.display();
	cout<<"-------------obj2----\n";
	obj2.get();
	obj2.display();
	obj1+obj2;
	
	return 0;
}
