#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from MyClass" << endl;
    }
};

int main() {
    const int SIZE = 3;
    MyClass* objArray[SIZE];  // Array of pointers to MyClass objects

    // Create objects and assign pointers
    for (int i = 0; i < SIZE; ++i) {
        objArray[i] = new MyClass();
    }

    // Use the objects
    for (int i = 0; i < SIZE; ++i) {
        objArray[i]->display();
    }

    // Clean up
    for (int i = 0; i < SIZE; ++i) {
        delete objArray[i];  // Free the allocated memory
    }

    return 0;
}
