#include <iostream>
using namespace std;

int main(void)
{
    // Local structure
    struct Employee
    {
        char name[30];
        int empid;
        float salary;
    };

    Employee emp;
    Employee *ptr = &emp;

    // Using C++ standard input/output
    cout << "Name: ";
    cin >> ptr->name;
    cout << "Empid: ";
    cin >> ptr->empid;
    cout << "Salary: ";
    cin >> ptr->salary;

    cout << "Name: " << ptr->name << endl;
    cout << "Empid: " << ptr->empid << endl;
    cout << "Salary: " << ptr->salary << endl;

    return 0;
}
