#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student students[3]; // Array of 3 Student objects
    students[0].name = "Alice";
    students[0].age = 20;
    students[1].name = "Bob";
    students[1].age = 22;
    students[2].name = "Charlie";
    students[2].age = 21;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Student " << i + 1 << ": " << students[i].name << ", " << students[i].age << " years old" << endl;
    }

    return 0;
}
