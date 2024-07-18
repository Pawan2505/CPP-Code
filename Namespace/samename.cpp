#include <iostream>

using namespace std;

int num1 = 10; // Global Variable

int main(void) {
    int num1 = 20; // Local variable
    // int num1 = 20; // error: redefinition of 'num1'
    printf("Local Num1 : %d\n", num1); // Outputs 20
    printf("Global Num1 : %d\n", ::num1); // Outputs 10 using the scope resolution operator to access the global variable
    return 0;
}
