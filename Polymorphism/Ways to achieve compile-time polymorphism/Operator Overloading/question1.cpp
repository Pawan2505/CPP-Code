#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    Complex(float r = 0, float i = 0)
    {
        this->real = r;
        this->imag = i;
    }

    // Overload the + operator
    Complex operator+(Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display()
    {
        cout << real<<" + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.0, 2.0), c2(1.0, 7.0);
    Complex c3 = c1 + c2; // Calls operator+()
    c3.display();
    return 0;
}
