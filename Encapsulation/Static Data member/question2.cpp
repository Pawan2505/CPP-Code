
// if we want to declare data member static then we must provide global definition for it. Otherwisw
// linker will generate error.

#include <iostream>
using namespace std;
class A
{

private:
    static int count;

public:
    A()
    {
        // Increment static member count for each object created
        count++;
    }

    // Static member function to display count
   static void displayCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialization of static data member
int A::count = 0;

int main()
{
    A a1,a2,a3;
    // A::displayCount();

    A::displayCount();
    return 0;
}
