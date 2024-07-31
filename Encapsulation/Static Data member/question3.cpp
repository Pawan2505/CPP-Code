// if we want to declare data member static then we must provide global definition for it. Otherwisw
// linker will generate error.

#include <iostream>
using namespace std;
class Test
{
public:
    int num1;        // Instance variable
    int num2;        // Instance variable
    static int num3; // Class level variable
public:
    Test()
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    Test(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
        
    }
    Test(int num1, int num2, int num3)
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }
    void printRecord(void)
    {
        cout << "Num1 : " << this->num1 << endl;
        cout << "Num2 : " << this->num2 << endl;
        cout << "Num3 : " << Test::num3 << endl;
    }
};
int Test::num3 = 500; // Global definition
int main(void)
{
    Test t1;
    t1.printRecord();
    // Test t1(9,7);
    Test t2(19, 77);

    t2.printRecord();
    return 0;
}