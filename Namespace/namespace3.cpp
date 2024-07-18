#include <iostream>

namespace na {
    int num1 = 10;
    int num3 = 45;
}

namespace na {
    int num2 = 20;
}

int main(void) {
    printf("Num1 : %d\n", na::num3); 
    printf("Num1 : %d\n", na::num1); // Prints: Num1 : 10
    printf("Num2 : %d\n", na::num2); // Prints: Num2 : 20
    return 0;
}
