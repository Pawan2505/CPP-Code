#include <iostream>
using namespace std;

class Employee {
private:
    char name[30];   // Data member
    int empid;       // Data member
    float salary;    // Data member

public:
    // Member function to accept employee details
    void accept_record() {
        cout << "Name : ";
        cin >> name;
        cout << "Empid : ";
        cin >> empid;
        cout << "Salary : ";
        cin >> salary;
    }

    // Member function to print employee details
    void print_record() {
        cout << "Name : " << name << endl;
        cout << "Empid : " << empid << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {
    Employee emp;

    // Accept employee details
    emp.accept_record();

    // Print employee details
    emp.print_record();

    return 0;
}
