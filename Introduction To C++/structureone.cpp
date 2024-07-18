#include <iostream>
using namespace std;

int main()
{
    // Local structure
    struct Employee
    {
        char name[30];
        int empid;
        float salary;
    };

    Employee emp;

    // Using C++ standard input/output
    cout << "Name: ";
    cin >> emp.name;
    cout << "Empid: ";
    cin >> emp.empid;
    cout << "Salary: ";
    cin >> emp.salary;

    cout << "Name: " << emp.name << endl;
    cout << "Empid: " << emp.empid << endl;
    cout << "Salary: " << emp.salary << endl;

    return 0;
}
