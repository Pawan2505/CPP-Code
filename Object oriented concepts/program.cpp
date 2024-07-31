#include <iostream>

using namespace std;

class Person
{

public:
    string name; // data mamber
    int age;

public:
    void details(string name, int age)
    { // constructor
        this->name = name;
        this->age = age;
    }

    void display()
    { // member function
        cout << name << endl;

        cout << age << endl;
    }
};

class Smit : public Person
{

public:
    void print()
    {
        cout << "Hello World";
    }
};

int main()
{

    Person p1, p2; // created object

    p1.details("Pawan", 24);

    p1.display();

    p2.details("Virjs", 17);

    p2.display();
}