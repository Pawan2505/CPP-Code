#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Display with no arguments" << endl;
    }
    void display(int x) {
        cout << "Display with one integer: " << x << endl;
    }
};

int main() {
    MyClass obj;
    obj.display();     
    obj.display(10); 
    return 0;
}
