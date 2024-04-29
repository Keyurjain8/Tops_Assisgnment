//13.Write a program to find the max number from given two numbers
//using friend function
#include <iostream>
using namespace std;
class Numbers {
private:
    int num1;
    int num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    friend int findMax(const Numbers&);
};

int findMax(const Numbers& nums) {
    return (nums.num1 > nums.num2) ? nums.num1 : nums.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Numbers numbers(num1, num2);

    int maxNumber = findMax(numbers);

   cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

