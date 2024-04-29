//5. Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.
#include <iostream>
using namespace std;

class Triangle {

    double side1, side2, side3;

public:
    
    void setSides(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

   
    int isEquilateral() {
        if (side1 == side2 && side2 == side3)
            return 1;
        else
            return 0;
    }

   
    int isIsosceles()  {
        if (side1 == side2 || side1 == side3 || side2 == side3)
            return 1;
        else
            return 0;
    }

    
    int isScalene() {
        if (side1 != side2 && side1 != side3 && side2 != side3)
            return 1;
        else
            return 0;
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle t;
    t.setSides(s1, s2, s3);

    if (t.isEquilateral()) {
        cout << "The triangle is equilateral." << endl;
    } else if (t.isIsosceles()) {
        cout << "The triangle is isosceles." << endl;
    } else if (t.isScalene()) {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}

