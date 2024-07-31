#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Parameterless constructor
    Complex()
    {
        this->real = 0;
        this->imag = 0;
    }

    // Parameterized constructor
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    // Copy constructor
    Complex(Complex &other)
    {
        this->real = other.real; // Shallow copy
        this->imag = other.imag; // Shallow copy
    }

    void printRecord() const
    {
        cout << "Real Number : " << this->real << endl;
        cout << "Imaginary Number : " << this->imag << endl;
    }
};

int main()
{
    Complex c1(10, 20); // Calls parameterized constructor
    Complex c2;         // Calls parameterless constructor
    Complex c3 = c1;    // Calls copy constructor

    // Print records
    c1.printRecord();
    c2.printRecord();
    c3.printRecord();

    return 0;
}
