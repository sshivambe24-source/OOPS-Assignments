#include <iostream>
using namespace std;
class Number {
    int x;
public:
    Number(int a) { x = a; }
    Number add(Number n) { 
        return Number(x + n.x);
    }
    void show() {
        cout << "Value: " << x << endl;
    }
};
int main() {
    Number n1(10), n2(20);
    Number n3 = n1.add(n2);
    n3.show();
    return 0;
}
