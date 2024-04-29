//12.Write a program to swap the two numbers using friend function
//without using third variable
#include <iostream>
using namespace std;
class Numbers {
private:
    int num1;
    int num2;

public:
    Numbers(int a, int b) : num1(a), num2(b) {}

    friend void swap(Numbers&);

    void display() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

void swap(Numbers& nums) {
    nums.num1 = nums.num1 + nums.num2;
    nums.num2 = nums.num1 - nums.num2;
    nums.num1 = nums.num1 - nums.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Numbers numbers(num1, num2);

    cout << "Before swapping:" << endl;
    numbers.display();

    swap(numbers);

    cout << "After swapping:" << endl;
    numbers.display();

    return 0;
}

