#include <iostream>
using namespace std;

class MyClass
{
public:
    void display()
    {
        cout << "Display with no arguments" << endl;
    }
    int display(int x)
    {
        cout << "Display with one integer: " << x << endl;
        // return x;
    }
    // void display(int x)
    // {
    //     cout << "Display with one integer: " << x << endl;
    // }
};

int main()
{
    MyClass obj;
    obj.display();
    obj.display(10);
    // obj.display(10.5);
    cout << obj.display(10) << endl;
    return 0;
}
