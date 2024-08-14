#include <iostream>
using namespace std;

class MyClass
{
public:
    void display()
    {
        cout << "Hello from MyClass" << endl;
    }
};

int main()
{
    MyClass obj;         // Create an object of MyClass
    MyClass *ptr = &obj; // Pointer to the object

    ptr->display(); // Access the object's method using the pointer

    return 0;
}
