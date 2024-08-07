#include <iostream>

using namespace std;

class A
{
public:
    int num1;

public:
    A()
    {
        this->num1 = 10;
    }
};
class B : public A
{
public:
    int num1;

public:
    B(void)
    {
        this->num1 = 20;
    }
};
int main()
{
    B b;
    cout << "Num1 : " << b.num1 << endl; // 20
    return 0;
}



// In above code, derived class data member is hiding base class data member. It is also called as  shadowing