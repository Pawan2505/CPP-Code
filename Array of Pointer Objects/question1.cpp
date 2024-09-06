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
    MyClass* objArray[SIZE]; 


    for (int i = 0; i < SIZE; ++i) {
        objArray[i] = new MyClass();
    }

 
    for (int i = 0; i < SIZE; ++i) {
        objArray[i]->display();
    }

  
    for (int i = 0; i < SIZE; ++i) {
        delete objArray[i];  // Free the allocated memory
    }

    return 0;
}
