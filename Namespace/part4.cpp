#include <iostream>

using namespace std;

int num1 = 10; // Global variable

//int num1 = 20; // Error: redefinition of 'num1'

int main(void) {
    int num2 = 30; // Local variable in main
    //int num2 = 40; // Error: redefinition of 'num2'
    
    cout << "Global num1: " << num1 << endl;
    cout << "Local num2: " << num2 << endl;
    
    return 0;
}
