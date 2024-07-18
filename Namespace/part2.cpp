#include <iostream>

using namespace std;

int num1 = 10; // Global Variable

int main(void) {
    int num1 = 20; // Local variable
    cout << "Num1 (Global) : " << ::num1 << endl; // 10, accessing the global variable
    cout << "Num1 (Local) : " << num1 << endl; // 20, accessing the local variable

    { // Start of block
        int num1 = 30; // Local variable in the block scope
        cout << "Num1 (Global) : " << ::num1 << endl; // 10, accessing the global variable
        cout << "Num1 (Block Local) : " << num1 << endl; // 30, accessing the local variable in the block scope
    } // End of block

    return 0;
}
