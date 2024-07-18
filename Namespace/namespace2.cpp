#include <iostream>

int num1 = 30;

namespace na
{
    int num1 = 10;
}

namespace nb
{
    int num1 = 20;
}

int main(void)
{
    printf("Num1 in namespace na: %d\n", ::num1);
    printf("Num1 in namespace na: %d\n", na::num1); // Prints: Num1 in namespace na: 10
    printf("Num1 in namespace nb: %d\n", nb::num1); // Prints: Num1 in namespace nb: 20
    return 0;
}
