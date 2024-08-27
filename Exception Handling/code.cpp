#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Value of A : ";
    cin >> a;

    cout << "Enter Value of B : ";
    cin >> b;

    try
    {

        if (b == 0)
        {
            throw "You can not give input b quale to zero";
        }

        c = a / b;
        printf("Value of C : = %d", c);
    }
    catch (const char *x)
    {
        cout << x << endl;
    }
}