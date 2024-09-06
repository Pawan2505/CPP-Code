#include <iostream>
using namespace std;
class SimpleClass {
private:
    int* data; 

public:
   
    SimpleClass(int value) {
        data = new int; // Allocate memory
        *data = value; // Set the value
    }

    // Deep copy constructor
    SimpleClass(SimpleClass& other) {
        data = new int; // Allocate new memory
        *data = *(other.data); // Copy the value from the existing object
    }

    
    ~SimpleClass(){
        delete data; // Free the allocated memory
    }

   
    void display(){
        cout << *data <<endl;
    }
};

int main() {
    SimpleClass original(10); 
    SimpleClass copy = original; // Use the deep copy constructor

    original.display(); 
    copy.display();   

    return 0;
}
