#include <iostream>
using namespace std;
class Test
{
private:
    int num1;

protected:
    int num2;

public:
    Test()
    {
        this->num1 = 10;
        this->num2 = 20;
    }
    friend class B;
};
// void print()
// {
//     Test t;
//     cout << "Num1 : " << t.num1 << endl;
//     cout << "Num2 : " << t.num2 << endl;
// }
class B
{
public:
    void print()
    {
        Test t;
        cout << "Num1 : " << t.num1 << endl;
        cout << "Num2 : " << t.num2 << endl;
    }
};

int main(void)
{

    B t;
    t.print();
    // print();
    return 0;
}