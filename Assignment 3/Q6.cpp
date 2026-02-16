#include <iostream>
using namespace std;
inline int cube(int x) {
    return x * x * x;
}
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Cube is: " << cube(num);
    return 0;
}
