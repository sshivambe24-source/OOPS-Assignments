#include <iostream>
using namespace std;
class Test {
public:
    Test() {
        cout << "Test Object Created\n";
    }
    ~Test() {
        cout << "Test Object Destroyed\n";
    }
};
int main() {
    cout << "---- Dynamic Integer Variable ----\n";
    int *intPtr = new int;  
    *intPtr = 25;
    cout << "Integer value: " << *intPtr << endl;
    delete intPtr;          
    cout << "\n---- Dynamic Float Variable ----\n";
    float *floatPtr = new float;
    *floatPtr = 5.75;
    cout << "Float value: " << *floatPtr << endl;
    delete floatPtr;
    cout << "\n---- Dynamic Integer Array ----\n";
    int n = 5;
    int *intArr = new int[n];   
    for(int i = 0; i < n; i++) {
        intArr[i] = i + 1;
    }
    cout << "Integer Array: ";
    for(int i = 0; i < n; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;
    delete[] intArr;   
    cout << "\n---- Dynamic Float Array ----\n";
    float *floatArr = new float[3];
    floatArr[0] = 1.1;
    floatArr[1] = 2.2;
    floatArr[2] = 3.3;
    cout << "Float Array: ";
    for(int i = 0; i < 3; i++) {
        cout << floatArr[i] << " ";
    }
    cout << endl;
    delete[] floatArr;
    cout << "\n---- Dynamic Class Object ----\n";
    Test *obj = new Test;  
    delete obj;            
    cout << "\n---- Dynamic Array of Class Objects ----\n";
    Test *objArr = new Test[3];   
    delete[] objArr;              
    return 0;
}
 ptr;
