// #include <iostream>
// using namespace std;

// int main()
// {

//     int j = 0;
//     int arr[10];

//     for (int i = 2390; i <= 2400; i++)
//     {

//         if ((i % 4 == 0 && i % 100 != 0) || i%400 == 0)
//         {
//             arr[j] = i;
//             j++;
//         }
//     }

//     for (j = 0; j < 6; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }

// Write a Program to create an Employee Record System using the Class & Object of
// any 5 employees. Consider the below-mentioned attributes in the Employee class:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_salary
// - emp_city
// - emp_experience
// - emp_company_name

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
    int emp_salary;
    string emp_city;
    string emp_experience;
    string emp_company_name;

public:
    Employee(int id, string name, int age, string role, int salary, string city, string exprience, string company)
    {
        this->emp_id = id;
        this->emp_name = name;
        this->emp_age = age;
        this->emp_role = role;
        this->emp_salary = salary;
        this->emp_city = city;
        this->emp_experience = exprience;
        this->emp_company_name = company;
    }

    void display()
    {
        cout << "Emp ID : " << emp_id << endl;
        cout << "Name : " << emp_name << endl;
        cout << "Age : " << emp_age << endl;
        cout << "Role : " << emp_role << endl;
        cout << "Salary : " << emp_salary << endl;
        cout << "City : " << emp_city << endl;
        cout << "Ex  : " << emp_experience << endl;
        cout << "Comapany : " << emp_company_name << endl;
    }
};

int main()
{
    Employee emp1(1, "smit", 16, "Engineer", 8798552, "Ahemdabad", "2year", "Red and White");
    Employee emp2(2, "Jinesh", 166, "Engineer", 8798552, "Ahemdabad", "2year", "Red and White");
    emp1.display();
    emp2.display();
    return 0;
}