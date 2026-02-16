#include <iostream>
using namespace std;
class Rectangle {
    int length, width;
public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }
    void area() {
        cout << "Area: " << length * width << endl;
    }
};
int main() {
    Rectangle r[3];   // array of objects
    r[0].setData(10, 5);
    r[1].setData(7, 4);
    r[2].setData(6, 3);
    for(int i = 0; i < 3; i++) {
        r[i].area();
    }
    return 0;
}
