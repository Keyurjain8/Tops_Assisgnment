//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class shape{
	protected:
		float width,lenght;
	
			public:
    void setWidth(float w) {
        width = w;
    }

    void setlenght(float l) {
        lenght = l;
    }
};
class Rectangle : public shape{
	public:
		float area()
		{
			return width*lenght;
		}
};
int main(){
	Rectangle s;
	float w, l;
    cout << "Enter width of the rectangle: ";
    cin >> w;
    cout << "Enter lenght of the rectangle: ";
    cin >> l;

    
    s.setWidth(w);
    s.setHeight(l);
 cout << "Area of Rectangle: " << s.area() << " square units" << endl;
}
