#include <iostream>
using namespace std;

class Sample
{
public:
    // Constructor
    Sample()
    {
        cout << "Constructor called. Object created." << endl;
    }

    // Destructor
    ~Sample()
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main()
{
    cout << "Creating an object of Sample class." << endl;

    // Creating an object of Sample
    Sample obj;

    cout << "Object of Sample class is going out of scope." << endl;

    // Destructor will be called automatically here when the object goes out of scope

    return 0;
}
