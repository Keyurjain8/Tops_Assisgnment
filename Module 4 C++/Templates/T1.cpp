//1. Write a program of to swap the two values using template
#include <iostream>
using namespace std;
template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int Val1 = 5;
    int Val2 = 10;
    
    cout << "Before swapping: " << endl;
   cout << "Val1 = " << Val1 << endl;
   cout << "Val2 = " << Val2 << endl;
    
    swapValues(Val1, Val2);
    
   cout << "After swapping: " << endl;
    cout << "Val1 = " << Val1 << endl;
    cout << "Val2 = " << Val2 << endl;
    
    return 0;
}

