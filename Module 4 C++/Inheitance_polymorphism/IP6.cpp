//Write a C++ Program to show access to Private Public and Protected using Inheritance
// C++ program to demonstrate the working of public inheritance
#include <iostream>
using namespace std;
class Base{
	private:
		int pvt=1;
		protected:
			int pro=2;		
		public:
			int pub=3;

void display() {
        cout << "Private member: " << pvt << endl;
        cout << "Protected member: " << pro << endl;
        cout << "Public member: " << pub << endl;
    }
				
	
};
// Derived class
class Derived : public Base {
public:
    void accessBaseMembers() {
        // Private member is not accessible directly in the derived class
        // cout << "Private member in derived class: " << privateMember << endl; // This will cause a compile error

        // Protected and Public members are accessible
        cout << "Protected member in derived class: " << pro << endl;
        cout << "Public member in derived class: " << pub << endl;
    }
};
int main() {
    Base bo;
    cout << "Accessing Base class members from Base object:" << endl;
    bo.display();

   Derived dO;
    cout << "\nAccessing Base class members from Derived object:" << endl;
    dO.display();
    
    cout << "\nAccessing Derived class members:" << endl;
    dO.accessBaseMembers();

    return 0;
}

