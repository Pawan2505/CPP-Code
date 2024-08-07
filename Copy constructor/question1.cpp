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

        cout << "Parameterized constructor";
    }

    // Copy constructor
    Complex(Complex &other)
    {
        this->real = other.real; // Shallow copy
        this->imag = other.imag; // Shallow copy
        cout << "Copy Parameterized constructor";
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
    Complex c3 = c1;    // Calls copy constructor

    c3.printRecord();

    return 0;
}
