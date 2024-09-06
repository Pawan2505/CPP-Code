#include <iostream>
using namespace std;


inline int square(int x) {
    return x * x;
}

int main() {
    int number = 5;

 
    cout << "The square of " << number << " is: " << square(number) << endl;

   
    cout << "The square of 10 is: " << square(10) << endl;

    return 0;
}
