//10.Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class AddString{
	private:
		char s1[25] , s2[25];
		
		public:
			AddString(char str1[] , char str2[]){
				strcpy(this->s1, str1);
				strcpy(this->s2, str2);
				
			}
			AddString operator+()
			{
				cout<<"\nConcatenation :" << strcat(s1,s2);
				
			}
};
int main(){
	AddString obj1("Keyur", "Champawat");
	
	+obj1;
	return 0;
}
