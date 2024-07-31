#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;
    int num3;

public:
    Test()   // Default Constructor
    {
        this->num1 = 0;
        this->num2 = 0;
        this->num3 = 500;
    }
    Test(int num1, int num2)  // Parametrized
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = 500;
    }
    void printRecord()
    {
        cout << "Num1 : " <<num1 << endl;
        cout << "Num2 : " <<num2 << endl;
        cout << "Num3 : " <<num3 << endl;
        cout << "****************************" << endl;
    }
};
int main()
{
    Test t1;
    Test t2(30, 40);
    Test t3(50, 60);

    t1.printRecord();
    t2.printRecord();
    t3.printRecord();
    return 0;
}