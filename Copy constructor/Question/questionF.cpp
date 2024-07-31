#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    std::string name;
    int rollNumber;
    float gpa;

public:
    // Default constructor
    Student() : name(""), rollNumber(0), gpa(0.0) {}

    // Parameterized constructor
    Student(const std::string &studentName, int studentRollNumber, float studentGpa)
        : name(studentName), rollNumber(studentRollNumber), gpa(studentGpa) {}

    // Copy constructor
    Student(const Student &other)
        : name(other.name), rollNumber(other.rollNumber), gpa(other.gpa) {}

    // Getter methods
    std::string getName() const
    {
        return name;
    }

    int getRollNumber() const
    {
        return rollNumber;
    }

    float getGpa() const
    {
        return gpa;
    }

    // Member function to print student details
    void printStudentDetails() const
    {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << gpa << std::endl;
    }
};

class StudentRecordManager
{
private:
    std::vector<Student> students;

public:
    // Add a new student
    void addStudent(const Student &student)
    {
        students.push_back(student);
    }

    // Display all student details
    void displayAllStudents() const
    {
        if (students.empty())
        {
            std::cout << "No student records available." << std::endl;
            return;
        }

        std::cout << "Student Records:" << std::endl;
        for (const auto &student : students)
        {
            student.printStudentDetails();
        }
    }

    // Search for a student by roll number
    void searchStudentByRollNumber(int rollNumber) const
    {
        for (const auto &student : students)
        {
            if (student.getRollNumber() == rollNumber)
            {
                student.printStudentDetails();
                return;
            }
        }
        std::cout << "Student with roll number " << rollNumber << " not found." << std::endl;
    }
};

int main()
{
    StudentRecordManager manager;

    // Adding students
    manager.addStudent(Student("Aarav Patel", 101, 8.5));
    manager.addStudent(Student("Isha Sharma", 102, 9.0));
    manager.addStudent(Student("Vivaan Gupta", 103, 7.8));
    manager.addStudent(Student("Ananya Reddy", 104, 8.9));
    manager.addStudent(Student("Arjun Singh", 105, 8.2));

    // Display all students
    std::cout << "Displaying all students:\n";
    manager.displayAllStudents();

    // Search for a student by roll number
    int searchRollNumber = 102;
    std::cout << "\nSearching for student with roll number " << searchRollNumber << ":\n";
    manager.searchStudentByRollNumber(searchRollNumber);

    // Try searching for a non-existent student
    searchRollNumber = 999;
    std::cout << "\nSearching for student with roll number " << searchRollNumber << ":\n";
    manager.searchStudentByRollNumber(searchRollNumber);

    return 0;
}
