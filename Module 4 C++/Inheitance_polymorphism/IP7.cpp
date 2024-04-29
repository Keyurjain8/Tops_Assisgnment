//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;
class employee
{
protected:
	string e_name;
	public:
	   employee(string e_name)
	   {
	   	      this->e_name=e_name;
	   	     
	}
	   
};
class einfo : public employee
{
protected:
		int age;
	public:	
    einfo(string e_name, int age):employee(e_name)
	{
	    
		this->age=age;
		
	}
	
};
class esalary :public einfo{
	
		int salary;
		public:
			 esalary(string e_name, int age ,int salary): einfo(e_name, age)
			{
				
				this->salary=salary;
			}
			void display(){
				cout<<"Employee Name is :"<<e_name<<"\nEmployee Age is :"<<age<<"\nEmployee Salary is :"<<salary<<endl;
			}
};
int main(){
	int age,salary;
	string name;
	cout<<"\nEnter name ";
	cin>>name;
	cout<<"\nEnter age ";
	cin>>age;
	cout<<"\nEnter salary ";
	cin>>salary;
	
	esalary e(name ,age, salary);
	
	e.display();
	
	
	return 0;
	
}
//#include<iostream>
//using namespace std;
//
//class employee {
//protected:
//    string e_name; // Changed to string for storing name
//public:
//    employee(string name) : e_name(name) {} // Constructor to initialize e_name
//};
//
//class einfo : public employee {
//protected:
//    int age;
//public:
//    einfo(string name, int age) : employee(name), age(age) {} // Constructor to initialize name and age
//};
//
//class esalary : public einfo {
//protected:
//    int salary;
//public:
//    esalary(string name, int age, int salary) : einfo(name, age), salary(salary) {} // Constructor to initialize name, age, and salary
//    void display() {
//        cout << "Employee Name is: " << e_name << "\nEmployee Age is: " << age << "\nEmployee Salary is: " << salary << endl;
//    }
//};
//
//int main() {
//    esalary e("John", 30, 50000); // Creating an object of esalary with name, age, and salary
//    e.display();
//    return 0;
//}

