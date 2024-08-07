
#include <iostream>
using namespace std;

class Test
{
private:
    int num1;

public:
    Test(void)
    {
        this->num1 = 10;
    }
    void print(void)
    {
        int num1 = 20;

        cout << "Num1 : " << num1 << endl; // 20
    }
};
int main(void)
{
    Test t;
    t.print(); // 20
    return 0;
}



// In above code, local variable is hiding data member. It is also called as shadowing