//7. Write a C++ program to implement a class called Date that has privatemember variables for day, 
//month, and year. Include member functions to set and get these variables, as well as to validate 
//if the date is valid.
#include<iostream>
using namespace std;
class Date{
	int day,year;
	int month;
	public:
		void get()
		{
			cout<<"Enter day : ";
			cin>>day;
			cout<<"Enter month :";
			cin>>month;
			cout<<"Enter year :";
			cin>>year;
		}
		void display(){
			cout<<"Month is :"<<month<<"Day is:"<<day<<"Year is:"<<year<<endl;
		}
		void validdate(){
			 if (month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > 29) ||
            ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
            cout << "Invalid date" << endl;
        } else {
            cout << "Valid date" << endl;
        }
    }
		
};
int main()
{ 
    Date d;
    d.get();
    d.display();
    cout<<" check If Date is valid...."<<endl;
    d.validdate();
	return 0;
}

