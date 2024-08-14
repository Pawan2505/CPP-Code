#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from MyClass" << endl;
    }
};

int main() {
    // Allocate a single object
    MyClass* ptr = new MyClass();
    ptr->display();  // Use the object

    // Deallocate memory
    delete ptr;

    // Allocate an array of objects
    const int SIZE = 3;
    MyClass* objArray = new MyClass[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        objArray[i].display();
    }

    // Deallocate memory
    delete[] objArray;

    return 0;
}
