// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     int a;

// public:
//     A()
//     {
//         cout << "Class A Constructor";
//     }
//     A(int a)
//     {
//         this->a = a;
//         cout << "Class A Constructor" << a;
//     }
// };

// class B : public A
// {
// public:
//     int b;

// public:
//     B(int b)
//     {
//         A objA(10);
//         this->b = b;
//         cout << "Class B Constructor" << b;
//     }
// };

// int main()
// {

//     B obj(20);
// }

#include <iostream>
using namespace std;

class A
{
public:
    int a;

public:
    A()
    {
        cout << "Class A Constructor" << endl;
    }
    A(int a)
    {
        this->a = a;
        cout << "Class A Constructor paremeter" << a << endl;
    }
};

class B : public A
{
public:
    int b;

public:
    B(int b) : A(12)
    {

        this->b = b;
        cout << "Class B Constructor" << b;
    }
};

int main()
{
    // A obj1(10);
    B obj(20);
}