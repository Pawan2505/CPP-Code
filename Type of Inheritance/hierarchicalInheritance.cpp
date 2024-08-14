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

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

int main() {
    B objB;
    C objC;
    objB.showA(); 
    objB.showB();
    objC.showA(); 
    objC.showC(); 
    return 0;
}
