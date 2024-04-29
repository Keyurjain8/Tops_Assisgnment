//6. Write a C++ program to implement a class called Employee that has private member variables for name,
//employee ID, and salary. Include member functions to calculate and set salary based on employeeperformanc.
//Using of constructor
#include <iostream>
#include <string>

using namespace std;

class Employee {

    string name;
    int employeeID;
    double salary;

public:
    
    Employee() {
      
        cout<<"Enter your Name :";
        cin>>name;
       
        cout<<"Enter your ID :";
        cin>>employeeID;
      
        cout<<"Enter salary :";
        cin>>salary;
    }

    
    void calculateSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    
    void setName(string empName) {
        name = empName;
    }

    
    void setEmployeeID(int empID) {
        employeeID = empID;
    }

    
    void setSalary(double empSalary) {
        salary = empSalary;
    }

    
    void display() {
        cout << "Name: " << name << endl;
        
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Employee obj;

   
    cout << "Initial Employee Information:" << endl;
  obj.display();

  
    obj.calculateSalary(1.1); 
    
    cout << "\nEmployee Information after Performance Appraisal:" << endl;
    obj.display();

    return 0;
}

