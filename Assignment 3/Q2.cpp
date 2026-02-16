#include <iostream>
using namespace std;
class B; 
class A {
    int x;
public:
    A(int a) { x = a; }
    friend void swap(A &, B &);
    void show() { cout << "A: " << x << endl; }
};
class B {
    int y;
public:
    B(int b) { y = b; }
    friend void swap(A &, B &);
    void show() { cout << "B: " << y << endl; }
};
void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}
int main() {
    A obj1(10);
    B obj2(20);
    swap(obj1, obj2);
    obj1.show();
    obj2.show();
    return 0;
}
