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

    // Method to display the complex number
    void display()
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    // Creating a Complex object using the parameterized constructor
    Complex c1(23, 22);
    Complex c2;

    // Displaying the Complex number
    c1.display();

    c2.display();

    return 0;
}
