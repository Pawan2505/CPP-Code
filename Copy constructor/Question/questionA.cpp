#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
    string name;
    int rollNumber;
    float gpa;

public:
   
    Student() : name(""), rollNumber(0), gpa(0.0) {}

   
    Student(string studentName, int studentRollNumber, float studentGpa)
        : name(studentName), rollNumber(studentRollNumber), gpa(studentGpa) {}

    // Copy constructor
    Student(Student &other)
        : name(other.name), rollNumber(other.rollNumber), gpa(other.gpa) {}

  
  
    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    float getGpa()
    {
        return gpa;
    }
};

int main()
{
   
    Student student1;

   
   
    Student student2("John Doe", 123, 3.75);

    // Using copy constructor
    Student student3(student2);

    
    
    cout << "Student 1 - Name: " << student1.getName() << ", Roll Number: " << student1.getRollNumber() << ", GPA: " << student1.getGpa() <<endl;
    cout << "Student 2 - Name: " << student2.getName() << ", Roll Number: " << student2.getRollNumber() << ", GPA: " << student2.getGpa() << endl;
    cout << "Student 3 (Copy of Student 2) - Name: " << student3.getName() << ", Roll Number: " << student3.getRollNumber() << ", GPA: " << student3.getGpa() <<endl;

    return 0;
}
