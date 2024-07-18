#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    // Function to accept record details
    void acceptRecord()
    {
        cout << "Enter employee name: ";
        // cin >> name;
        getline(cin, name);
        
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to print record details
    void printRecord() const
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp; // Here class Employee is instantiated and name of the instance is emp.

    emp.acceptRecord(); // acceptRecord() function is called on object emp.

    emp.printRecord(); // printRecord() function is called on object emp.

    return 0;
}
