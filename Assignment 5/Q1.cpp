#include <iostream>
using namespace std;
class Base {
public:
    void showBase() {
        cout << "This is Base Class" << endl;
    }
};
class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived Class" << endl;
    }
};
int main() {
    Base b;
    Derived d;
    b.showBase();
    d.showBase();      
    d.showDerived();
    return 0;
}
#include <iostream>
using namespace std;
class Base {
public:
    void showBase() {
        cout << "This is Base Class" << endl;
    }
};
class Derived : public Base {
public:
    void showDerived() {
        cout << "This is Derived Class" << endl;
    }
};
int main() {
    Base b;
    Derived d;
    b.showBase();
    d.showBase();     
    d.showDerived();

    return 0;
}
