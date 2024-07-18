#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // Function to accept record details
    void acceptRecord() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    // Function to print record details
    void printRecord() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main(void) {
    Employee emp; // Here class Employee is instantiated and name of the instance is emp.
    emp.Employee::acceptRecord(); // acceptRecord() function is called on object emp using scope resolution operator.
    emp.Employee::printRecord(); // printRecord() function is called on object emp using scope resolution operator.
    return 0;
}
