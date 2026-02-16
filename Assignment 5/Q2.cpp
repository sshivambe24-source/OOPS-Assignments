#include <iostream>
using namespace std;
class Base {
protected:
    int num;
public:
    void setValue(int n) {
        num = n;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "Protected value accessed in Derived class: " << num << endl;
    }
};
int main() {
    Derived obj;
    obj.setValue(50);
    obj.display();
    return 0;
}
