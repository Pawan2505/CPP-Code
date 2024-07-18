#include <iostream>
using namespace std;

struct Employee
{
    char name[30]; 
    int empid;     
    float salary; 
};

int main()
{
    typedef struct Employee Employee_t;
     Employee emp1;   // OK
    Employee_t emp2; // OK

    //input/output for emp1
    cout << "Enter details for emp1:" << endl;
    cout << "Name: ";
    cin >> emp1.name;
    cout << "Empid: ";
    cin >> emp1.empid;
    cout << "Salary: ";
    cin >> emp1.salary;

    // input/output for emp2
    cout << "\nEnter details for emp2:" << endl;
    cout << "Name: ";
    cin >> emp2.name;
    cout << "Empid: ";
    cin >> emp2.empid;
    cout << "Salary: ";
    cin >> emp2.salary;

    // Display details for emp1
    cout << "\nDetails of emp1:" << endl;
    cout << "Name: " << emp1.name << endl;
    cout << "Empid: " << emp1.empid << endl;
    cout << "Salary: " << emp1.salary << endl;

    // Display details for emp2
    cout << "\nDetails of emp2:" << endl;
    cout << "Name: " << emp2.name << endl;
    cout << "Empid: " << emp2.empid << endl;
    cout << "Salary: " << emp2.salary << endl;

    return 0;
}
