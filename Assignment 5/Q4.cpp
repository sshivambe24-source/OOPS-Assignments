#include <iostream>
using namespace std;
/* ---------------- SINGLE INHERITANCE ---------------- */
class A1 {
public:
    void showA1() {
        cout << "Single Inheritance - Class A1\n";
    }
};
class B1 : public A1 {
public:
    void showB1() {
        cout << "Single Inheritance - Class B1\n";
    }
};
/* ---------------- MULTIPLE INHERITANCE ---------------- */
class A2 {
public:
    void showA2() {
        cout << "Multiple Inheritance - Class A2\n";
    }
};
class B2 {
public:
    void showB2() {
        cout << "Multiple Inheritance - Class B2\n";
    }
};
class C2 : public A2, public B2 {
public:
    void showC2() {
        cout << "Multiple Inheritance - Class C2\n";
    }
};
/* ---------------- HIERARCHICAL INHERITANCE ---------------- */
class A3 {
public:
    void showA3() {
        cout << "Hierarchical Inheritance - Class A3\n";
    }
};
class B3 : public A3 {
public:
    void showB3() {
        cout << "Hierarchical Inheritance - Class B3\n";
    }
};
class C3 : public A3 {
public:
    void showC3() {
        cout << "Hierarchical Inheritance - Class C3\n";
    }
};
/* ---------------- MULTILEVEL INHERITANCE ---------------- */
class A4 {
public:
    void showA4() {
        cout << "Multilevel Inheritance - Class A4\n";
    }
};
class B4 : public A4 {
public:
    void showB4() {
      cout << "Multilevel Inheritance - Class B4\n";
    }
};
class C4 : public B4 {
public:
    void showC4() {
        cout << "Multilevel Inheritance - Class C4\n";
    }
};
/* ---------------- HYBRID INHERITANCE ---------------- */
// (Combination of Hierarchical + Multiple)
class A5 {
public:
    void showA5() {
        cout << "Hybrid Inheritance - Class A5\n";
    }
};
class B5 : public A5 {
};
class C5 : public A5 {
};
class D5 : public B5, public C5 {
public:
    void showD5() {
        cout << "Hybrid Inheritance - Class D5\n";
    }
};
int main() {
    cout << "===== Single Inheritance =====\n";
    B1 obj1;
    obj1.showA1();
    obj1.showB1();
    cout << "\n===== Multiple Inheritance =====\n";
    C2 obj2;
    obj2.showA2();
    obj2.showB2();
    obj2.showC2();
    cout << "\n===== Hierarchical Inheritance =====\n";
    B3 obj3;
    C3 obj4;
    obj3.showA3();
    obj3.showB3();
    obj4.showC3();
    cout << "\n===== Multilevel Inheritance =====\n";
    C4 obj5;
    obj5.showA4();
    obj5.showB4();
    obj5.showC4();
    cout << "\n===== Hybrid Inheritance =====\n";
    D5 obj6;
    obj6.showD5();
    // obj6.showA5();  
    return 0;
}
