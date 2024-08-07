#include <iostream>
using namespace std;
class Base
{
protected:
    int baseValue;

public:
    // Base() : baseValue(10) {}
    Base()
    {
        this->baseValue = 10;
    }

    void displayBase()
    {
        cout << "Base class value: " << baseValue <<endl;
    }

    static void staticFunction()
    {
        cout << "Static function in Base class" <<endl;
    }
};

class Derived : public Base
{
public:
    void displayDerived()
    {
        cout << "Derived class accessing baseValue: " << Base::baseValue << endl;
    }

    // Overriding displayBase function
    void displayBase()
    {
        cout << "Overridden Base class value: " << Base::baseValue <<endl;
    }
};

int main()
{
   
    Base::staticFunction();

   
    Derived obj;

   
    obj.displayBase();    // Calls overridden function in Derived class
    obj.displayDerived(); // Accesses base class member using scope resolution operator


    return 0;
}
