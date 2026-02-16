#include <iostream>
using namespace std;
class Rectangle {
    int length, breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called\n";
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Two Parameter Constructor Called\n";
    }
    Rectangle(int side) {
        length = breadth = side;
        cout << "One Parameter Constructor Called\n";
    }
    int area() {
        return length * breadth;
    }
};
int main() {
    Rectangle r1;          
    Rectangle r2(5);      
    Rectangle r3(4, 6);   
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;
    return 0;
}
