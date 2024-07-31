// #include <iostream>
// using namespace std;

// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     string getName()
//     {
//         return name;
//     }

//     void setName(string newName)
//     {
//         name = newName;
//     }

//     int getAge()
//     {
//         return age;
//     }

//     void setAge(int newAge)
//     {
//         if (newAge > 0)
//         {
//             age = newAge;
//         }
//         else
//         {
//             cout << "Invalid age!" << endl;
//         }
//     }
// };

// int main()
// {
//     Person person;
//     person.setName("Alice");
//     person.setAge(-30);

//     cout << "Name: " << person.getName() << endl;
//     cout << "Age: " << person.getAge() << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        this->name = name;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }
};    

int main()
{
    Employee emp, emp2;

    emp.setId(1);
    emp.setName("Smit");
    emp2.setId(2);
    emp2.setName("Jinesh");

    cout << "Id : " << emp.getId() << endl;
    cout << "Name : " << emp.getName() << endl;
    cout << "Id : " << emp2.getId() << endl;
    cout << "Name : " << emp2.getName() << endl;

    return 0;
}