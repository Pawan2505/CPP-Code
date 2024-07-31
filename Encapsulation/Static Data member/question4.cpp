

// We can declare static data member constant.

#include <iostream>
using namespace std;
class Test
{
public:
    int num1;              // Instance variable
    int num2;              // Instance variable
    const static int num3; // Class level variable
public:
    Test(void)
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    Test(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    void printRecord(void)
    {
        cout << "Num1 : " << this->num1 << endl;
        cout << "Num2 : " << this->num2 << endl;
        cout << "Num3 : " << Test::num3 << endl;
    }
};
const int Test::num3 = 500; // Global definition
int main(void)
{
    Test t1;
    t1.printRecord();
    return 0;
}