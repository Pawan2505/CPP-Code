#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add(5, 10) << endl;    // Calls add<int>(int, int)
    cout << add(2.5, 3.5) << endl; // Calls add<double>(double, double)
    return 0;
}
