#include <iostream>

using namespace std;

class Test
{
private:
    int num1;
    static int num2;

public:
    Test(void) : num1(10)
    {
    }
    static void print(void)
    {
        Test t;
        cout << "Num1 : " << t.num1 << endl;
        cout << "Num2 : " << Test::num2 << endl;
    }
};
int Test::num2 = 20; // Global definition
int main()
{
    Test::print();
    return 0;
}