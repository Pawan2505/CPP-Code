#include <iostream>

using namespace std;

void print_message()
{
    cout << "Good Evening!!" << endl;
}

int main(void)
{
    // print_message();   // OK
    
    ::print_message(); // OK, using the scope resolution operator
    return 0;
}
