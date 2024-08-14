#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void show() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.B::show(); 
    obj.C::show();
    obj.show();  
    return 0;
}
