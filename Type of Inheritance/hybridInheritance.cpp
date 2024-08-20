// #include <iostream>
// using namespace std;

// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// public:
//     void showB() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A {
// public:
//     void showC() {
//         cout << "Class C" << endl;
//     }
// };

// class D : public B, public C {
// public:
//     void showD() {
//         cout << "Class D" << endl;
//     }
// };

// int main() {
//     D obj;
//     // obj.showA();  // Not OK
//     obj.showB();
//     obj.showC();
//     obj.showD();
//     return 0;
// }

// Solution: Virtual Inheritance
// To resolve this ambiguity, you can use virtual inheritance. This ensures that there is only one instance of the base class A in the inheritance hierarchy, thus eliminating ambiguity.

#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};

class B : virtual public A
{
public:
    void showB()
    {
        cout << "Class B" << endl;
    }
};

class C : virtual public A
{
public:
    void showC()
    {
        cout << "Class C" << endl;
    }
};

class D : public B, public C
{
public:
    void showD()
    {
        cout << "Class D" << endl;
    }
};

int main()
{
    D obj;
    obj.showA(); // Now this will work
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}
