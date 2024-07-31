#include <iostream>
using namespace std;

class MyClass {
private:
    int* data; // Pointer to dynamically allocated memory

public:
    // Constructor
    MyClass(int value) {
        data = new int; // Allocate memory
        *data = value;
        cout << "Constructor called. Value: " << *data << endl;
    }

    // Destructor
    ~MyClass() {
        delete data; // Free allocated memory
        cout << "Destructor called. Memory released." << endl;
    }
};

int main() {
    {
        cout << "Creating an object of MyClass." << endl;
        MyClass obj(10);
        // Destructor will be called automatically when the object goes out of scope
    }
    
    cout << "Object of MyClass is out of scope." << endl;
    
    return 0;
}
