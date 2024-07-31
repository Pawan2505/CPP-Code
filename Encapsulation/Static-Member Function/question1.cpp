#include <iostream>
using namespace std;
class Test
{
private:
    int num1;        // Non static data member / Instance variable
    int num2;        // Non static data member / Instance variable
    static int num3; // Static data member / Class level variable
public:
    Test(void)
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    void setNum1(int num1)
    {
        this->num1 = num1;
    }
    void setNum2(int num2)
    {
        this->num2 = num2;
    }
    static void setNum3(int num3)
    {
        Test::num3 = num3;
    }
    void printRecord(void)
    {
        cout << "Num1 : " << this->num1 << endl;
        cout << "Num2 : " << this->num2 << endl;
        cout << "Num3 : " << Test::num3 << endl;
    }
};
int Test::num3 = 0; // Global definition
int main(void)
{
    Test t1;
    t1.setNum1(10);
    t1.setNum2(20);
    Test::setNum3(30);
    t1.printRecord();
    return 0;
}


// int main1(void)
// {
//     Test t1;
//     // t1.num1 = 10; //error: 'num1' is a private member of 'Test'
//     // t1.num2 = 20; //error: 'num2' is a private member of 'Test'
//     // Test::num3 = 30;//error: 'num3' is a private member of 'Test'
//     t1.printRecord();
//     return 0;
// }