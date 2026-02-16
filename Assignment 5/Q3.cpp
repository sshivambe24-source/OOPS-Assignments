#include <iostream>
using namespace std;
class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};
class PublicDerived : public Base {
public:
    void show() {
        cout << "Public Inheritance:\n";
        cout << "Public: " << pub << endl;       
        cout << "Protected: " << prot << endl;    
        cout << endl;
    }
};
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "Protected Inheritance:\n";
        cout << "Public becomes Protected: " << pub << endl;
        cout << "Protected remains Protected: " << prot << endl;
        cout << endl;
    }
};
class PrivateDerived : private Base {
public:
    void show() {
        cout << "Private Inheritance:\n";
        cout << "Public becomes Private: " << pub << endl;
        cout << "Protected becomes Private: " << prot << endl;
        cout << endl;
    }
};
int main() {
    PublicDerived obj1;
    obj1.show();
    cout << "Accessing public member from main (Public Inheritance): "
         << obj1.pub << endl << endl;
    ProtectedDerived obj2;
    obj2.show();
    // obj2.pub;  
    PrivateDerived obj3;
    obj3.show();
    // obj3.pub; 
    return 0;
}
