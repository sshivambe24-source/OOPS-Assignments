#include <iostream>
using namespace std;
class A {
    int x;
public:
    A() { x = 100; }
    friend class B; 
};
class B {
public:
    void show(A a) {
        cout << "Value of x: " << a.x << endl;
    }
};
int main() {
    A obj1;
    B obj2;
    obj2.show(obj1);
    return 0;
}
