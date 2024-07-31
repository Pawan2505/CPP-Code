// #include <iostream>
// using namespace std;
// class Employee
// {
// public:
//     int a;
//     int b;

// };

// int main()
// {

//     Employee emp;
//     emp.a = 10;
//     emp.b = 20;

//     cout << emp.a << endl;
//     cout << emp.b << endl;
// }

// #include <iostream>

// using namespace std;

// class Person
// {
// public:
//     int value;

//     int printValue()
//     {
//         cout << "The value is : " << value;
//     }
// };

// int main()
// {

//     Person person1;

//     person1.value = 10;

//     person1.printValue();
// }

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void postDetails(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Smit : public Person
{

public:
    void personDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Smit p1;

    p1.postDetails("Smit", 18);
    p1.personDetails();

    return 0;
}