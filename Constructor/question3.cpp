#include <iostream>
using namespace std;

class Complex
{
public:
    int imag;
    int real;

    // Method to print the complex number
    void printRecord()
    {
        cout << "Real Number : " << real << endl;
        cout << "Imaginary Number : " << imag << endl;
    }
};

int main()
{
    // Aggregate initialization
    Complex c1{10, 20};

    // Display the complex number
    c1.printRecord();

    return 0;
}

// 20+35i
