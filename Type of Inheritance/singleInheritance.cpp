#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

int main() {
    B obj;
    obj.showA(); 
    obj.showB();
    return 0;
}
