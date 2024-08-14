#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Object created" << endl;
    }
    ~MyClass() {
        cout << "Object destroyed" << endl;
    }
};

int main() {
    MyClass* ptr = new MyClass(); // Allocate memory
    delete ptr;                   // Deallocate memory

    // Allocate an array of objects
    const int SIZE = 2;
    MyClass* objArray = new MyClass[SIZE];
    delete[] objArray;           // Deallocate memory for the array

    return 0;
}
