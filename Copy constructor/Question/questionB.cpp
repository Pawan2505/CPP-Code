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

    // Member function to print student details
    void printStudentDetails() const {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << gpa << std::endl;
    }

    // Function to compare two students (by roll number)
    bool hasSameRollNumber(const Student& other) const {
        return rollNumber == other.rollNumber;
    }

    // Function to update GPA
    void updateGpa(float newGpa) {
        gpa = newGpa;
    }
};

int main() {
    // Using parameterized constructor
    Student student1("John Doe", 123, 3.75);
    Student student2("Jane Smith", 124, 3.85);

    // Print details of students
    student1.printStudentDetails();
    student2.printStudentDetails();

    // Compare two students by roll number
    if (student1.hasSameRollNumber(student2)) {
        std::cout << "Students have the same roll number." << std::endl;
    } else {
        std::cout << "Students have different roll numbers." << std::endl;
    }

    // Update GPA of student1
    student1.updateGpa(3.90);
    student1.printStudentDetails();

    return 0;
}
