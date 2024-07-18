#include <iostream>
using namespace std;

int main()
{

    struct Employee
    {
        char name[30];
        int empid;
        float salary;
    };

    Employee emp;

    cout << "Name: ";
    cin >> emp.name;

    // getline(emp.name);

    cout << "Empid: ";
    cin >> emp.empid;
    cout << "Salary: ";
    cin >> emp.salary;

    cout << "Name: " << emp.name << endl;
    cout << "Empid: " << emp.empid << endl;
    cout << "Salary: " << emp.salary << endl;

    return 0;
}
