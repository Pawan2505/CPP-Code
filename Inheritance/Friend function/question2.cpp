#include <iostream>
using namespace std;

class A
{
private:
    int num1;

public:
    A(void)
    {
        this->num1 = 10;
    }
    friend void print();
};

class B
{
private:
    int num2;

public:
    B(void)
    {
        this->num2 = 20;
    }
    friend void print();
};

void print()
{
    A a;
    cout << "Num1 : " << a.num1 << endl;
    B b;
    cout << "Num2 : " << b.num2 << endl;
}

int main(void)
{
    print();
    return 0;
}