#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    long double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    Employee(int id, string name, int age, string role, double salary, string city, int experience, string company)
    {
        this->emp_id = id;
        this->emp_name = name;
        this->emp_age = age;
        this->emp_role = role;
        this->emp_salary = salary;
        this->emp_city = city;
        this->emp_experience = experience;
        this->emp_company_name = company;
    }

    void displayEmployeeInfo()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: ₹" << emp_salary << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Employee Company: " << emp_company_name << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main()
{

    Employee emp1(201, "Amit Sharma", 30, "Software Engineer", 800000, "Bangalore", 6, "TechSolutions");
    Employee emp2(202, "Priya Patel", 27, "Data Scientist", 700000, "Mumbai", 4, "DataVision");
    Employee emp3(203, "Ravi Kumar", 34, "Project Manager", 1000000, "Delhi", 10, "BuildMasters");
    Employee emp4(204, "Sneha Gupta", 31, "UX Designer", 750000, "Hyderabad", 5, "DesignX");
    Employee emp5(205, "Vikram Singh", 29, "Marketing Manager", 720000, "Chennai", 3, "MarketGen");

    emp1.displayEmployeeInfo();
    emp2.displayEmployeeInfo();
    emp3.displayEmployeeInfo();
    emp4.displayEmployeeInfo();
    emp5.displayEmployeeInfo();

    return 0;
}
