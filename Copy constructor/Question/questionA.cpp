#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float gpa;

public:
    // Default constructor
    Student() : name(""), rollNumber(0), gpa(0.0) {}

    // Parameterized constructor
    Student(const std::string& studentName, int studentRollNumber, float studentGpa)
        : name(studentName), rollNumber(studentRollNumber), gpa(studentGpa) {}

    // Copy constructor
    Student(const Student& other)
        : name(other.name), rollNumber(other.rollNumber), gpa(other.gpa) {}

    // Getter methods
    std::string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    float getGpa() const {
        return gpa;
    }
};

int main() {
    // Using default constructor
    Student student1;

    // Using parameterized constructor
    Student student2("John Doe", 123, 3.75);

    // Using copy constructor
    Student student3(student2);

    // Output details
    std::cout << "Student 1 - Name: " << student1.getName() << ", Roll Number: " << student1.getRollNumber() << ", GPA: " << student1.getGpa() << std::endl;
    std::cout << "Student 2 - Name: " << student2.getName() << ", Roll Number: " << student2.getRollNumber() << ", GPA: " << student2.getGpa() << std::endl;
    std::cout << "Student 3 (Copy of Student 2) - Name: " << student3.getName() << ", Roll Number: " << student3.getRollNumber() << ", GPA: " << student3.getGpa() << std::endl;

    return 0;
}
